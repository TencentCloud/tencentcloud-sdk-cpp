/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/cls/v20201016/model/SendConsumerHeartbeatResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

SendConsumerHeartbeatResponse::SendConsumerHeartbeatResponse() :
    m_consumerGroupHasBeenSet(false),
    m_topicPartitionsInfoHasBeenSet(false)
{
}

CoreInternalOutcome SendConsumerHeartbeatResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ConsumerGroup") && !rsp["ConsumerGroup"].IsNull())
    {
        if (!rsp["ConsumerGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroup = string(rsp["ConsumerGroup"].GetString());
        m_consumerGroupHasBeenSet = true;
    }

    if (rsp.HasMember("TopicPartitionsInfo") && !rsp["TopicPartitionsInfo"].IsNull())
    {
        if (!rsp["TopicPartitionsInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicPartitionsInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TopicPartitionsInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopicPartitionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topicPartitionsInfo.push_back(item);
        }
        m_topicPartitionsInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string SendConsumerHeartbeatResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_consumerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_topicPartitionsInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicPartitionsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicPartitionsInfo.begin(); itr != m_topicPartitionsInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string SendConsumerHeartbeatResponse::GetConsumerGroup() const
{
    return m_consumerGroup;
}

bool SendConsumerHeartbeatResponse::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}

vector<TopicPartitionInfo> SendConsumerHeartbeatResponse::GetTopicPartitionsInfo() const
{
    return m_topicPartitionsInfo;
}

bool SendConsumerHeartbeatResponse::TopicPartitionsInfoHasBeenSet() const
{
    return m_topicPartitionsInfoHasBeenSet;
}


