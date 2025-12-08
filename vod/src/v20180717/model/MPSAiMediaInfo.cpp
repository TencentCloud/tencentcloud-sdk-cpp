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

#include <tencentcloud/vod/v20180717/model/MPSAiMediaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSAiMediaInfo::MPSAiMediaInfo() :
    m_aiMediaListHasBeenSet(false)
{
}

CoreInternalOutcome MPSAiMediaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AiMediaList") && !value["AiMediaList"].IsNull())
    {
        if (!value["AiMediaList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MPSAiMediaInfo.AiMediaList` is not array type"));

        const rapidjson::Value &tmpValue = value["AiMediaList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MPSAiMediaItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aiMediaList.push_back(item);
        }
        m_aiMediaListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSAiMediaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aiMediaListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiMediaList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aiMediaList.begin(); itr != m_aiMediaList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MPSAiMediaItem> MPSAiMediaInfo::GetAiMediaList() const
{
    return m_aiMediaList;
}

void MPSAiMediaInfo::SetAiMediaList(const vector<MPSAiMediaItem>& _aiMediaList)
{
    m_aiMediaList = _aiMediaList;
    m_aiMediaListHasBeenSet = true;
}

bool MPSAiMediaInfo::AiMediaListHasBeenSet() const
{
    return m_aiMediaListHasBeenSet;
}

