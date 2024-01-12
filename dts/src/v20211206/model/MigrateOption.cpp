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

#include <tencentcloud/dts/v20211206/model/MigrateOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

MigrateOption::MigrateOption() :
    m_databaseTableHasBeenSet(false),
    m_migrateTypeHasBeenSet(false),
    m_consistencyHasBeenSet(false),
    m_isMigrateAccountHasBeenSet(false),
    m_isOverrideRootHasBeenSet(false),
    m_isDstReadOnlyHasBeenSet(false),
    m_extraAttrHasBeenSet(false),
    m_migrateWayHasBeenSet(false)
{
}

CoreInternalOutcome MigrateOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseTable") && !value["DatabaseTable"].IsNull())
    {
        if (!value["DatabaseTable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateOption.DatabaseTable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_databaseTable.Deserialize(value["DatabaseTable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_databaseTableHasBeenSet = true;
    }

    if (value.HasMember("MigrateType") && !value["MigrateType"].IsNull())
    {
        if (!value["MigrateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateOption.MigrateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_migrateType = string(value["MigrateType"].GetString());
        m_migrateTypeHasBeenSet = true;
    }

    if (value.HasMember("Consistency") && !value["Consistency"].IsNull())
    {
        if (!value["Consistency"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateOption.Consistency` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_consistency.Deserialize(value["Consistency"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_consistencyHasBeenSet = true;
    }

    if (value.HasMember("IsMigrateAccount") && !value["IsMigrateAccount"].IsNull())
    {
        if (!value["IsMigrateAccount"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateOption.IsMigrateAccount` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMigrateAccount = value["IsMigrateAccount"].GetBool();
        m_isMigrateAccountHasBeenSet = true;
    }

    if (value.HasMember("IsOverrideRoot") && !value["IsOverrideRoot"].IsNull())
    {
        if (!value["IsOverrideRoot"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateOption.IsOverrideRoot` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOverrideRoot = value["IsOverrideRoot"].GetBool();
        m_isOverrideRootHasBeenSet = true;
    }

    if (value.HasMember("IsDstReadOnly") && !value["IsDstReadOnly"].IsNull())
    {
        if (!value["IsDstReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateOption.IsDstReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDstReadOnly = value["IsDstReadOnly"].GetBool();
        m_isDstReadOnlyHasBeenSet = true;
    }

    if (value.HasMember("ExtraAttr") && !value["ExtraAttr"].IsNull())
    {
        if (!value["ExtraAttr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MigrateOption.ExtraAttr` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtraAttr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValuePairOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extraAttr.push_back(item);
        }
        m_extraAttrHasBeenSet = true;
    }

    if (value.HasMember("MigrateWay") && !value["MigrateWay"].IsNull())
    {
        if (!value["MigrateWay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateOption.MigrateWay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_migrateWay = string(value["MigrateWay"].GetString());
        m_migrateWayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrateOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_databaseTable.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_migrateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_migrateType.c_str(), allocator).Move(), allocator);
    }

    if (m_consistencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Consistency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_consistency.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isMigrateAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMigrateAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMigrateAccount, allocator);
    }

    if (m_isOverrideRootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOverrideRoot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOverrideRoot, allocator);
    }

    if (m_isDstReadOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDstReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDstReadOnly, allocator);
    }

    if (m_extraAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extraAttr.begin(); itr != m_extraAttr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_migrateWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_migrateWay.c_str(), allocator).Move(), allocator);
    }

}


DatabaseTableObject MigrateOption::GetDatabaseTable() const
{
    return m_databaseTable;
}

void MigrateOption::SetDatabaseTable(const DatabaseTableObject& _databaseTable)
{
    m_databaseTable = _databaseTable;
    m_databaseTableHasBeenSet = true;
}

bool MigrateOption::DatabaseTableHasBeenSet() const
{
    return m_databaseTableHasBeenSet;
}

string MigrateOption::GetMigrateType() const
{
    return m_migrateType;
}

void MigrateOption::SetMigrateType(const string& _migrateType)
{
    m_migrateType = _migrateType;
    m_migrateTypeHasBeenSet = true;
}

bool MigrateOption::MigrateTypeHasBeenSet() const
{
    return m_migrateTypeHasBeenSet;
}

ConsistencyOption MigrateOption::GetConsistency() const
{
    return m_consistency;
}

void MigrateOption::SetConsistency(const ConsistencyOption& _consistency)
{
    m_consistency = _consistency;
    m_consistencyHasBeenSet = true;
}

bool MigrateOption::ConsistencyHasBeenSet() const
{
    return m_consistencyHasBeenSet;
}

bool MigrateOption::GetIsMigrateAccount() const
{
    return m_isMigrateAccount;
}

void MigrateOption::SetIsMigrateAccount(const bool& _isMigrateAccount)
{
    m_isMigrateAccount = _isMigrateAccount;
    m_isMigrateAccountHasBeenSet = true;
}

bool MigrateOption::IsMigrateAccountHasBeenSet() const
{
    return m_isMigrateAccountHasBeenSet;
}

bool MigrateOption::GetIsOverrideRoot() const
{
    return m_isOverrideRoot;
}

void MigrateOption::SetIsOverrideRoot(const bool& _isOverrideRoot)
{
    m_isOverrideRoot = _isOverrideRoot;
    m_isOverrideRootHasBeenSet = true;
}

bool MigrateOption::IsOverrideRootHasBeenSet() const
{
    return m_isOverrideRootHasBeenSet;
}

bool MigrateOption::GetIsDstReadOnly() const
{
    return m_isDstReadOnly;
}

void MigrateOption::SetIsDstReadOnly(const bool& _isDstReadOnly)
{
    m_isDstReadOnly = _isDstReadOnly;
    m_isDstReadOnlyHasBeenSet = true;
}

bool MigrateOption::IsDstReadOnlyHasBeenSet() const
{
    return m_isDstReadOnlyHasBeenSet;
}

vector<KeyValuePairOption> MigrateOption::GetExtraAttr() const
{
    return m_extraAttr;
}

void MigrateOption::SetExtraAttr(const vector<KeyValuePairOption>& _extraAttr)
{
    m_extraAttr = _extraAttr;
    m_extraAttrHasBeenSet = true;
}

bool MigrateOption::ExtraAttrHasBeenSet() const
{
    return m_extraAttrHasBeenSet;
}

string MigrateOption::GetMigrateWay() const
{
    return m_migrateWay;
}

void MigrateOption::SetMigrateWay(const string& _migrateWay)
{
    m_migrateWay = _migrateWay;
    m_migrateWayHasBeenSet = true;
}

bool MigrateOption::MigrateWayHasBeenSet() const
{
    return m_migrateWayHasBeenSet;
}

