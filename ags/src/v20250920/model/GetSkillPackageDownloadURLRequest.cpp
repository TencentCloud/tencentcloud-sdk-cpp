/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ags/v20250920/model/GetSkillPackageDownloadURLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

GetSkillPackageDownloadURLRequest::GetSkillPackageDownloadURLRequest() :
    m_registryIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_labelHasBeenSet(false)
{
}

string GetSkillPackageDownloadURLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetSkillPackageDownloadURLRequest::GetRegistryId() const
{
    return m_registryId;
}

void GetSkillPackageDownloadURLRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool GetSkillPackageDownloadURLRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string GetSkillPackageDownloadURLRequest::GetRecordId() const
{
    return m_recordId;
}

void GetSkillPackageDownloadURLRequest::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool GetSkillPackageDownloadURLRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string GetSkillPackageDownloadURLRequest::GetVersionId() const
{
    return m_versionId;
}

void GetSkillPackageDownloadURLRequest::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool GetSkillPackageDownloadURLRequest::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string GetSkillPackageDownloadURLRequest::GetLabel() const
{
    return m_label;
}

void GetSkillPackageDownloadURLRequest::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool GetSkillPackageDownloadURLRequest::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}


