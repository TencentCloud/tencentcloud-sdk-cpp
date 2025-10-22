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

#include <tencentcloud/tsf/v20180326/model/DescribeResourceConfigResultV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeResourceConfigResultV2::DescribeResourceConfigResultV2() :
    m_stsHasBeenSet(false),
    m_licenseHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_packageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeResourceConfigResultV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sts") && !value["Sts"].IsNull())
    {
        if (!value["Sts"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfigResultV2.Sts` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sts.Deserialize(value["Sts"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stsHasBeenSet = true;
    }

    if (value.HasMember("License") && !value["License"].IsNull())
    {
        if (!value["License"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfigResultV2.License` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_license.Deserialize(value["License"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_licenseHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfigResultV2.Group` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_group.Deserialize(value["Group"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_groupHasBeenSet = true;
    }

    if (value.HasMember("Instance") && !value["Instance"].IsNull())
    {
        if (!value["Instance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfigResultV2.Instance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instance.Deserialize(value["Instance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceHasBeenSet = true;
    }

    if (value.HasMember("Cluster") && !value["Cluster"].IsNull())
    {
        if (!value["Cluster"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfigResultV2.Cluster` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cluster.Deserialize(value["Cluster"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterHasBeenSet = true;
    }

    if (value.HasMember("Package") && !value["Package"].IsNull())
    {
        if (!value["Package"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfigResultV2.Package` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_package.Deserialize(value["Package"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_packageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeResourceConfigResultV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sts.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_licenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "License";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_license.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_group.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cluster.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_packageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Package";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_package.ToJsonObject(value[key.c_str()], allocator);
    }

}


DescribeResourceConfigSts DescribeResourceConfigResultV2::GetSts() const
{
    return m_sts;
}

void DescribeResourceConfigResultV2::SetSts(const DescribeResourceConfigSts& _sts)
{
    m_sts = _sts;
    m_stsHasBeenSet = true;
}

bool DescribeResourceConfigResultV2::StsHasBeenSet() const
{
    return m_stsHasBeenSet;
}

DescribeResourceConfigLicense DescribeResourceConfigResultV2::GetLicense() const
{
    return m_license;
}

void DescribeResourceConfigResultV2::SetLicense(const DescribeResourceConfigLicense& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool DescribeResourceConfigResultV2::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

GroupResourceConfig DescribeResourceConfigResultV2::GetGroup() const
{
    return m_group;
}

void DescribeResourceConfigResultV2::SetGroup(const GroupResourceConfig& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool DescribeResourceConfigResultV2::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

InstanceResourceConfig DescribeResourceConfigResultV2::GetInstance() const
{
    return m_instance;
}

void DescribeResourceConfigResultV2::SetInstance(const InstanceResourceConfig& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool DescribeResourceConfigResultV2::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

DescribeResourceConfigCluster DescribeResourceConfigResultV2::GetCluster() const
{
    return m_cluster;
}

void DescribeResourceConfigResultV2::SetCluster(const DescribeResourceConfigCluster& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool DescribeResourceConfigResultV2::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

PackageConfig DescribeResourceConfigResultV2::GetPackage() const
{
    return m_package;
}

void DescribeResourceConfigResultV2::SetPackage(const PackageConfig& _package)
{
    m_package = _package;
    m_packageHasBeenSet = true;
}

bool DescribeResourceConfigResultV2::PackageHasBeenSet() const
{
    return m_packageHasBeenSet;
}

