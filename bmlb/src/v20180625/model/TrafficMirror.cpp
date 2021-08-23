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

#include <tencentcloud/bmlb/v20180625/model/TrafficMirror.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

TrafficMirror::TrafficMirror() :
    m_trafficMirrorIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_loadBalancerTypeHasBeenSet(false),
    m_healthSwitchHasBeenSet(false),
    m_healthNumHasBeenSet(false),
    m_unhealthNumHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_httpCheckDomainHasBeenSet(false),
    m_httpCheckPathHasBeenSet(false),
    m_httpCodesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_vpcNameHasBeenSet(false)
{
}

CoreInternalOutcome TrafficMirror::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TrafficMirrorId") && !value["TrafficMirrorId"].IsNull())
    {
        if (!value["TrafficMirrorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.TrafficMirrorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMirrorId = string(value["TrafficMirrorId"].GetString());
        m_trafficMirrorIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerType") && !value["LoadBalancerType"].IsNull())
    {
        if (!value["LoadBalancerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.LoadBalancerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerType = string(value["LoadBalancerType"].GetString());
        m_loadBalancerTypeHasBeenSet = true;
    }

    if (value.HasMember("HealthSwitch") && !value["HealthSwitch"].IsNull())
    {
        if (!value["HealthSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.HealthSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthSwitch = value["HealthSwitch"].GetInt64();
        m_healthSwitchHasBeenSet = true;
    }

    if (value.HasMember("HealthNum") && !value["HealthNum"].IsNull())
    {
        if (!value["HealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.HealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthNum = value["HealthNum"].GetInt64();
        m_healthNumHasBeenSet = true;
    }

    if (value.HasMember("UnhealthNum") && !value["UnhealthNum"].IsNull())
    {
        if (!value["UnhealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.UnhealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unhealthNum = value["UnhealthNum"].GetInt64();
        m_unhealthNumHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.IntervalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetInt64();
        m_intervalTimeHasBeenSet = true;
    }

    if (value.HasMember("HttpCheckDomain") && !value["HttpCheckDomain"].IsNull())
    {
        if (!value["HttpCheckDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.HttpCheckDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCheckDomain = string(value["HttpCheckDomain"].GetString());
        m_httpCheckDomainHasBeenSet = true;
    }

    if (value.HasMember("HttpCheckPath") && !value["HttpCheckPath"].IsNull())
    {
        if (!value["HttpCheckPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.HttpCheckPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCheckPath = string(value["HttpCheckPath"].GetString());
        m_httpCheckPathHasBeenSet = true;
    }

    if (value.HasMember("HttpCodes") && !value["HttpCodes"].IsNull())
    {
        if (!value["HttpCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.HttpCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["HttpCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_httpCodes.push_back((*itr).GetInt64());
        }
        m_httpCodesHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficMirror::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_trafficMirrorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficMirrorId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_healthSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthSwitch, allocator);
    }

    if (m_healthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthNum, allocator);
    }

    if (m_unhealthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhealthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhealthNum, allocator);
    }

    if (m_intervalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalTime, allocator);
    }

    if (m_httpCheckDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCheckDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpCheckDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_httpCheckPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCheckPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpCheckPath.c_str(), allocator).Move(), allocator);
    }

    if (m_httpCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_httpCodes.begin(); itr != m_httpCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

}


string TrafficMirror::GetTrafficMirrorId() const
{
    return m_trafficMirrorId;
}

void TrafficMirror::SetTrafficMirrorId(const string& _trafficMirrorId)
{
    m_trafficMirrorId = _trafficMirrorId;
    m_trafficMirrorIdHasBeenSet = true;
}

bool TrafficMirror::TrafficMirrorIdHasBeenSet() const
{
    return m_trafficMirrorIdHasBeenSet;
}

string TrafficMirror::GetAlias() const
{
    return m_alias;
}

void TrafficMirror::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool TrafficMirror::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string TrafficMirror::GetVpcId() const
{
    return m_vpcId;
}

void TrafficMirror::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool TrafficMirror::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string TrafficMirror::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void TrafficMirror::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool TrafficMirror::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

int64_t TrafficMirror::GetHealthSwitch() const
{
    return m_healthSwitch;
}

void TrafficMirror::SetHealthSwitch(const int64_t& _healthSwitch)
{
    m_healthSwitch = _healthSwitch;
    m_healthSwitchHasBeenSet = true;
}

bool TrafficMirror::HealthSwitchHasBeenSet() const
{
    return m_healthSwitchHasBeenSet;
}

int64_t TrafficMirror::GetHealthNum() const
{
    return m_healthNum;
}

void TrafficMirror::SetHealthNum(const int64_t& _healthNum)
{
    m_healthNum = _healthNum;
    m_healthNumHasBeenSet = true;
}

bool TrafficMirror::HealthNumHasBeenSet() const
{
    return m_healthNumHasBeenSet;
}

int64_t TrafficMirror::GetUnhealthNum() const
{
    return m_unhealthNum;
}

void TrafficMirror::SetUnhealthNum(const int64_t& _unhealthNum)
{
    m_unhealthNum = _unhealthNum;
    m_unhealthNumHasBeenSet = true;
}

bool TrafficMirror::UnhealthNumHasBeenSet() const
{
    return m_unhealthNumHasBeenSet;
}

int64_t TrafficMirror::GetIntervalTime() const
{
    return m_intervalTime;
}

void TrafficMirror::SetIntervalTime(const int64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool TrafficMirror::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

string TrafficMirror::GetHttpCheckDomain() const
{
    return m_httpCheckDomain;
}

void TrafficMirror::SetHttpCheckDomain(const string& _httpCheckDomain)
{
    m_httpCheckDomain = _httpCheckDomain;
    m_httpCheckDomainHasBeenSet = true;
}

bool TrafficMirror::HttpCheckDomainHasBeenSet() const
{
    return m_httpCheckDomainHasBeenSet;
}

string TrafficMirror::GetHttpCheckPath() const
{
    return m_httpCheckPath;
}

void TrafficMirror::SetHttpCheckPath(const string& _httpCheckPath)
{
    m_httpCheckPath = _httpCheckPath;
    m_httpCheckPathHasBeenSet = true;
}

bool TrafficMirror::HttpCheckPathHasBeenSet() const
{
    return m_httpCheckPathHasBeenSet;
}

vector<int64_t> TrafficMirror::GetHttpCodes() const
{
    return m_httpCodes;
}

void TrafficMirror::SetHttpCodes(const vector<int64_t>& _httpCodes)
{
    m_httpCodes = _httpCodes;
    m_httpCodesHasBeenSet = true;
}

bool TrafficMirror::HttpCodesHasBeenSet() const
{
    return m_httpCodesHasBeenSet;
}

string TrafficMirror::GetCreateTime() const
{
    return m_createTime;
}

void TrafficMirror::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TrafficMirror::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TrafficMirror::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void TrafficMirror::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool TrafficMirror::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string TrafficMirror::GetVpcName() const
{
    return m_vpcName;
}

void TrafficMirror::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool TrafficMirror::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

