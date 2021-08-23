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

#include <tencentcloud/tke/v20180525/model/InstanceUpgradeProgressItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

InstanceUpgradeProgressItem::InstanceUpgradeProgressItem() :
    m_instanceIDHasBeenSet(false),
    m_lifeStateHasBeenSet(false),
    m_startAtHasBeenSet(false),
    m_endAtHasBeenSet(false),
    m_checkResultHasBeenSet(false),
    m_detailHasBeenSet(false)
{
}

CoreInternalOutcome InstanceUpgradeProgressItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradeProgressItem.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("LifeState") && !value["LifeState"].IsNull())
    {
        if (!value["LifeState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradeProgressItem.LifeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeState = string(value["LifeState"].GetString());
        m_lifeStateHasBeenSet = true;
    }

    if (value.HasMember("StartAt") && !value["StartAt"].IsNull())
    {
        if (!value["StartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradeProgressItem.StartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startAt = string(value["StartAt"].GetString());
        m_startAtHasBeenSet = true;
    }

    if (value.HasMember("EndAt") && !value["EndAt"].IsNull())
    {
        if (!value["EndAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradeProgressItem.EndAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endAt = string(value["EndAt"].GetString());
        m_endAtHasBeenSet = true;
    }

    if (value.HasMember("CheckResult") && !value["CheckResult"].IsNull())
    {
        if (!value["CheckResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradeProgressItem.CheckResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_checkResult.Deserialize(value["CheckResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_checkResultHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceUpgradeProgressItem.Detail` is not array type"));

        const rapidjson::Value &tmpValue = value["Detail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskStepInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detail.push_back(item);
        }
        m_detailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceUpgradeProgressItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeState.c_str(), allocator).Move(), allocator);
    }

    if (m_startAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startAt.c_str(), allocator).Move(), allocator);
    }

    if (m_endAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endAt.c_str(), allocator).Move(), allocator);
    }

    if (m_checkResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_checkResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detail.begin(); itr != m_detail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InstanceUpgradeProgressItem::GetInstanceID() const
{
    return m_instanceID;
}

void InstanceUpgradeProgressItem::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool InstanceUpgradeProgressItem::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string InstanceUpgradeProgressItem::GetLifeState() const
{
    return m_lifeState;
}

void InstanceUpgradeProgressItem::SetLifeState(const string& _lifeState)
{
    m_lifeState = _lifeState;
    m_lifeStateHasBeenSet = true;
}

bool InstanceUpgradeProgressItem::LifeStateHasBeenSet() const
{
    return m_lifeStateHasBeenSet;
}

string InstanceUpgradeProgressItem::GetStartAt() const
{
    return m_startAt;
}

void InstanceUpgradeProgressItem::SetStartAt(const string& _startAt)
{
    m_startAt = _startAt;
    m_startAtHasBeenSet = true;
}

bool InstanceUpgradeProgressItem::StartAtHasBeenSet() const
{
    return m_startAtHasBeenSet;
}

string InstanceUpgradeProgressItem::GetEndAt() const
{
    return m_endAt;
}

void InstanceUpgradeProgressItem::SetEndAt(const string& _endAt)
{
    m_endAt = _endAt;
    m_endAtHasBeenSet = true;
}

bool InstanceUpgradeProgressItem::EndAtHasBeenSet() const
{
    return m_endAtHasBeenSet;
}

InstanceUpgradePreCheckResult InstanceUpgradeProgressItem::GetCheckResult() const
{
    return m_checkResult;
}

void InstanceUpgradeProgressItem::SetCheckResult(const InstanceUpgradePreCheckResult& _checkResult)
{
    m_checkResult = _checkResult;
    m_checkResultHasBeenSet = true;
}

bool InstanceUpgradeProgressItem::CheckResultHasBeenSet() const
{
    return m_checkResultHasBeenSet;
}

vector<TaskStepInfo> InstanceUpgradeProgressItem::GetDetail() const
{
    return m_detail;
}

void InstanceUpgradeProgressItem::SetDetail(const vector<TaskStepInfo>& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool InstanceUpgradeProgressItem::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

