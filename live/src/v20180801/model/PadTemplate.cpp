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

#include <tencentcloud/live/v20180801/model/PadTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

PadTemplate::PadTemplate() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_waitDurationHasBeenSet(false),
    m_maxDurationHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome PadTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PadTemplate.TemplateId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetUint64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PadTemplate.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PadTemplate.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PadTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PadTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PadTemplate.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("WaitDuration") && !value["WaitDuration"].IsNull())
    {
        if (!value["WaitDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PadTemplate.WaitDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waitDuration = value["WaitDuration"].GetUint64();
        m_waitDurationHasBeenSet = true;
    }

    if (value.HasMember("MaxDuration") && !value["MaxDuration"].IsNull())
    {
        if (!value["MaxDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PadTemplate.MaxDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDuration = value["MaxDuration"].GetUint64();
        m_maxDurationHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PadTemplate.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PadTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_waitDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waitDuration, allocator);
    }

    if (m_maxDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDuration, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


uint64_t PadTemplate::GetTemplateId() const
{
    return m_templateId;
}

void PadTemplate::SetTemplateId(const uint64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool PadTemplate::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string PadTemplate::GetTemplateName() const
{
    return m_templateName;
}

void PadTemplate::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool PadTemplate::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string PadTemplate::GetUrl() const
{
    return m_url;
}

void PadTemplate::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool PadTemplate::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string PadTemplate::GetCreateTime() const
{
    return m_createTime;
}

void PadTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PadTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PadTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void PadTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PadTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string PadTemplate::GetDescription() const
{
    return m_description;
}

void PadTemplate::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PadTemplate::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t PadTemplate::GetWaitDuration() const
{
    return m_waitDuration;
}

void PadTemplate::SetWaitDuration(const uint64_t& _waitDuration)
{
    m_waitDuration = _waitDuration;
    m_waitDurationHasBeenSet = true;
}

bool PadTemplate::WaitDurationHasBeenSet() const
{
    return m_waitDurationHasBeenSet;
}

uint64_t PadTemplate::GetMaxDuration() const
{
    return m_maxDuration;
}

void PadTemplate::SetMaxDuration(const uint64_t& _maxDuration)
{
    m_maxDuration = _maxDuration;
    m_maxDurationHasBeenSet = true;
}

bool PadTemplate::MaxDurationHasBeenSet() const
{
    return m_maxDurationHasBeenSet;
}

uint64_t PadTemplate::GetType() const
{
    return m_type;
}

void PadTemplate::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PadTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

