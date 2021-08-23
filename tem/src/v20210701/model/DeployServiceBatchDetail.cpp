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

#include <tencentcloud/tem/v20210701/model/DeployServiceBatchDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

DeployServiceBatchDetail::DeployServiceBatchDetail() :
    m_oldPodListHasBeenSet(false),
    m_newPodListHasBeenSet(false),
    m_batchStatusHasBeenSet(false),
    m_podNumHasBeenSet(false),
    m_batchIndexHasBeenSet(false),
    m_oldPodsHasBeenSet(false),
    m_newPodsHasBeenSet(false),
    m_nextBatchStartTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeployServiceBatchDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OldPodList") && !value["OldPodList"].IsNull())
    {
        if (!value["OldPodList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeployServiceBatchDetail.OldPodList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oldPodList.Deserialize(value["OldPodList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oldPodListHasBeenSet = true;
    }

    if (value.HasMember("NewPodList") && !value["NewPodList"].IsNull())
    {
        if (!value["NewPodList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeployServiceBatchDetail.NewPodList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_newPodList.Deserialize(value["NewPodList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_newPodListHasBeenSet = true;
    }

    if (value.HasMember("BatchStatus") && !value["BatchStatus"].IsNull())
    {
        if (!value["BatchStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployServiceBatchDetail.BatchStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchStatus = string(value["BatchStatus"].GetString());
        m_batchStatusHasBeenSet = true;
    }

    if (value.HasMember("PodNum") && !value["PodNum"].IsNull())
    {
        if (!value["PodNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployServiceBatchDetail.PodNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podNum = value["PodNum"].GetInt64();
        m_podNumHasBeenSet = true;
    }

    if (value.HasMember("BatchIndex") && !value["BatchIndex"].IsNull())
    {
        if (!value["BatchIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployServiceBatchDetail.BatchIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batchIndex = value["BatchIndex"].GetInt64();
        m_batchIndexHasBeenSet = true;
    }

    if (value.HasMember("OldPods") && !value["OldPods"].IsNull())
    {
        if (!value["OldPods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeployServiceBatchDetail.OldPods` is not array type"));

        const rapidjson::Value &tmpValue = value["OldPods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeployServicePodDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_oldPods.push_back(item);
        }
        m_oldPodsHasBeenSet = true;
    }

    if (value.HasMember("NewPods") && !value["NewPods"].IsNull())
    {
        if (!value["NewPods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeployServiceBatchDetail.NewPods` is not array type"));

        const rapidjson::Value &tmpValue = value["NewPods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeployServicePodDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_newPods.push_back(item);
        }
        m_newPodsHasBeenSet = true;
    }

    if (value.HasMember("NextBatchStartTime") && !value["NextBatchStartTime"].IsNull())
    {
        if (!value["NextBatchStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployServiceBatchDetail.NextBatchStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nextBatchStartTime = value["NextBatchStartTime"].GetInt64();
        m_nextBatchStartTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeployServiceBatchDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_oldPodListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldPodList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oldPodList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_newPodListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewPodList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_newPodList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_batchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_podNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podNum, allocator);
    }

    if (m_batchIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchIndex, allocator);
    }

    if (m_oldPodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldPods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_oldPods.begin(); itr != m_oldPods.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_newPodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewPods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_newPods.begin(); itr != m_newPods.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nextBatchStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextBatchStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nextBatchStartTime, allocator);
    }

}


DeployServicePodDetail DeployServiceBatchDetail::GetOldPodList() const
{
    return m_oldPodList;
}

void DeployServiceBatchDetail::SetOldPodList(const DeployServicePodDetail& _oldPodList)
{
    m_oldPodList = _oldPodList;
    m_oldPodListHasBeenSet = true;
}

bool DeployServiceBatchDetail::OldPodListHasBeenSet() const
{
    return m_oldPodListHasBeenSet;
}

DeployServicePodDetail DeployServiceBatchDetail::GetNewPodList() const
{
    return m_newPodList;
}

void DeployServiceBatchDetail::SetNewPodList(const DeployServicePodDetail& _newPodList)
{
    m_newPodList = _newPodList;
    m_newPodListHasBeenSet = true;
}

bool DeployServiceBatchDetail::NewPodListHasBeenSet() const
{
    return m_newPodListHasBeenSet;
}

string DeployServiceBatchDetail::GetBatchStatus() const
{
    return m_batchStatus;
}

void DeployServiceBatchDetail::SetBatchStatus(const string& _batchStatus)
{
    m_batchStatus = _batchStatus;
    m_batchStatusHasBeenSet = true;
}

bool DeployServiceBatchDetail::BatchStatusHasBeenSet() const
{
    return m_batchStatusHasBeenSet;
}

int64_t DeployServiceBatchDetail::GetPodNum() const
{
    return m_podNum;
}

void DeployServiceBatchDetail::SetPodNum(const int64_t& _podNum)
{
    m_podNum = _podNum;
    m_podNumHasBeenSet = true;
}

bool DeployServiceBatchDetail::PodNumHasBeenSet() const
{
    return m_podNumHasBeenSet;
}

int64_t DeployServiceBatchDetail::GetBatchIndex() const
{
    return m_batchIndex;
}

void DeployServiceBatchDetail::SetBatchIndex(const int64_t& _batchIndex)
{
    m_batchIndex = _batchIndex;
    m_batchIndexHasBeenSet = true;
}

bool DeployServiceBatchDetail::BatchIndexHasBeenSet() const
{
    return m_batchIndexHasBeenSet;
}

vector<DeployServicePodDetail> DeployServiceBatchDetail::GetOldPods() const
{
    return m_oldPods;
}

void DeployServiceBatchDetail::SetOldPods(const vector<DeployServicePodDetail>& _oldPods)
{
    m_oldPods = _oldPods;
    m_oldPodsHasBeenSet = true;
}

bool DeployServiceBatchDetail::OldPodsHasBeenSet() const
{
    return m_oldPodsHasBeenSet;
}

vector<DeployServicePodDetail> DeployServiceBatchDetail::GetNewPods() const
{
    return m_newPods;
}

void DeployServiceBatchDetail::SetNewPods(const vector<DeployServicePodDetail>& _newPods)
{
    m_newPods = _newPods;
    m_newPodsHasBeenSet = true;
}

bool DeployServiceBatchDetail::NewPodsHasBeenSet() const
{
    return m_newPodsHasBeenSet;
}

int64_t DeployServiceBatchDetail::GetNextBatchStartTime() const
{
    return m_nextBatchStartTime;
}

void DeployServiceBatchDetail::SetNextBatchStartTime(const int64_t& _nextBatchStartTime)
{
    m_nextBatchStartTime = _nextBatchStartTime;
    m_nextBatchStartTimeHasBeenSet = true;
}

bool DeployServiceBatchDetail::NextBatchStartTimeHasBeenSet() const
{
    return m_nextBatchStartTimeHasBeenSet;
}

