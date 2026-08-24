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

#include <tencentcloud/bdrc/v20260330/model/DrillPairDeniedAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DrillPairDeniedAction::DrillPairDeniedAction() :
    m_drillPairIdHasBeenSet(false),
    m_deniedActionsHasBeenSet(false)
{
}

CoreInternalOutcome DrillPairDeniedAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrillPairId") && !value["DrillPairId"].IsNull())
    {
        if (!value["DrillPairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrillPairDeniedAction.DrillPairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillPairId = string(value["DrillPairId"].GetString());
        m_drillPairIdHasBeenSet = true;
    }

    if (value.HasMember("DeniedActions") && !value["DeniedActions"].IsNull())
    {
        if (!value["DeniedActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DrillPairDeniedAction.DeniedActions` is not array type"));

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

void DrillPairDeniedAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drillPairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillPairId.c_str(), allocator).Move(), allocator);
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


string DrillPairDeniedAction::GetDrillPairId() const
{
    return m_drillPairId;
}

void DrillPairDeniedAction::SetDrillPairId(const string& _drillPairId)
{
    m_drillPairId = _drillPairId;
    m_drillPairIdHasBeenSet = true;
}

bool DrillPairDeniedAction::DrillPairIdHasBeenSet() const
{
    return m_drillPairIdHasBeenSet;
}

vector<DeniedAction> DrillPairDeniedAction::GetDeniedActions() const
{
    return m_deniedActions;
}

void DrillPairDeniedAction::SetDeniedActions(const vector<DeniedAction>& _deniedActions)
{
    m_deniedActions = _deniedActions;
    m_deniedActionsHasBeenSet = true;
}

bool DrillPairDeniedAction::DeniedActionsHasBeenSet() const
{
    return m_deniedActionsHasBeenSet;
}

