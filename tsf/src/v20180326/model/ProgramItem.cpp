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

#include <tencentcloud/tsf/v20180326/model/ProgramItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ProgramItem::ProgramItem() :
    m_programItemIdHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_valueListHasBeenSet(false),
    m_isAllHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_deleteFlagHasBeenSet(false),
    m_programIdHasBeenSet(false)
{
}

CoreInternalOutcome ProgramItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProgramItemId") && !value["ProgramItemId"].IsNull())
    {
        if (!value["ProgramItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramItem.ProgramItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programItemId = string(value["ProgramItemId"].GetString());
        m_programItemIdHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramItem.Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(value["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("ValueList") && !value["ValueList"].IsNull())
    {
        if (!value["ValueList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProgramItem.ValueList` is not array type"));

        const rapidjson::Value &tmpValue = value["ValueList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_valueList.push_back((*itr).GetString());
        }
        m_valueListHasBeenSet = true;
    }

    if (value.HasMember("IsAll") && !value["IsAll"].IsNull())
    {
        if (!value["IsAll"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramItem.IsAll` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAll = value["IsAll"].GetBool();
        m_isAllHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramItem.CreationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = value["CreationTime"].GetInt64();
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramItem.LastUpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = value["LastUpdateTime"].GetInt64();
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("DeleteFlag") && !value["DeleteFlag"].IsNull())
    {
        if (!value["DeleteFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramItem.DeleteFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteFlag = value["DeleteFlag"].GetBool();
        m_deleteFlagHasBeenSet = true;
    }

    if (value.HasMember("ProgramId") && !value["ProgramId"].IsNull())
    {
        if (!value["ProgramId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProgramItem.ProgramId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programId = string(value["ProgramId"].GetString());
        m_programIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProgramItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_programItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programItemId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_valueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_valueList.begin(); itr != m_valueList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAll, allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creationTime, allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastUpdateTime, allocator);
    }

    if (m_deleteFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteFlag, allocator);
    }

    if (m_programIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programId.c_str(), allocator).Move(), allocator);
    }

}


string ProgramItem::GetProgramItemId() const
{
    return m_programItemId;
}

void ProgramItem::SetProgramItemId(const string& _programItemId)
{
    m_programItemId = _programItemId;
    m_programItemIdHasBeenSet = true;
}

bool ProgramItem::ProgramItemIdHasBeenSet() const
{
    return m_programItemIdHasBeenSet;
}

Resource ProgramItem::GetResource() const
{
    return m_resource;
}

void ProgramItem::SetResource(const Resource& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ProgramItem::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

vector<string> ProgramItem::GetValueList() const
{
    return m_valueList;
}

void ProgramItem::SetValueList(const vector<string>& _valueList)
{
    m_valueList = _valueList;
    m_valueListHasBeenSet = true;
}

bool ProgramItem::ValueListHasBeenSet() const
{
    return m_valueListHasBeenSet;
}

bool ProgramItem::GetIsAll() const
{
    return m_isAll;
}

void ProgramItem::SetIsAll(const bool& _isAll)
{
    m_isAll = _isAll;
    m_isAllHasBeenSet = true;
}

bool ProgramItem::IsAllHasBeenSet() const
{
    return m_isAllHasBeenSet;
}

int64_t ProgramItem::GetCreationTime() const
{
    return m_creationTime;
}

void ProgramItem::SetCreationTime(const int64_t& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool ProgramItem::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

int64_t ProgramItem::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void ProgramItem::SetLastUpdateTime(const int64_t& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool ProgramItem::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

bool ProgramItem::GetDeleteFlag() const
{
    return m_deleteFlag;
}

void ProgramItem::SetDeleteFlag(const bool& _deleteFlag)
{
    m_deleteFlag = _deleteFlag;
    m_deleteFlagHasBeenSet = true;
}

bool ProgramItem::DeleteFlagHasBeenSet() const
{
    return m_deleteFlagHasBeenSet;
}

string ProgramItem::GetProgramId() const
{
    return m_programId;
}

void ProgramItem::SetProgramId(const string& _programId)
{
    m_programId = _programId;
    m_programIdHasBeenSet = true;
}

bool ProgramItem::ProgramIdHasBeenSet() const
{
    return m_programIdHasBeenSet;
}

