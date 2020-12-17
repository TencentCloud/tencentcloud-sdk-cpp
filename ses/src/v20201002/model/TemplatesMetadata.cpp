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

#include <tencentcloud/ses/v20201002/model/TemplatesMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace rapidjson;
using namespace std;

TemplatesMetadata::TemplatesMetadata() :
    m_createdTimestampHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateStatusHasBeenSet(false),
    m_templateIDHasBeenSet(false)
{
}

CoreInternalOutcome TemplatesMetadata::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CreatedTimestamp") && !value["CreatedTimestamp"].IsNull())
    {
        if (!value["CreatedTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TemplatesMetadata.CreatedTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTimestamp = value["CreatedTimestamp"].GetUint64();
        m_createdTimestampHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TemplatesMetadata.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("TemplateStatus") && !value["TemplateStatus"].IsNull())
    {
        if (!value["TemplateStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TemplatesMetadata.TemplateStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateStatus = value["TemplateStatus"].GetInt64();
        m_templateStatusHasBeenSet = true;
    }

    if (value.HasMember("TemplateID") && !value["TemplateID"].IsNull())
    {
        if (!value["TemplateID"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TemplatesMetadata.TemplateID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_templateID = value["TemplateID"].GetUint64();
        m_templateIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplatesMetadata::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_createdTimestampHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTimestamp, allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_templateStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateStatus, allocator);
    }

    if (m_templateIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateID, allocator);
    }

}


uint64_t TemplatesMetadata::GetCreatedTimestamp() const
{
    return m_createdTimestamp;
}

void TemplatesMetadata::SetCreatedTimestamp(const uint64_t& _createdTimestamp)
{
    m_createdTimestamp = _createdTimestamp;
    m_createdTimestampHasBeenSet = true;
}

bool TemplatesMetadata::CreatedTimestampHasBeenSet() const
{
    return m_createdTimestampHasBeenSet;
}

string TemplatesMetadata::GetTemplateName() const
{
    return m_templateName;
}

void TemplatesMetadata::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool TemplatesMetadata::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

int64_t TemplatesMetadata::GetTemplateStatus() const
{
    return m_templateStatus;
}

void TemplatesMetadata::SetTemplateStatus(const int64_t& _templateStatus)
{
    m_templateStatus = _templateStatus;
    m_templateStatusHasBeenSet = true;
}

bool TemplatesMetadata::TemplateStatusHasBeenSet() const
{
    return m_templateStatusHasBeenSet;
}

uint64_t TemplatesMetadata::GetTemplateID() const
{
    return m_templateID;
}

void TemplatesMetadata::SetTemplateID(const uint64_t& _templateID)
{
    m_templateID = _templateID;
    m_templateIDHasBeenSet = true;
}

bool TemplatesMetadata::TemplateIDHasBeenSet() const
{
    return m_templateIDHasBeenSet;
}

