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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyApplicationRequest::ModifyApplicationRequest() :
    m_iotAppIDHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_productsHasBeenSet(false),
    m_pushSecretIDHasBeenSet(false),
    m_pushSecretKeyHasBeenSet(false),
    m_pushEnvironmentHasBeenSet(false),
    m_tPNSiOSAccessIDHasBeenSet(false),
    m_tPNSiOSSecretKeyHasBeenSet(false),
    m_tPNSiOSPushEnvironmentHasBeenSet(false),
    m_tPNSAndroidAccessIDHasBeenSet(false),
    m_tPNSAndroidSecretKeyHasBeenSet(false),
    m_tPNSiOSRegionHasBeenSet(false),
    m_tPNSAndroidRegionHasBeenSet(false),
    m_turnKeySwitchHasBeenSet(false)
{
}

string ModifyApplicationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iotAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IotAppID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iotAppID.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_productsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Products";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_products.c_str(), allocator).Move(), allocator);
    }

    if (m_pushSecretIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushSecretID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pushSecretID.c_str(), allocator).Move(), allocator);
    }

    if (m_pushSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushSecretKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pushSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_pushEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pushEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_tPNSiOSAccessIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPNSiOSAccessID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tPNSiOSAccessID.c_str(), allocator).Move(), allocator);
    }

    if (m_tPNSiOSSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPNSiOSSecretKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tPNSiOSSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tPNSiOSPushEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPNSiOSPushEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tPNSiOSPushEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_tPNSAndroidAccessIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPNSAndroidAccessID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tPNSAndroidAccessID.c_str(), allocator).Move(), allocator);
    }

    if (m_tPNSAndroidSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPNSAndroidSecretKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tPNSAndroidSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tPNSiOSRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPNSiOSRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tPNSiOSRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_tPNSAndroidRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPNSAndroidRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tPNSAndroidRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_turnKeySwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TurnKeySwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_turnKeySwitch, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApplicationRequest::GetIotAppID() const
{
    return m_iotAppID;
}

void ModifyApplicationRequest::SetIotAppID(const string& _iotAppID)
{
    m_iotAppID = _iotAppID;
    m_iotAppIDHasBeenSet = true;
}

bool ModifyApplicationRequest::IotAppIDHasBeenSet() const
{
    return m_iotAppIDHasBeenSet;
}

string ModifyApplicationRequest::GetAppName() const
{
    return m_appName;
}

void ModifyApplicationRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool ModifyApplicationRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string ModifyApplicationRequest::GetDescription() const
{
    return m_description;
}

void ModifyApplicationRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyApplicationRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyApplicationRequest::GetProducts() const
{
    return m_products;
}

void ModifyApplicationRequest::SetProducts(const string& _products)
{
    m_products = _products;
    m_productsHasBeenSet = true;
}

bool ModifyApplicationRequest::ProductsHasBeenSet() const
{
    return m_productsHasBeenSet;
}

string ModifyApplicationRequest::GetPushSecretID() const
{
    return m_pushSecretID;
}

void ModifyApplicationRequest::SetPushSecretID(const string& _pushSecretID)
{
    m_pushSecretID = _pushSecretID;
    m_pushSecretIDHasBeenSet = true;
}

bool ModifyApplicationRequest::PushSecretIDHasBeenSet() const
{
    return m_pushSecretIDHasBeenSet;
}

string ModifyApplicationRequest::GetPushSecretKey() const
{
    return m_pushSecretKey;
}

void ModifyApplicationRequest::SetPushSecretKey(const string& _pushSecretKey)
{
    m_pushSecretKey = _pushSecretKey;
    m_pushSecretKeyHasBeenSet = true;
}

bool ModifyApplicationRequest::PushSecretKeyHasBeenSet() const
{
    return m_pushSecretKeyHasBeenSet;
}

string ModifyApplicationRequest::GetPushEnvironment() const
{
    return m_pushEnvironment;
}

void ModifyApplicationRequest::SetPushEnvironment(const string& _pushEnvironment)
{
    m_pushEnvironment = _pushEnvironment;
    m_pushEnvironmentHasBeenSet = true;
}

bool ModifyApplicationRequest::PushEnvironmentHasBeenSet() const
{
    return m_pushEnvironmentHasBeenSet;
}

string ModifyApplicationRequest::GetTPNSiOSAccessID() const
{
    return m_tPNSiOSAccessID;
}

void ModifyApplicationRequest::SetTPNSiOSAccessID(const string& _tPNSiOSAccessID)
{
    m_tPNSiOSAccessID = _tPNSiOSAccessID;
    m_tPNSiOSAccessIDHasBeenSet = true;
}

bool ModifyApplicationRequest::TPNSiOSAccessIDHasBeenSet() const
{
    return m_tPNSiOSAccessIDHasBeenSet;
}

string ModifyApplicationRequest::GetTPNSiOSSecretKey() const
{
    return m_tPNSiOSSecretKey;
}

void ModifyApplicationRequest::SetTPNSiOSSecretKey(const string& _tPNSiOSSecretKey)
{
    m_tPNSiOSSecretKey = _tPNSiOSSecretKey;
    m_tPNSiOSSecretKeyHasBeenSet = true;
}

bool ModifyApplicationRequest::TPNSiOSSecretKeyHasBeenSet() const
{
    return m_tPNSiOSSecretKeyHasBeenSet;
}

string ModifyApplicationRequest::GetTPNSiOSPushEnvironment() const
{
    return m_tPNSiOSPushEnvironment;
}

void ModifyApplicationRequest::SetTPNSiOSPushEnvironment(const string& _tPNSiOSPushEnvironment)
{
    m_tPNSiOSPushEnvironment = _tPNSiOSPushEnvironment;
    m_tPNSiOSPushEnvironmentHasBeenSet = true;
}

bool ModifyApplicationRequest::TPNSiOSPushEnvironmentHasBeenSet() const
{
    return m_tPNSiOSPushEnvironmentHasBeenSet;
}

string ModifyApplicationRequest::GetTPNSAndroidAccessID() const
{
    return m_tPNSAndroidAccessID;
}

void ModifyApplicationRequest::SetTPNSAndroidAccessID(const string& _tPNSAndroidAccessID)
{
    m_tPNSAndroidAccessID = _tPNSAndroidAccessID;
    m_tPNSAndroidAccessIDHasBeenSet = true;
}

bool ModifyApplicationRequest::TPNSAndroidAccessIDHasBeenSet() const
{
    return m_tPNSAndroidAccessIDHasBeenSet;
}

string ModifyApplicationRequest::GetTPNSAndroidSecretKey() const
{
    return m_tPNSAndroidSecretKey;
}

void ModifyApplicationRequest::SetTPNSAndroidSecretKey(const string& _tPNSAndroidSecretKey)
{
    m_tPNSAndroidSecretKey = _tPNSAndroidSecretKey;
    m_tPNSAndroidSecretKeyHasBeenSet = true;
}

bool ModifyApplicationRequest::TPNSAndroidSecretKeyHasBeenSet() const
{
    return m_tPNSAndroidSecretKeyHasBeenSet;
}

string ModifyApplicationRequest::GetTPNSiOSRegion() const
{
    return m_tPNSiOSRegion;
}

void ModifyApplicationRequest::SetTPNSiOSRegion(const string& _tPNSiOSRegion)
{
    m_tPNSiOSRegion = _tPNSiOSRegion;
    m_tPNSiOSRegionHasBeenSet = true;
}

bool ModifyApplicationRequest::TPNSiOSRegionHasBeenSet() const
{
    return m_tPNSiOSRegionHasBeenSet;
}

string ModifyApplicationRequest::GetTPNSAndroidRegion() const
{
    return m_tPNSAndroidRegion;
}

void ModifyApplicationRequest::SetTPNSAndroidRegion(const string& _tPNSAndroidRegion)
{
    m_tPNSAndroidRegion = _tPNSAndroidRegion;
    m_tPNSAndroidRegionHasBeenSet = true;
}

bool ModifyApplicationRequest::TPNSAndroidRegionHasBeenSet() const
{
    return m_tPNSAndroidRegionHasBeenSet;
}

int64_t ModifyApplicationRequest::GetTurnKeySwitch() const
{
    return m_turnKeySwitch;
}

void ModifyApplicationRequest::SetTurnKeySwitch(const int64_t& _turnKeySwitch)
{
    m_turnKeySwitch = _turnKeySwitch;
    m_turnKeySwitchHasBeenSet = true;
}

bool ModifyApplicationRequest::TurnKeySwitchHasBeenSet() const
{
    return m_turnKeySwitchHasBeenSet;
}


