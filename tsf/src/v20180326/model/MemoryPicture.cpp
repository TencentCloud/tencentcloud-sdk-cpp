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

#include <tencentcloud/tsf/v20180326/model/MemoryPicture.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

MemoryPicture::MemoryPicture() :
    m_maxHasBeenSet(false),
    m_usedHasBeenSet(false),
    m_committedHasBeenSet(false)
{
}

CoreInternalOutcome MemoryPicture::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MemoryPicture.Max` is not array type"));

        const rapidjson::Value &tmpValue = value["Max"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CurvePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_max.push_back(item);
        }
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MemoryPicture.Used` is not array type"));

        const rapidjson::Value &tmpValue = value["Used"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CurvePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_used.push_back(item);
        }
        m_usedHasBeenSet = true;
    }

    if (value.HasMember("Committed") && !value["Committed"].IsNull())
    {
        if (!value["Committed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MemoryPicture.Committed` is not array type"));

        const rapidjson::Value &tmpValue = value["Committed"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CurvePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_committed.push_back(item);
        }
        m_committedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MemoryPicture::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_max.begin(); itr != m_max.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_used.begin(); itr != m_used.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_committedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Committed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_committed.begin(); itr != m_committed.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<CurvePoint> MemoryPicture::GetMax() const
{
    return m_max;
}

void MemoryPicture::SetMax(const vector<CurvePoint>& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool MemoryPicture::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

vector<CurvePoint> MemoryPicture::GetUsed() const
{
    return m_used;
}

void MemoryPicture::SetUsed(const vector<CurvePoint>& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool MemoryPicture::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

vector<CurvePoint> MemoryPicture::GetCommitted() const
{
    return m_committed;
}

void MemoryPicture::SetCommitted(const vector<CurvePoint>& _committed)
{
    m_committed = _committed;
    m_committedHasBeenSet = true;
}

bool MemoryPicture::CommittedHasBeenSet() const
{
    return m_committedHasBeenSet;
}

