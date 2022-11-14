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

#include <tencentcloud/wedata/v20210820/model/DimensionScore.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DimensionScore::DimensionScore() :
    m_dimensionScoreListHasBeenSet(false)
{
}

CoreInternalOutcome DimensionScore::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DimensionScoreList") && !value["DimensionScoreList"].IsNull())
    {
        if (!value["DimensionScoreList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DimensionScore.DimensionScoreList` is not array type"));

        const rapidjson::Value &tmpValue = value["DimensionScoreList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DimensionScoreInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dimensionScoreList.push_back(item);
        }
        m_dimensionScoreListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DimensionScore::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dimensionScoreListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionScoreList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dimensionScoreList.begin(); itr != m_dimensionScoreList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<DimensionScoreInfo> DimensionScore::GetDimensionScoreList() const
{
    return m_dimensionScoreList;
}

void DimensionScore::SetDimensionScoreList(const vector<DimensionScoreInfo>& _dimensionScoreList)
{
    m_dimensionScoreList = _dimensionScoreList;
    m_dimensionScoreListHasBeenSet = true;
}

bool DimensionScore::DimensionScoreListHasBeenSet() const
{
    return m_dimensionScoreListHasBeenSet;
}

