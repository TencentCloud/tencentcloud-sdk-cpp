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

#include <tencentcloud/teo/v20220901/model/InferenceService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceService::InferenceService() :
    m_serviceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_listenPortHasBeenSet(false),
    m_requestPathsHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_scalingStatusHasBeenSet(false),
    m_currentInstanceCountHasBeenSet(false),
    m_inferenceURLHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome InferenceService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceService.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceService.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceService.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ListenPort") && !value["ListenPort"].IsNull())
    {
        if (!value["ListenPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceService.ListenPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_listenPort = value["ListenPort"].GetInt64();
        m_listenPortHasBeenSet = true;
    }

    if (value.HasMember("RequestPaths") && !value["RequestPaths"].IsNull())
    {
        if (!value["RequestPaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceService.RequestPaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestPaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_requestPaths.push_back((*itr).GetString());
        }
        m_requestPathsHasBeenSet = true;
    }

    if (value.HasMember("Containers") && !value["Containers"].IsNull())
    {
        if (!value["Containers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceService.Containers` is not array type"));

        const rapidjson::Value &tmpValue = value["Containers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InferenceContainerConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_containers.push_back(item);
        }
        m_containersHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfig") && !value["ResourceConfig"].IsNull())
    {
        if (!value["ResourceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceService.ResourceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceConfig.Deserialize(value["ResourceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceConfigHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceService.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ScalingStatus") && !value["ScalingStatus"].IsNull())
    {
        if (!value["ScalingStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceService.ScalingStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scalingStatus = string(value["ScalingStatus"].GetString());
        m_scalingStatusHasBeenSet = true;
    }

    if (value.HasMember("CurrentInstanceCount") && !value["CurrentInstanceCount"].IsNull())
    {
        if (!value["CurrentInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceService.CurrentInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentInstanceCount = value["CurrentInstanceCount"].GetInt64();
        m_currentInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("InferenceURL") && !value["InferenceURL"].IsNull())
    {
        if (!value["InferenceURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceService.InferenceURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inferenceURL = string(value["InferenceURL"].GetString());
        m_inferenceURLHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceService.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceService.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_listenPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listenPort, allocator);
    }

    if (m_requestPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_requestPaths.begin(); itr != m_requestPaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_containersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Containers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_containers.begin(); itr != m_containers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_scalingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scalingStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_currentInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentInstanceCount, allocator);
    }

    if (m_inferenceURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InferenceURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inferenceURL.c_str(), allocator).Move(), allocator);
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

}


string InferenceService::GetServiceId() const
{
    return m_serviceId;
}

void InferenceService::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool InferenceService::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string InferenceService::GetName() const
{
    return m_name;
}

void InferenceService::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InferenceService::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string InferenceService::GetDescription() const
{
    return m_description;
}

void InferenceService::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool InferenceService::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t InferenceService::GetListenPort() const
{
    return m_listenPort;
}

void InferenceService::SetListenPort(const int64_t& _listenPort)
{
    m_listenPort = _listenPort;
    m_listenPortHasBeenSet = true;
}

bool InferenceService::ListenPortHasBeenSet() const
{
    return m_listenPortHasBeenSet;
}

vector<string> InferenceService::GetRequestPaths() const
{
    return m_requestPaths;
}

void InferenceService::SetRequestPaths(const vector<string>& _requestPaths)
{
    m_requestPaths = _requestPaths;
    m_requestPathsHasBeenSet = true;
}

bool InferenceService::RequestPathsHasBeenSet() const
{
    return m_requestPathsHasBeenSet;
}

vector<InferenceContainerConfig> InferenceService::GetContainers() const
{
    return m_containers;
}

void InferenceService::SetContainers(const vector<InferenceContainerConfig>& _containers)
{
    m_containers = _containers;
    m_containersHasBeenSet = true;
}

bool InferenceService::ContainersHasBeenSet() const
{
    return m_containersHasBeenSet;
}

InferenceResourceConfig InferenceService::GetResourceConfig() const
{
    return m_resourceConfig;
}

void InferenceService::SetResourceConfig(const InferenceResourceConfig& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool InferenceService::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string InferenceService::GetStatus() const
{
    return m_status;
}

void InferenceService::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InferenceService::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InferenceService::GetScalingStatus() const
{
    return m_scalingStatus;
}

void InferenceService::SetScalingStatus(const string& _scalingStatus)
{
    m_scalingStatus = _scalingStatus;
    m_scalingStatusHasBeenSet = true;
}

bool InferenceService::ScalingStatusHasBeenSet() const
{
    return m_scalingStatusHasBeenSet;
}

int64_t InferenceService::GetCurrentInstanceCount() const
{
    return m_currentInstanceCount;
}

void InferenceService::SetCurrentInstanceCount(const int64_t& _currentInstanceCount)
{
    m_currentInstanceCount = _currentInstanceCount;
    m_currentInstanceCountHasBeenSet = true;
}

bool InferenceService::CurrentInstanceCountHasBeenSet() const
{
    return m_currentInstanceCountHasBeenSet;
}

string InferenceService::GetInferenceURL() const
{
    return m_inferenceURL;
}

void InferenceService::SetInferenceURL(const string& _inferenceURL)
{
    m_inferenceURL = _inferenceURL;
    m_inferenceURLHasBeenSet = true;
}

bool InferenceService::InferenceURLHasBeenSet() const
{
    return m_inferenceURLHasBeenSet;
}

string InferenceService::GetCreateTime() const
{
    return m_createTime;
}

void InferenceService::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InferenceService::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InferenceService::GetUpdateTime() const
{
    return m_updateTime;
}

void InferenceService::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool InferenceService::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

