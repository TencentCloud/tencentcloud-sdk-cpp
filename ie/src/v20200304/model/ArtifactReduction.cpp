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

#include <tencentcloud/ie/v20200304/model/ArtifactReduction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

ArtifactReduction::ArtifactReduction() :
    m_typeHasBeenSet(false),
    m_algorithmHasBeenSet(false)
{
}

CoreInternalOutcome ArtifactReduction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArtifactReduction.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Algorithm") && !value["Algorithm"].IsNull())
    {
        if (!value["Algorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArtifactReduction.Algorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algorithm = string(value["Algorithm"].GetString());
        m_algorithmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ArtifactReduction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_algorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Algorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algorithm.c_str(), allocator).Move(), allocator);
    }

}


string ArtifactReduction::GetType() const
{
    return m_type;
}

void ArtifactReduction::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ArtifactReduction::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ArtifactReduction::GetAlgorithm() const
{
    return m_algorithm;
}

void ArtifactReduction::SetAlgorithm(const string& _algorithm)
{
    m_algorithm = _algorithm;
    m_algorithmHasBeenSet = true;
}

bool ArtifactReduction::AlgorithmHasBeenSet() const
{
    return m_algorithmHasBeenSet;
}

