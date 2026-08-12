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

#include <tencentcloud/tcbr/v20220217/model/ServerBaseConfigDiff.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

ServerBaseConfigDiff::ServerBaseConfigDiff() :
    m_strParamsHasBeenSet(false)
{
}

CoreInternalOutcome ServerBaseConfigDiff::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrParams") && !value["StrParams"].IsNull())
    {
        if (!value["StrParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerBaseConfigDiff.StrParams` is not array type"));

        const rapidjson::Value &tmpValue = value["StrParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ObjectKV item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_strParams.push_back(item);
        }
        m_strParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerBaseConfigDiff::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_strParams.begin(); itr != m_strParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ObjectKV> ServerBaseConfigDiff::GetStrParams() const
{
    return m_strParams;
}

void ServerBaseConfigDiff::SetStrParams(const vector<ObjectKV>& _strParams)
{
    m_strParams = _strParams;
    m_strParamsHasBeenSet = true;
}

bool ServerBaseConfigDiff::StrParamsHasBeenSet() const
{
    return m_strParamsHasBeenSet;
}

