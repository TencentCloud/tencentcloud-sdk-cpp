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

#include <tencentcloud/tdmq/v20200217/model/CreateTopicResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateTopicResponse::CreateTopicResponse() :
    m_environmentIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_topicTypeHasBeenSet(false)
{
}

CoreInternalOutcome CreateTopicResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EnvironmentId") && !rsp["EnvironmentId"].IsNull())
    {
        if (!rsp["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(rsp["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (rsp.HasMember("TopicName") && !rsp["TopicName"].IsNull())
    {
        if (!rsp["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(rsp["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (rsp.HasMember("Partitions") && !rsp["Partitions"].IsNull())
    {
        if (!rsp["Partitions"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Partitions` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partitions = rsp["Partitions"].GetUint64();
        m_partitionsHasBeenSet = true;
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

    if (rsp.HasMember("TopicType") && !rsp["TopicType"].IsNull())
    {
        if (!rsp["TopicType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_topicType = rsp["TopicType"].GetUint64();
        m_topicTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateTopicResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitions, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_topicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicType, allocator);
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


string CreateTopicResponse::GetEnvironmentId() const
{
    return m_environmentId;
}

bool CreateTopicResponse::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string CreateTopicResponse::GetTopicName() const
{
    return m_topicName;
}

bool CreateTopicResponse::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

uint64_t CreateTopicResponse::GetPartitions() const
{
    return m_partitions;
}

bool CreateTopicResponse::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string CreateTopicResponse::GetRemark() const
{
    return m_remark;
}

bool CreateTopicResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t CreateTopicResponse::GetTopicType() const
{
    return m_topicType;
}

bool CreateTopicResponse::TopicTypeHasBeenSet() const
{
    return m_topicTypeHasBeenSet;
}


