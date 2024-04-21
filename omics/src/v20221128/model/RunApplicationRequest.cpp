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

#include <tencentcloud/omics/v20221128/model/RunApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

RunApplicationRequest::RunApplicationRequest() :
    m_applicationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inputCosUriHasBeenSet(false),
    m_inputBase64HasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableRowUuidsHasBeenSet(false),
    m_cacheClearDelayHasBeenSet(false),
    m_applicationVersionIdHasBeenSet(false),
    m_optionHasBeenSet(false),
    m_nFOptionHasBeenSet(false),
    m_workDirHasBeenSet(false),
    m_accessModeHasBeenSet(false),
    m_volumeIdsHasBeenSet(false)
{
}

string RunApplicationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_inputCosUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputCosUri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputCosUri.c_str(), allocator).Move(), allocator);
    }

    if (m_inputBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableRowUuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableRowUuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tableRowUuids.begin(); itr != m_tableRowUuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cacheClearDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheClearDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cacheClearDelay, allocator);
    }

    if (m_applicationVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_optionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Option";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_option.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_nFOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NFOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nFOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_workDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workDir.c_str(), allocator).Move(), allocator);
    }

    if (m_accessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessMode.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_volumeIds.begin(); itr != m_volumeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunApplicationRequest::GetApplicationId() const
{
    return m_applicationId;
}

void RunApplicationRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool RunApplicationRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string RunApplicationRequest::GetName() const
{
    return m_name;
}

void RunApplicationRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RunApplicationRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RunApplicationRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void RunApplicationRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool RunApplicationRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string RunApplicationRequest::GetProjectId() const
{
    return m_projectId;
}

void RunApplicationRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RunApplicationRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RunApplicationRequest::GetDescription() const
{
    return m_description;
}

void RunApplicationRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RunApplicationRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RunApplicationRequest::GetInputCosUri() const
{
    return m_inputCosUri;
}

void RunApplicationRequest::SetInputCosUri(const string& _inputCosUri)
{
    m_inputCosUri = _inputCosUri;
    m_inputCosUriHasBeenSet = true;
}

bool RunApplicationRequest::InputCosUriHasBeenSet() const
{
    return m_inputCosUriHasBeenSet;
}

string RunApplicationRequest::GetInputBase64() const
{
    return m_inputBase64;
}

void RunApplicationRequest::SetInputBase64(const string& _inputBase64)
{
    m_inputBase64 = _inputBase64;
    m_inputBase64HasBeenSet = true;
}

bool RunApplicationRequest::InputBase64HasBeenSet() const
{
    return m_inputBase64HasBeenSet;
}

string RunApplicationRequest::GetTableId() const
{
    return m_tableId;
}

void RunApplicationRequest::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool RunApplicationRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

vector<string> RunApplicationRequest::GetTableRowUuids() const
{
    return m_tableRowUuids;
}

void RunApplicationRequest::SetTableRowUuids(const vector<string>& _tableRowUuids)
{
    m_tableRowUuids = _tableRowUuids;
    m_tableRowUuidsHasBeenSet = true;
}

bool RunApplicationRequest::TableRowUuidsHasBeenSet() const
{
    return m_tableRowUuidsHasBeenSet;
}

uint64_t RunApplicationRequest::GetCacheClearDelay() const
{
    return m_cacheClearDelay;
}

void RunApplicationRequest::SetCacheClearDelay(const uint64_t& _cacheClearDelay)
{
    m_cacheClearDelay = _cacheClearDelay;
    m_cacheClearDelayHasBeenSet = true;
}

bool RunApplicationRequest::CacheClearDelayHasBeenSet() const
{
    return m_cacheClearDelayHasBeenSet;
}

string RunApplicationRequest::GetApplicationVersionId() const
{
    return m_applicationVersionId;
}

void RunApplicationRequest::SetApplicationVersionId(const string& _applicationVersionId)
{
    m_applicationVersionId = _applicationVersionId;
    m_applicationVersionIdHasBeenSet = true;
}

bool RunApplicationRequest::ApplicationVersionIdHasBeenSet() const
{
    return m_applicationVersionIdHasBeenSet;
}

RunOption RunApplicationRequest::GetOption() const
{
    return m_option;
}

void RunApplicationRequest::SetOption(const RunOption& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool RunApplicationRequest::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}

NFOption RunApplicationRequest::GetNFOption() const
{
    return m_nFOption;
}

void RunApplicationRequest::SetNFOption(const NFOption& _nFOption)
{
    m_nFOption = _nFOption;
    m_nFOptionHasBeenSet = true;
}

bool RunApplicationRequest::NFOptionHasBeenSet() const
{
    return m_nFOptionHasBeenSet;
}

string RunApplicationRequest::GetWorkDir() const
{
    return m_workDir;
}

void RunApplicationRequest::SetWorkDir(const string& _workDir)
{
    m_workDir = _workDir;
    m_workDirHasBeenSet = true;
}

bool RunApplicationRequest::WorkDirHasBeenSet() const
{
    return m_workDirHasBeenSet;
}

string RunApplicationRequest::GetAccessMode() const
{
    return m_accessMode;
}

void RunApplicationRequest::SetAccessMode(const string& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool RunApplicationRequest::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

vector<string> RunApplicationRequest::GetVolumeIds() const
{
    return m_volumeIds;
}

void RunApplicationRequest::SetVolumeIds(const vector<string>& _volumeIds)
{
    m_volumeIds = _volumeIds;
    m_volumeIdsHasBeenSet = true;
}

bool RunApplicationRequest::VolumeIdsHasBeenSet() const
{
    return m_volumeIdsHasBeenSet;
}


