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

#include <tencentcloud/cynosdb/v20190107/model/SalePackageSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

SalePackageSpec::SalePackageSpec() :
    m_packageRegionHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_minPackageSpecHasBeenSet(false),
    m_maxPackageSpecHasBeenSet(false),
    m_expireDayHasBeenSet(false)
{
}

CoreInternalOutcome SalePackageSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageRegion") && !value["PackageRegion"].IsNull())
    {
        if (!value["PackageRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SalePackageSpec.PackageRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageRegion = string(value["PackageRegion"].GetString());
        m_packageRegionHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SalePackageSpec.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("PackageVersion") && !value["PackageVersion"].IsNull())
    {
        if (!value["PackageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SalePackageSpec.PackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageVersion = string(value["PackageVersion"].GetString());
        m_packageVersionHasBeenSet = true;
    }

    if (value.HasMember("MinPackageSpec") && !value["MinPackageSpec"].IsNull())
    {
        if (!value["MinPackageSpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SalePackageSpec.MinPackageSpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minPackageSpec = value["MinPackageSpec"].GetDouble();
        m_minPackageSpecHasBeenSet = true;
    }

    if (value.HasMember("MaxPackageSpec") && !value["MaxPackageSpec"].IsNull())
    {
        if (!value["MaxPackageSpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SalePackageSpec.MaxPackageSpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxPackageSpec = value["MaxPackageSpec"].GetDouble();
        m_maxPackageSpecHasBeenSet = true;
    }

    if (value.HasMember("ExpireDay") && !value["ExpireDay"].IsNull())
    {
        if (!value["ExpireDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SalePackageSpec.ExpireDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireDay = value["ExpireDay"].GetInt64();
        m_expireDayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SalePackageSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_packageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_minPackageSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinPackageSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minPackageSpec, allocator);
    }

    if (m_maxPackageSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPackageSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPackageSpec, allocator);
    }

    if (m_expireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireDay, allocator);
    }

}


string SalePackageSpec::GetPackageRegion() const
{
    return m_packageRegion;
}

void SalePackageSpec::SetPackageRegion(const string& _packageRegion)
{
    m_packageRegion = _packageRegion;
    m_packageRegionHasBeenSet = true;
}

bool SalePackageSpec::PackageRegionHasBeenSet() const
{
    return m_packageRegionHasBeenSet;
}

string SalePackageSpec::GetPackageType() const
{
    return m_packageType;
}

void SalePackageSpec::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool SalePackageSpec::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string SalePackageSpec::GetPackageVersion() const
{
    return m_packageVersion;
}

void SalePackageSpec::SetPackageVersion(const string& _packageVersion)
{
    m_packageVersion = _packageVersion;
    m_packageVersionHasBeenSet = true;
}

bool SalePackageSpec::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}

double SalePackageSpec::GetMinPackageSpec() const
{
    return m_minPackageSpec;
}

void SalePackageSpec::SetMinPackageSpec(const double& _minPackageSpec)
{
    m_minPackageSpec = _minPackageSpec;
    m_minPackageSpecHasBeenSet = true;
}

bool SalePackageSpec::MinPackageSpecHasBeenSet() const
{
    return m_minPackageSpecHasBeenSet;
}

double SalePackageSpec::GetMaxPackageSpec() const
{
    return m_maxPackageSpec;
}

void SalePackageSpec::SetMaxPackageSpec(const double& _maxPackageSpec)
{
    m_maxPackageSpec = _maxPackageSpec;
    m_maxPackageSpecHasBeenSet = true;
}

bool SalePackageSpec::MaxPackageSpecHasBeenSet() const
{
    return m_maxPackageSpecHasBeenSet;
}

int64_t SalePackageSpec::GetExpireDay() const
{
    return m_expireDay;
}

void SalePackageSpec::SetExpireDay(const int64_t& _expireDay)
{
    m_expireDay = _expireDay;
    m_expireDayHasBeenSet = true;
}

bool SalePackageSpec::ExpireDayHasBeenSet() const
{
    return m_expireDayHasBeenSet;
}

