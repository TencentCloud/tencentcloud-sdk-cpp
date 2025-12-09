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

#include <tencentcloud/wedata/v20210820/model/AssetDim.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AssetDim::AssetDim() :
    m_folderIdHasBeenSet(false),
    m_dimCodeHasBeenSet(false),
    m_dimNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_modifyUserIdHasBeenSet(false),
    m_modifyUserHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_dimTypeHasBeenSet(false),
    m_valuePairCountHasBeenSet(false),
    m_indicatorPairCountHasBeenSet(false),
    m_tableColumnCountHasBeenSet(false),
    m_dimIdHasBeenSet(false),
    m_dimTableLinkHasBeenSet(false),
    m_valuePairsHasBeenSet(false),
    m_tableColumnsHasBeenSet(false),
    m_sourceIndicatorIdsHasBeenSet(false),
    m_dimPermissionHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false)
{
}

CoreInternalOutcome AssetDim::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.FolderId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = value["FolderId"].GetUint64();
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("DimCode") && !value["DimCode"].IsNull())
    {
        if (!value["DimCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.DimCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimCode = string(value["DimCode"].GetString());
        m_dimCodeHasBeenSet = true;
    }

    if (value.HasMember("DimName") && !value["DimName"].IsNull())
    {
        if (!value["DimName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.DimName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimName = string(value["DimName"].GetString());
        m_dimNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccount") && !value["OwnerAccount"].IsNull())
    {
        if (!value["OwnerAccount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.OwnerAccount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccount = value["OwnerAccount"].GetUint64();
        m_ownerAccountHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("ModifyUserId") && !value["ModifyUserId"].IsNull())
    {
        if (!value["ModifyUserId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.ModifyUserId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyUserId = value["ModifyUserId"].GetInt64();
        m_modifyUserIdHasBeenSet = true;
    }

    if (value.HasMember("ModifyUser") && !value["ModifyUser"].IsNull())
    {
        if (!value["ModifyUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.ModifyUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyUser = string(value["ModifyUser"].GetString());
        m_modifyUserHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DimType") && !value["DimType"].IsNull())
    {
        if (!value["DimType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.DimType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimType = string(value["DimType"].GetString());
        m_dimTypeHasBeenSet = true;
    }

    if (value.HasMember("ValuePairCount") && !value["ValuePairCount"].IsNull())
    {
        if (!value["ValuePairCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.ValuePairCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_valuePairCount = value["ValuePairCount"].GetUint64();
        m_valuePairCountHasBeenSet = true;
    }

    if (value.HasMember("IndicatorPairCount") && !value["IndicatorPairCount"].IsNull())
    {
        if (!value["IndicatorPairCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.IndicatorPairCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_indicatorPairCount = value["IndicatorPairCount"].GetUint64();
        m_indicatorPairCountHasBeenSet = true;
    }

    if (value.HasMember("TableColumnCount") && !value["TableColumnCount"].IsNull())
    {
        if (!value["TableColumnCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.TableColumnCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tableColumnCount = value["TableColumnCount"].GetUint64();
        m_tableColumnCountHasBeenSet = true;
    }

    if (value.HasMember("DimId") && !value["DimId"].IsNull())
    {
        if (!value["DimId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.DimId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dimId = value["DimId"].GetUint64();
        m_dimIdHasBeenSet = true;
    }

    if (value.HasMember("DimTableLink") && !value["DimTableLink"].IsNull())
    {
        if (!value["DimTableLink"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.DimTableLink` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dimTableLink.Deserialize(value["DimTableLink"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dimTableLinkHasBeenSet = true;
    }

    if (value.HasMember("ValuePairs") && !value["ValuePairs"].IsNull())
    {
        if (!value["ValuePairs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDim.ValuePairs` is not array type"));

        const rapidjson::Value &tmpValue = value["ValuePairs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Pair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_valuePairs.push_back(item);
        }
        m_valuePairsHasBeenSet = true;
    }

    if (value.HasMember("TableColumns") && !value["TableColumns"].IsNull())
    {
        if (!value["TableColumns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDim.TableColumns` is not array type"));

        const rapidjson::Value &tmpValue = value["TableColumns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetDimTableColumn item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tableColumns.push_back(item);
        }
        m_tableColumnsHasBeenSet = true;
    }

    if (value.HasMember("SourceIndicatorIds") && !value["SourceIndicatorIds"].IsNull())
    {
        if (!value["SourceIndicatorIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDim.SourceIndicatorIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceIndicatorIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndicatorBaseSimpleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceIndicatorIds.push_back(item);
        }
        m_sourceIndicatorIdsHasBeenSet = true;
    }

    if (value.HasMember("DimPermission") && !value["DimPermission"].IsNull())
    {
        if (!value["DimPermission"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.DimPermission` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dimPermission.Deserialize(value["DimPermission"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dimPermissionHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDim.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetDim::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_folderId, allocator);
    }

    if (m_dimCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimCode.c_str(), allocator).Move(), allocator);
    }

    if (m_dimNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAccount, allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyUserId, allocator);
    }

    if (m_modifyUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyUser.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dimTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimType.c_str(), allocator).Move(), allocator);
    }

    if (m_valuePairCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValuePairCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valuePairCount, allocator);
    }

    if (m_indicatorPairCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndicatorPairCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indicatorPairCount, allocator);
    }

    if (m_tableColumnCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableColumnCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableColumnCount, allocator);
    }

    if (m_dimIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dimId, allocator);
    }

    if (m_dimTableLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimTableLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dimTableLink.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_valuePairsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValuePairs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_valuePairs.begin(); itr != m_valuePairs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tableColumnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableColumns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tableColumns.begin(); itr != m_tableColumns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sourceIndicatorIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIndicatorIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceIndicatorIds.begin(); itr != m_sourceIndicatorIds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dimPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dimPermission.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AssetDim::GetFolderId() const
{
    return m_folderId;
}

void AssetDim::SetFolderId(const uint64_t& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool AssetDim::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string AssetDim::GetDimCode() const
{
    return m_dimCode;
}

void AssetDim::SetDimCode(const string& _dimCode)
{
    m_dimCode = _dimCode;
    m_dimCodeHasBeenSet = true;
}

bool AssetDim::DimCodeHasBeenSet() const
{
    return m_dimCodeHasBeenSet;
}

string AssetDim::GetDimName() const
{
    return m_dimName;
}

void AssetDim::SetDimName(const string& _dimName)
{
    m_dimName = _dimName;
    m_dimNameHasBeenSet = true;
}

bool AssetDim::DimNameHasBeenSet() const
{
    return m_dimNameHasBeenSet;
}

string AssetDim::GetDescription() const
{
    return m_description;
}

void AssetDim::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AssetDim::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t AssetDim::GetOwnerAccount() const
{
    return m_ownerAccount;
}

void AssetDim::SetOwnerAccount(const uint64_t& _ownerAccount)
{
    m_ownerAccount = _ownerAccount;
    m_ownerAccountHasBeenSet = true;
}

bool AssetDim::OwnerAccountHasBeenSet() const
{
    return m_ownerAccountHasBeenSet;
}

string AssetDim::GetOwner() const
{
    return m_owner;
}

void AssetDim::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool AssetDim::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

int64_t AssetDim::GetModifyUserId() const
{
    return m_modifyUserId;
}

void AssetDim::SetModifyUserId(const int64_t& _modifyUserId)
{
    m_modifyUserId = _modifyUserId;
    m_modifyUserIdHasBeenSet = true;
}

bool AssetDim::ModifyUserIdHasBeenSet() const
{
    return m_modifyUserIdHasBeenSet;
}

string AssetDim::GetModifyUser() const
{
    return m_modifyUser;
}

void AssetDim::SetModifyUser(const string& _modifyUser)
{
    m_modifyUser = _modifyUser;
    m_modifyUserHasBeenSet = true;
}

bool AssetDim::ModifyUserHasBeenSet() const
{
    return m_modifyUserHasBeenSet;
}

string AssetDim::GetModifyTime() const
{
    return m_modifyTime;
}

void AssetDim::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool AssetDim::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string AssetDim::GetCreateTime() const
{
    return m_createTime;
}

void AssetDim::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AssetDim::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AssetDim::GetDimType() const
{
    return m_dimType;
}

void AssetDim::SetDimType(const string& _dimType)
{
    m_dimType = _dimType;
    m_dimTypeHasBeenSet = true;
}

bool AssetDim::DimTypeHasBeenSet() const
{
    return m_dimTypeHasBeenSet;
}

uint64_t AssetDim::GetValuePairCount() const
{
    return m_valuePairCount;
}

void AssetDim::SetValuePairCount(const uint64_t& _valuePairCount)
{
    m_valuePairCount = _valuePairCount;
    m_valuePairCountHasBeenSet = true;
}

bool AssetDim::ValuePairCountHasBeenSet() const
{
    return m_valuePairCountHasBeenSet;
}

uint64_t AssetDim::GetIndicatorPairCount() const
{
    return m_indicatorPairCount;
}

void AssetDim::SetIndicatorPairCount(const uint64_t& _indicatorPairCount)
{
    m_indicatorPairCount = _indicatorPairCount;
    m_indicatorPairCountHasBeenSet = true;
}

bool AssetDim::IndicatorPairCountHasBeenSet() const
{
    return m_indicatorPairCountHasBeenSet;
}

uint64_t AssetDim::GetTableColumnCount() const
{
    return m_tableColumnCount;
}

void AssetDim::SetTableColumnCount(const uint64_t& _tableColumnCount)
{
    m_tableColumnCount = _tableColumnCount;
    m_tableColumnCountHasBeenSet = true;
}

bool AssetDim::TableColumnCountHasBeenSet() const
{
    return m_tableColumnCountHasBeenSet;
}

uint64_t AssetDim::GetDimId() const
{
    return m_dimId;
}

void AssetDim::SetDimId(const uint64_t& _dimId)
{
    m_dimId = _dimId;
    m_dimIdHasBeenSet = true;
}

bool AssetDim::DimIdHasBeenSet() const
{
    return m_dimIdHasBeenSet;
}

DimTableLink AssetDim::GetDimTableLink() const
{
    return m_dimTableLink;
}

void AssetDim::SetDimTableLink(const DimTableLink& _dimTableLink)
{
    m_dimTableLink = _dimTableLink;
    m_dimTableLinkHasBeenSet = true;
}

bool AssetDim::DimTableLinkHasBeenSet() const
{
    return m_dimTableLinkHasBeenSet;
}

vector<Pair> AssetDim::GetValuePairs() const
{
    return m_valuePairs;
}

void AssetDim::SetValuePairs(const vector<Pair>& _valuePairs)
{
    m_valuePairs = _valuePairs;
    m_valuePairsHasBeenSet = true;
}

bool AssetDim::ValuePairsHasBeenSet() const
{
    return m_valuePairsHasBeenSet;
}

vector<AssetDimTableColumn> AssetDim::GetTableColumns() const
{
    return m_tableColumns;
}

void AssetDim::SetTableColumns(const vector<AssetDimTableColumn>& _tableColumns)
{
    m_tableColumns = _tableColumns;
    m_tableColumnsHasBeenSet = true;
}

bool AssetDim::TableColumnsHasBeenSet() const
{
    return m_tableColumnsHasBeenSet;
}

vector<IndicatorBaseSimpleInfo> AssetDim::GetSourceIndicatorIds() const
{
    return m_sourceIndicatorIds;
}

void AssetDim::SetSourceIndicatorIds(const vector<IndicatorBaseSimpleInfo>& _sourceIndicatorIds)
{
    m_sourceIndicatorIds = _sourceIndicatorIds;
    m_sourceIndicatorIdsHasBeenSet = true;
}

bool AssetDim::SourceIndicatorIdsHasBeenSet() const
{
    return m_sourceIndicatorIdsHasBeenSet;
}

PermissionStatus AssetDim::GetDimPermission() const
{
    return m_dimPermission;
}

void AssetDim::SetDimPermission(const PermissionStatus& _dimPermission)
{
    m_dimPermission = _dimPermission;
    m_dimPermissionHasBeenSet = true;
}

bool AssetDim::DimPermissionHasBeenSet() const
{
    return m_dimPermissionHasBeenSet;
}

string AssetDim::GetProjectId() const
{
    return m_projectId;
}

void AssetDim::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AssetDim::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string AssetDim::GetProjectName() const
{
    return m_projectName;
}

void AssetDim::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool AssetDim::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

