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

#include <tencentcloud/csip/v20221121/model/AssetBaseInfoResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetBaseInfoResponse::AssetBaseInfoResponse() :
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_osHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_accountNumHasBeenSet(false),
    m_portNumHasBeenSet(false),
    m_processNumHasBeenSet(false),
    m_softApplicationNumHasBeenSet(false),
    m_databaseNumHasBeenSet(false),
    m_webApplicationNumHasBeenSet(false),
    m_serviceNumHasBeenSet(false),
    m_webFrameworkNumHasBeenSet(false),
    m_webSiteNumHasBeenSet(false),
    m_jarPackageNumHasBeenSet(false),
    m_startServiceNumHasBeenSet(false),
    m_scheduledTaskNumHasBeenSet(false),
    m_environmentVariableNumHasBeenSet(false),
    m_kernelModuleNumHasBeenSet(false),
    m_systemInstallationPackageNumHasBeenSet(false),
    m_surplusProtectDayHasBeenSet(false),
    m_cWPStatusHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_protectLevelHasBeenSet(false),
    m_protectedDayHasBeenSet(false)
{
}

CoreInternalOutcome AssetBaseInfoResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("Os") && !value["Os"].IsNull())
    {
        if (!value["Os"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.Os` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_os = string(value["Os"].GetString());
        m_osHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AccountNum") && !value["AccountNum"].IsNull())
    {
        if (!value["AccountNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.AccountNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountNum = value["AccountNum"].GetUint64();
        m_accountNumHasBeenSet = true;
    }

    if (value.HasMember("PortNum") && !value["PortNum"].IsNull())
    {
        if (!value["PortNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.PortNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portNum = value["PortNum"].GetUint64();
        m_portNumHasBeenSet = true;
    }

    if (value.HasMember("ProcessNum") && !value["ProcessNum"].IsNull())
    {
        if (!value["ProcessNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.ProcessNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processNum = value["ProcessNum"].GetUint64();
        m_processNumHasBeenSet = true;
    }

    if (value.HasMember("SoftApplicationNum") && !value["SoftApplicationNum"].IsNull())
    {
        if (!value["SoftApplicationNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.SoftApplicationNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_softApplicationNum = value["SoftApplicationNum"].GetUint64();
        m_softApplicationNumHasBeenSet = true;
    }

    if (value.HasMember("DatabaseNum") && !value["DatabaseNum"].IsNull())
    {
        if (!value["DatabaseNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.DatabaseNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_databaseNum = value["DatabaseNum"].GetUint64();
        m_databaseNumHasBeenSet = true;
    }

    if (value.HasMember("WebApplicationNum") && !value["WebApplicationNum"].IsNull())
    {
        if (!value["WebApplicationNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.WebApplicationNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webApplicationNum = value["WebApplicationNum"].GetUint64();
        m_webApplicationNumHasBeenSet = true;
    }

    if (value.HasMember("ServiceNum") && !value["ServiceNum"].IsNull())
    {
        if (!value["ServiceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.ServiceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceNum = value["ServiceNum"].GetUint64();
        m_serviceNumHasBeenSet = true;
    }

    if (value.HasMember("WebFrameworkNum") && !value["WebFrameworkNum"].IsNull())
    {
        if (!value["WebFrameworkNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.WebFrameworkNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webFrameworkNum = value["WebFrameworkNum"].GetUint64();
        m_webFrameworkNumHasBeenSet = true;
    }

    if (value.HasMember("WebSiteNum") && !value["WebSiteNum"].IsNull())
    {
        if (!value["WebSiteNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.WebSiteNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webSiteNum = value["WebSiteNum"].GetUint64();
        m_webSiteNumHasBeenSet = true;
    }

    if (value.HasMember("JarPackageNum") && !value["JarPackageNum"].IsNull())
    {
        if (!value["JarPackageNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.JarPackageNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_jarPackageNum = value["JarPackageNum"].GetUint64();
        m_jarPackageNumHasBeenSet = true;
    }

    if (value.HasMember("StartServiceNum") && !value["StartServiceNum"].IsNull())
    {
        if (!value["StartServiceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.StartServiceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startServiceNum = value["StartServiceNum"].GetUint64();
        m_startServiceNumHasBeenSet = true;
    }

    if (value.HasMember("ScheduledTaskNum") && !value["ScheduledTaskNum"].IsNull())
    {
        if (!value["ScheduledTaskNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.ScheduledTaskNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scheduledTaskNum = value["ScheduledTaskNum"].GetUint64();
        m_scheduledTaskNumHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentVariableNum") && !value["EnvironmentVariableNum"].IsNull())
    {
        if (!value["EnvironmentVariableNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.EnvironmentVariableNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_environmentVariableNum = value["EnvironmentVariableNum"].GetUint64();
        m_environmentVariableNumHasBeenSet = true;
    }

    if (value.HasMember("KernelModuleNum") && !value["KernelModuleNum"].IsNull())
    {
        if (!value["KernelModuleNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.KernelModuleNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kernelModuleNum = value["KernelModuleNum"].GetUint64();
        m_kernelModuleNumHasBeenSet = true;
    }

    if (value.HasMember("SystemInstallationPackageNum") && !value["SystemInstallationPackageNum"].IsNull())
    {
        if (!value["SystemInstallationPackageNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.SystemInstallationPackageNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_systemInstallationPackageNum = value["SystemInstallationPackageNum"].GetUint64();
        m_systemInstallationPackageNumHasBeenSet = true;
    }

    if (value.HasMember("SurplusProtectDay") && !value["SurplusProtectDay"].IsNull())
    {
        if (!value["SurplusProtectDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.SurplusProtectDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_surplusProtectDay = value["SurplusProtectDay"].GetUint64();
        m_surplusProtectDayHasBeenSet = true;
    }

    if (value.HasMember("CWPStatus") && !value["CWPStatus"].IsNull())
    {
        if (!value["CWPStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.CWPStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cWPStatus = value["CWPStatus"].GetUint64();
        m_cWPStatusHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("ProtectLevel") && !value["ProtectLevel"].IsNull())
    {
        if (!value["ProtectLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.ProtectLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectLevel = string(value["ProtectLevel"].GetString());
        m_protectLevelHasBeenSet = true;
    }

    if (value.HasMember("ProtectedDay") && !value["ProtectedDay"].IsNull())
    {
        if (!value["ProtectedDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaseInfoResponse.ProtectedDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectedDay = value["ProtectedDay"].GetUint64();
        m_protectedDayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetBaseInfoResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_osHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Os";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_os.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountNum, allocator);
    }

    if (m_portNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portNum, allocator);
    }

    if (m_processNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processNum, allocator);
    }

    if (m_softApplicationNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftApplicationNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_softApplicationNum, allocator);
    }

    if (m_databaseNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_databaseNum, allocator);
    }

    if (m_webApplicationNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebApplicationNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webApplicationNum, allocator);
    }

    if (m_serviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceNum, allocator);
    }

    if (m_webFrameworkNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebFrameworkNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webFrameworkNum, allocator);
    }

    if (m_webSiteNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSiteNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webSiteNum, allocator);
    }

    if (m_jarPackageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JarPackageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jarPackageNum, allocator);
    }

    if (m_startServiceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartServiceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startServiceNum, allocator);
    }

    if (m_scheduledTaskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledTaskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scheduledTaskNum, allocator);
    }

    if (m_environmentVariableNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentVariableNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_environmentVariableNum, allocator);
    }

    if (m_kernelModuleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KernelModuleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kernelModuleNum, allocator);
    }

    if (m_systemInstallationPackageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemInstallationPackageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemInstallationPackageNum, allocator);
    }

    if (m_surplusProtectDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SurplusProtectDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_surplusProtectDay, allocator);
    }

    if (m_cWPStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cWPStatus, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_protectLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_protectedDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectedDay, allocator);
    }

}


string AssetBaseInfoResponse::GetVpcId() const
{
    return m_vpcId;
}

void AssetBaseInfoResponse::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AssetBaseInfoResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string AssetBaseInfoResponse::GetVpcName() const
{
    return m_vpcName;
}

void AssetBaseInfoResponse::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool AssetBaseInfoResponse::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string AssetBaseInfoResponse::GetAssetName() const
{
    return m_assetName;
}

void AssetBaseInfoResponse::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool AssetBaseInfoResponse::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string AssetBaseInfoResponse::GetOs() const
{
    return m_os;
}

void AssetBaseInfoResponse::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool AssetBaseInfoResponse::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}

string AssetBaseInfoResponse::GetPublicIp() const
{
    return m_publicIp;
}

void AssetBaseInfoResponse::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool AssetBaseInfoResponse::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string AssetBaseInfoResponse::GetPrivateIp() const
{
    return m_privateIp;
}

void AssetBaseInfoResponse::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool AssetBaseInfoResponse::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string AssetBaseInfoResponse::GetRegion() const
{
    return m_region;
}

void AssetBaseInfoResponse::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AssetBaseInfoResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AssetBaseInfoResponse::GetAssetType() const
{
    return m_assetType;
}

void AssetBaseInfoResponse::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool AssetBaseInfoResponse::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string AssetBaseInfoResponse::GetAssetId() const
{
    return m_assetId;
}

void AssetBaseInfoResponse::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool AssetBaseInfoResponse::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetAccountNum() const
{
    return m_accountNum;
}

void AssetBaseInfoResponse::SetAccountNum(const uint64_t& _accountNum)
{
    m_accountNum = _accountNum;
    m_accountNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::AccountNumHasBeenSet() const
{
    return m_accountNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetPortNum() const
{
    return m_portNum;
}

void AssetBaseInfoResponse::SetPortNum(const uint64_t& _portNum)
{
    m_portNum = _portNum;
    m_portNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::PortNumHasBeenSet() const
{
    return m_portNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetProcessNum() const
{
    return m_processNum;
}

void AssetBaseInfoResponse::SetProcessNum(const uint64_t& _processNum)
{
    m_processNum = _processNum;
    m_processNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::ProcessNumHasBeenSet() const
{
    return m_processNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetSoftApplicationNum() const
{
    return m_softApplicationNum;
}

void AssetBaseInfoResponse::SetSoftApplicationNum(const uint64_t& _softApplicationNum)
{
    m_softApplicationNum = _softApplicationNum;
    m_softApplicationNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::SoftApplicationNumHasBeenSet() const
{
    return m_softApplicationNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetDatabaseNum() const
{
    return m_databaseNum;
}

void AssetBaseInfoResponse::SetDatabaseNum(const uint64_t& _databaseNum)
{
    m_databaseNum = _databaseNum;
    m_databaseNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::DatabaseNumHasBeenSet() const
{
    return m_databaseNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetWebApplicationNum() const
{
    return m_webApplicationNum;
}

void AssetBaseInfoResponse::SetWebApplicationNum(const uint64_t& _webApplicationNum)
{
    m_webApplicationNum = _webApplicationNum;
    m_webApplicationNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::WebApplicationNumHasBeenSet() const
{
    return m_webApplicationNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetServiceNum() const
{
    return m_serviceNum;
}

void AssetBaseInfoResponse::SetServiceNum(const uint64_t& _serviceNum)
{
    m_serviceNum = _serviceNum;
    m_serviceNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::ServiceNumHasBeenSet() const
{
    return m_serviceNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetWebFrameworkNum() const
{
    return m_webFrameworkNum;
}

void AssetBaseInfoResponse::SetWebFrameworkNum(const uint64_t& _webFrameworkNum)
{
    m_webFrameworkNum = _webFrameworkNum;
    m_webFrameworkNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::WebFrameworkNumHasBeenSet() const
{
    return m_webFrameworkNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetWebSiteNum() const
{
    return m_webSiteNum;
}

void AssetBaseInfoResponse::SetWebSiteNum(const uint64_t& _webSiteNum)
{
    m_webSiteNum = _webSiteNum;
    m_webSiteNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::WebSiteNumHasBeenSet() const
{
    return m_webSiteNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetJarPackageNum() const
{
    return m_jarPackageNum;
}

void AssetBaseInfoResponse::SetJarPackageNum(const uint64_t& _jarPackageNum)
{
    m_jarPackageNum = _jarPackageNum;
    m_jarPackageNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::JarPackageNumHasBeenSet() const
{
    return m_jarPackageNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetStartServiceNum() const
{
    return m_startServiceNum;
}

void AssetBaseInfoResponse::SetStartServiceNum(const uint64_t& _startServiceNum)
{
    m_startServiceNum = _startServiceNum;
    m_startServiceNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::StartServiceNumHasBeenSet() const
{
    return m_startServiceNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetScheduledTaskNum() const
{
    return m_scheduledTaskNum;
}

void AssetBaseInfoResponse::SetScheduledTaskNum(const uint64_t& _scheduledTaskNum)
{
    m_scheduledTaskNum = _scheduledTaskNum;
    m_scheduledTaskNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::ScheduledTaskNumHasBeenSet() const
{
    return m_scheduledTaskNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetEnvironmentVariableNum() const
{
    return m_environmentVariableNum;
}

void AssetBaseInfoResponse::SetEnvironmentVariableNum(const uint64_t& _environmentVariableNum)
{
    m_environmentVariableNum = _environmentVariableNum;
    m_environmentVariableNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::EnvironmentVariableNumHasBeenSet() const
{
    return m_environmentVariableNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetKernelModuleNum() const
{
    return m_kernelModuleNum;
}

void AssetBaseInfoResponse::SetKernelModuleNum(const uint64_t& _kernelModuleNum)
{
    m_kernelModuleNum = _kernelModuleNum;
    m_kernelModuleNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::KernelModuleNumHasBeenSet() const
{
    return m_kernelModuleNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetSystemInstallationPackageNum() const
{
    return m_systemInstallationPackageNum;
}

void AssetBaseInfoResponse::SetSystemInstallationPackageNum(const uint64_t& _systemInstallationPackageNum)
{
    m_systemInstallationPackageNum = _systemInstallationPackageNum;
    m_systemInstallationPackageNumHasBeenSet = true;
}

bool AssetBaseInfoResponse::SystemInstallationPackageNumHasBeenSet() const
{
    return m_systemInstallationPackageNumHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetSurplusProtectDay() const
{
    return m_surplusProtectDay;
}

void AssetBaseInfoResponse::SetSurplusProtectDay(const uint64_t& _surplusProtectDay)
{
    m_surplusProtectDay = _surplusProtectDay;
    m_surplusProtectDayHasBeenSet = true;
}

bool AssetBaseInfoResponse::SurplusProtectDayHasBeenSet() const
{
    return m_surplusProtectDayHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetCWPStatus() const
{
    return m_cWPStatus;
}

void AssetBaseInfoResponse::SetCWPStatus(const uint64_t& _cWPStatus)
{
    m_cWPStatus = _cWPStatus;
    m_cWPStatusHasBeenSet = true;
}

bool AssetBaseInfoResponse::CWPStatusHasBeenSet() const
{
    return m_cWPStatusHasBeenSet;
}

vector<Tag> AssetBaseInfoResponse::GetTag() const
{
    return m_tag;
}

void AssetBaseInfoResponse::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AssetBaseInfoResponse::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string AssetBaseInfoResponse::GetProtectLevel() const
{
    return m_protectLevel;
}

void AssetBaseInfoResponse::SetProtectLevel(const string& _protectLevel)
{
    m_protectLevel = _protectLevel;
    m_protectLevelHasBeenSet = true;
}

bool AssetBaseInfoResponse::ProtectLevelHasBeenSet() const
{
    return m_protectLevelHasBeenSet;
}

uint64_t AssetBaseInfoResponse::GetProtectedDay() const
{
    return m_protectedDay;
}

void AssetBaseInfoResponse::SetProtectedDay(const uint64_t& _protectedDay)
{
    m_protectedDay = _protectedDay;
    m_protectedDayHasBeenSet = true;
}

bool AssetBaseInfoResponse::ProtectedDayHasBeenSet() const
{
    return m_protectedDayHasBeenSet;
}

