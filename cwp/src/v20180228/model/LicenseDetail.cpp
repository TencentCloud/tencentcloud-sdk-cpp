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

#include <tencentcloud/cwp/v20180228/model/LicenseDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

LicenseDetail::LicenseDetail() :
    m_licenseIdHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_licenseStatusHasBeenSet(false),
    m_licenseCntHasBeenSet(false),
    m_usedLicenseCntHasBeenSet(false),
    m_orderStatusHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_buyTimeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_freezeNumHasBeenSet(false)
{
}

CoreInternalOutcome LicenseDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LicenseId") && !value["LicenseId"].IsNull())
    {
        if (!value["LicenseId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.LicenseId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseId = value["LicenseId"].GetUint64();
        m_licenseIdHasBeenSet = true;
    }

    if (value.HasMember("LicenseType") && !value["LicenseType"].IsNull())
    {
        if (!value["LicenseType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.LicenseType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = value["LicenseType"].GetUint64();
        m_licenseTypeHasBeenSet = true;
    }

    if (value.HasMember("LicenseStatus") && !value["LicenseStatus"].IsNull())
    {
        if (!value["LicenseStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.LicenseStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseStatus = value["LicenseStatus"].GetUint64();
        m_licenseStatusHasBeenSet = true;
    }

    if (value.HasMember("LicenseCnt") && !value["LicenseCnt"].IsNull())
    {
        if (!value["LicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.LicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseCnt = value["LicenseCnt"].GetUint64();
        m_licenseCntHasBeenSet = true;
    }

    if (value.HasMember("UsedLicenseCnt") && !value["UsedLicenseCnt"].IsNull())
    {
        if (!value["UsedLicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.UsedLicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedLicenseCnt = value["UsedLicenseCnt"].GetUint64();
        m_usedLicenseCntHasBeenSet = true;
    }

    if (value.HasMember("OrderStatus") && !value["OrderStatus"].IsNull())
    {
        if (!value["OrderStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.OrderStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderStatus = value["OrderStatus"].GetUint64();
        m_orderStatusHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.Deadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = string(value["Deadline"].GetString());
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("BuyTime") && !value["BuyTime"].IsNull())
    {
        if (!value["BuyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.BuyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyTime = string(value["BuyTime"].GetString());
        m_buyTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.SourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetUint64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tags item;
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

    if (value.HasMember("FreezeNum") && !value["FreezeNum"].IsNull())
    {
        if (!value["FreezeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.FreezeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_freezeNum = value["FreezeNum"].GetInt64();
        m_freezeNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_licenseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseId, allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseType, allocator);
    }

    if (m_licenseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseStatus, allocator);
    }

    if (m_licenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseCnt, allocator);
    }

    if (m_usedLicenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedLicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedLicenseCnt, allocator);
    }

    if (m_orderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderStatus, allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadline.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_buyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
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

    if (m_freezeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreezeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freezeNum, allocator);
    }

}


uint64_t LicenseDetail::GetLicenseId() const
{
    return m_licenseId;
}

void LicenseDetail::SetLicenseId(const uint64_t& _licenseId)
{
    m_licenseId = _licenseId;
    m_licenseIdHasBeenSet = true;
}

bool LicenseDetail::LicenseIdHasBeenSet() const
{
    return m_licenseIdHasBeenSet;
}

uint64_t LicenseDetail::GetLicenseType() const
{
    return m_licenseType;
}

void LicenseDetail::SetLicenseType(const uint64_t& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool LicenseDetail::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

uint64_t LicenseDetail::GetLicenseStatus() const
{
    return m_licenseStatus;
}

void LicenseDetail::SetLicenseStatus(const uint64_t& _licenseStatus)
{
    m_licenseStatus = _licenseStatus;
    m_licenseStatusHasBeenSet = true;
}

bool LicenseDetail::LicenseStatusHasBeenSet() const
{
    return m_licenseStatusHasBeenSet;
}

uint64_t LicenseDetail::GetLicenseCnt() const
{
    return m_licenseCnt;
}

void LicenseDetail::SetLicenseCnt(const uint64_t& _licenseCnt)
{
    m_licenseCnt = _licenseCnt;
    m_licenseCntHasBeenSet = true;
}

bool LicenseDetail::LicenseCntHasBeenSet() const
{
    return m_licenseCntHasBeenSet;
}

uint64_t LicenseDetail::GetUsedLicenseCnt() const
{
    return m_usedLicenseCnt;
}

void LicenseDetail::SetUsedLicenseCnt(const uint64_t& _usedLicenseCnt)
{
    m_usedLicenseCnt = _usedLicenseCnt;
    m_usedLicenseCntHasBeenSet = true;
}

bool LicenseDetail::UsedLicenseCntHasBeenSet() const
{
    return m_usedLicenseCntHasBeenSet;
}

uint64_t LicenseDetail::GetOrderStatus() const
{
    return m_orderStatus;
}

void LicenseDetail::SetOrderStatus(const uint64_t& _orderStatus)
{
    m_orderStatus = _orderStatus;
    m_orderStatusHasBeenSet = true;
}

bool LicenseDetail::OrderStatusHasBeenSet() const
{
    return m_orderStatusHasBeenSet;
}

string LicenseDetail::GetDeadline() const
{
    return m_deadline;
}

void LicenseDetail::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool LicenseDetail::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string LicenseDetail::GetResourceId() const
{
    return m_resourceId;
}

void LicenseDetail::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool LicenseDetail::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t LicenseDetail::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void LicenseDetail::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool LicenseDetail::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

uint64_t LicenseDetail::GetProjectId() const
{
    return m_projectId;
}

void LicenseDetail::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool LicenseDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t LicenseDetail::GetTaskId() const
{
    return m_taskId;
}

void LicenseDetail::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool LicenseDetail::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string LicenseDetail::GetBuyTime() const
{
    return m_buyTime;
}

void LicenseDetail::SetBuyTime(const string& _buyTime)
{
    m_buyTime = _buyTime;
    m_buyTimeHasBeenSet = true;
}

bool LicenseDetail::BuyTimeHasBeenSet() const
{
    return m_buyTimeHasBeenSet;
}

uint64_t LicenseDetail::GetSourceType() const
{
    return m_sourceType;
}

void LicenseDetail::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool LicenseDetail::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string LicenseDetail::GetAlias() const
{
    return m_alias;
}

void LicenseDetail::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool LicenseDetail::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

vector<Tags> LicenseDetail::GetTags() const
{
    return m_tags;
}

void LicenseDetail::SetTags(const vector<Tags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool LicenseDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t LicenseDetail::GetFreezeNum() const
{
    return m_freezeNum;
}

void LicenseDetail::SetFreezeNum(const int64_t& _freezeNum)
{
    m_freezeNum = _freezeNum;
    m_freezeNumHasBeenSet = true;
}

bool LicenseDetail::FreezeNumHasBeenSet() const
{
    return m_freezeNumHasBeenSet;
}

