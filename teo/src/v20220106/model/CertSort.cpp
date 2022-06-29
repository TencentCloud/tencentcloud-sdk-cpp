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

#include <tencentcloud/teo/v20220106/model/CertSort.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

CertSort::CertSort() :
    m_keyHasBeenSet(false),
    m_sequenceHasBeenSet(false)
{
}

CoreInternalOutcome CertSort::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertSort.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Sequence") && !value["Sequence"].IsNull())
    {
        if (!value["Sequence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertSort.Sequence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sequence = string(value["Sequence"].GetString());
        m_sequenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertSort::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_sequenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sequence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sequence.c_str(), allocator).Move(), allocator);
    }

}


string CertSort::GetKey() const
{
    return m_key;
}

void CertSort::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool CertSort::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string CertSort::GetSequence() const
{
    return m_sequence;
}

void CertSort::SetSequence(const string& _sequence)
{
    m_sequence = _sequence;
    m_sequenceHasBeenSet = true;
}

bool CertSort::SequenceHasBeenSet() const
{
    return m_sequenceHasBeenSet;
}

