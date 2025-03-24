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

#include <tencentcloud/chc/v20230418/model/IdcUnitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

IdcUnitInfo::IdcUnitInfo() :
    m_addressHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_telNumberHasBeenSet(false),
    m_assetManagerHasBeenSet(false),
    m_assetManagerTelNumberHasBeenSet(false)
{
}

CoreInternalOutcome IdcUnitInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdcUnitInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdcUnitInfo.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("TelNumber") && !value["TelNumber"].IsNull())
    {
        if (!value["TelNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdcUnitInfo.TelNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telNumber = string(value["TelNumber"].GetString());
        m_telNumberHasBeenSet = true;
    }

    if (value.HasMember("AssetManager") && !value["AssetManager"].IsNull())
    {
        if (!value["AssetManager"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdcUnitInfo.AssetManager` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetManager = string(value["AssetManager"].GetString());
        m_assetManagerHasBeenSet = true;
    }

    if (value.HasMember("AssetManagerTelNumber") && !value["AssetManagerTelNumber"].IsNull())
    {
        if (!value["AssetManagerTelNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdcUnitInfo.AssetManagerTelNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetManagerTelNumber = string(value["AssetManagerTelNumber"].GetString());
        m_assetManagerTelNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IdcUnitInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_telNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TelNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_telNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_assetManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetManager.c_str(), allocator).Move(), allocator);
    }

    if (m_assetManagerTelNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetManagerTelNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetManagerTelNumber.c_str(), allocator).Move(), allocator);
    }

}


string IdcUnitInfo::GetAddress() const
{
    return m_address;
}

void IdcUnitInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool IdcUnitInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string IdcUnitInfo::GetOperator() const
{
    return m_operator;
}

void IdcUnitInfo::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool IdcUnitInfo::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string IdcUnitInfo::GetTelNumber() const
{
    return m_telNumber;
}

void IdcUnitInfo::SetTelNumber(const string& _telNumber)
{
    m_telNumber = _telNumber;
    m_telNumberHasBeenSet = true;
}

bool IdcUnitInfo::TelNumberHasBeenSet() const
{
    return m_telNumberHasBeenSet;
}

string IdcUnitInfo::GetAssetManager() const
{
    return m_assetManager;
}

void IdcUnitInfo::SetAssetManager(const string& _assetManager)
{
    m_assetManager = _assetManager;
    m_assetManagerHasBeenSet = true;
}

bool IdcUnitInfo::AssetManagerHasBeenSet() const
{
    return m_assetManagerHasBeenSet;
}

string IdcUnitInfo::GetAssetManagerTelNumber() const
{
    return m_assetManagerTelNumber;
}

void IdcUnitInfo::SetAssetManagerTelNumber(const string& _assetManagerTelNumber)
{
    m_assetManagerTelNumber = _assetManagerTelNumber;
    m_assetManagerTelNumberHasBeenSet = true;
}

bool IdcUnitInfo::AssetManagerTelNumberHasBeenSet() const
{
    return m_assetManagerTelNumberHasBeenSet;
}

