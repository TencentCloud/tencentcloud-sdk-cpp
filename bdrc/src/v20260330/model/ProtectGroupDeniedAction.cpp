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

#include <tencentcloud/bdrc/v20260330/model/ProtectGroupDeniedAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ProtectGroupDeniedAction::ProtectGroupDeniedAction() :
    m_protectGroupIdHasBeenSet(false),
    m_deniedActionsHasBeenSet(false)
{
}

CoreInternalOutcome ProtectGroupDeniedAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProtectGroupId") && !value["ProtectGroupId"].IsNull())
    {
        if (!value["ProtectGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectGroupDeniedAction.ProtectGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectGroupId = string(value["ProtectGroupId"].GetString());
        m_protectGroupIdHasBeenSet = true;
    }

    if (value.HasMember("DeniedActions") && !value["DeniedActions"].IsNull())
    {
        if (!value["DeniedActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProtectGroupDeniedAction.DeniedActions` is not array type"));

        const rapidjson::Value &tmpValue = value["DeniedActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeniedAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deniedActions.push_back(item);
        }
        m_deniedActionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectGroupDeniedAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protectGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_deniedActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeniedActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deniedActions.begin(); itr != m_deniedActions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ProtectGroupDeniedAction::GetProtectGroupId() const
{
    return m_protectGroupId;
}

void ProtectGroupDeniedAction::SetProtectGroupId(const string& _protectGroupId)
{
    m_protectGroupId = _protectGroupId;
    m_protectGroupIdHasBeenSet = true;
}

bool ProtectGroupDeniedAction::ProtectGroupIdHasBeenSet() const
{
    return m_protectGroupIdHasBeenSet;
}

vector<DeniedAction> ProtectGroupDeniedAction::GetDeniedActions() const
{
    return m_deniedActions;
}

void ProtectGroupDeniedAction::SetDeniedActions(const vector<DeniedAction>& _deniedActions)
{
    m_deniedActions = _deniedActions;
    m_deniedActionsHasBeenSet = true;
}

bool ProtectGroupDeniedAction::DeniedActionsHasBeenSet() const
{
    return m_deniedActionsHasBeenSet;
}

