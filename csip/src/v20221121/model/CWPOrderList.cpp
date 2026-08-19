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

#include <tencentcloud/csip/v20221121/model/CWPOrderList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CWPOrderList::CWPOrderList() :
    m_productCodeHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_inquireKeyHasBeenSet(false),
    m_inquireNumHasBeenSet(false),
    m_usedNumHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_projectIDHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_regionIDHasBeenSet(false),
    m_zoneIDHasBeenSet(false),
    m_dealNameHasBeenSet(false),
    m_extraParamHasBeenSet(false)
{
}

CoreInternalOutcome CWPOrderList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("InquireKey") && !value["InquireKey"].IsNull())
    {
        if (!value["InquireKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.InquireKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inquireKey = string(value["InquireKey"].GetString());
        m_inquireKeyHasBeenSet = true;
    }

    if (value.HasMember("InquireNum") && !value["InquireNum"].IsNull())
    {
        if (!value["InquireNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.InquireNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inquireNum = value["InquireNum"].GetUint64();
        m_inquireNumHasBeenSet = true;
    }

    if (value.HasMember("UsedNum") && !value["UsedNum"].IsNull())
    {
        if (!value["UsedNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.UsedNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNum = value["UsedNum"].GetUint64();
        m_usedNumHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tags item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagList.push_back(item);
        }
        m_tagListHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectID") && !value["ProjectID"].IsNull())
    {
        if (!value["ProjectID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.ProjectID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectID = value["ProjectID"].GetUint64();
        m_projectIDHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.SourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetUint64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("RegionID") && !value["RegionID"].IsNull())
    {
        if (!value["RegionID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.RegionID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionID = value["RegionID"].GetUint64();
        m_regionIDHasBeenSet = true;
    }

    if (value.HasMember("ZoneID") && !value["ZoneID"].IsNull())
    {
        if (!value["ZoneID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.ZoneID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneID = value["ZoneID"].GetUint64();
        m_zoneIDHasBeenSet = true;
    }

    if (value.HasMember("DealName") && !value["DealName"].IsNull())
    {
        if (!value["DealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.DealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealName = string(value["DealName"].GetString());
        m_dealNameHasBeenSet = true;
    }

    if (value.HasMember("ExtraParam") && !value["ExtraParam"].IsNull())
    {
        if (!value["ExtraParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderList.ExtraParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraParam.Deserialize(value["ExtraParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CWPOrderList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_inquireKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inquireKey.c_str(), allocator).Move(), allocator);
    }

    if (m_inquireNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inquireNum, allocator);
    }

    if (m_usedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedNum, allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectID, allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
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

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_regionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionID, allocator);
    }

    if (m_zoneIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneID, allocator);
    }

    if (m_dealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealName.c_str(), allocator).Move(), allocator);
    }

    if (m_extraParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraParam.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CWPOrderList::GetProductCode() const
{
    return m_productCode;
}

void CWPOrderList::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool CWPOrderList::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string CWPOrderList::GetSubProductCode() const
{
    return m_subProductCode;
}

void CWPOrderList::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool CWPOrderList::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

string CWPOrderList::GetInquireKey() const
{
    return m_inquireKey;
}

void CWPOrderList::SetInquireKey(const string& _inquireKey)
{
    m_inquireKey = _inquireKey;
    m_inquireKeyHasBeenSet = true;
}

bool CWPOrderList::InquireKeyHasBeenSet() const
{
    return m_inquireKeyHasBeenSet;
}

uint64_t CWPOrderList::GetInquireNum() const
{
    return m_inquireNum;
}

void CWPOrderList::SetInquireNum(const uint64_t& _inquireNum)
{
    m_inquireNum = _inquireNum;
    m_inquireNumHasBeenSet = true;
}

bool CWPOrderList::InquireNumHasBeenSet() const
{
    return m_inquireNumHasBeenSet;
}

uint64_t CWPOrderList::GetUsedNum() const
{
    return m_usedNum;
}

void CWPOrderList::SetUsedNum(const uint64_t& _usedNum)
{
    m_usedNum = _usedNum;
    m_usedNumHasBeenSet = true;
}

bool CWPOrderList::UsedNumHasBeenSet() const
{
    return m_usedNumHasBeenSet;
}

vector<Tags> CWPOrderList::GetTagList() const
{
    return m_tagList;
}

void CWPOrderList::SetTagList(const vector<Tags>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CWPOrderList::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

uint64_t CWPOrderList::GetStatus() const
{
    return m_status;
}

void CWPOrderList::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CWPOrderList::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CWPOrderList::GetBeginTime() const
{
    return m_beginTime;
}

void CWPOrderList::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool CWPOrderList::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string CWPOrderList::GetEndTime() const
{
    return m_endTime;
}

void CWPOrderList::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CWPOrderList::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t CWPOrderList::GetProjectID() const
{
    return m_projectID;
}

void CWPOrderList::SetProjectID(const uint64_t& _projectID)
{
    m_projectID = _projectID;
    m_projectIDHasBeenSet = true;
}

bool CWPOrderList::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

string CWPOrderList::GetAlias() const
{
    return m_alias;
}

void CWPOrderList::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool CWPOrderList::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string CWPOrderList::GetResourceId() const
{
    return m_resourceId;
}

void CWPOrderList::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CWPOrderList::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t CWPOrderList::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CWPOrderList::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CWPOrderList::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

uint64_t CWPOrderList::GetSourceType() const
{
    return m_sourceType;
}

void CWPOrderList::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CWPOrderList::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

uint64_t CWPOrderList::GetPayMode() const
{
    return m_payMode;
}

void CWPOrderList::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CWPOrderList::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t CWPOrderList::GetRegionID() const
{
    return m_regionID;
}

void CWPOrderList::SetRegionID(const uint64_t& _regionID)
{
    m_regionID = _regionID;
    m_regionIDHasBeenSet = true;
}

bool CWPOrderList::RegionIDHasBeenSet() const
{
    return m_regionIDHasBeenSet;
}

uint64_t CWPOrderList::GetZoneID() const
{
    return m_zoneID;
}

void CWPOrderList::SetZoneID(const uint64_t& _zoneID)
{
    m_zoneID = _zoneID;
    m_zoneIDHasBeenSet = true;
}

bool CWPOrderList::ZoneIDHasBeenSet() const
{
    return m_zoneIDHasBeenSet;
}

string CWPOrderList::GetDealName() const
{
    return m_dealName;
}

void CWPOrderList::SetDealName(const string& _dealName)
{
    m_dealName = _dealName;
    m_dealNameHasBeenSet = true;
}

bool CWPOrderList::DealNameHasBeenSet() const
{
    return m_dealNameHasBeenSet;
}

CWPOrderExtraParam CWPOrderList::GetExtraParam() const
{
    return m_extraParam;
}

void CWPOrderList::SetExtraParam(const CWPOrderExtraParam& _extraParam)
{
    m_extraParam = _extraParam;
    m_extraParamHasBeenSet = true;
}

bool CWPOrderList::ExtraParamHasBeenSet() const
{
    return m_extraParamHasBeenSet;
}

