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

#include <tencentcloud/kms/v20190118/model/AlgorithmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

AlgorithmInfo::AlgorithmInfo() :
    m_keyUsageHasBeenSet(false),
    m_algorithmHasBeenSet(false)
{
}

CoreInternalOutcome AlgorithmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyUsage") && !value["KeyUsage"].IsNull())
    {
        if (!value["KeyUsage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgorithmInfo.KeyUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyUsage = string(value["KeyUsage"].GetString());
        m_keyUsageHasBeenSet = true;
    }

    if (value.HasMember("Algorithm") && !value["Algorithm"].IsNull())
    {
        if (!value["Algorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgorithmInfo.Algorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algorithm = string(value["Algorithm"].GetString());
        m_algorithmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlgorithmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_algorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Algorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algorithm.c_str(), allocator).Move(), allocator);
    }

}


string AlgorithmInfo::GetKeyUsage() const
{
    return m_keyUsage;
}

void AlgorithmInfo::SetKeyUsage(const string& _keyUsage)
{
    m_keyUsage = _keyUsage;
    m_keyUsageHasBeenSet = true;
}

bool AlgorithmInfo::KeyUsageHasBeenSet() const
{
    return m_keyUsageHasBeenSet;
}

string AlgorithmInfo::GetAlgorithm() const
{
    return m_algorithm;
}

void AlgorithmInfo::SetAlgorithm(const string& _algorithm)
{
    m_algorithm = _algorithm;
    m_algorithmHasBeenSet = true;
}

bool AlgorithmInfo::AlgorithmHasBeenSet() const
{
    return m_algorithmHasBeenSet;
}

