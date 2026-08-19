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

#include <tencentcloud/csip/v20221121/model/CloudFunctionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CloudFunctionItem::CloudFunctionItem() :
    m_instanceNameHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_functionTypeHasBeenSet(false),
    m_instanceTagHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_instanceStatusDisplayHasBeenSet(false),
    m_coreAssetFlagHasBeenSet(false),
    m_publicURLHasBeenSet(false),
    m_privateURLHasBeenSet(false),
    m_accountInfoHasBeenSet(false)
{
}

CoreInternalOutcome CloudFunctionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("FunctionType") && !value["FunctionType"].IsNull())
    {
        if (!value["FunctionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.FunctionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionType = string(value["FunctionType"].GetString());
        m_functionTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceTag") && !value["InstanceTag"].IsNull())
    {
        if (!value["InstanceTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.InstanceTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTag = string(value["InstanceTag"].GetString());
        m_instanceTagHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatusDisplay") && !value["InstanceStatusDisplay"].IsNull())
    {
        if (!value["InstanceStatusDisplay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.InstanceStatusDisplay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatusDisplay = string(value["InstanceStatusDisplay"].GetString());
        m_instanceStatusDisplayHasBeenSet = true;
    }

    if (value.HasMember("CoreAssetFlag") && !value["CoreAssetFlag"].IsNull())
    {
        if (!value["CoreAssetFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.CoreAssetFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coreAssetFlag = string(value["CoreAssetFlag"].GetString());
        m_coreAssetFlagHasBeenSet = true;
    }

    if (value.HasMember("PublicURL") && !value["PublicURL"].IsNull())
    {
        if (!value["PublicURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.PublicURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicURL = string(value["PublicURL"].GetString());
        m_publicURLHasBeenSet = true;
    }

    if (value.HasMember("PrivateURL") && !value["PrivateURL"].IsNull())
    {
        if (!value["PrivateURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.PrivateURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateURL = string(value["PrivateURL"].GetString());
        m_privateURLHasBeenSet = true;
    }

    if (value.HasMember("AccountInfo") && !value["AccountInfo"].IsNull())
    {
        if (!value["AccountInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFunctionItem.AccountInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountInfo = string(value["AccountInfo"].GetString());
        m_accountInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudFunctionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_functionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceTag.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_instanceStatusDisplayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatusDisplay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatusDisplay.c_str(), allocator).Move(), allocator);
    }

    if (m_coreAssetFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreAssetFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coreAssetFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_publicURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicURL.c_str(), allocator).Move(), allocator);
    }

    if (m_privateURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateURL.c_str(), allocator).Move(), allocator);
    }

    if (m_accountInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountInfo.c_str(), allocator).Move(), allocator);
    }

}


string CloudFunctionItem::GetInstanceName() const
{
    return m_instanceName;
}

void CloudFunctionItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CloudFunctionItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CloudFunctionItem::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void CloudFunctionItem::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool CloudFunctionItem::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string CloudFunctionItem::GetFunctionType() const
{
    return m_functionType;
}

void CloudFunctionItem::SetFunctionType(const string& _functionType)
{
    m_functionType = _functionType;
    m_functionTypeHasBeenSet = true;
}

bool CloudFunctionItem::FunctionTypeHasBeenSet() const
{
    return m_functionTypeHasBeenSet;
}

string CloudFunctionItem::GetInstanceTag() const
{
    return m_instanceTag;
}

void CloudFunctionItem::SetInstanceTag(const string& _instanceTag)
{
    m_instanceTag = _instanceTag;
    m_instanceTagHasBeenSet = true;
}

bool CloudFunctionItem::InstanceTagHasBeenSet() const
{
    return m_instanceTagHasBeenSet;
}

string CloudFunctionItem::GetNamespace() const
{
    return m_namespace;
}

void CloudFunctionItem::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CloudFunctionItem::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string CloudFunctionItem::GetRegion() const
{
    return m_region;
}

void CloudFunctionItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CloudFunctionItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CloudFunctionItem::GetDomain() const
{
    return m_domain;
}

void CloudFunctionItem::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CloudFunctionItem::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CloudFunctionItem::GetInstanceID() const
{
    return m_instanceID;
}

void CloudFunctionItem::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool CloudFunctionItem::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string CloudFunctionItem::GetInstanceType() const
{
    return m_instanceType;
}

void CloudFunctionItem::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CloudFunctionItem::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t CloudFunctionItem::GetAppID() const
{
    return m_appID;
}

void CloudFunctionItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool CloudFunctionItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string CloudFunctionItem::GetInstanceStatusDisplay() const
{
    return m_instanceStatusDisplay;
}

void CloudFunctionItem::SetInstanceStatusDisplay(const string& _instanceStatusDisplay)
{
    m_instanceStatusDisplay = _instanceStatusDisplay;
    m_instanceStatusDisplayHasBeenSet = true;
}

bool CloudFunctionItem::InstanceStatusDisplayHasBeenSet() const
{
    return m_instanceStatusDisplayHasBeenSet;
}

string CloudFunctionItem::GetCoreAssetFlag() const
{
    return m_coreAssetFlag;
}

void CloudFunctionItem::SetCoreAssetFlag(const string& _coreAssetFlag)
{
    m_coreAssetFlag = _coreAssetFlag;
    m_coreAssetFlagHasBeenSet = true;
}

bool CloudFunctionItem::CoreAssetFlagHasBeenSet() const
{
    return m_coreAssetFlagHasBeenSet;
}

string CloudFunctionItem::GetPublicURL() const
{
    return m_publicURL;
}

void CloudFunctionItem::SetPublicURL(const string& _publicURL)
{
    m_publicURL = _publicURL;
    m_publicURLHasBeenSet = true;
}

bool CloudFunctionItem::PublicURLHasBeenSet() const
{
    return m_publicURLHasBeenSet;
}

string CloudFunctionItem::GetPrivateURL() const
{
    return m_privateURL;
}

void CloudFunctionItem::SetPrivateURL(const string& _privateURL)
{
    m_privateURL = _privateURL;
    m_privateURLHasBeenSet = true;
}

bool CloudFunctionItem::PrivateURLHasBeenSet() const
{
    return m_privateURLHasBeenSet;
}

string CloudFunctionItem::GetAccountInfo() const
{
    return m_accountInfo;
}

void CloudFunctionItem::SetAccountInfo(const string& _accountInfo)
{
    m_accountInfo = _accountInfo;
    m_accountInfoHasBeenSet = true;
}

bool CloudFunctionItem::AccountInfoHasBeenSet() const
{
    return m_accountInfoHasBeenSet;
}

