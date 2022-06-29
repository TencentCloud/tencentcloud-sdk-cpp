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

#include <tencentcloud/cls/v20201016/model/ParquetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ParquetInfo::ParquetInfo() :
    m_parquetKeyInfoHasBeenSet(false)
{
}

CoreInternalOutcome ParquetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParquetKeyInfo") && !value["ParquetKeyInfo"].IsNull())
    {
        if (!value["ParquetKeyInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParquetInfo.ParquetKeyInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ParquetKeyInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParquetKeyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_parquetKeyInfo.push_back(item);
        }
        m_parquetKeyInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParquetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_parquetKeyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParquetKeyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parquetKeyInfo.begin(); itr != m_parquetKeyInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ParquetKeyInfo> ParquetInfo::GetParquetKeyInfo() const
{
    return m_parquetKeyInfo;
}

void ParquetInfo::SetParquetKeyInfo(const vector<ParquetKeyInfo>& _parquetKeyInfo)
{
    m_parquetKeyInfo = _parquetKeyInfo;
    m_parquetKeyInfoHasBeenSet = true;
}

bool ParquetInfo::ParquetKeyInfoHasBeenSet() const
{
    return m_parquetKeyInfoHasBeenSet;
}

