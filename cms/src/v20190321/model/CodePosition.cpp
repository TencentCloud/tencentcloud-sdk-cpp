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

#include <tencentcloud/cms/v20190321/model/CodePosition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

CodePosition::CodePosition() :
    m_floatXHasBeenSet(false),
    m_floatYHasBeenSet(false)
{
}

CoreInternalOutcome CodePosition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FloatX") && !value["FloatX"].IsNull())
    {
        if (!value["FloatX"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CodePosition.FloatX` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_floatX = value["FloatX"].GetDouble();
        m_floatXHasBeenSet = true;
    }

    if (value.HasMember("FloatY") && !value["FloatY"].IsNull())
    {
        if (!value["FloatY"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CodePosition.FloatY` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_floatY = value["FloatY"].GetDouble();
        m_floatYHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodePosition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_floatXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FloatX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_floatX, allocator);
    }

    if (m_floatYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FloatY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_floatY, allocator);
    }

}


double CodePosition::GetFloatX() const
{
    return m_floatX;
}

void CodePosition::SetFloatX(const double& _floatX)
{
    m_floatX = _floatX;
    m_floatXHasBeenSet = true;
}

bool CodePosition::FloatXHasBeenSet() const
{
    return m_floatXHasBeenSet;
}

double CodePosition::GetFloatY() const
{
    return m_floatY;
}

void CodePosition::SetFloatY(const double& _floatY)
{
    m_floatY = _floatY;
    m_floatYHasBeenSet = true;
}

bool CodePosition::FloatYHasBeenSet() const
{
    return m_floatYHasBeenSet;
}

