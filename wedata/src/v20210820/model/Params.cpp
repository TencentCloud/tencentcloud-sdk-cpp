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

#include <tencentcloud/wedata/v20210820/model/Params.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

Params::Params() :
    m_transformHasBeenSet(false),
    m_transformArgsHasBeenSet(false)
{
}

CoreInternalOutcome Params::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Transform") && !value["Transform"].IsNull())
    {
        if (!value["Transform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Params.Transform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transform = string(value["Transform"].GetString());
        m_transformHasBeenSet = true;
    }

    if (value.HasMember("TransformArgs") && !value["TransformArgs"].IsNull())
    {
        if (!value["TransformArgs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Params.TransformArgs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transformArgs = string(value["TransformArgs"].GetString());
        m_transformArgsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Params::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transform.c_str(), allocator).Move(), allocator);
    }

    if (m_transformArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransformArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transformArgs.c_str(), allocator).Move(), allocator);
    }

}


string Params::GetTransform() const
{
    return m_transform;
}

void Params::SetTransform(const string& _transform)
{
    m_transform = _transform;
    m_transformHasBeenSet = true;
}

bool Params::TransformHasBeenSet() const
{
    return m_transformHasBeenSet;
}

string Params::GetTransformArgs() const
{
    return m_transformArgs;
}

void Params::SetTransformArgs(const string& _transformArgs)
{
    m_transformArgs = _transformArgs;
    m_transformArgsHasBeenSet = true;
}

bool Params::TransformArgsHasBeenSet() const
{
    return m_transformArgsHasBeenSet;
}

