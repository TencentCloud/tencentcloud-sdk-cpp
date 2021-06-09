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

#include <tencentcloud/live/v20180801/model/CreateLiveSnapshotTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateLiveSnapshotTemplateRequest::CreateLiveSnapshotTemplateRequest() :
    m_templateNameHasBeenSet(false),
    m_cosAppIdHasBeenSet(false),
    m_cosBucketHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_snapshotIntervalHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_pornFlagHasBeenSet(false),
    m_cosPrefixHasBeenSet(false),
    m_cosFileNameHasBeenSet(false)
{
}

string CreateLiveSnapshotTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
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


string CreateLiveSnapshotTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void CreateLiveSnapshotTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool CreateLiveSnapshotTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

int64_t CreateLiveSnapshotTemplateRequest::GetCosAppId() const
{
    return m_cosAppId;
}

void CreateLiveSnapshotTemplateRequest::SetCosAppId(const int64_t& _cosAppId)
{
    m_cosAppId = _cosAppId;
    m_cosAppIdHasBeenSet = true;
}

bool CreateLiveSnapshotTemplateRequest::CosAppIdHasBeenSet() const
{
    return m_cosAppIdHasBeenSet;
}

string CreateLiveSnapshotTemplateRequest::GetCosBucket() const
{
    return m_cosBucket;
}

void CreateLiveSnapshotTemplateRequest::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool CreateLiveSnapshotTemplateRequest::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string CreateLiveSnapshotTemplateRequest::GetCosRegion() const
{
    return m_cosRegion;
}

void CreateLiveSnapshotTemplateRequest::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool CreateLiveSnapshotTemplateRequest::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

string CreateLiveSnapshotTemplateRequest::GetDescription() const
{
    return m_description;
}

void CreateLiveSnapshotTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateLiveSnapshotTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateLiveSnapshotTemplateRequest::GetSnapshotInterval() const
{
    return m_snapshotInterval;
}

void CreateLiveSnapshotTemplateRequest::SetSnapshotInterval(const int64_t& _snapshotInterval)
{
    m_snapshotInterval = _snapshotInterval;
    m_snapshotIntervalHasBeenSet = true;
}

bool CreateLiveSnapshotTemplateRequest::SnapshotIntervalHasBeenSet() const
{
    return m_snapshotIntervalHasBeenSet;
}

int64_t CreateLiveSnapshotTemplateRequest::GetWidth() const
{
    return m_width;
}

void CreateLiveSnapshotTemplateRequest::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool CreateLiveSnapshotTemplateRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t CreateLiveSnapshotTemplateRequest::GetHeight() const
{
    return m_height;
}

void CreateLiveSnapshotTemplateRequest::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool CreateLiveSnapshotTemplateRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t CreateLiveSnapshotTemplateRequest::GetPornFlag() const
{
    return m_pornFlag;
}

void CreateLiveSnapshotTemplateRequest::SetPornFlag(const int64_t& _pornFlag)
{
    m_pornFlag = _pornFlag;
    m_pornFlagHasBeenSet = true;
}

bool CreateLiveSnapshotTemplateRequest::PornFlagHasBeenSet() const
{
    return m_pornFlagHasBeenSet;
}

string CreateLiveSnapshotTemplateRequest::GetCosPrefix() const
{
    return m_cosPrefix;
}

void CreateLiveSnapshotTemplateRequest::SetCosPrefix(const string& _cosPrefix)
{
    m_cosPrefix = _cosPrefix;
    m_cosPrefixHasBeenSet = true;
}

bool CreateLiveSnapshotTemplateRequest::CosPrefixHasBeenSet() const
{
    return m_cosPrefixHasBeenSet;
}

string CreateLiveSnapshotTemplateRequest::GetCosFileName() const
{
    return m_cosFileName;
}

void CreateLiveSnapshotTemplateRequest::SetCosFileName(const string& _cosFileName)
{
    m_cosFileName = _cosFileName;
    m_cosFileNameHasBeenSet = true;
}

bool CreateLiveSnapshotTemplateRequest::CosFileNameHasBeenSet() const
{
    return m_cosFileNameHasBeenSet;
}


