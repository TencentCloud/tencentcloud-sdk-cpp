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

#include <tencentcloud/cvm/v20170312/model/ChcHostDeniedActions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ChcHostDeniedActions::ChcHostDeniedActions() :
    m_chcIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_denyActionsHasBeenSet(false)
{
}

CoreInternalOutcome ChcHostDeniedActions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChcId") && !value["ChcId"].IsNull())
    {
        if (!value["ChcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHostDeniedActions.ChcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chcId = string(value["ChcId"].GetString());
        m_chcIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHostDeniedActions.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("DenyActions") && !value["DenyActions"].IsNull())
    {
        if (!value["DenyActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChcHostDeniedActions.DenyActions` is not array type"));

        const rapidjson::Value &tmpValue = value["DenyActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_denyActions.push_back((*itr).GetString());
        }
        m_denyActionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChcHostDeniedActions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chcId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_denyActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DenyActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_denyActions.begin(); itr != m_denyActions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ChcHostDeniedActions::GetChcId() const
{
    return m_chcId;
}

void ChcHostDeniedActions::SetChcId(const string& _chcId)
{
    m_chcId = _chcId;
    m_chcIdHasBeenSet = true;
}

bool ChcHostDeniedActions::ChcIdHasBeenSet() const
{
    return m_chcIdHasBeenSet;
}

string ChcHostDeniedActions::GetState() const
{
    return m_state;
}

void ChcHostDeniedActions::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ChcHostDeniedActions::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<string> ChcHostDeniedActions::GetDenyActions() const
{
    return m_denyActions;
}

void ChcHostDeniedActions::SetDenyActions(const vector<string>& _denyActions)
{
    m_denyActions = _denyActions;
    m_denyActionsHasBeenSet = true;
}

bool ChcHostDeniedActions::DenyActionsHasBeenSet() const
{
    return m_denyActionsHasBeenSet;
}

