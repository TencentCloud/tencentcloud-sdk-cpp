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

#include <tencentcloud/sqlserver/v20180328/model/FileAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

FileAction::FileAction() :
    m_allActionHasBeenSet(false),
    m_allowedActionHasBeenSet(false)
{
}

CoreInternalOutcome FileAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AllAction") && !value["AllAction"].IsNull())
    {
        if (!value["AllAction"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileAction.AllAction` is not array type"));

        const rapidjson::Value &tmpValue = value["AllAction"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allAction.push_back((*itr).GetString());
        }
        m_allActionHasBeenSet = true;
    }

    if (value.HasMember("AllowedAction") && !value["AllowedAction"].IsNull())
    {
        if (!value["AllowedAction"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileAction.AllowedAction` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowedAction"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowedAction.push_back((*itr).GetString());
        }
        m_allowedActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_allActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allAction.begin(); itr != m_allAction.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allowedActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowedAction.begin(); itr != m_allowedAction.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> FileAction::GetAllAction() const
{
    return m_allAction;
}

void FileAction::SetAllAction(const vector<string>& _allAction)
{
    m_allAction = _allAction;
    m_allActionHasBeenSet = true;
}

bool FileAction::AllActionHasBeenSet() const
{
    return m_allActionHasBeenSet;
}

vector<string> FileAction::GetAllowedAction() const
{
    return m_allowedAction;
}

void FileAction::SetAllowedAction(const vector<string>& _allowedAction)
{
    m_allowedAction = _allowedAction;
    m_allowedActionHasBeenSet = true;
}

bool FileAction::AllowedActionHasBeenSet() const
{
    return m_allowedActionHasBeenSet;
}

