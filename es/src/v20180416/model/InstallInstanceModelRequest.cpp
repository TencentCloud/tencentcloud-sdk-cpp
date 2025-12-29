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

#include <tencentcloud/es/v20180416/model/InstallInstanceModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

InstallInstanceModelRequest::InstallInstanceModelRequest() :
    m_instanceIdHasBeenSet(false),
    m_usrCosModelUrlListHasBeenSet(false),
    m_modelNamesHasBeenSet(false),
    m_taskTypesHasBeenSet(false),
    m_huggingFaceModelNamesHasBeenSet(false),
    m_modelDescriptionHasBeenSet(false),
    m_modelSourceTypeHasBeenSet(false),
    m_uploadedCosPathsHasBeenSet(false)
{
}

string InstallInstanceModelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_usrCosModelUrlListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsrCosModelUrlList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_usrCosModelUrlList.begin(); itr != m_usrCosModelUrlList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modelNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modelNames.begin(); itr != m_modelNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskTypes.begin(); itr != m_taskTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_huggingFaceModelNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HuggingFaceModelNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_huggingFaceModelNames.begin(); itr != m_huggingFaceModelNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modelDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_modelSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadedCosPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadedCosPaths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uploadedCosPaths.begin(); itr != m_uploadedCosPaths.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InstallInstanceModelRequest::GetInstanceId() const
{
    return m_instanceId;
}

void InstallInstanceModelRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstallInstanceModelRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> InstallInstanceModelRequest::GetUsrCosModelUrlList() const
{
    return m_usrCosModelUrlList;
}

void InstallInstanceModelRequest::SetUsrCosModelUrlList(const vector<string>& _usrCosModelUrlList)
{
    m_usrCosModelUrlList = _usrCosModelUrlList;
    m_usrCosModelUrlListHasBeenSet = true;
}

bool InstallInstanceModelRequest::UsrCosModelUrlListHasBeenSet() const
{
    return m_usrCosModelUrlListHasBeenSet;
}

vector<string> InstallInstanceModelRequest::GetModelNames() const
{
    return m_modelNames;
}

void InstallInstanceModelRequest::SetModelNames(const vector<string>& _modelNames)
{
    m_modelNames = _modelNames;
    m_modelNamesHasBeenSet = true;
}

bool InstallInstanceModelRequest::ModelNamesHasBeenSet() const
{
    return m_modelNamesHasBeenSet;
}

vector<string> InstallInstanceModelRequest::GetTaskTypes() const
{
    return m_taskTypes;
}

void InstallInstanceModelRequest::SetTaskTypes(const vector<string>& _taskTypes)
{
    m_taskTypes = _taskTypes;
    m_taskTypesHasBeenSet = true;
}

bool InstallInstanceModelRequest::TaskTypesHasBeenSet() const
{
    return m_taskTypesHasBeenSet;
}

vector<string> InstallInstanceModelRequest::GetHuggingFaceModelNames() const
{
    return m_huggingFaceModelNames;
}

void InstallInstanceModelRequest::SetHuggingFaceModelNames(const vector<string>& _huggingFaceModelNames)
{
    m_huggingFaceModelNames = _huggingFaceModelNames;
    m_huggingFaceModelNamesHasBeenSet = true;
}

bool InstallInstanceModelRequest::HuggingFaceModelNamesHasBeenSet() const
{
    return m_huggingFaceModelNamesHasBeenSet;
}

string InstallInstanceModelRequest::GetModelDescription() const
{
    return m_modelDescription;
}

void InstallInstanceModelRequest::SetModelDescription(const string& _modelDescription)
{
    m_modelDescription = _modelDescription;
    m_modelDescriptionHasBeenSet = true;
}

bool InstallInstanceModelRequest::ModelDescriptionHasBeenSet() const
{
    return m_modelDescriptionHasBeenSet;
}

string InstallInstanceModelRequest::GetModelSourceType() const
{
    return m_modelSourceType;
}

void InstallInstanceModelRequest::SetModelSourceType(const string& _modelSourceType)
{
    m_modelSourceType = _modelSourceType;
    m_modelSourceTypeHasBeenSet = true;
}

bool InstallInstanceModelRequest::ModelSourceTypeHasBeenSet() const
{
    return m_modelSourceTypeHasBeenSet;
}

vector<string> InstallInstanceModelRequest::GetUploadedCosPaths() const
{
    return m_uploadedCosPaths;
}

void InstallInstanceModelRequest::SetUploadedCosPaths(const vector<string>& _uploadedCosPaths)
{
    m_uploadedCosPaths = _uploadedCosPaths;
    m_uploadedCosPathsHasBeenSet = true;
}

bool InstallInstanceModelRequest::UploadedCosPathsHasBeenSet() const
{
    return m_uploadedCosPathsHasBeenSet;
}


