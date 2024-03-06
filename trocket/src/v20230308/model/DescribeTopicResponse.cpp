/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/trocket/v20230308/model/DescribeTopicResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

DescribeTopicResponse::DescribeTopicResponse() :
    m_instanceIdHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_topicTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_subscriptionCountHasBeenSet(false),
    m_subscriptionDataHasBeenSet(false),
    m_msgTTLHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTopicResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("Topic") && !rsp["Topic"].IsNull())
    {
        if (!rsp["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(rsp["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (rsp.HasMember("TopicType") && !rsp["TopicType"].IsNull())
    {
        if (!rsp["TopicType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicType = string(rsp["TopicType"].GetString());
        m_topicTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = rsp["CreatedTime"].GetInt64();
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LastUpdateTime") && !rsp["LastUpdateTime"].IsNull())
    {
        if (!rsp["LastUpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LastUpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = rsp["LastUpdateTime"].GetInt64();
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SubscriptionCount") && !rsp["SubscriptionCount"].IsNull())
    {
        if (!rsp["SubscriptionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subscriptionCount = rsp["SubscriptionCount"].GetInt64();
        m_subscriptionCountHasBeenSet = true;
    }

    if (rsp.HasMember("SubscriptionData") && !rsp["SubscriptionData"].IsNull())
    {
        if (!rsp["SubscriptionData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubscriptionData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SubscriptionData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubscriptionData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subscriptionData.push_back(item);
        }
        m_subscriptionDataHasBeenSet = true;
    }

    if (rsp.HasMember("MsgTTL") && !rsp["MsgTTL"].IsNull())
    {
        if (!rsp["MsgTTL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgTTL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_msgTTL = rsp["MsgTTL"].GetInt64();
        m_msgTTLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTopicResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_topicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTime, allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastUpdateTime, allocator);
    }

    if (m_subscriptionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriptionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subscriptionCount, allocator);
    }

    if (m_subscriptionDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriptionData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subscriptionData.begin(); itr != m_subscriptionData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_msgTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgTTL, allocator);
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


string DescribeTopicResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeTopicResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeTopicResponse::GetTopic() const
{
    return m_topic;
}

bool DescribeTopicResponse::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string DescribeTopicResponse::GetTopicType() const
{
    return m_topicType;
}

bool DescribeTopicResponse::TopicTypeHasBeenSet() const
{
    return m_topicTypeHasBeenSet;
}

string DescribeTopicResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeTopicResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t DescribeTopicResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeTopicResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t DescribeTopicResponse::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

bool DescribeTopicResponse::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

int64_t DescribeTopicResponse::GetSubscriptionCount() const
{
    return m_subscriptionCount;
}

bool DescribeTopicResponse::SubscriptionCountHasBeenSet() const
{
    return m_subscriptionCountHasBeenSet;
}

vector<SubscriptionData> DescribeTopicResponse::GetSubscriptionData() const
{
    return m_subscriptionData;
}

bool DescribeTopicResponse::SubscriptionDataHasBeenSet() const
{
    return m_subscriptionDataHasBeenSet;
}

int64_t DescribeTopicResponse::GetMsgTTL() const
{
    return m_msgTTL;
}

bool DescribeTopicResponse::MsgTTLHasBeenSet() const
{
    return m_msgTTLHasBeenSet;
}


