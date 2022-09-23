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

#include <tencentcloud/live/v20180801/model/ModifyLiveSnapshotTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyLiveSnapshotTemplateRequest::ModifyLiveSnapshotTemplateRequest() :
    m_templateIdHasBeenSet(false),
    m_cosAppIdHasBeenSet(false),
    m_cosBucketHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_snapshotIntervalHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_pornFlagHasBeenSet(false),
    m_cosPrefixHasBeenSet(false),
    m_cosFileNameHasBeenSet(false)
{
}

string ModifyLiveSnapshotTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_cosAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cosAppId, allocator);
    }

    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_cosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_snapshotInterval, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_height, allocator);
    }

    if (m_pornFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PornFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pornFlag, allocator);
    }

    if (m_cosPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_cosFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosFileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosFileName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyLiveSnapshotTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void ModifyLiveSnapshotTemplateRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ModifyLiveSnapshotTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t ModifyLiveSnapshotTemplateRequest::GetCosAppId() const
{
    return m_cosAppId;
}

void ModifyLiveSnapshotTemplateRequest::SetCosAppId(const int64_t& _cosAppId)
{
    m_cosAppId = _cosAppId;
    m_cosAppIdHasBeenSet = true;
}

bool ModifyLiveSnapshotTemplateRequest::CosAppIdHasBeenSet() const
{
    return m_cosAppIdHasBeenSet;
}

string ModifyLiveSnapshotTemplateRequest::GetCosBucket() const
{
    return m_cosBucket;
}

void ModifyLiveSnapshotTemplateRequest::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool ModifyLiveSnapshotTemplateRequest::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string ModifyLiveSnapshotTemplateRequest::GetCosRegion() const
{
    return m_cosRegion;
}

void ModifyLiveSnapshotTemplateRequest::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool ModifyLiveSnapshotTemplateRequest::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

string ModifyLiveSnapshotTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void ModifyLiveSnapshotTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool ModifyLiveSnapshotTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string ModifyLiveSnapshotTemplateRequest::GetDescription() const
{
    return m_description;
}

void ModifyLiveSnapshotTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyLiveSnapshotTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ModifyLiveSnapshotTemplateRequest::GetSnapshotInterval() const
{
    return m_snapshotInterval;
}

void ModifyLiveSnapshotTemplateRequest::SetSnapshotInterval(const int64_t& _snapshotInterval)
{
    m_snapshotInterval = _snapshotInterval;
    m_snapshotIntervalHasBeenSet = true;
}

bool ModifyLiveSnapshotTemplateRequest::SnapshotIntervalHasBeenSet() const
{
    return m_snapshotIntervalHasBeenSet;
}

int64_t ModifyLiveSnapshotTemplateRequest::GetWidth() const
{
    return m_width;
}

void ModifyLiveSnapshotTemplateRequest::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ModifyLiveSnapshotTemplateRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t ModifyLiveSnapshotTemplateRequest::GetHeight() const
{
    return m_height;
}

void ModifyLiveSnapshotTemplateRequest::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ModifyLiveSnapshotTemplateRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t ModifyLiveSnapshotTemplateRequest::GetPornFlag() const
{
    return m_pornFlag;
}

void ModifyLiveSnapshotTemplateRequest::SetPornFlag(const int64_t& _pornFlag)
{
    m_pornFlag = _pornFlag;
    m_pornFlagHasBeenSet = true;
}

bool ModifyLiveSnapshotTemplateRequest::PornFlagHasBeenSet() const
{
    return m_pornFlagHasBeenSet;
}

string ModifyLiveSnapshotTemplateRequest::GetCosPrefix() const
{
    return m_cosPrefix;
}

void ModifyLiveSnapshotTemplateRequest::SetCosPrefix(const string& _cosPrefix)
{
    m_cosPrefix = _cosPrefix;
    m_cosPrefixHasBeenSet = true;
}

bool ModifyLiveSnapshotTemplateRequest::CosPrefixHasBeenSet() const
{
    return m_cosPrefixHasBeenSet;
}

string ModifyLiveSnapshotTemplateRequest::GetCosFileName() const
{
    return m_cosFileName;
}

void ModifyLiveSnapshotTemplateRequest::SetCosFileName(const string& _cosFileName)
{
    m_cosFileName = _cosFileName;
    m_cosFileNameHasBeenSet = true;
}

bool ModifyLiveSnapshotTemplateRequest::CosFileNameHasBeenSet() const
{
    return m_cosFileNameHasBeenSet;
}


