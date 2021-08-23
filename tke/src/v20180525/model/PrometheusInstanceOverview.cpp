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

#include <tencentcloud/tke/v20180525/model/PrometheusInstanceOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PrometheusInstanceOverview::PrometheusInstanceOverview() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cOSBucketHasBeenSet(false),
    m_grafanaURLHasBeenSet(false),
    m_boundTotalHasBeenSet(false),
    m_boundNormalHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusInstanceOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceOverview.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceOverview.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceOverview.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceOverview.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceOverview.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("COSBucket") && !value["COSBucket"].IsNull())
    {
        if (!value["COSBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceOverview.COSBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cOSBucket = string(value["COSBucket"].GetString());
        m_cOSBucketHasBeenSet = true;
    }

    if (value.HasMember("GrafanaURL") && !value["GrafanaURL"].IsNull())
    {
        if (!value["GrafanaURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceOverview.GrafanaURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grafanaURL = string(value["GrafanaURL"].GetString());
        m_grafanaURLHasBeenSet = true;
    }

    if (value.HasMember("BoundTotal") && !value["BoundTotal"].IsNull())
    {
        if (!value["BoundTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceOverview.BoundTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_boundTotal = value["BoundTotal"].GetUint64();
        m_boundTotalHasBeenSet = true;
    }

    if (value.HasMember("BoundNormal") && !value["BoundNormal"].IsNull())
    {
        if (!value["BoundNormal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceOverview.BoundNormal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_boundNormal = value["BoundNormal"].GetUint64();
        m_boundNormalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusInstanceOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_cOSBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cOSBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_grafanaURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grafanaURL.c_str(), allocator).Move(), allocator);
    }

    if (m_boundTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boundTotal, allocator);
    }

    if (m_boundNormalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundNormal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boundNormal, allocator);
    }

}


string PrometheusInstanceOverview::GetInstanceId() const
{
    return m_instanceId;
}

void PrometheusInstanceOverview::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PrometheusInstanceOverview::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PrometheusInstanceOverview::GetName() const
{
    return m_name;
}

void PrometheusInstanceOverview::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PrometheusInstanceOverview::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PrometheusInstanceOverview::GetVpcId() const
{
    return m_vpcId;
}

void PrometheusInstanceOverview::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool PrometheusInstanceOverview::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string PrometheusInstanceOverview::GetSubnetId() const
{
    return m_subnetId;
}

void PrometheusInstanceOverview::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool PrometheusInstanceOverview::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string PrometheusInstanceOverview::GetStatus() const
{
    return m_status;
}

void PrometheusInstanceOverview::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PrometheusInstanceOverview::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PrometheusInstanceOverview::GetCOSBucket() const
{
    return m_cOSBucket;
}

void PrometheusInstanceOverview::SetCOSBucket(const string& _cOSBucket)
{
    m_cOSBucket = _cOSBucket;
    m_cOSBucketHasBeenSet = true;
}

bool PrometheusInstanceOverview::COSBucketHasBeenSet() const
{
    return m_cOSBucketHasBeenSet;
}

string PrometheusInstanceOverview::GetGrafanaURL() const
{
    return m_grafanaURL;
}

void PrometheusInstanceOverview::SetGrafanaURL(const string& _grafanaURL)
{
    m_grafanaURL = _grafanaURL;
    m_grafanaURLHasBeenSet = true;
}

bool PrometheusInstanceOverview::GrafanaURLHasBeenSet() const
{
    return m_grafanaURLHasBeenSet;
}

uint64_t PrometheusInstanceOverview::GetBoundTotal() const
{
    return m_boundTotal;
}

void PrometheusInstanceOverview::SetBoundTotal(const uint64_t& _boundTotal)
{
    m_boundTotal = _boundTotal;
    m_boundTotalHasBeenSet = true;
}

bool PrometheusInstanceOverview::BoundTotalHasBeenSet() const
{
    return m_boundTotalHasBeenSet;
}

uint64_t PrometheusInstanceOverview::GetBoundNormal() const
{
    return m_boundNormal;
}

void PrometheusInstanceOverview::SetBoundNormal(const uint64_t& _boundNormal)
{
    m_boundNormal = _boundNormal;
    m_boundNormalHasBeenSet = true;
}

bool PrometheusInstanceOverview::BoundNormalHasBeenSet() const
{
    return m_boundNormalHasBeenSet;
}

