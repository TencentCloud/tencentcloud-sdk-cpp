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

#include <tencentcloud/tse/v20201207/model/KongUpstreamList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

KongUpstreamList::KongUpstreamList() :
    m_upstreamListHasBeenSet(false)
{
}

CoreInternalOutcome KongUpstreamList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UpstreamList") && !value["UpstreamList"].IsNull())
    {
        if (!value["UpstreamList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongUpstreamList.UpstreamList` is not array type"));

        const rapidjson::Value &tmpValue = value["UpstreamList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KongUpstreamPreview item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_upstreamList.push_back(item);
        }
        m_upstreamListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KongUpstreamList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_upstreamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_upstreamList.begin(); itr != m_upstreamList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<KongUpstreamPreview> KongUpstreamList::GetUpstreamList() const
{
    return m_upstreamList;
}

void KongUpstreamList::SetUpstreamList(const vector<KongUpstreamPreview>& _upstreamList)
{
    m_upstreamList = _upstreamList;
    m_upstreamListHasBeenSet = true;
}

bool KongUpstreamList::UpstreamListHasBeenSet() const
{
    return m_upstreamListHasBeenSet;
}

