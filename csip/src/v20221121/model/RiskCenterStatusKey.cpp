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

#include <tencentcloud/csip/v20221121/model/RiskCenterStatusKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RiskCenterStatusKey::RiskCenterStatusKey() :
    m_idHasBeenSet(false),
    m_publicIPDomainHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome RiskCenterStatusKey::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCenterStatusKey.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("PublicIPDomain") && !value["PublicIPDomain"].IsNull())
    {
        if (!value["PublicIPDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCenterStatusKey.PublicIPDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIPDomain = string(value["PublicIPDomain"].GetString());
        m_publicIPDomainHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCenterStatusKey.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCenterStatusKey.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskCenterStatusKey::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIPDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIPDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIPDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

}


string RiskCenterStatusKey::GetId() const
{
    return m_id;
}

void RiskCenterStatusKey::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RiskCenterStatusKey::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RiskCenterStatusKey::GetPublicIPDomain() const
{
    return m_publicIPDomain;
}

void RiskCenterStatusKey::SetPublicIPDomain(const string& _publicIPDomain)
{
    m_publicIPDomain = _publicIPDomain;
    m_publicIPDomainHasBeenSet = true;
}

bool RiskCenterStatusKey::PublicIPDomainHasBeenSet() const
{
    return m_publicIPDomainHasBeenSet;
}

string RiskCenterStatusKey::GetInstanceId() const
{
    return m_instanceId;
}

void RiskCenterStatusKey::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RiskCenterStatusKey::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RiskCenterStatusKey::GetAppId() const
{
    return m_appId;
}

void RiskCenterStatusKey::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool RiskCenterStatusKey::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

