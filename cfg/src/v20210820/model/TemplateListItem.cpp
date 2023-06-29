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

#include <tencentcloud/cfg/v20210820/model/TemplateListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TemplateListItem::TemplateListItem() :
    m_templateIdHasBeenSet(false),
    m_templateTitleHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_templateTagHasBeenSet(false),
    m_templateIsUsedHasBeenSet(false),
    m_templateCreateTimeHasBeenSet(false),
    m_templateUpdateTimeHasBeenSet(false),
    m_templateUsedNumHasBeenSet(false),
    m_templateSourceHasBeenSet(false)
{
}

CoreInternalOutcome TemplateListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListItem.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateTitle") && !value["TemplateTitle"].IsNull())
    {
        if (!value["TemplateTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListItem.TemplateTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateTitle = string(value["TemplateTitle"].GetString());
        m_templateTitleHasBeenSet = true;
    }

    if (value.HasMember("TemplateDescription") && !value["TemplateDescription"].IsNull())
    {
        if (!value["TemplateDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListItem.TemplateDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateDescription = string(value["TemplateDescription"].GetString());
        m_templateDescriptionHasBeenSet = true;
    }

    if (value.HasMember("TemplateTag") && !value["TemplateTag"].IsNull())
    {
        if (!value["TemplateTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListItem.TemplateTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateTag = string(value["TemplateTag"].GetString());
        m_templateTagHasBeenSet = true;
    }

    if (value.HasMember("TemplateIsUsed") && !value["TemplateIsUsed"].IsNull())
    {
        if (!value["TemplateIsUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListItem.TemplateIsUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateIsUsed = value["TemplateIsUsed"].GetInt64();
        m_templateIsUsedHasBeenSet = true;
    }

    if (value.HasMember("TemplateCreateTime") && !value["TemplateCreateTime"].IsNull())
    {
        if (!value["TemplateCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListItem.TemplateCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateCreateTime = string(value["TemplateCreateTime"].GetString());
        m_templateCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("TemplateUpdateTime") && !value["TemplateUpdateTime"].IsNull())
    {
        if (!value["TemplateUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListItem.TemplateUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateUpdateTime = string(value["TemplateUpdateTime"].GetString());
        m_templateUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("TemplateUsedNum") && !value["TemplateUsedNum"].IsNull())
    {
        if (!value["TemplateUsedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListItem.TemplateUsedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateUsedNum = value["TemplateUsedNum"].GetInt64();
        m_templateUsedNumHasBeenSet = true;
    }

    if (value.HasMember("TemplateSource") && !value["TemplateSource"].IsNull())
    {
        if (!value["TemplateSource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListItem.TemplateSource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateSource = value["TemplateSource"].GetInt64();
        m_templateSourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_templateTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_templateDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_templateTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateTag.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIsUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateIsUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateIsUsed, allocator);
    }

    if (m_templateCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_templateUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_templateUsedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateUsedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateUsedNum, allocator);
    }

    if (m_templateSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateSource, allocator);
    }

}


int64_t TemplateListItem::GetTemplateId() const
{
    return m_templateId;
}

void TemplateListItem::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool TemplateListItem::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string TemplateListItem::GetTemplateTitle() const
{
    return m_templateTitle;
}

void TemplateListItem::SetTemplateTitle(const string& _templateTitle)
{
    m_templateTitle = _templateTitle;
    m_templateTitleHasBeenSet = true;
}

bool TemplateListItem::TemplateTitleHasBeenSet() const
{
    return m_templateTitleHasBeenSet;
}

string TemplateListItem::GetTemplateDescription() const
{
    return m_templateDescription;
}

void TemplateListItem::SetTemplateDescription(const string& _templateDescription)
{
    m_templateDescription = _templateDescription;
    m_templateDescriptionHasBeenSet = true;
}

bool TemplateListItem::TemplateDescriptionHasBeenSet() const
{
    return m_templateDescriptionHasBeenSet;
}

string TemplateListItem::GetTemplateTag() const
{
    return m_templateTag;
}

void TemplateListItem::SetTemplateTag(const string& _templateTag)
{
    m_templateTag = _templateTag;
    m_templateTagHasBeenSet = true;
}

bool TemplateListItem::TemplateTagHasBeenSet() const
{
    return m_templateTagHasBeenSet;
}

int64_t TemplateListItem::GetTemplateIsUsed() const
{
    return m_templateIsUsed;
}

void TemplateListItem::SetTemplateIsUsed(const int64_t& _templateIsUsed)
{
    m_templateIsUsed = _templateIsUsed;
    m_templateIsUsedHasBeenSet = true;
}

bool TemplateListItem::TemplateIsUsedHasBeenSet() const
{
    return m_templateIsUsedHasBeenSet;
}

string TemplateListItem::GetTemplateCreateTime() const
{
    return m_templateCreateTime;
}

void TemplateListItem::SetTemplateCreateTime(const string& _templateCreateTime)
{
    m_templateCreateTime = _templateCreateTime;
    m_templateCreateTimeHasBeenSet = true;
}

bool TemplateListItem::TemplateCreateTimeHasBeenSet() const
{
    return m_templateCreateTimeHasBeenSet;
}

string TemplateListItem::GetTemplateUpdateTime() const
{
    return m_templateUpdateTime;
}

void TemplateListItem::SetTemplateUpdateTime(const string& _templateUpdateTime)
{
    m_templateUpdateTime = _templateUpdateTime;
    m_templateUpdateTimeHasBeenSet = true;
}

bool TemplateListItem::TemplateUpdateTimeHasBeenSet() const
{
    return m_templateUpdateTimeHasBeenSet;
}

int64_t TemplateListItem::GetTemplateUsedNum() const
{
    return m_templateUsedNum;
}

void TemplateListItem::SetTemplateUsedNum(const int64_t& _templateUsedNum)
{
    m_templateUsedNum = _templateUsedNum;
    m_templateUsedNumHasBeenSet = true;
}

bool TemplateListItem::TemplateUsedNumHasBeenSet() const
{
    return m_templateUsedNumHasBeenSet;
}

int64_t TemplateListItem::GetTemplateSource() const
{
    return m_templateSource;
}

void TemplateListItem::SetTemplateSource(const int64_t& _templateSource)
{
    m_templateSource = _templateSource;
    m_templateSourceHasBeenSet = true;
}

bool TemplateListItem::TemplateSourceHasBeenSet() const
{
    return m_templateSourceHasBeenSet;
}

