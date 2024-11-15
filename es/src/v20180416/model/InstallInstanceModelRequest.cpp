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
    m_taskTypesHasBeenSet(false)
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


