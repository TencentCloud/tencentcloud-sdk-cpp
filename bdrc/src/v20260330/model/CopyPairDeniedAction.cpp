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

#include <tencentcloud/bdrc/v20260330/model/CopyPairDeniedAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CopyPairDeniedAction::CopyPairDeniedAction() :
    m_copyPairIdHasBeenSet(false),
    m_deniedActionsHasBeenSet(false)
{
}

CoreInternalOutcome CopyPairDeniedAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CopyPairId") && !value["CopyPairId"].IsNull())
    {
        if (!value["CopyPairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPairDeniedAction.CopyPairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyPairId = string(value["CopyPairId"].GetString());
        m_copyPairIdHasBeenSet = true;
    }

    if (value.HasMember("DeniedActions") && !value["DeniedActions"].IsNull())
    {
        if (!value["DeniedActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CopyPairDeniedAction.DeniedActions` is not array type"));

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

void CopyPairDeniedAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_copyPairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyPairId.c_str(), allocator).Move(), allocator);
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


string CopyPairDeniedAction::GetCopyPairId() const
{
    return m_copyPairId;
}

void CopyPairDeniedAction::SetCopyPairId(const string& _copyPairId)
{
    m_copyPairId = _copyPairId;
    m_copyPairIdHasBeenSet = true;
}

bool CopyPairDeniedAction::CopyPairIdHasBeenSet() const
{
    return m_copyPairIdHasBeenSet;
}

vector<DeniedAction> CopyPairDeniedAction::GetDeniedActions() const
{
    return m_deniedActions;
}

void CopyPairDeniedAction::SetDeniedActions(const vector<DeniedAction>& _deniedActions)
{
    m_deniedActions = _deniedActions;
    m_deniedActionsHasBeenSet = true;
}

bool CopyPairDeniedAction::DeniedActionsHasBeenSet() const
{
    return m_deniedActionsHasBeenSet;
}

