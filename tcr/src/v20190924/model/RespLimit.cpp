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

#include <tencentcloud/tcr/v20190924/model/RespLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

RespLimit::RespLimit() :
    m_limitInfoHasBeenSet(false)
{
}

CoreInternalOutcome RespLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LimitInfo") && !value["LimitInfo"].IsNull())
    {
        if (!value["LimitInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RespLimit.LimitInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["LimitInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Limit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_limitInfo.push_back(item);
        }
        m_limitInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RespLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_limitInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limitInfo.begin(); itr != m_limitInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<Limit> RespLimit::GetLimitInfo() const
{
    return m_limitInfo;
}

void RespLimit::SetLimitInfo(const vector<Limit>& _limitInfo)
{
    m_limitInfo = _limitInfo;
    m_limitInfoHasBeenSet = true;
}

bool RespLimit::LimitInfoHasBeenSet() const
{
    return m_limitInfoHasBeenSet;
}

