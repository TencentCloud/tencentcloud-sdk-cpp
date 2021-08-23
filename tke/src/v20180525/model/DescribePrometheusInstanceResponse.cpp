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

#include <tencentcloud/tke/v20180525/model/DescribePrometheusInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribePrometheusInstanceResponse::DescribePrometheusInstanceResponse() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_cOSBucketHasBeenSet(false),
    m_queryAddressHasBeenSet(false),
    m_grafanaHasBeenSet(false),
    m_alertManagerUrlHasBeenSet(false)
{
}

CoreInternalOutcome DescribePrometheusInstanceResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("VpcId") && !rsp["VpcId"].IsNull())
    {
        if (!rsp["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(rsp["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetId") && !rsp["SubnetId"].IsNull())
    {
        if (!rsp["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(rsp["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (rsp.HasMember("COSBucket") && !rsp["COSBucket"].IsNull())
    {
        if (!rsp["COSBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `COSBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cOSBucket = string(rsp["COSBucket"].GetString());
        m_cOSBucketHasBeenSet = true;
    }

    if (rsp.HasMember("QueryAddress") && !rsp["QueryAddress"].IsNull())
    {
        if (!rsp["QueryAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryAddress = string(rsp["QueryAddress"].GetString());
        m_queryAddressHasBeenSet = true;
    }

    if (rsp.HasMember("Grafana") && !rsp["Grafana"].IsNull())
    {
        if (!rsp["Grafana"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Grafana` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_grafana.Deserialize(rsp["Grafana"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_grafanaHasBeenSet = true;
    }

    if (rsp.HasMember("AlertManagerUrl") && !rsp["AlertManagerUrl"].IsNull())
    {
        if (!rsp["AlertManagerUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertManagerUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertManagerUrl = string(rsp["AlertManagerUrl"].GetString());
        m_alertManagerUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePrometheusInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_cOSBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cOSBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_queryAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_grafanaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grafana";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_grafana.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_alertManagerUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertManagerUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertManagerUrl.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribePrometheusInstanceResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribePrometheusInstanceResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribePrometheusInstanceResponse::GetName() const
{
    return m_name;
}

bool DescribePrometheusInstanceResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribePrometheusInstanceResponse::GetVpcId() const
{
    return m_vpcId;
}

bool DescribePrometheusInstanceResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribePrometheusInstanceResponse::GetSubnetId() const
{
    return m_subnetId;
}

bool DescribePrometheusInstanceResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DescribePrometheusInstanceResponse::GetCOSBucket() const
{
    return m_cOSBucket;
}

bool DescribePrometheusInstanceResponse::COSBucketHasBeenSet() const
{
    return m_cOSBucketHasBeenSet;
}

string DescribePrometheusInstanceResponse::GetQueryAddress() const
{
    return m_queryAddress;
}

bool DescribePrometheusInstanceResponse::QueryAddressHasBeenSet() const
{
    return m_queryAddressHasBeenSet;
}

PrometheusGrafanaInfo DescribePrometheusInstanceResponse::GetGrafana() const
{
    return m_grafana;
}

bool DescribePrometheusInstanceResponse::GrafanaHasBeenSet() const
{
    return m_grafanaHasBeenSet;
}

string DescribePrometheusInstanceResponse::GetAlertManagerUrl() const
{
    return m_alertManagerUrl;
}

bool DescribePrometheusInstanceResponse::AlertManagerUrlHasBeenSet() const
{
    return m_alertManagerUrlHasBeenSet;
}


