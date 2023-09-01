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

#include <tencentcloud/mps/v20190612/model/SimpleAesDrm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SimpleAesDrm::SimpleAesDrm() :
    m_uriHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_vectorHasBeenSet(false)
{
}

CoreInternalOutcome SimpleAesDrm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uri") && !value["Uri"].IsNull())
    {
        if (!value["Uri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleAesDrm.Uri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uri = string(value["Uri"].GetString());
        m_uriHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleAesDrm.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Vector") && !value["Vector"].IsNull())
    {
        if (!value["Vector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleAesDrm.Vector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vector = string(value["Vector"].GetString());
        m_vectorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimpleAesDrm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uri.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_vectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vector.c_str(), allocator).Move(), allocator);
    }

}


string SimpleAesDrm::GetUri() const
{
    return m_uri;
}

void SimpleAesDrm::SetUri(const string& _uri)
{
    m_uri = _uri;
    m_uriHasBeenSet = true;
}

bool SimpleAesDrm::UriHasBeenSet() const
{
    return m_uriHasBeenSet;
}

string SimpleAesDrm::GetKey() const
{
    return m_key;
}

void SimpleAesDrm::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool SimpleAesDrm::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string SimpleAesDrm::GetVector() const
{
    return m_vector;
}

void SimpleAesDrm::SetVector(const string& _vector)
{
    m_vector = _vector;
    m_vectorHasBeenSet = true;
}

bool SimpleAesDrm::VectorHasBeenSet() const
{
    return m_vectorHasBeenSet;
}

