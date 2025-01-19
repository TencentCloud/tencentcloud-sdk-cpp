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

#include <tencentcloud/cvm/v20170312/model/HpcClusterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

HpcClusterInfo::HpcClusterInfo() :
    m_hpcClusterIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_cvmQuotaTotalHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_currentNumHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_hpcClusterTypeHasBeenSet(false),
    m_hpcClusterBusinessIdHasBeenSet(false),
    m_hpcClusterNetModeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome HpcClusterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HpcClusterId") && !value["HpcClusterId"].IsNull())
    {
        if (!value["HpcClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HpcClusterInfo.HpcClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hpcClusterId = string(value["HpcClusterId"].GetString());
        m_hpcClusterIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HpcClusterInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HpcClusterInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CvmQuotaTotal") && !value["CvmQuotaTotal"].IsNull())
    {
        if (!value["CvmQuotaTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HpcClusterInfo.CvmQuotaTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cvmQuotaTotal = value["CvmQuotaTotal"].GetUint64();
        m_cvmQuotaTotalHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HpcClusterInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("CurrentNum") && !value["CurrentNum"].IsNull())
    {
        if (!value["CurrentNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HpcClusterInfo.CurrentNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentNum = value["CurrentNum"].GetUint64();
        m_currentNumHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HpcClusterInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceIds") && !value["InstanceIds"].IsNull())
    {
        if (!value["InstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HpcClusterInfo.InstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIds.push_back((*itr).GetString());
        }
        m_instanceIdsHasBeenSet = true;
    }

    if (value.HasMember("HpcClusterType") && !value["HpcClusterType"].IsNull())
    {
        if (!value["HpcClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HpcClusterInfo.HpcClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hpcClusterType = string(value["HpcClusterType"].GetString());
        m_hpcClusterTypeHasBeenSet = true;
    }

    if (value.HasMember("HpcClusterBusinessId") && !value["HpcClusterBusinessId"].IsNull())
    {
        if (!value["HpcClusterBusinessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HpcClusterInfo.HpcClusterBusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hpcClusterBusinessId = string(value["HpcClusterBusinessId"].GetString());
        m_hpcClusterBusinessIdHasBeenSet = true;
    }

    if (value.HasMember("HpcClusterNetMode") && !value["HpcClusterNetMode"].IsNull())
    {
        if (!value["HpcClusterNetMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HpcClusterInfo.HpcClusterNetMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hpcClusterNetMode = value["HpcClusterNetMode"].GetUint64();
        m_hpcClusterNetModeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HpcClusterInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HpcClusterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hpcClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HpcClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hpcClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmQuotaTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmQuotaTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvmQuotaTotal, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_currentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentNum, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hpcClusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HpcClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hpcClusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_hpcClusterBusinessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HpcClusterBusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hpcClusterBusinessId.c_str(), allocator).Move(), allocator);
    }

    if (m_hpcClusterNetModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HpcClusterNetMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hpcClusterNetMode, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string HpcClusterInfo::GetHpcClusterId() const
{
    return m_hpcClusterId;
}

void HpcClusterInfo::SetHpcClusterId(const string& _hpcClusterId)
{
    m_hpcClusterId = _hpcClusterId;
    m_hpcClusterIdHasBeenSet = true;
}

bool HpcClusterInfo::HpcClusterIdHasBeenSet() const
{
    return m_hpcClusterIdHasBeenSet;
}

string HpcClusterInfo::GetName() const
{
    return m_name;
}

void HpcClusterInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HpcClusterInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string HpcClusterInfo::GetRemark() const
{
    return m_remark;
}

void HpcClusterInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool HpcClusterInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t HpcClusterInfo::GetCvmQuotaTotal() const
{
    return m_cvmQuotaTotal;
}

void HpcClusterInfo::SetCvmQuotaTotal(const uint64_t& _cvmQuotaTotal)
{
    m_cvmQuotaTotal = _cvmQuotaTotal;
    m_cvmQuotaTotalHasBeenSet = true;
}

bool HpcClusterInfo::CvmQuotaTotalHasBeenSet() const
{
    return m_cvmQuotaTotalHasBeenSet;
}

string HpcClusterInfo::GetZone() const
{
    return m_zone;
}

void HpcClusterInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool HpcClusterInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t HpcClusterInfo::GetCurrentNum() const
{
    return m_currentNum;
}

void HpcClusterInfo::SetCurrentNum(const uint64_t& _currentNum)
{
    m_currentNum = _currentNum;
    m_currentNumHasBeenSet = true;
}

bool HpcClusterInfo::CurrentNumHasBeenSet() const
{
    return m_currentNumHasBeenSet;
}

string HpcClusterInfo::GetCreateTime() const
{
    return m_createTime;
}

void HpcClusterInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HpcClusterInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<string> HpcClusterInfo::GetInstanceIds() const
{
    return m_instanceIds;
}

void HpcClusterInfo::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool HpcClusterInfo::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string HpcClusterInfo::GetHpcClusterType() const
{
    return m_hpcClusterType;
}

void HpcClusterInfo::SetHpcClusterType(const string& _hpcClusterType)
{
    m_hpcClusterType = _hpcClusterType;
    m_hpcClusterTypeHasBeenSet = true;
}

bool HpcClusterInfo::HpcClusterTypeHasBeenSet() const
{
    return m_hpcClusterTypeHasBeenSet;
}

string HpcClusterInfo::GetHpcClusterBusinessId() const
{
    return m_hpcClusterBusinessId;
}

void HpcClusterInfo::SetHpcClusterBusinessId(const string& _hpcClusterBusinessId)
{
    m_hpcClusterBusinessId = _hpcClusterBusinessId;
    m_hpcClusterBusinessIdHasBeenSet = true;
}

bool HpcClusterInfo::HpcClusterBusinessIdHasBeenSet() const
{
    return m_hpcClusterBusinessIdHasBeenSet;
}

uint64_t HpcClusterInfo::GetHpcClusterNetMode() const
{
    return m_hpcClusterNetMode;
}

void HpcClusterInfo::SetHpcClusterNetMode(const uint64_t& _hpcClusterNetMode)
{
    m_hpcClusterNetMode = _hpcClusterNetMode;
    m_hpcClusterNetModeHasBeenSet = true;
}

bool HpcClusterInfo::HpcClusterNetModeHasBeenSet() const
{
    return m_hpcClusterNetModeHasBeenSet;
}

vector<Tag> HpcClusterInfo::GetTags() const
{
    return m_tags;
}

void HpcClusterInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool HpcClusterInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

