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

#include <tencentcloud/cvm/v20170312/model/HostItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

HostItem::HostItem() :
    m_placementHasBeenSet(false),
    m_hostIdHasBeenSet(false),
    m_hostTypeHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_hostChargeTypeHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_hostStateHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_hostResourceHasBeenSet(false),
    m_cageIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome HostItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostItem.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("HostId") && !value["HostId"].IsNull())
    {
        if (!value["HostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostItem.HostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = string(value["HostId"].GetString());
        m_hostIdHasBeenSet = true;
    }

    if (value.HasMember("HostType") && !value["HostType"].IsNull())
    {
        if (!value["HostType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostItem.HostType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostType = string(value["HostType"].GetString());
        m_hostTypeHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostItem.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostChargeType") && !value["HostChargeType"].IsNull())
    {
        if (!value["HostChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostItem.HostChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostChargeType = string(value["HostChargeType"].GetString());
        m_hostChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostItem.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostItem.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostItem.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceIds") && !value["InstanceIds"].IsNull())
    {
        if (!value["InstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostItem.InstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIds.push_back((*itr).GetString());
        }
        m_instanceIdsHasBeenSet = true;
    }

    if (value.HasMember("HostState") && !value["HostState"].IsNull())
    {
        if (!value["HostState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostItem.HostState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostState = string(value["HostState"].GetString());
        m_hostStateHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostItem.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("HostResource") && !value["HostResource"].IsNull())
    {
        if (!value["HostResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostItem.HostResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostResource.Deserialize(value["HostResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostResourceHasBeenSet = true;
    }

    if (value.HasMember("CageId") && !value["CageId"].IsNull())
    {
        if (!value["CageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostItem.CageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cageId = string(value["CageId"].GetString());
        m_cageIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostItem.Tags` is not array type"));

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

void HostItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostType.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
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

    if (m_hostStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostState.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_hostResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cageId.c_str(), allocator).Move(), allocator);
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


Placement HostItem::GetPlacement() const
{
    return m_placement;
}

void HostItem::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool HostItem::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string HostItem::GetHostId() const
{
    return m_hostId;
}

void HostItem::SetHostId(const string& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool HostItem::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

string HostItem::GetHostType() const
{
    return m_hostType;
}

void HostItem::SetHostType(const string& _hostType)
{
    m_hostType = _hostType;
    m_hostTypeHasBeenSet = true;
}

bool HostItem::HostTypeHasBeenSet() const
{
    return m_hostTypeHasBeenSet;
}

string HostItem::GetHostName() const
{
    return m_hostName;
}

void HostItem::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool HostItem::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string HostItem::GetHostChargeType() const
{
    return m_hostChargeType;
}

void HostItem::SetHostChargeType(const string& _hostChargeType)
{
    m_hostChargeType = _hostChargeType;
    m_hostChargeTypeHasBeenSet = true;
}

bool HostItem::HostChargeTypeHasBeenSet() const
{
    return m_hostChargeTypeHasBeenSet;
}

string HostItem::GetRenewFlag() const
{
    return m_renewFlag;
}

void HostItem::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool HostItem::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string HostItem::GetCreatedTime() const
{
    return m_createdTime;
}

void HostItem::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool HostItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string HostItem::GetExpiredTime() const
{
    return m_expiredTime;
}

void HostItem::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool HostItem::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

vector<string> HostItem::GetInstanceIds() const
{
    return m_instanceIds;
}

void HostItem::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool HostItem::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string HostItem::GetHostState() const
{
    return m_hostState;
}

void HostItem::SetHostState(const string& _hostState)
{
    m_hostState = _hostState;
    m_hostStateHasBeenSet = true;
}

bool HostItem::HostStateHasBeenSet() const
{
    return m_hostStateHasBeenSet;
}

string HostItem::GetHostIp() const
{
    return m_hostIp;
}

void HostItem::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool HostItem::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

HostResource HostItem::GetHostResource() const
{
    return m_hostResource;
}

void HostItem::SetHostResource(const HostResource& _hostResource)
{
    m_hostResource = _hostResource;
    m_hostResourceHasBeenSet = true;
}

bool HostItem::HostResourceHasBeenSet() const
{
    return m_hostResourceHasBeenSet;
}

string HostItem::GetCageId() const
{
    return m_cageId;
}

void HostItem::SetCageId(const string& _cageId)
{
    m_cageId = _cageId;
    m_cageIdHasBeenSet = true;
}

bool HostItem::CageIdHasBeenSet() const
{
    return m_cageIdHasBeenSet;
}

vector<Tag> HostItem::GetTags() const
{
    return m_tags;
}

void HostItem::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool HostItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

