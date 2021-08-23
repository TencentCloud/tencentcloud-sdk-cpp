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

#include <tencentcloud/mps/v20190612/model/HeadTailParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

HeadTailParameter::HeadTailParameter() :
    m_headSetHasBeenSet(false),
    m_tailSetHasBeenSet(false)
{
}

CoreInternalOutcome HeadTailParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeadSet") && !value["HeadSet"].IsNull())
    {
        if (!value["HeadSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HeadTailParameter.HeadSet` is not array type"));

        const rapidjson::Value &tmpValue = value["HeadSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaInputInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headSet.push_back(item);
        }
        m_headSetHasBeenSet = true;
    }

    if (value.HasMember("TailSet") && !value["TailSet"].IsNull())
    {
        if (!value["TailSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HeadTailParameter.TailSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaInputInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tailSet.push_back(item);
        }
        m_tailSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HeadTailParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headSet.begin(); itr != m_headSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tailSet.begin(); itr != m_tailSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaInputInfo> HeadTailParameter::GetHeadSet() const
{
    return m_headSet;
}

void HeadTailParameter::SetHeadSet(const vector<MediaInputInfo>& _headSet)
{
    m_headSet = _headSet;
    m_headSetHasBeenSet = true;
}

bool HeadTailParameter::HeadSetHasBeenSet() const
{
    return m_headSetHasBeenSet;
}

vector<MediaInputInfo> HeadTailParameter::GetTailSet() const
{
    return m_tailSet;
}

void HeadTailParameter::SetTailSet(const vector<MediaInputInfo>& _tailSet)
{
    m_tailSet = _tailSet;
    m_tailSetHasBeenSet = true;
}

bool HeadTailParameter::TailSetHasBeenSet() const
{
    return m_tailSetHasBeenSet;
}

