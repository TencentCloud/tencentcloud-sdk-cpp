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

#include <tencentcloud/tbm/v20180129/model/MoviePortraitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbm::V20180129::Model;
using namespace std;

MoviePortraitInfo::MoviePortraitInfo() :
    m_portraitSetHasBeenSet(false)
{
}

CoreInternalOutcome MoviePortraitInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PortraitSet") && !value["PortraitSet"].IsNull())
    {
        if (!value["PortraitSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MoviePortraitInfo.PortraitSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PortraitSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MoviePortrait item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_portraitSet.push_back(item);
        }
        m_portraitSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MoviePortraitInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_portraitSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_portraitSet.begin(); itr != m_portraitSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MoviePortrait> MoviePortraitInfo::GetPortraitSet() const
{
    return m_portraitSet;
}

void MoviePortraitInfo::SetPortraitSet(const vector<MoviePortrait>& _portraitSet)
{
    m_portraitSet = _portraitSet;
    m_portraitSetHasBeenSet = true;
}

bool MoviePortraitInfo::PortraitSetHasBeenSet() const
{
    return m_portraitSetHasBeenSet;
}

