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

#include <tencentcloud/tcb/v20180608/model/PlanInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PlanInfo::PlanInfo() :
    m_packageIdHasBeenSet(false),
    m_packageTitleHasBeenSet(false),
    m_packageDescriptionHasBeenSet(false),
    m_unitPriceHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_resourceLimitHasBeenSet(false)
{
}

CoreInternalOutcome PlanInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("PackageTitle") && !value["PackageTitle"].IsNull())
    {
        if (!value["PackageTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.PackageTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageTitle = string(value["PackageTitle"].GetString());
        m_packageTitleHasBeenSet = true;
    }

    if (value.HasMember("PackageDescription") && !value["PackageDescription"].IsNull())
    {
        if (!value["PackageDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.PackageDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageDescription = string(value["PackageDescription"].GetString());
        m_packageDescriptionHasBeenSet = true;
    }

    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.UnitPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitPrice = string(value["UnitPrice"].GetString());
        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceLimit") && !value["ResourceLimit"].IsNull())
    {
        if (!value["ResourceLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.ResourceLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceLimit = string(value["ResourceLimit"].GetString());
        m_resourceLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlanInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_packageDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_unitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitPrice.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceLimit.c_str(), allocator).Move(), allocator);
    }

}


string PlanInfo::GetPackageId() const
{
    return m_packageId;
}

void PlanInfo::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool PlanInfo::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string PlanInfo::GetPackageTitle() const
{
    return m_packageTitle;
}

void PlanInfo::SetPackageTitle(const string& _packageTitle)
{
    m_packageTitle = _packageTitle;
    m_packageTitleHasBeenSet = true;
}

bool PlanInfo::PackageTitleHasBeenSet() const
{
    return m_packageTitleHasBeenSet;
}

string PlanInfo::GetPackageDescription() const
{
    return m_packageDescription;
}

void PlanInfo::SetPackageDescription(const string& _packageDescription)
{
    m_packageDescription = _packageDescription;
    m_packageDescriptionHasBeenSet = true;
}

bool PlanInfo::PackageDescriptionHasBeenSet() const
{
    return m_packageDescriptionHasBeenSet;
}

string PlanInfo::GetUnitPrice() const
{
    return m_unitPrice;
}

void PlanInfo::SetUnitPrice(const string& _unitPrice)
{
    m_unitPrice = _unitPrice;
    m_unitPriceHasBeenSet = true;
}

bool PlanInfo::UnitPriceHasBeenSet() const
{
    return m_unitPriceHasBeenSet;
}

string PlanInfo::GetPackageType() const
{
    return m_packageType;
}

void PlanInfo::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool PlanInfo::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string PlanInfo::GetResourceLimit() const
{
    return m_resourceLimit;
}

void PlanInfo::SetResourceLimit(const string& _resourceLimit)
{
    m_resourceLimit = _resourceLimit;
    m_resourceLimitHasBeenSet = true;
}

bool PlanInfo::ResourceLimitHasBeenSet() const
{
    return m_resourceLimitHasBeenSet;
}

