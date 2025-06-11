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

#include <tencentcloud/lke/v20231130/model/KnowledgeDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

KnowledgeDetailInfo::KnowledgeDetailInfo() :
    m_knowledgeHasBeenSet(false),
    m_appListHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Knowledge") && !value["Knowledge"].IsNull())
    {
        if (!value["Knowledge"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeDetailInfo.Knowledge` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_knowledge.Deserialize(value["Knowledge"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_knowledgeHasBeenSet = true;
    }

    if (value.HasMember("AppList") && !value["AppList"].IsNull())
    {
        if (!value["AppList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeDetailInfo.AppList` is not array type"));

        const rapidjson::Value &tmpValue = value["AppList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AppBaseInfo item;
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

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeDetailInfo.User` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_user.Deserialize(value["User"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_knowledgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Knowledge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_knowledge.ToJsonObject(value[key.c_str()], allocator);
    }

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

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_user.ToJsonObject(value[key.c_str()], allocator);
    }

}


KnowledgeBaseInfo KnowledgeDetailInfo::GetKnowledge() const
{
    return m_knowledge;
}

void KnowledgeDetailInfo::SetKnowledge(const KnowledgeBaseInfo& _knowledge)
{
    m_knowledge = _knowledge;
    m_knowledgeHasBeenSet = true;
}

bool KnowledgeDetailInfo::KnowledgeHasBeenSet() const
{
    return m_knowledgeHasBeenSet;
}

vector<AppBaseInfo> KnowledgeDetailInfo::GetAppList() const
{
    return m_appList;
}

void KnowledgeDetailInfo::SetAppList(const vector<AppBaseInfo>& _appList)
{
    m_appList = _appList;
    m_appListHasBeenSet = true;
}

bool KnowledgeDetailInfo::AppListHasBeenSet() const
{
    return m_appListHasBeenSet;
}

UserBaseInfo KnowledgeDetailInfo::GetUser() const
{
    return m_user;
}

void KnowledgeDetailInfo::SetUser(const UserBaseInfo& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool KnowledgeDetailInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

