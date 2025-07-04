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

#include <tencentcloud/asr/v20190614/model/VerifyTopResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

VerifyTopResult::VerifyTopResult() :
    m_verifyTopsHasBeenSet(false)
{
}

CoreInternalOutcome VerifyTopResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VerifyTops") && !value["VerifyTops"].IsNull())
    {
        if (!value["VerifyTops"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VerifyTopResult.VerifyTops` is not array type"));

        const rapidjson::Value &tmpValue = value["VerifyTops"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VerifyTop item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_verifyTops.push_back(item);
        }
        m_verifyTopsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VerifyTopResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_verifyTopsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyTops";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_verifyTops.begin(); itr != m_verifyTops.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<VerifyTop> VerifyTopResult::GetVerifyTops() const
{
    return m_verifyTops;
}

void VerifyTopResult::SetVerifyTops(const vector<VerifyTop>& _verifyTops)
{
    m_verifyTops = _verifyTops;
    m_verifyTopsHasBeenSet = true;
}

bool VerifyTopResult::VerifyTopsHasBeenSet() const
{
    return m_verifyTopsHasBeenSet;
}

