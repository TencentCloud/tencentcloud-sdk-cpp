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

#include <tencentcloud/cls/v20201016/model/DescribeIndexResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeIndexResponse::DescribeIndexResponse() :
    m_topicIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_includeInternalFieldsHasBeenSet(false),
    m_metadataFlagHasBeenSet(false)
{
}

CoreInternalOutcome DescribeIndexResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TopicId") && !rsp["TopicId"].IsNull())
    {
        if (!rsp["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(rsp["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Rule") && !rsp["Rule"].IsNull())
    {
        if (!rsp["Rule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Rule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rule.Deserialize(rsp["Rule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ruleHasBeenSet = true;
    }

    if (rsp.HasMember("ModifyTime") && !rsp["ModifyTime"].IsNull())
    {
        if (!rsp["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(rsp["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IncludeInternalFields") && !rsp["IncludeInternalFields"].IsNull())
    {
        if (!rsp["IncludeInternalFields"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IncludeInternalFields` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_includeInternalFields = rsp["IncludeInternalFields"].GetBool();
        m_includeInternalFieldsHasBeenSet = true;
    }

    if (rsp.HasMember("MetadataFlag") && !rsp["MetadataFlag"].IsNull())
    {
        if (!rsp["MetadataFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MetadataFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_metadataFlag = rsp["MetadataFlag"].GetUint64();
        m_metadataFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeIndexResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_includeInternalFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeInternalFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_includeInternalFields, allocator);
    }

    if (m_metadataFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetadataFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metadataFlag, allocator);
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


string DescribeIndexResponse::GetTopicId() const
{
    return m_topicId;
}

bool DescribeIndexResponse::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

bool DescribeIndexResponse::GetStatus() const
{
    return m_status;
}

bool DescribeIndexResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

RuleInfo DescribeIndexResponse::GetRule() const
{
    return m_rule;
}

bool DescribeIndexResponse::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string DescribeIndexResponse::GetModifyTime() const
{
    return m_modifyTime;
}

bool DescribeIndexResponse::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

bool DescribeIndexResponse::GetIncludeInternalFields() const
{
    return m_includeInternalFields;
}

bool DescribeIndexResponse::IncludeInternalFieldsHasBeenSet() const
{
    return m_includeInternalFieldsHasBeenSet;
}

uint64_t DescribeIndexResponse::GetMetadataFlag() const
{
    return m_metadataFlag;
}

bool DescribeIndexResponse::MetadataFlagHasBeenSet() const
{
    return m_metadataFlagHasBeenSet;
}


