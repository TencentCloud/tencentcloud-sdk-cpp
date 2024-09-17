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

#include <tencentcloud/hunyuan/v20230901/model/Replace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Replace::Replace() :
    m_idHasBeenSet(false),
    m_multimediaHasBeenSet(false)
{
}

CoreInternalOutcome Replace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Replace.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Multimedia") && !value["Multimedia"].IsNull())
    {
        if (!value["Multimedia"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Replace.Multimedia` is not array type"));

        const rapidjson::Value &tmpValue = value["Multimedia"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Multimedia item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_multimedia.push_back(item);
        }
        m_multimediaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Replace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_multimediaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Multimedia";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multimedia.begin(); itr != m_multimedia.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Replace::GetId() const
{
    return m_id;
}

void Replace::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Replace::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<Multimedia> Replace::GetMultimedia() const
{
    return m_multimedia;
}

void Replace::SetMultimedia(const vector<Multimedia>& _multimedia)
{
    m_multimedia = _multimedia;
    m_multimediaHasBeenSet = true;
}

bool Replace::MultimediaHasBeenSet() const
{
    return m_multimediaHasBeenSet;
}

