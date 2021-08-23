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

#include <tencentcloud/sms/v20210111/model/DescribeTemplateListStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

DescribeTemplateListStatus::DescribeTemplateListStatus() :
    m_templateIdHasBeenSet(false),
    m_internationalHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_reviewReplyHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_templateContentHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTemplateListStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTemplateListStatus.TemplateId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetUint64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("International") && !value["International"].IsNull())
    {
        if (!value["International"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTemplateListStatus.International` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_international = value["International"].GetUint64();
        m_internationalHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTemplateListStatus.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("ReviewReply") && !value["ReviewReply"].IsNull())
    {
        if (!value["ReviewReply"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTemplateListStatus.ReviewReply` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewReply = string(value["ReviewReply"].GetString());
        m_reviewReplyHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTemplateListStatus.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTemplateListStatus.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TemplateContent") && !value["TemplateContent"].IsNull())
    {
        if (!value["TemplateContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTemplateListStatus.TemplateContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateContent = string(value["TemplateContent"].GetString());
        m_templateContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeTemplateListStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_internationalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "International";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_international, allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_reviewReplyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewReply";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reviewReply.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_templateContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateContent.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DescribeTemplateListStatus::GetTemplateId() const
{
    return m_templateId;
}

void DescribeTemplateListStatus::SetTemplateId(const uint64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool DescribeTemplateListStatus::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

uint64_t DescribeTemplateListStatus::GetInternational() const
{
    return m_international;
}

void DescribeTemplateListStatus::SetInternational(const uint64_t& _international)
{
    m_international = _international;
    m_internationalHasBeenSet = true;
}

bool DescribeTemplateListStatus::InternationalHasBeenSet() const
{
    return m_internationalHasBeenSet;
}

int64_t DescribeTemplateListStatus::GetStatusCode() const
{
    return m_statusCode;
}

void DescribeTemplateListStatus::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool DescribeTemplateListStatus::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string DescribeTemplateListStatus::GetReviewReply() const
{
    return m_reviewReply;
}

void DescribeTemplateListStatus::SetReviewReply(const string& _reviewReply)
{
    m_reviewReply = _reviewReply;
    m_reviewReplyHasBeenSet = true;
}

bool DescribeTemplateListStatus::ReviewReplyHasBeenSet() const
{
    return m_reviewReplyHasBeenSet;
}

string DescribeTemplateListStatus::GetTemplateName() const
{
    return m_templateName;
}

void DescribeTemplateListStatus::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool DescribeTemplateListStatus::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

uint64_t DescribeTemplateListStatus::GetCreateTime() const
{
    return m_createTime;
}

void DescribeTemplateListStatus::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeTemplateListStatus::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeTemplateListStatus::GetTemplateContent() const
{
    return m_templateContent;
}

void DescribeTemplateListStatus::SetTemplateContent(const string& _templateContent)
{
    m_templateContent = _templateContent;
    m_templateContentHasBeenSet = true;
}

bool DescribeTemplateListStatus::TemplateContentHasBeenSet() const
{
    return m_templateContentHasBeenSet;
}

