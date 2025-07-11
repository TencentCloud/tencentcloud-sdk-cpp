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

#include <tencentcloud/igtm/v20231024/model/DetectTaskPackage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

DetectTaskPackage::DetectTaskPackage() :
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_quotaHasBeenSet(false),
    m_currentDeadlineHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isExpireHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_costItemListHasBeenSet(false),
    m_groupHasBeenSet(false)
{
}

CoreInternalOutcome DetectTaskPackage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectTaskPackage.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectTaskPackage.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Quota") && !value["Quota"].IsNull())
    {
        if (!value["Quota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectTaskPackage.Quota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quota = value["Quota"].GetUint64();
        m_quotaHasBeenSet = true;
    }

    if (value.HasMember("CurrentDeadline") && !value["CurrentDeadline"].IsNull())
    {
        if (!value["CurrentDeadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectTaskPackage.CurrentDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentDeadline = string(value["CurrentDeadline"].GetString());
        m_currentDeadlineHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectTaskPackage.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IsExpire") && !value["IsExpire"].IsNull())
    {
        if (!value["IsExpire"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectTaskPackage.IsExpire` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isExpire = value["IsExpire"].GetUint64();
        m_isExpireHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectTaskPackage.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectTaskPackage.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectTaskPackage.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CostItemList") && !value["CostItemList"].IsNull())
    {
        if (!value["CostItemList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetectTaskPackage.CostItemList` is not array type"));

        const rapidjson::Value &tmpValue = value["CostItemList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CostItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_costItemList.push_back(item);
        }
        m_costItemListHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectTaskPackage.Group` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_group = value["Group"].GetUint64();
        m_groupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectTaskPackage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quota, allocator);
    }

    if (m_currentDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentDeadline.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExpire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExpire, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_costItemListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostItemList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_costItemList.begin(); itr != m_costItemList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_group, allocator);
    }

}


string DetectTaskPackage::GetResourceId() const
{
    return m_resourceId;
}

void DetectTaskPackage::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DetectTaskPackage::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DetectTaskPackage::GetResourceType() const
{
    return m_resourceType;
}

void DetectTaskPackage::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DetectTaskPackage::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

uint64_t DetectTaskPackage::GetQuota() const
{
    return m_quota;
}

void DetectTaskPackage::SetQuota(const uint64_t& _quota)
{
    m_quota = _quota;
    m_quotaHasBeenSet = true;
}

bool DetectTaskPackage::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

string DetectTaskPackage::GetCurrentDeadline() const
{
    return m_currentDeadline;
}

void DetectTaskPackage::SetCurrentDeadline(const string& _currentDeadline)
{
    m_currentDeadline = _currentDeadline;
    m_currentDeadlineHasBeenSet = true;
}

bool DetectTaskPackage::CurrentDeadlineHasBeenSet() const
{
    return m_currentDeadlineHasBeenSet;
}

string DetectTaskPackage::GetCreateTime() const
{
    return m_createTime;
}

void DetectTaskPackage::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DetectTaskPackage::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t DetectTaskPackage::GetIsExpire() const
{
    return m_isExpire;
}

void DetectTaskPackage::SetIsExpire(const uint64_t& _isExpire)
{
    m_isExpire = _isExpire;
    m_isExpireHasBeenSet = true;
}

bool DetectTaskPackage::IsExpireHasBeenSet() const
{
    return m_isExpireHasBeenSet;
}

string DetectTaskPackage::GetStatus() const
{
    return m_status;
}

void DetectTaskPackage::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DetectTaskPackage::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DetectTaskPackage::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void DetectTaskPackage::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool DetectTaskPackage::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string DetectTaskPackage::GetRemark() const
{
    return m_remark;
}

void DetectTaskPackage::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DetectTaskPackage::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<CostItem> DetectTaskPackage::GetCostItemList() const
{
    return m_costItemList;
}

void DetectTaskPackage::SetCostItemList(const vector<CostItem>& _costItemList)
{
    m_costItemList = _costItemList;
    m_costItemListHasBeenSet = true;
}

bool DetectTaskPackage::CostItemListHasBeenSet() const
{
    return m_costItemListHasBeenSet;
}

uint64_t DetectTaskPackage::GetGroup() const
{
    return m_group;
}

void DetectTaskPackage::SetGroup(const uint64_t& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool DetectTaskPackage::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

