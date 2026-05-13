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

#include <tencentcloud/csip/v20221121/model/DspmIp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIp::DspmIp() :
    m_ipHasBeenSet(false),
    m_ipTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_isRemarkedHasBeenSet(false),
    m_resourceInstanceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_isNewIpHasBeenSet(false)
{
}

CoreInternalOutcome DspmIp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIp.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("IpType") && !value["IpType"].IsNull())
    {
        if (!value["IpType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIp.IpType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipType = string(value["IpType"].GetString());
        m_ipTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIp.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("IsRemarked") && !value["IsRemarked"].IsNull())
    {
        if (!value["IsRemarked"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIp.IsRemarked` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRemarked = value["IsRemarked"].GetInt64();
        m_isRemarkedHasBeenSet = true;
    }

    if (value.HasMember("ResourceInstanceId") && !value["ResourceInstanceId"].IsNull())
    {
        if (!value["ResourceInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIp.ResourceInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceInstanceId = string(value["ResourceInstanceId"].GetString());
        m_resourceInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIp.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIp.Area` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_area.Deserialize(value["Area"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_areaHasBeenSet = true;
    }

    if (value.HasMember("IsNewIp") && !value["IsNewIp"].IsNull())
    {
        if (!value["IsNewIp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIp.IsNewIp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNewIp = value["IsNewIp"].GetInt64();
        m_isNewIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmIp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_ipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_isRemarkedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRemarked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRemarked, allocator);
    }

    if (m_resourceInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_area.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isNewIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewIp, allocator);
    }

}


string DspmIp::GetIp() const
{
    return m_ip;
}

void DspmIp::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DspmIp::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DspmIp::GetIpType() const
{
    return m_ipType;
}

void DspmIp::SetIpType(const string& _ipType)
{
    m_ipType = _ipType;
    m_ipTypeHasBeenSet = true;
}

bool DspmIp::IpTypeHasBeenSet() const
{
    return m_ipTypeHasBeenSet;
}

string DspmIp::GetRemark() const
{
    return m_remark;
}

void DspmIp::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DspmIp::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t DspmIp::GetIsRemarked() const
{
    return m_isRemarked;
}

void DspmIp::SetIsRemarked(const int64_t& _isRemarked)
{
    m_isRemarked = _isRemarked;
    m_isRemarkedHasBeenSet = true;
}

bool DspmIp::IsRemarkedHasBeenSet() const
{
    return m_isRemarkedHasBeenSet;
}

string DspmIp::GetResourceInstanceId() const
{
    return m_resourceInstanceId;
}

void DspmIp::SetResourceInstanceId(const string& _resourceInstanceId)
{
    m_resourceInstanceId = _resourceInstanceId;
    m_resourceInstanceIdHasBeenSet = true;
}

bool DspmIp::ResourceInstanceIdHasBeenSet() const
{
    return m_resourceInstanceIdHasBeenSet;
}

string DspmIp::GetResourceType() const
{
    return m_resourceType;
}

void DspmIp::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DspmIp::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

DspmArea DspmIp::GetArea() const
{
    return m_area;
}

void DspmIp::SetArea(const DspmArea& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DspmIp::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

int64_t DspmIp::GetIsNewIp() const
{
    return m_isNewIp;
}

void DspmIp::SetIsNewIp(const int64_t& _isNewIp)
{
    m_isNewIp = _isNewIp;
    m_isNewIpHasBeenSet = true;
}

bool DspmIp::IsNewIpHasBeenSet() const
{
    return m_isNewIpHasBeenSet;
}

