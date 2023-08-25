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

#include <tencentcloud/dsgc/v20190723/model/TopAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

TopAsset::TopAsset() :
    m_levelNameHasBeenSet(false),
    m_topStatHasBeenSet(false)
{
}

CoreInternalOutcome TopAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LevelName") && !value["LevelName"].IsNull())
    {
        if (!value["LevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopAsset.LevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelName = string(value["LevelName"].GetString());
        m_levelNameHasBeenSet = true;
    }

    if (value.HasMember("TopStat") && !value["TopStat"].IsNull())
    {
        if (!value["TopStat"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopAsset.TopStat` is not array type"));

        const rapidjson::Value &tmpValue = value["TopStat"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopAssetStat item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topStat.push_back(item);
        }
        m_topStatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_levelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelName.c_str(), allocator).Move(), allocator);
    }

    if (m_topStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topStat.begin(); itr != m_topStat.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TopAsset::GetLevelName() const
{
    return m_levelName;
}

void TopAsset::SetLevelName(const string& _levelName)
{
    m_levelName = _levelName;
    m_levelNameHasBeenSet = true;
}

bool TopAsset::LevelNameHasBeenSet() const
{
    return m_levelNameHasBeenSet;
}

vector<TopAssetStat> TopAsset::GetTopStat() const
{
    return m_topStat;
}

void TopAsset::SetTopStat(const vector<TopAssetStat>& _topStat)
{
    m_topStat = _topStat;
    m_topStatHasBeenSet = true;
}

bool TopAsset::TopStatHasBeenSet() const
{
    return m_topStatHasBeenSet;
}

