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

#include <tencentcloud/tcb/v20180608/model/BaasPackageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

BaasPackageInfo::BaasPackageInfo() :
    m_packageNameHasBeenSet(false),
    m_packageTitleHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupTitleHasBeenSet(false),
    m_billTagsHasBeenSet(false),
    m_resourceLimitHasBeenSet(false),
    m_advanceLimitHasBeenSet(false),
    m_packageDescriptionHasBeenSet(false),
    m_isExternalHasBeenSet(false)
{
}

CoreInternalOutcome BaasPackageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaasPackageInfo.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("PackageTitle") && !value["PackageTitle"].IsNull())
    {
        if (!value["PackageTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaasPackageInfo.PackageTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageTitle = string(value["PackageTitle"].GetString());
        m_packageTitleHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaasPackageInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupTitle") && !value["GroupTitle"].IsNull())
    {
        if (!value["GroupTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaasPackageInfo.GroupTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupTitle = string(value["GroupTitle"].GetString());
        m_groupTitleHasBeenSet = true;
    }

    if (value.HasMember("BillTags") && !value["BillTags"].IsNull())
    {
        if (!value["BillTags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaasPackageInfo.BillTags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billTags = string(value["BillTags"].GetString());
        m_billTagsHasBeenSet = true;
    }

    if (value.HasMember("ResourceLimit") && !value["ResourceLimit"].IsNull())
    {
        if (!value["ResourceLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaasPackageInfo.ResourceLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceLimit = string(value["ResourceLimit"].GetString());
        m_resourceLimitHasBeenSet = true;
    }

    if (value.HasMember("AdvanceLimit") && !value["AdvanceLimit"].IsNull())
    {
        if (!value["AdvanceLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaasPackageInfo.AdvanceLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advanceLimit = string(value["AdvanceLimit"].GetString());
        m_advanceLimitHasBeenSet = true;
    }

    if (value.HasMember("PackageDescription") && !value["PackageDescription"].IsNull())
    {
        if (!value["PackageDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaasPackageInfo.PackageDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageDescription = string(value["PackageDescription"].GetString());
        m_packageDescriptionHasBeenSet = true;
    }

    if (value.HasMember("IsExternal") && !value["IsExternal"].IsNull())
    {
        if (!value["IsExternal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaasPackageInfo.IsExternal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExternal = value["IsExternal"].GetBool();
        m_isExternalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaasPackageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_billTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billTags.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_advanceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advanceLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_packageDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_isExternalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExternal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExternal, allocator);
    }

}


string BaasPackageInfo::GetPackageName() const
{
    return m_packageName;
}

void BaasPackageInfo::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool BaasPackageInfo::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string BaasPackageInfo::GetPackageTitle() const
{
    return m_packageTitle;
}

void BaasPackageInfo::SetPackageTitle(const string& _packageTitle)
{
    m_packageTitle = _packageTitle;
    m_packageTitleHasBeenSet = true;
}

bool BaasPackageInfo::PackageTitleHasBeenSet() const
{
    return m_packageTitleHasBeenSet;
}

string BaasPackageInfo::GetGroupName() const
{
    return m_groupName;
}

void BaasPackageInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool BaasPackageInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string BaasPackageInfo::GetGroupTitle() const
{
    return m_groupTitle;
}

void BaasPackageInfo::SetGroupTitle(const string& _groupTitle)
{
    m_groupTitle = _groupTitle;
    m_groupTitleHasBeenSet = true;
}

bool BaasPackageInfo::GroupTitleHasBeenSet() const
{
    return m_groupTitleHasBeenSet;
}

string BaasPackageInfo::GetBillTags() const
{
    return m_billTags;
}

void BaasPackageInfo::SetBillTags(const string& _billTags)
{
    m_billTags = _billTags;
    m_billTagsHasBeenSet = true;
}

bool BaasPackageInfo::BillTagsHasBeenSet() const
{
    return m_billTagsHasBeenSet;
}

string BaasPackageInfo::GetResourceLimit() const
{
    return m_resourceLimit;
}

void BaasPackageInfo::SetResourceLimit(const string& _resourceLimit)
{
    m_resourceLimit = _resourceLimit;
    m_resourceLimitHasBeenSet = true;
}

bool BaasPackageInfo::ResourceLimitHasBeenSet() const
{
    return m_resourceLimitHasBeenSet;
}

string BaasPackageInfo::GetAdvanceLimit() const
{
    return m_advanceLimit;
}

void BaasPackageInfo::SetAdvanceLimit(const string& _advanceLimit)
{
    m_advanceLimit = _advanceLimit;
    m_advanceLimitHasBeenSet = true;
}

bool BaasPackageInfo::AdvanceLimitHasBeenSet() const
{
    return m_advanceLimitHasBeenSet;
}

string BaasPackageInfo::GetPackageDescription() const
{
    return m_packageDescription;
}

void BaasPackageInfo::SetPackageDescription(const string& _packageDescription)
{
    m_packageDescription = _packageDescription;
    m_packageDescriptionHasBeenSet = true;
}

bool BaasPackageInfo::PackageDescriptionHasBeenSet() const
{
    return m_packageDescriptionHasBeenSet;
}

bool BaasPackageInfo::GetIsExternal() const
{
    return m_isExternal;
}

void BaasPackageInfo::SetIsExternal(const bool& _isExternal)
{
    m_isExternal = _isExternal;
    m_isExternalHasBeenSet = true;
}

bool BaasPackageInfo::IsExternalHasBeenSet() const
{
    return m_isExternalHasBeenSet;
}

