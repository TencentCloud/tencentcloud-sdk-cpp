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

#include <tencentcloud/cynosdb/v20190107/model/CreateResourcePackageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CreateResourcePackageRequest::CreateResourcePackageRequest() :
    m_instanceTypeHasBeenSet(false),
    m_packageRegionHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_packageSpecHasBeenSet(false),
    m_expireDayHasBeenSet(false),
    m_packageCountHasBeenSet(false),
    m_packageNameHasBeenSet(false)
{
}

string CreateResourcePackageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_packageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_packageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_packageSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_packageSpec, allocator);
    }

    if (m_expireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireDay, allocator);
    }

    if (m_packageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_packageCount, allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateResourcePackageRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateResourcePackageRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateResourcePackageRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CreateResourcePackageRequest::GetPackageRegion() const
{
    return m_packageRegion;
}

void CreateResourcePackageRequest::SetPackageRegion(const string& _packageRegion)
{
    m_packageRegion = _packageRegion;
    m_packageRegionHasBeenSet = true;
}

bool CreateResourcePackageRequest::PackageRegionHasBeenSet() const
{
    return m_packageRegionHasBeenSet;
}

string CreateResourcePackageRequest::GetPackageType() const
{
    return m_packageType;
}

void CreateResourcePackageRequest::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool CreateResourcePackageRequest::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string CreateResourcePackageRequest::GetPackageVersion() const
{
    return m_packageVersion;
}

void CreateResourcePackageRequest::SetPackageVersion(const string& _packageVersion)
{
    m_packageVersion = _packageVersion;
    m_packageVersionHasBeenSet = true;
}

bool CreateResourcePackageRequest::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}

double CreateResourcePackageRequest::GetPackageSpec() const
{
    return m_packageSpec;
}

void CreateResourcePackageRequest::SetPackageSpec(const double& _packageSpec)
{
    m_packageSpec = _packageSpec;
    m_packageSpecHasBeenSet = true;
}

bool CreateResourcePackageRequest::PackageSpecHasBeenSet() const
{
    return m_packageSpecHasBeenSet;
}

int64_t CreateResourcePackageRequest::GetExpireDay() const
{
    return m_expireDay;
}

void CreateResourcePackageRequest::SetExpireDay(const int64_t& _expireDay)
{
    m_expireDay = _expireDay;
    m_expireDayHasBeenSet = true;
}

bool CreateResourcePackageRequest::ExpireDayHasBeenSet() const
{
    return m_expireDayHasBeenSet;
}

int64_t CreateResourcePackageRequest::GetPackageCount() const
{
    return m_packageCount;
}

void CreateResourcePackageRequest::SetPackageCount(const int64_t& _packageCount)
{
    m_packageCount = _packageCount;
    m_packageCountHasBeenSet = true;
}

bool CreateResourcePackageRequest::PackageCountHasBeenSet() const
{
    return m_packageCountHasBeenSet;
}

string CreateResourcePackageRequest::GetPackageName() const
{
    return m_packageName;
}

void CreateResourcePackageRequest::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool CreateResourcePackageRequest::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}


