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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeMessageForwardResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeMessageForwardResponse::DescribeMessageForwardResponse() :
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_intIdHasBeenSet(false),
    m_messageTypeHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMessageForwardResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RegionId") && !rsp["RegionId"].IsNull())
    {
        if (!rsp["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(rsp["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (rsp.HasMember("RegionName") && !rsp["RegionName"].IsNull())
    {
        if (!rsp["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(rsp["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (rsp.HasMember("Instance") && !rsp["Instance"].IsNull())
    {
        if (!rsp["Instance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instance = string(rsp["Instance"].GetString());
        m_instanceHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("IntId") && !rsp["IntId"].IsNull())
    {
        if (!rsp["IntId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intId = rsp["IntId"].GetInt64();
        m_intIdHasBeenSet = true;
    }

    if (rsp.HasMember("MessageType") && !rsp["MessageType"].IsNull())
    {
        if (!rsp["MessageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageType = string(rsp["MessageType"].GetString());
        m_messageTypeHasBeenSet = true;
    }

    if (rsp.HasMember("TopicId") && !rsp["TopicId"].IsNull())
    {
        if (!rsp["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(rsp["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
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

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMessageForwardResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instance.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_intIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intId, allocator);
    }

    if (m_messageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageType.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
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


string DescribeMessageForwardResponse::GetRegionId() const
{
    return m_regionId;
}

bool DescribeMessageForwardResponse::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string DescribeMessageForwardResponse::GetRegionName() const
{
    return m_regionName;
}

bool DescribeMessageForwardResponse::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string DescribeMessageForwardResponse::GetInstance() const
{
    return m_instance;
}

bool DescribeMessageForwardResponse::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

string DescribeMessageForwardResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeMessageForwardResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t DescribeMessageForwardResponse::GetIntId() const
{
    return m_intId;
}

bool DescribeMessageForwardResponse::IntIdHasBeenSet() const
{
    return m_intIdHasBeenSet;
}

string DescribeMessageForwardResponse::GetMessageType() const
{
    return m_messageType;
}

bool DescribeMessageForwardResponse::MessageTypeHasBeenSet() const
{
    return m_messageTypeHasBeenSet;
}

string DescribeMessageForwardResponse::GetTopicId() const
{
    return m_topicId;
}

bool DescribeMessageForwardResponse::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string DescribeMessageForwardResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeMessageForwardResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeMessageForwardResponse::GetUin() const
{
    return m_uin;
}

bool DescribeMessageForwardResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeMessageForwardResponse::GetTopicName() const
{
    return m_topicName;
}

bool DescribeMessageForwardResponse::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string DescribeMessageForwardResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeMessageForwardResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}


