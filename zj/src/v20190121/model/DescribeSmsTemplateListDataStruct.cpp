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

#include <tencentcloud/zj/v20190121/model/DescribeSmsTemplateListDataStruct.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

DescribeSmsTemplateListDataStruct::DescribeSmsTemplateListDataStruct() :
    m_templateIdHasBeenSet(false),
    m_internationalHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_reviewReplyHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSmsTemplateListDataStruct::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DescribeSmsTemplateListDataStruct.TemplateId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetUint64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("International") && !value["International"].IsNull())
    {
        if (!value["International"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DescribeSmsTemplateListDataStruct.International` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_international = value["International"].GetUint64();
        m_internationalHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DescribeSmsTemplateListDataStruct.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("ReviewReply") && !value["ReviewReply"].IsNull())
    {
        if (!value["ReviewReply"].IsString())
        {
            return CoreInternalOutcome(Error("response `DescribeSmsTemplateListDataStruct.ReviewReply` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewReply = string(value["ReviewReply"].GetString());
        m_reviewReplyHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DescribeSmsTemplateListDataStruct.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DescribeSmsTemplateListDataStruct.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeSmsTemplateListDataStruct::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


uint64_t DescribeSmsTemplateListDataStruct::GetTemplateId() const
{
    return m_templateId;
}

void DescribeSmsTemplateListDataStruct::SetTemplateId(const uint64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool DescribeSmsTemplateListDataStruct::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

uint64_t DescribeSmsTemplateListDataStruct::GetInternational() const
{
    return m_international;
}

void DescribeSmsTemplateListDataStruct::SetInternational(const uint64_t& _international)
{
    m_international = _international;
    m_internationalHasBeenSet = true;
}

bool DescribeSmsTemplateListDataStruct::InternationalHasBeenSet() const
{
    return m_internationalHasBeenSet;
}

int64_t DescribeSmsTemplateListDataStruct::GetStatusCode() const
{
    return m_statusCode;
}

void DescribeSmsTemplateListDataStruct::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool DescribeSmsTemplateListDataStruct::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string DescribeSmsTemplateListDataStruct::GetReviewReply() const
{
    return m_reviewReply;
}

void DescribeSmsTemplateListDataStruct::SetReviewReply(const string& _reviewReply)
{
    m_reviewReply = _reviewReply;
    m_reviewReplyHasBeenSet = true;
}

bool DescribeSmsTemplateListDataStruct::ReviewReplyHasBeenSet() const
{
    return m_reviewReplyHasBeenSet;
}

string DescribeSmsTemplateListDataStruct::GetTemplateName() const
{
    return m_templateName;
}

void DescribeSmsTemplateListDataStruct::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool DescribeSmsTemplateListDataStruct::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

uint64_t DescribeSmsTemplateListDataStruct::GetCreateTime() const
{
    return m_createTime;
}

void DescribeSmsTemplateListDataStruct::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeSmsTemplateListDataStruct::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

