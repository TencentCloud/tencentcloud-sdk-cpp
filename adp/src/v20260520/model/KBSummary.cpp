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

#include <tencentcloud/adp/v20260520/model/KBSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

KBSummary::KBSummary() :
    m_appListHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_docCountHasBeenSet(false),
    m_isExceededHasBeenSet(false),
    m_kbIdHasBeenSet(false),
    m_kbTypeHasBeenSet(false),
    m_latestOperatorHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_processingFlagListHasBeenSet(false),
    m_sharedSubTypeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome KBSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppList") && !value["AppList"].IsNull())
    {
        if (!value["AppList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KBSummary.AppList` is not array type"));

        const rapidjson::Value &tmpValue = value["AppList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Identity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_appList.push_back(item);
        }
        m_appListHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBSummary.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBSummary.Creator` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_creator.Deserialize(value["Creator"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBSummary.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DocCount") && !value["DocCount"].IsNull())
    {
        if (!value["DocCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KBSummary.DocCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_docCount = value["DocCount"].GetUint64();
        m_docCountHasBeenSet = true;
    }

    if (value.HasMember("IsExceeded") && !value["IsExceeded"].IsNull())
    {
        if (!value["IsExceeded"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KBSummary.IsExceeded` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExceeded = value["IsExceeded"].GetBool();
        m_isExceededHasBeenSet = true;
    }

    if (value.HasMember("KbId") && !value["KbId"].IsNull())
    {
        if (!value["KbId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBSummary.KbId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kbId = string(value["KbId"].GetString());
        m_kbIdHasBeenSet = true;
    }

    if (value.HasMember("KbType") && !value["KbType"].IsNull())
    {
        if (!value["KbType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KBSummary.KbType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_kbType = value["KbType"].GetInt64();
        m_kbTypeHasBeenSet = true;
    }

    if (value.HasMember("LatestOperator") && !value["LatestOperator"].IsNull())
    {
        if (!value["LatestOperator"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBSummary.LatestOperator` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_latestOperator.Deserialize(value["LatestOperator"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_latestOperatorHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBSummary.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBSummary.Permission` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_permission.Deserialize(value["Permission"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("ProcessingFlagList") && !value["ProcessingFlagList"].IsNull())
    {
        if (!value["ProcessingFlagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KBSummary.ProcessingFlagList` is not array type"));

        const rapidjson::Value &tmpValue = value["ProcessingFlagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_processingFlagList.push_back((*itr).GetInt64());
        }
        m_processingFlagListHasBeenSet = true;
    }

    if (value.HasMember("SharedSubType") && !value["SharedSubType"].IsNull())
    {
        if (!value["SharedSubType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KBSummary.SharedSubType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sharedSubType = value["SharedSubType"].GetInt64();
        m_sharedSubTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBSummary.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KBSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_appList.begin(); itr != m_appList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_creator.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_docCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_docCount, allocator);
    }

    if (m_isExceededHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExceeded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExceeded, allocator);
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }

    if (m_kbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kbType, allocator);
    }

    if (m_latestOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_latestOperator.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_permission.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_processingFlagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessingFlagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_processingFlagList.begin(); itr != m_processingFlagList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_sharedSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sharedSubType, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


vector<Identity> KBSummary::GetAppList() const
{
    return m_appList;
}

void KBSummary::SetAppList(const vector<Identity>& _appList)
{
    m_appList = _appList;
    m_appListHasBeenSet = true;
}

bool KBSummary::AppListHasBeenSet() const
{
    return m_appListHasBeenSet;
}

string KBSummary::GetCreateTime() const
{
    return m_createTime;
}

void KBSummary::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool KBSummary::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

Operator KBSummary::GetCreator() const
{
    return m_creator;
}

void KBSummary::SetCreator(const Operator& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool KBSummary::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string KBSummary::GetDescription() const
{
    return m_description;
}

void KBSummary::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool KBSummary::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t KBSummary::GetDocCount() const
{
    return m_docCount;
}

void KBSummary::SetDocCount(const uint64_t& _docCount)
{
    m_docCount = _docCount;
    m_docCountHasBeenSet = true;
}

bool KBSummary::DocCountHasBeenSet() const
{
    return m_docCountHasBeenSet;
}

bool KBSummary::GetIsExceeded() const
{
    return m_isExceeded;
}

void KBSummary::SetIsExceeded(const bool& _isExceeded)
{
    m_isExceeded = _isExceeded;
    m_isExceededHasBeenSet = true;
}

bool KBSummary::IsExceededHasBeenSet() const
{
    return m_isExceededHasBeenSet;
}

string KBSummary::GetKbId() const
{
    return m_kbId;
}

void KBSummary::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool KBSummary::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

int64_t KBSummary::GetKbType() const
{
    return m_kbType;
}

void KBSummary::SetKbType(const int64_t& _kbType)
{
    m_kbType = _kbType;
    m_kbTypeHasBeenSet = true;
}

bool KBSummary::KbTypeHasBeenSet() const
{
    return m_kbTypeHasBeenSet;
}

Operator KBSummary::GetLatestOperator() const
{
    return m_latestOperator;
}

void KBSummary::SetLatestOperator(const Operator& _latestOperator)
{
    m_latestOperator = _latestOperator;
    m_latestOperatorHasBeenSet = true;
}

bool KBSummary::LatestOperatorHasBeenSet() const
{
    return m_latestOperatorHasBeenSet;
}

string KBSummary::GetName() const
{
    return m_name;
}

void KBSummary::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KBSummary::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

KBPermission KBSummary::GetPermission() const
{
    return m_permission;
}

void KBSummary::SetPermission(const KBPermission& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool KBSummary::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

vector<int64_t> KBSummary::GetProcessingFlagList() const
{
    return m_processingFlagList;
}

void KBSummary::SetProcessingFlagList(const vector<int64_t>& _processingFlagList)
{
    m_processingFlagList = _processingFlagList;
    m_processingFlagListHasBeenSet = true;
}

bool KBSummary::ProcessingFlagListHasBeenSet() const
{
    return m_processingFlagListHasBeenSet;
}

int64_t KBSummary::GetSharedSubType() const
{
    return m_sharedSubType;
}

void KBSummary::SetSharedSubType(const int64_t& _sharedSubType)
{
    m_sharedSubType = _sharedSubType;
    m_sharedSubTypeHasBeenSet = true;
}

bool KBSummary::SharedSubTypeHasBeenSet() const
{
    return m_sharedSubTypeHasBeenSet;
}

string KBSummary::GetUpdateTime() const
{
    return m_updateTime;
}

void KBSummary::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool KBSummary::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

