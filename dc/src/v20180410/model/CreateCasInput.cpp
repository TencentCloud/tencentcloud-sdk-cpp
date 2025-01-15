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

#include <tencentcloud/dc/v20180410/model/CreateCasInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

CreateCasInput::CreateCasInput() :
    m_nameHasBeenSet(false),
    m_idcAddressHasBeenSet(false),
    m_idcTypeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_telephoneHasBeenSet(false),
    m_remarksHasBeenSet(false),
    m_arRegionHasBeenSet(false)
{
}

CoreInternalOutcome CreateCasInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCasInput.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IdcAddress") && !value["IdcAddress"].IsNull())
    {
        if (!value["IdcAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCasInput.IdcAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcAddress = string(value["IdcAddress"].GetString());
        m_idcAddressHasBeenSet = true;
    }

    if (value.HasMember("IdcType") && !value["IdcType"].IsNull())
    {
        if (!value["IdcType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCasInput.IdcType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcType = string(value["IdcType"].GetString());
        m_idcTypeHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCasInput.Bandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetUint64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("Telephone") && !value["Telephone"].IsNull())
    {
        if (!value["Telephone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCasInput.Telephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telephone = string(value["Telephone"].GetString());
        m_telephoneHasBeenSet = true;
    }

    if (value.HasMember("Remarks") && !value["Remarks"].IsNull())
    {
        if (!value["Remarks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCasInput.Remarks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remarks = string(value["Remarks"].GetString());
        m_remarksHasBeenSet = true;
    }

    if (value.HasMember("ArRegion") && !value["ArRegion"].IsNull())
    {
        if (!value["ArRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCasInput.ArRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arRegion = string(value["ArRegion"].GetString());
        m_arRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateCasInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idcAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_idcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcType.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_telephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Telephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_telephone.c_str(), allocator).Move(), allocator);
    }

    if (m_remarksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remarks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remarks.c_str(), allocator).Move(), allocator);
    }

    if (m_arRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arRegion.c_str(), allocator).Move(), allocator);
    }

}


string CreateCasInput::GetName() const
{
    return m_name;
}

void CreateCasInput::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCasInput::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCasInput::GetIdcAddress() const
{
    return m_idcAddress;
}

void CreateCasInput::SetIdcAddress(const string& _idcAddress)
{
    m_idcAddress = _idcAddress;
    m_idcAddressHasBeenSet = true;
}

bool CreateCasInput::IdcAddressHasBeenSet() const
{
    return m_idcAddressHasBeenSet;
}

string CreateCasInput::GetIdcType() const
{
    return m_idcType;
}

void CreateCasInput::SetIdcType(const string& _idcType)
{
    m_idcType = _idcType;
    m_idcTypeHasBeenSet = true;
}

bool CreateCasInput::IdcTypeHasBeenSet() const
{
    return m_idcTypeHasBeenSet;
}

uint64_t CreateCasInput::GetBandwidth() const
{
    return m_bandwidth;
}

void CreateCasInput::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CreateCasInput::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string CreateCasInput::GetTelephone() const
{
    return m_telephone;
}

void CreateCasInput::SetTelephone(const string& _telephone)
{
    m_telephone = _telephone;
    m_telephoneHasBeenSet = true;
}

bool CreateCasInput::TelephoneHasBeenSet() const
{
    return m_telephoneHasBeenSet;
}

string CreateCasInput::GetRemarks() const
{
    return m_remarks;
}

void CreateCasInput::SetRemarks(const string& _remarks)
{
    m_remarks = _remarks;
    m_remarksHasBeenSet = true;
}

bool CreateCasInput::RemarksHasBeenSet() const
{
    return m_remarksHasBeenSet;
}

string CreateCasInput::GetArRegion() const
{
    return m_arRegion;
}

void CreateCasInput::SetArRegion(const string& _arRegion)
{
    m_arRegion = _arRegion;
    m_arRegionHasBeenSet = true;
}

bool CreateCasInput::ArRegionHasBeenSet() const
{
    return m_arRegionHasBeenSet;
}

