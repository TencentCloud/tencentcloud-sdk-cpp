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

#include <tencentcloud/tcb/v20180608/model/MgoKeySchema.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

MgoKeySchema::MgoKeySchema() :
    m_mgoIndexKeysHasBeenSet(false),
    m_mgoIsUniqueHasBeenSet(false),
    m_mgoIsSparseHasBeenSet(false)
{
}

CoreInternalOutcome MgoKeySchema::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MgoIndexKeys") && !value["MgoIndexKeys"].IsNull())
    {
        if (!value["MgoIndexKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MgoKeySchema.MgoIndexKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["MgoIndexKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MgoIndexKeys item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mgoIndexKeys.push_back(item);
        }
        m_mgoIndexKeysHasBeenSet = true;
    }

    if (value.HasMember("MgoIsUnique") && !value["MgoIsUnique"].IsNull())
    {
        if (!value["MgoIsUnique"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MgoKeySchema.MgoIsUnique` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_mgoIsUnique = value["MgoIsUnique"].GetBool();
        m_mgoIsUniqueHasBeenSet = true;
    }

    if (value.HasMember("MgoIsSparse") && !value["MgoIsSparse"].IsNull())
    {
        if (!value["MgoIsSparse"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MgoKeySchema.MgoIsSparse` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_mgoIsSparse = value["MgoIsSparse"].GetBool();
        m_mgoIsSparseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MgoKeySchema::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mgoIndexKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MgoIndexKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mgoIndexKeys.begin(); itr != m_mgoIndexKeys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mgoIsUniqueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MgoIsUnique";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mgoIsUnique, allocator);
    }

    if (m_mgoIsSparseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MgoIsSparse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mgoIsSparse, allocator);
    }

}


vector<MgoIndexKeys> MgoKeySchema::GetMgoIndexKeys() const
{
    return m_mgoIndexKeys;
}

void MgoKeySchema::SetMgoIndexKeys(const vector<MgoIndexKeys>& _mgoIndexKeys)
{
    m_mgoIndexKeys = _mgoIndexKeys;
    m_mgoIndexKeysHasBeenSet = true;
}

bool MgoKeySchema::MgoIndexKeysHasBeenSet() const
{
    return m_mgoIndexKeysHasBeenSet;
}

bool MgoKeySchema::GetMgoIsUnique() const
{
    return m_mgoIsUnique;
}

void MgoKeySchema::SetMgoIsUnique(const bool& _mgoIsUnique)
{
    m_mgoIsUnique = _mgoIsUnique;
    m_mgoIsUniqueHasBeenSet = true;
}

bool MgoKeySchema::MgoIsUniqueHasBeenSet() const
{
    return m_mgoIsUniqueHasBeenSet;
}

bool MgoKeySchema::GetMgoIsSparse() const
{
    return m_mgoIsSparse;
}

void MgoKeySchema::SetMgoIsSparse(const bool& _mgoIsSparse)
{
    m_mgoIsSparse = _mgoIsSparse;
    m_mgoIsSparseHasBeenSet = true;
}

bool MgoKeySchema::MgoIsSparseHasBeenSet() const
{
    return m_mgoIsSparseHasBeenSet;
}

