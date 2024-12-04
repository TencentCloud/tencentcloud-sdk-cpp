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

#include <tencentcloud/emr/v20190103/model/ExternalService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ExternalService::ExternalService() :
    m_shareTypeHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_customServiceDefineListHasBeenSet(false)
{
}

CoreInternalOutcome ExternalService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShareType") && !value["ShareType"].IsNull())
    {
        if (!value["ShareType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalService.ShareType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareType = string(value["ShareType"].GetString());
        m_shareTypeHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalService.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalService.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CustomServiceDefineList") && !value["CustomServiceDefineList"].IsNull())
    {
        if (!value["CustomServiceDefineList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExternalService.CustomServiceDefineList` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomServiceDefineList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomServiceDefine item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customServiceDefineList.push_back(item);
        }
        m_customServiceDefineListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shareTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_customServiceDefineListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomServiceDefineList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customServiceDefineList.begin(); itr != m_customServiceDefineList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ExternalService::GetShareType() const
{
    return m_shareType;
}

void ExternalService::SetShareType(const string& _shareType)
{
    m_shareType = _shareType;
    m_shareTypeHasBeenSet = true;
}

bool ExternalService::ShareTypeHasBeenSet() const
{
    return m_shareTypeHasBeenSet;
}

string ExternalService::GetService() const
{
    return m_service;
}

void ExternalService::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool ExternalService::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string ExternalService::GetInstanceId() const
{
    return m_instanceId;
}

void ExternalService::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ExternalService::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<CustomServiceDefine> ExternalService::GetCustomServiceDefineList() const
{
    return m_customServiceDefineList;
}

void ExternalService::SetCustomServiceDefineList(const vector<CustomServiceDefine>& _customServiceDefineList)
{
    m_customServiceDefineList = _customServiceDefineList;
    m_customServiceDefineListHasBeenSet = true;
}

bool ExternalService::CustomServiceDefineListHasBeenSet() const
{
    return m_customServiceDefineListHasBeenSet;
}

