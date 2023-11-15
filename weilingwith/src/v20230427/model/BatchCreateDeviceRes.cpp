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

#include <tencentcloud/weilingwith/v20230427/model/BatchCreateDeviceRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

BatchCreateDeviceRes::BatchCreateDeviceRes() :
    m_successSetHasBeenSet(false),
    m_failSetHasBeenSet(false)
{
}

CoreInternalOutcome BatchCreateDeviceRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SuccessSet") && !value["SuccessSet"].IsNull())
    {
        if (!value["SuccessSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchCreateDeviceRes.SuccessSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SuccessSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CreateDeviceSucceeded item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_successSet.push_back(item);
        }
        m_successSetHasBeenSet = true;
    }

    if (value.HasMember("FailSet") && !value["FailSet"].IsNull())
    {
        if (!value["FailSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchCreateDeviceRes.FailSet` is not array type"));

        const rapidjson::Value &tmpValue = value["FailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CreateDeviceFailed item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failSet.push_back(item);
        }
        m_failSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchCreateDeviceRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_successSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_successSet.begin(); itr != m_successSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_failSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failSet.begin(); itr != m_failSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<CreateDeviceSucceeded> BatchCreateDeviceRes::GetSuccessSet() const
{
    return m_successSet;
}

void BatchCreateDeviceRes::SetSuccessSet(const vector<CreateDeviceSucceeded>& _successSet)
{
    m_successSet = _successSet;
    m_successSetHasBeenSet = true;
}

bool BatchCreateDeviceRes::SuccessSetHasBeenSet() const
{
    return m_successSetHasBeenSet;
}

vector<CreateDeviceFailed> BatchCreateDeviceRes::GetFailSet() const
{
    return m_failSet;
}

void BatchCreateDeviceRes::SetFailSet(const vector<CreateDeviceFailed>& _failSet)
{
    m_failSet = _failSet;
    m_failSetHasBeenSet = true;
}

bool BatchCreateDeviceRes::FailSetHasBeenSet() const
{
    return m_failSetHasBeenSet;
}

