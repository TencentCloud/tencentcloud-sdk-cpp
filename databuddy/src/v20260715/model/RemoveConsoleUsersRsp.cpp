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

#include <tencentcloud/databuddy/v20260715/model/RemoveConsoleUsersRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

RemoveConsoleUsersRsp::RemoveConsoleUsersRsp() :
    m_statusHasBeenSet(false),
    m_successUinsHasBeenSet(false),
    m_failItemsHasBeenSet(false)
{
}

CoreInternalOutcome RemoveConsoleUsersRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RemoveConsoleUsersRsp.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SuccessUins") && !value["SuccessUins"].IsNull())
    {
        if (!value["SuccessUins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RemoveConsoleUsersRsp.SuccessUins` is not array type"));

        const rapidjson::Value &tmpValue = value["SuccessUins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_successUins.push_back((*itr).GetString());
        }
        m_successUinsHasBeenSet = true;
    }

    if (value.HasMember("FailItems") && !value["FailItems"].IsNull())
    {
        if (!value["FailItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RemoveConsoleUsersRsp.FailItems` is not array type"));

        const rapidjson::Value &tmpValue = value["FailItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonFailItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failItems.push_back(item);
        }
        m_failItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RemoveConsoleUsersRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_successUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessUins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_successUins.begin(); itr != m_successUins.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failItems.begin(); itr != m_failItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool RemoveConsoleUsersRsp::GetStatus() const
{
    return m_status;
}

void RemoveConsoleUsersRsp::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RemoveConsoleUsersRsp::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> RemoveConsoleUsersRsp::GetSuccessUins() const
{
    return m_successUins;
}

void RemoveConsoleUsersRsp::SetSuccessUins(const vector<string>& _successUins)
{
    m_successUins = _successUins;
    m_successUinsHasBeenSet = true;
}

bool RemoveConsoleUsersRsp::SuccessUinsHasBeenSet() const
{
    return m_successUinsHasBeenSet;
}

vector<CommonFailItem> RemoveConsoleUsersRsp::GetFailItems() const
{
    return m_failItems;
}

void RemoveConsoleUsersRsp::SetFailItems(const vector<CommonFailItem>& _failItems)
{
    m_failItems = _failItems;
    m_failItemsHasBeenSet = true;
}

bool RemoveConsoleUsersRsp::FailItemsHasBeenSet() const
{
    return m_failItemsHasBeenSet;
}

