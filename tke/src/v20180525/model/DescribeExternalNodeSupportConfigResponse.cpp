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

#include <tencentcloud/tke/v20180525/model/DescribeExternalNodeSupportConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeExternalNodeSupportConfigResponse::DescribeExternalNodeSupportConfigResponse() :
    m_clusterCIDRHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_aSHasBeenSet(false),
    m_switchIPHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failedReasonHasBeenSet(false),
    m_masterHasBeenSet(false),
    m_proxyHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_enabledPublicConnectHasBeenSet(false),
    m_publicConnectUrlHasBeenSet(false),
    m_publicCustomDomainHasBeenSet(false)
{
}

CoreInternalOutcome DescribeExternalNodeSupportConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterCIDR") && !rsp["ClusterCIDR"].IsNull())
    {
        if (!rsp["ClusterCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterCIDR = string(rsp["ClusterCIDR"].GetString());
        m_clusterCIDRHasBeenSet = true;
    }

    if (rsp.HasMember("NetworkType") && !rsp["NetworkType"].IsNull())
    {
        if (!rsp["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(rsp["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
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

    if (rsp.HasMember("Enabled") && !rsp["Enabled"].IsNull())
    {
        if (!rsp["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = rsp["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (rsp.HasMember("AS") && !rsp["AS"].IsNull())
    {
        if (!rsp["AS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aS = string(rsp["AS"].GetString());
        m_aSHasBeenSet = true;
    }

    if (rsp.HasMember("SwitchIP") && !rsp["SwitchIP"].IsNull())
    {
        if (!rsp["SwitchIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switchIP = string(rsp["SwitchIP"].GetString());
        m_switchIPHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("FailedReason") && !rsp["FailedReason"].IsNull())
    {
        if (!rsp["FailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedReason = string(rsp["FailedReason"].GetString());
        m_failedReasonHasBeenSet = true;
    }

    if (rsp.HasMember("Master") && !rsp["Master"].IsNull())
    {
        if (!rsp["Master"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Master` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_master = string(rsp["Master"].GetString());
        m_masterHasBeenSet = true;
    }

    if (rsp.HasMember("Proxy") && !rsp["Proxy"].IsNull())
    {
        if (!rsp["Proxy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Proxy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxy = string(rsp["Proxy"].GetString());
        m_proxyHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Progress` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Progress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Step item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_progress.push_back(item);
        }
        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("EnabledPublicConnect") && !rsp["EnabledPublicConnect"].IsNull())
    {
        if (!rsp["EnabledPublicConnect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnabledPublicConnect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabledPublicConnect = rsp["EnabledPublicConnect"].GetBool();
        m_enabledPublicConnectHasBeenSet = true;
    }

    if (rsp.HasMember("PublicConnectUrl") && !rsp["PublicConnectUrl"].IsNull())
    {
        if (!rsp["PublicConnectUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicConnectUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicConnectUrl = string(rsp["PublicConnectUrl"].GetString());
        m_publicConnectUrlHasBeenSet = true;
    }

    if (rsp.HasMember("PublicCustomDomain") && !rsp["PublicCustomDomain"].IsNull())
    {
        if (!rsp["PublicCustomDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicCustomDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicCustomDomain = string(rsp["PublicCustomDomain"].GetString());
        m_publicCustomDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeExternalNodeSupportConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_aSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aS.c_str(), allocator).Move(), allocator);
    }

    if (m_switchIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switchIP.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_failedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_masterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Master";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_master.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proxy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxy.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_progress.begin(); itr != m_progress.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enabledPublicConnectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnabledPublicConnect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabledPublicConnect, allocator);
    }

    if (m_publicConnectUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicConnectUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicConnectUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_publicCustomDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicCustomDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicCustomDomain.c_str(), allocator).Move(), allocator);
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


string DescribeExternalNodeSupportConfigResponse::GetClusterCIDR() const
{
    return m_clusterCIDR;
}

bool DescribeExternalNodeSupportConfigResponse::ClusterCIDRHasBeenSet() const
{
    return m_clusterCIDRHasBeenSet;
}

string DescribeExternalNodeSupportConfigResponse::GetNetworkType() const
{
    return m_networkType;
}

bool DescribeExternalNodeSupportConfigResponse::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string DescribeExternalNodeSupportConfigResponse::GetSubnetId() const
{
    return m_subnetId;
}

bool DescribeExternalNodeSupportConfigResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

bool DescribeExternalNodeSupportConfigResponse::GetEnabled() const
{
    return m_enabled;
}

bool DescribeExternalNodeSupportConfigResponse::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string DescribeExternalNodeSupportConfigResponse::GetAS() const
{
    return m_aS;
}

bool DescribeExternalNodeSupportConfigResponse::ASHasBeenSet() const
{
    return m_aSHasBeenSet;
}

string DescribeExternalNodeSupportConfigResponse::GetSwitchIP() const
{
    return m_switchIP;
}

bool DescribeExternalNodeSupportConfigResponse::SwitchIPHasBeenSet() const
{
    return m_switchIPHasBeenSet;
}

string DescribeExternalNodeSupportConfigResponse::GetStatus() const
{
    return m_status;
}

bool DescribeExternalNodeSupportConfigResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeExternalNodeSupportConfigResponse::GetFailedReason() const
{
    return m_failedReason;
}

bool DescribeExternalNodeSupportConfigResponse::FailedReasonHasBeenSet() const
{
    return m_failedReasonHasBeenSet;
}

string DescribeExternalNodeSupportConfigResponse::GetMaster() const
{
    return m_master;
}

bool DescribeExternalNodeSupportConfigResponse::MasterHasBeenSet() const
{
    return m_masterHasBeenSet;
}

string DescribeExternalNodeSupportConfigResponse::GetProxy() const
{
    return m_proxy;
}

bool DescribeExternalNodeSupportConfigResponse::ProxyHasBeenSet() const
{
    return m_proxyHasBeenSet;
}

vector<Step> DescribeExternalNodeSupportConfigResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeExternalNodeSupportConfigResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

bool DescribeExternalNodeSupportConfigResponse::GetEnabledPublicConnect() const
{
    return m_enabledPublicConnect;
}

bool DescribeExternalNodeSupportConfigResponse::EnabledPublicConnectHasBeenSet() const
{
    return m_enabledPublicConnectHasBeenSet;
}

string DescribeExternalNodeSupportConfigResponse::GetPublicConnectUrl() const
{
    return m_publicConnectUrl;
}

bool DescribeExternalNodeSupportConfigResponse::PublicConnectUrlHasBeenSet() const
{
    return m_publicConnectUrlHasBeenSet;
}

string DescribeExternalNodeSupportConfigResponse::GetPublicCustomDomain() const
{
    return m_publicCustomDomain;
}

bool DescribeExternalNodeSupportConfigResponse::PublicCustomDomainHasBeenSet() const
{
    return m_publicCustomDomainHasBeenSet;
}


