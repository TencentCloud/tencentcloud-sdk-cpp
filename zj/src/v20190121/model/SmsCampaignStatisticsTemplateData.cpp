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

#include <tencentcloud/zj/v20190121/model/SmsCampaignStatisticsTemplateData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

SmsCampaignStatisticsTemplateData::SmsCampaignStatisticsTemplateData() :
    m_templateIdHasBeenSet(false),
    m_templateContentHasBeenSet(false),
    m_sendCountHasBeenSet(false),
    m_clickCountHasBeenSet(false)
{
}

CoreInternalOutcome SmsCampaignStatisticsTemplateData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SmsCampaignStatisticsTemplateData.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateContent") && !value["TemplateContent"].IsNull())
    {
        if (!value["TemplateContent"].IsString())
        {
            return CoreInternalOutcome(Error("response `SmsCampaignStatisticsTemplateData.TemplateContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateContent = string(value["TemplateContent"].GetString());
        m_templateContentHasBeenSet = true;
    }

    if (value.HasMember("SendCount") && !value["SendCount"].IsNull())
    {
        if (!value["SendCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsCampaignStatisticsTemplateData.SendCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sendCount = value["SendCount"].GetUint64();
        m_sendCountHasBeenSet = true;
    }

    if (value.HasMember("ClickCount") && !value["ClickCount"].IsNull())
    {
        if (!value["ClickCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsCampaignStatisticsTemplateData.ClickCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clickCount = value["ClickCount"].GetUint64();
        m_clickCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmsCampaignStatisticsTemplateData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_templateContent.c_str(), allocator).Move(), allocator);
    }

    if (m_sendCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SendCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendCount, allocator);
    }

    if (m_clickCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClickCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clickCount, allocator);
    }

}


string SmsCampaignStatisticsTemplateData::GetTemplateId() const
{
    return m_templateId;
}

void SmsCampaignStatisticsTemplateData::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool SmsCampaignStatisticsTemplateData::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string SmsCampaignStatisticsTemplateData::GetTemplateContent() const
{
    return m_templateContent;
}

void SmsCampaignStatisticsTemplateData::SetTemplateContent(const string& _templateContent)
{
    m_templateContent = _templateContent;
    m_templateContentHasBeenSet = true;
}

bool SmsCampaignStatisticsTemplateData::TemplateContentHasBeenSet() const
{
    return m_templateContentHasBeenSet;
}

uint64_t SmsCampaignStatisticsTemplateData::GetSendCount() const
{
    return m_sendCount;
}

void SmsCampaignStatisticsTemplateData::SetSendCount(const uint64_t& _sendCount)
{
    m_sendCount = _sendCount;
    m_sendCountHasBeenSet = true;
}

bool SmsCampaignStatisticsTemplateData::SendCountHasBeenSet() const
{
    return m_sendCountHasBeenSet;
}

uint64_t SmsCampaignStatisticsTemplateData::GetClickCount() const
{
    return m_clickCount;
}

void SmsCampaignStatisticsTemplateData::SetClickCount(const uint64_t& _clickCount)
{
    m_clickCount = _clickCount;
    m_clickCountHasBeenSet = true;
}

bool SmsCampaignStatisticsTemplateData::ClickCountHasBeenSet() const
{
    return m_clickCountHasBeenSet;
}

