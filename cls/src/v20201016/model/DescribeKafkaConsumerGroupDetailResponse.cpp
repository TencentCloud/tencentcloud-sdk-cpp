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

#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerGroupDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeKafkaConsumerGroupDetailResponse::DescribeKafkaConsumerGroupDetailResponse() :
    m_logsetIdHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_partitionInfosHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome DescribeKafkaConsumerGroupDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LogsetId") && !rsp["LogsetId"].IsNull())
    {
        if (!rsp["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(rsp["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (rsp.HasMember("Group") && !rsp["Group"].IsNull())
    {
        if (!rsp["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(rsp["Group"].GetString());
        m_groupHasBeenSet = true;
    }

    if (rsp.HasMember("PartitionInfos") && !rsp["PartitionInfos"].IsNull())
    {
        if (!rsp["PartitionInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PartitionInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PartitionInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupPartitionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitionInfos.push_back(item);
        }
        m_partitionInfosHasBeenSet = true;
    }

    if (rsp.HasMember("State") && !rsp["State"].IsNull())
    {
        if (!rsp["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(rsp["State"].GetString());
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeKafkaConsumerGroupDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitionInfos.begin(); itr != m_partitionInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
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


string DescribeKafkaConsumerGroupDetailResponse::GetLogsetId() const
{
    return m_logsetId;
}

bool DescribeKafkaConsumerGroupDetailResponse::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string DescribeKafkaConsumerGroupDetailResponse::GetGroup() const
{
    return m_group;
}

bool DescribeKafkaConsumerGroupDetailResponse::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

vector<GroupPartitionInfo> DescribeKafkaConsumerGroupDetailResponse::GetPartitionInfos() const
{
    return m_partitionInfos;
}

bool DescribeKafkaConsumerGroupDetailResponse::PartitionInfosHasBeenSet() const
{
    return m_partitionInfosHasBeenSet;
}

string DescribeKafkaConsumerGroupDetailResponse::GetState() const
{
    return m_state;
}

bool DescribeKafkaConsumerGroupDetailResponse::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}


