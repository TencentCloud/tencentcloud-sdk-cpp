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

#include <tencentcloud/ssl/v20191205/model/TkeNameSpaceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

TkeNameSpaceDetail::TkeNameSpaceDetail() :
    m_nameHasBeenSet(false),
    m_secretListHasBeenSet(false)
{
}

CoreInternalOutcome TkeNameSpaceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeNameSpaceDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SecretList") && !value["SecretList"].IsNull())
    {
        if (!value["SecretList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TkeNameSpaceDetail.SecretList` is not array type"));

        const rapidjson::Value &tmpValue = value["SecretList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TkeSecretDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_secretList.push_back(item);
        }
        m_secretListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TkeNameSpaceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_secretListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_secretList.begin(); itr != m_secretList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TkeNameSpaceDetail::GetName() const
{
    return m_name;
}

void TkeNameSpaceDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TkeNameSpaceDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<TkeSecretDetail> TkeNameSpaceDetail::GetSecretList() const
{
    return m_secretList;
}

void TkeNameSpaceDetail::SetSecretList(const vector<TkeSecretDetail>& _secretList)
{
    m_secretList = _secretList;
    m_secretListHasBeenSet = true;
}

bool TkeNameSpaceDetail::SecretListHasBeenSet() const
{
    return m_secretListHasBeenSet;
}

