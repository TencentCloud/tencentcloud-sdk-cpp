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

#include <tencentcloud/csip/v20221121/model/RoleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RoleInfo::RoleInfo() :
    m_iPHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_originIPHasBeenSet(false),
    m_portHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_longitudeHasBeenSet(false),
    m_infoHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_familyHasBeenSet(false),
    m_virusNameHasBeenSet(false),
    m_mD5HasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_fromLogAnalysisDataHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_containerIDHasBeenSet(false)
{
}

CoreInternalOutcome RoleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("OriginIP") && !value["OriginIP"].IsNull())
    {
        if (!value["OriginIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.OriginIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originIP = string(value["OriginIP"].GetString());
        m_originIPHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Latitude") && !value["Latitude"].IsNull())
    {
        if (!value["Latitude"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Latitude` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latitude = string(value["Latitude"].GetString());
        m_latitudeHasBeenSet = true;
    }

    if (value.HasMember("Longitude") && !value["Longitude"].IsNull())
    {
        if (!value["Longitude"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Longitude` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longitude = string(value["Longitude"].GetString());
        m_longitudeHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Info` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_info = string(value["Info"].GetString());
        m_infoHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("Family") && !value["Family"].IsNull())
    {
        if (!value["Family"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Family` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_family = string(value["Family"].GetString());
        m_familyHasBeenSet = true;
    }

    if (value.HasMember("VirusName") && !value["VirusName"].IsNull())
    {
        if (!value["VirusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.VirusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusName = string(value["VirusName"].GetString());
        m_virusNameHasBeenSet = true;
    }

    if (value.HasMember("MD5") && !value["MD5"].IsNull())
    {
        if (!value["MD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.MD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mD5 = string(value["MD5"].GetString());
        m_mD5HasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.AssetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = value["AssetType"].GetInt64();
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("FromLogAnalysisData") && !value["FromLogAnalysisData"].IsNull())
    {
        if (!value["FromLogAnalysisData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoleInfo.FromLogAnalysisData` is not array type"));

        const rapidjson::Value &tmpValue = value["FromLogAnalysisData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fromLogAnalysisData.push_back(item);
        }
        m_fromLogAnalysisDataHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("ContainerID") && !value["ContainerID"].IsNull())
    {
        if (!value["ContainerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.ContainerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerID = string(value["ContainerID"].GetString());
        m_containerIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_originIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originIP.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_latitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latitude.c_str(), allocator).Move(), allocator);
    }

    if (m_longitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Longitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longitude.c_str(), allocator).Move(), allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_info.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_familyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Family";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_family.c_str(), allocator).Move(), allocator);
    }

    if (m_virusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusName.c_str(), allocator).Move(), allocator);
    }

    if (m_mD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mD5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetType, allocator);
    }

    if (m_fromLogAnalysisDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromLogAnalysisData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fromLogAnalysisData.begin(); itr != m_fromLogAnalysisData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerID.c_str(), allocator).Move(), allocator);
    }

}


string RoleInfo::GetIP() const
{
    return m_iP;
}

void RoleInfo::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool RoleInfo::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string RoleInfo::GetHostIP() const
{
    return m_hostIP;
}

void RoleInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool RoleInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string RoleInfo::GetOriginIP() const
{
    return m_originIP;
}

void RoleInfo::SetOriginIP(const string& _originIP)
{
    m_originIP = _originIP;
    m_originIPHasBeenSet = true;
}

bool RoleInfo::OriginIPHasBeenSet() const
{
    return m_originIPHasBeenSet;
}

uint64_t RoleInfo::GetPort() const
{
    return m_port;
}

void RoleInfo::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool RoleInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string RoleInfo::GetInstanceID() const
{
    return m_instanceID;
}

void RoleInfo::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool RoleInfo::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string RoleInfo::GetCity() const
{
    return m_city;
}

void RoleInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool RoleInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string RoleInfo::GetProvince() const
{
    return m_province;
}

void RoleInfo::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool RoleInfo::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string RoleInfo::GetCountry() const
{
    return m_country;
}

void RoleInfo::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool RoleInfo::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string RoleInfo::GetAddress() const
{
    return m_address;
}

void RoleInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool RoleInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string RoleInfo::GetLatitude() const
{
    return m_latitude;
}

void RoleInfo::SetLatitude(const string& _latitude)
{
    m_latitude = _latitude;
    m_latitudeHasBeenSet = true;
}

bool RoleInfo::LatitudeHasBeenSet() const
{
    return m_latitudeHasBeenSet;
}

string RoleInfo::GetLongitude() const
{
    return m_longitude;
}

void RoleInfo::SetLongitude(const string& _longitude)
{
    m_longitude = _longitude;
    m_longitudeHasBeenSet = true;
}

bool RoleInfo::LongitudeHasBeenSet() const
{
    return m_longitudeHasBeenSet;
}

string RoleInfo::GetInfo() const
{
    return m_info;
}

void RoleInfo::SetInfo(const string& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool RoleInfo::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

string RoleInfo::GetDomain() const
{
    return m_domain;
}

void RoleInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool RoleInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string RoleInfo::GetName() const
{
    return m_name;
}

void RoleInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RoleInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RoleInfo::GetAccount() const
{
    return m_account;
}

void RoleInfo::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool RoleInfo::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string RoleInfo::GetFamily() const
{
    return m_family;
}

void RoleInfo::SetFamily(const string& _family)
{
    m_family = _family;
    m_familyHasBeenSet = true;
}

bool RoleInfo::FamilyHasBeenSet() const
{
    return m_familyHasBeenSet;
}

string RoleInfo::GetVirusName() const
{
    return m_virusName;
}

void RoleInfo::SetVirusName(const string& _virusName)
{
    m_virusName = _virusName;
    m_virusNameHasBeenSet = true;
}

bool RoleInfo::VirusNameHasBeenSet() const
{
    return m_virusNameHasBeenSet;
}

string RoleInfo::GetMD5() const
{
    return m_mD5;
}

void RoleInfo::SetMD5(const string& _mD5)
{
    m_mD5 = _mD5;
    m_mD5HasBeenSet = true;
}

bool RoleInfo::MD5HasBeenSet() const
{
    return m_mD5HasBeenSet;
}

string RoleInfo::GetFileName() const
{
    return m_fileName;
}

void RoleInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool RoleInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t RoleInfo::GetAssetType() const
{
    return m_assetType;
}

void RoleInfo::SetAssetType(const int64_t& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool RoleInfo::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

vector<KeyValue> RoleInfo::GetFromLogAnalysisData() const
{
    return m_fromLogAnalysisData;
}

void RoleInfo::SetFromLogAnalysisData(const vector<KeyValue>& _fromLogAnalysisData)
{
    m_fromLogAnalysisData = _fromLogAnalysisData;
    m_fromLogAnalysisDataHasBeenSet = true;
}

bool RoleInfo::FromLogAnalysisDataHasBeenSet() const
{
    return m_fromLogAnalysisDataHasBeenSet;
}

string RoleInfo::GetContainerName() const
{
    return m_containerName;
}

void RoleInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool RoleInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string RoleInfo::GetContainerID() const
{
    return m_containerID;
}

void RoleInfo::SetContainerID(const string& _containerID)
{
    m_containerID = _containerID;
    m_containerIDHasBeenSet = true;
}

bool RoleInfo::ContainerIDHasBeenSet() const
{
    return m_containerIDHasBeenSet;
}

