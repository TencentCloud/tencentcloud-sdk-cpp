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

#include <tencentcloud/antiddos/v20200309/model/ConnectLimitRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

ConnectLimitRelation::ConnectLimitRelation() :
    m_connectLimitConfigHasBeenSet(false),
    m_instanceDetailListHasBeenSet(false)
{
}

CoreInternalOutcome ConnectLimitRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConnectLimitConfig") && !value["ConnectLimitConfig"].IsNull())
    {
        if (!value["ConnectLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectLimitRelation.ConnectLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_connectLimitConfig.Deserialize(value["ConnectLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_connectLimitConfigHasBeenSet = true;
    }

    if (value.HasMember("InstanceDetailList") && !value["InstanceDetailList"].IsNull())
    {
        if (!value["InstanceDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConnectLimitRelation.InstanceDetailList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceDetailList.push_back(item);
        }
        m_instanceDetailListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConnectLimitRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_connectLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_connectLimitConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceDetailList.begin(); itr != m_instanceDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


ConnectLimitConfig ConnectLimitRelation::GetConnectLimitConfig() const
{
    return m_connectLimitConfig;
}

void ConnectLimitRelation::SetConnectLimitConfig(const ConnectLimitConfig& _connectLimitConfig)
{
    m_connectLimitConfig = _connectLimitConfig;
    m_connectLimitConfigHasBeenSet = true;
}

bool ConnectLimitRelation::ConnectLimitConfigHasBeenSet() const
{
    return m_connectLimitConfigHasBeenSet;
}

vector<InstanceRelation> ConnectLimitRelation::GetInstanceDetailList() const
{
    return m_instanceDetailList;
}

void ConnectLimitRelation::SetInstanceDetailList(const vector<InstanceRelation>& _instanceDetailList)
{
    m_instanceDetailList = _instanceDetailList;
    m_instanceDetailListHasBeenSet = true;
}

bool ConnectLimitRelation::InstanceDetailListHasBeenSet() const
{
    return m_instanceDetailListHasBeenSet;
}

