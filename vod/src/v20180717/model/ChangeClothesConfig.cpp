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

#include <tencentcloud/vod/v20180717/model/ChangeClothesConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ChangeClothesConfig::ChangeClothesConfig() :
    m_clothesFileInfosHasBeenSet(false)
{
}

CoreInternalOutcome ChangeClothesConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClothesFileInfos") && !value["ClothesFileInfos"].IsNull())
    {
        if (!value["ClothesFileInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChangeClothesConfig.ClothesFileInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ClothesFileInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SceneAigcImageTaskInputFileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clothesFileInfos.push_back(item);
        }
        m_clothesFileInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChangeClothesConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clothesFileInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClothesFileInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clothesFileInfos.begin(); itr != m_clothesFileInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<SceneAigcImageTaskInputFileInfo> ChangeClothesConfig::GetClothesFileInfos() const
{
    return m_clothesFileInfos;
}

void ChangeClothesConfig::SetClothesFileInfos(const vector<SceneAigcImageTaskInputFileInfo>& _clothesFileInfos)
{
    m_clothesFileInfos = _clothesFileInfos;
    m_clothesFileInfosHasBeenSet = true;
}

bool ChangeClothesConfig::ClothesFileInfosHasBeenSet() const
{
    return m_clothesFileInfosHasBeenSet;
}

