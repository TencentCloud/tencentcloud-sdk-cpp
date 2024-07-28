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

#include <tencentcloud/cfg/v20210820/model/ActionFieldConfigResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

ActionFieldConfigResult::ActionFieldConfigResult() :
    m_actionIdHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_configDetailHasBeenSet(false)
{
}

CoreInternalOutcome ActionFieldConfigResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionId") && !value["ActionId"].IsNull())
    {
        if (!value["ActionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionFieldConfigResult.ActionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_actionId = value["ActionId"].GetUint64();
        m_actionIdHasBeenSet = true;
    }

    if (value.HasMember("ActionName") && !value["ActionName"].IsNull())
    {
        if (!value["ActionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionFieldConfigResult.ActionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionName = string(value["ActionName"].GetString());
        m_actionNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigDetail") && !value["ConfigDetail"].IsNull())
    {
        if (!value["ConfigDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ActionFieldConfigResult.ConfigDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ActionFieldConfigDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configDetail.push_back(item);
        }
        m_configDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActionFieldConfigResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionId, allocator);
    }

    if (m_actionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionName.c_str(), allocator).Move(), allocator);
    }

    if (m_configDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configDetail.begin(); itr != m_configDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t ActionFieldConfigResult::GetActionId() const
{
    return m_actionId;
}

void ActionFieldConfigResult::SetActionId(const uint64_t& _actionId)
{
    m_actionId = _actionId;
    m_actionIdHasBeenSet = true;
}

bool ActionFieldConfigResult::ActionIdHasBeenSet() const
{
    return m_actionIdHasBeenSet;
}

string ActionFieldConfigResult::GetActionName() const
{
    return m_actionName;
}

void ActionFieldConfigResult::SetActionName(const string& _actionName)
{
    m_actionName = _actionName;
    m_actionNameHasBeenSet = true;
}

bool ActionFieldConfigResult::ActionNameHasBeenSet() const
{
    return m_actionNameHasBeenSet;
}

vector<ActionFieldConfigDetail> ActionFieldConfigResult::GetConfigDetail() const
{
    return m_configDetail;
}

void ActionFieldConfigResult::SetConfigDetail(const vector<ActionFieldConfigDetail>& _configDetail)
{
    m_configDetail = _configDetail;
    m_configDetailHasBeenSet = true;
}

bool ActionFieldConfigResult::ConfigDetailHasBeenSet() const
{
    return m_configDetailHasBeenSet;
}

