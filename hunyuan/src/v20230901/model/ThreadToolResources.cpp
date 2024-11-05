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

#include <tencentcloud/hunyuan/v20230901/model/ThreadToolResources.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

ThreadToolResources::ThreadToolResources() :
    m_codeInterpreterHasBeenSet(false),
    m_vectorStoreIDsHasBeenSet(false)
{
}

CoreInternalOutcome ThreadToolResources::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CodeInterpreter") && !value["CodeInterpreter"].IsNull())
    {
        if (!value["CodeInterpreter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ThreadToolResources.CodeInterpreter` is not array type"));

        const rapidjson::Value &tmpValue = value["CodeInterpreter"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_codeInterpreter.push_back((*itr).GetString());
        }
        m_codeInterpreterHasBeenSet = true;
    }

    if (value.HasMember("VectorStoreIDs") && !value["VectorStoreIDs"].IsNull())
    {
        if (!value["VectorStoreIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ThreadToolResources.VectorStoreIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["VectorStoreIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vectorStoreIDs.push_back((*itr).GetString());
        }
        m_vectorStoreIDsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ThreadToolResources::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeInterpreterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeInterpreter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_codeInterpreter.begin(); itr != m_codeInterpreter.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vectorStoreIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VectorStoreIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vectorStoreIDs.begin(); itr != m_vectorStoreIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ThreadToolResources::GetCodeInterpreter() const
{
    return m_codeInterpreter;
}

void ThreadToolResources::SetCodeInterpreter(const vector<string>& _codeInterpreter)
{
    m_codeInterpreter = _codeInterpreter;
    m_codeInterpreterHasBeenSet = true;
}

bool ThreadToolResources::CodeInterpreterHasBeenSet() const
{
    return m_codeInterpreterHasBeenSet;
}

vector<string> ThreadToolResources::GetVectorStoreIDs() const
{
    return m_vectorStoreIDs;
}

void ThreadToolResources::SetVectorStoreIDs(const vector<string>& _vectorStoreIDs)
{
    m_vectorStoreIDs = _vectorStoreIDs;
    m_vectorStoreIDsHasBeenSet = true;
}

bool ThreadToolResources::VectorStoreIDsHasBeenSet() const
{
    return m_vectorStoreIDsHasBeenSet;
}

