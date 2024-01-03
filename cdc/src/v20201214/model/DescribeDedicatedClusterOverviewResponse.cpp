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

#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

DescribeDedicatedClusterOverviewResponse::DescribeDedicatedClusterOverviewResponse() :
    m_cvmCountHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_vpnConnectionStateHasBeenSet(false),
    m_vpngwBandwidthDataHasBeenSet(false),
    m_localNetInfoHasBeenSet(false),
    m_vpnConnectionBandwidthDataHasBeenSet(false),
    m_hostDetailInfoHasBeenSet(false),
    m_hostStandbyCountHasBeenSet(false),
    m_hostNormalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDedicatedClusterOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CvmCount") && !rsp["CvmCount"].IsNull())
    {
        if (!rsp["CvmCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CvmCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cvmCount = rsp["CvmCount"].GetUint64();
        m_cvmCountHasBeenSet = true;
    }

    if (rsp.HasMember("HostCount") && !rsp["HostCount"].IsNull())
    {
        if (!rsp["HostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = rsp["HostCount"].GetUint64();
        m_hostCountHasBeenSet = true;
    }

    if (rsp.HasMember("VpnConnectionState") && !rsp["VpnConnectionState"].IsNull())
    {
        if (!rsp["VpnConnectionState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnConnectionState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnConnectionState = string(rsp["VpnConnectionState"].GetString());
        m_vpnConnectionStateHasBeenSet = true;
    }

    if (rsp.HasMember("VpngwBandwidthData") && !rsp["VpngwBandwidthData"].IsNull())
    {
        if (!rsp["VpngwBandwidthData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VpngwBandwidthData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vpngwBandwidthData.Deserialize(rsp["VpngwBandwidthData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vpngwBandwidthDataHasBeenSet = true;
    }

    if (rsp.HasMember("LocalNetInfo") && !rsp["LocalNetInfo"].IsNull())
    {
        if (!rsp["LocalNetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LocalNetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_localNetInfo.Deserialize(rsp["LocalNetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_localNetInfoHasBeenSet = true;
    }

    if (rsp.HasMember("VpnConnectionBandwidthData") && !rsp["VpnConnectionBandwidthData"].IsNull())
    {
        if (!rsp["VpnConnectionBandwidthData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpnConnectionBandwidthData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VpnConnectionBandwidthData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpngwBandwidthData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpnConnectionBandwidthData.push_back(item);
        }
        m_vpnConnectionBandwidthDataHasBeenSet = true;
    }

    if (rsp.HasMember("HostDetailInfo") && !rsp["HostDetailInfo"].IsNull())
    {
        if (!rsp["HostDetailInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostDetailInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["HostDetailInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HostDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hostDetailInfo.push_back(item);
        }
        m_hostDetailInfoHasBeenSet = true;
    }

    if (rsp.HasMember("HostStandbyCount") && !rsp["HostStandbyCount"].IsNull())
    {
        if (!rsp["HostStandbyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostStandbyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostStandbyCount = rsp["HostStandbyCount"].GetUint64();
        m_hostStandbyCountHasBeenSet = true;
    }

    if (rsp.HasMember("HostNormalCount") && !rsp["HostNormalCount"].IsNull())
    {
        if (!rsp["HostNormalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostNormalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostNormalCount = rsp["HostNormalCount"].GetUint64();
        m_hostNormalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDedicatedClusterOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cvmCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvmCount, allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_vpnConnectionStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnConnectionState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpnConnectionState.c_str(), allocator).Move(), allocator);
    }

    if (m_vpngwBandwidthDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpngwBandwidthData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpngwBandwidthData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_localNetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalNetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_localNetInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vpnConnectionBandwidthDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnConnectionBandwidthData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpnConnectionBandwidthData.begin(); itr != m_vpnConnectionBandwidthData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hostDetailInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostDetailInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hostDetailInfo.begin(); itr != m_hostDetailInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hostStandbyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostStandbyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostStandbyCount, allocator);
    }

    if (m_hostNormalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostNormalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostNormalCount, allocator);
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


uint64_t DescribeDedicatedClusterOverviewResponse::GetCvmCount() const
{
    return m_cvmCount;
}

bool DescribeDedicatedClusterOverviewResponse::CvmCountHasBeenSet() const
{
    return m_cvmCountHasBeenSet;
}

uint64_t DescribeDedicatedClusterOverviewResponse::GetHostCount() const
{
    return m_hostCount;
}

bool DescribeDedicatedClusterOverviewResponse::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

string DescribeDedicatedClusterOverviewResponse::GetVpnConnectionState() const
{
    return m_vpnConnectionState;
}

bool DescribeDedicatedClusterOverviewResponse::VpnConnectionStateHasBeenSet() const
{
    return m_vpnConnectionStateHasBeenSet;
}

VpngwBandwidthData DescribeDedicatedClusterOverviewResponse::GetVpngwBandwidthData() const
{
    return m_vpngwBandwidthData;
}

bool DescribeDedicatedClusterOverviewResponse::VpngwBandwidthDataHasBeenSet() const
{
    return m_vpngwBandwidthDataHasBeenSet;
}

LocalNetInfo DescribeDedicatedClusterOverviewResponse::GetLocalNetInfo() const
{
    return m_localNetInfo;
}

bool DescribeDedicatedClusterOverviewResponse::LocalNetInfoHasBeenSet() const
{
    return m_localNetInfoHasBeenSet;
}

vector<VpngwBandwidthData> DescribeDedicatedClusterOverviewResponse::GetVpnConnectionBandwidthData() const
{
    return m_vpnConnectionBandwidthData;
}

bool DescribeDedicatedClusterOverviewResponse::VpnConnectionBandwidthDataHasBeenSet() const
{
    return m_vpnConnectionBandwidthDataHasBeenSet;
}

vector<HostDetailInfo> DescribeDedicatedClusterOverviewResponse::GetHostDetailInfo() const
{
    return m_hostDetailInfo;
}

bool DescribeDedicatedClusterOverviewResponse::HostDetailInfoHasBeenSet() const
{
    return m_hostDetailInfoHasBeenSet;
}

uint64_t DescribeDedicatedClusterOverviewResponse::GetHostStandbyCount() const
{
    return m_hostStandbyCount;
}

bool DescribeDedicatedClusterOverviewResponse::HostStandbyCountHasBeenSet() const
{
    return m_hostStandbyCountHasBeenSet;
}

uint64_t DescribeDedicatedClusterOverviewResponse::GetHostNormalCount() const
{
    return m_hostNormalCount;
}

bool DescribeDedicatedClusterOverviewResponse::HostNormalCountHasBeenSet() const
{
    return m_hostNormalCountHasBeenSet;
}


