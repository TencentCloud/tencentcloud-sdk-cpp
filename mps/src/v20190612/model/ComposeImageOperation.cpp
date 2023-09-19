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

#include <tencentcloud/mps/v20190612/model/ComposeImageOperation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ComposeImageOperation::ComposeImageOperation() :
    m_typeHasBeenSet(false),
    m_rotateAngleHasBeenSet(false),
    m_flipTypeHasBeenSet(false)
{
}

CoreInternalOutcome ComposeImageOperation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeImageOperation.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("RotateAngle") && !value["RotateAngle"].IsNull())
    {
        if (!value["RotateAngle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeImageOperation.RotateAngle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rotateAngle = value["RotateAngle"].GetDouble();
        m_rotateAngleHasBeenSet = true;
    }

    if (value.HasMember("FlipType") && !value["FlipType"].IsNull())
    {
        if (!value["FlipType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeImageOperation.FlipType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flipType = string(value["FlipType"].GetString());
        m_flipTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeImageOperation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_rotateAngleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotateAngle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotateAngle, allocator);
    }

    if (m_flipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlipType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flipType.c_str(), allocator).Move(), allocator);
    }

}


string ComposeImageOperation::GetType() const
{
    return m_type;
}

void ComposeImageOperation::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ComposeImageOperation::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double ComposeImageOperation::GetRotateAngle() const
{
    return m_rotateAngle;
}

void ComposeImageOperation::SetRotateAngle(const double& _rotateAngle)
{
    m_rotateAngle = _rotateAngle;
    m_rotateAngleHasBeenSet = true;
}

bool ComposeImageOperation::RotateAngleHasBeenSet() const
{
    return m_rotateAngleHasBeenSet;
}

string ComposeImageOperation::GetFlipType() const
{
    return m_flipType;
}

void ComposeImageOperation::SetFlipType(const string& _flipType)
{
    m_flipType = _flipType;
    m_flipTypeHasBeenSet = true;
}

bool ComposeImageOperation::FlipTypeHasBeenSet() const
{
    return m_flipTypeHasBeenSet;
}

