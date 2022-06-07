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

#include <tencentcloud/tione/v20211111/model/OcrLabelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

OcrLabelInfo::OcrLabelInfo() :
    m_pointsHasBeenSet(false),
    m_frameTypeHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_keyIdsForValueHasBeenSet(false),
    m_directionHasBeenSet(false)
{
}

CoreInternalOutcome OcrLabelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Points") && !value["Points"].IsNull())
    {
        if (!value["Points"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OcrLabelInfo.Points` is not array type"));

        const rapidjson::Value &tmpValue = value["Points"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PointInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_points.push_back(item);
        }
        m_pointsHasBeenSet = true;
    }

    if (value.HasMember("FrameType") && !value["FrameType"].IsNull())
    {
        if (!value["FrameType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OcrLabelInfo.FrameType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameType = string(value["FrameType"].GetString());
        m_frameTypeHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OcrLabelInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OcrLabelInfo.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OcrLabelInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("KeyIdsForValue") && !value["KeyIdsForValue"].IsNull())
    {
        if (!value["KeyIdsForValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OcrLabelInfo.KeyIdsForValue` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyIdsForValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keyIdsForValue.push_back((*itr).GetString());
        }
        m_keyIdsForValueHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OcrLabelInfo.Direction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_direction = string(value["Direction"].GetString());
        m_directionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OcrLabelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Points";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_points.begin(); itr != m_points.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_frameTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameType.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdsForValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyIdsForValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keyIdsForValue.begin(); itr != m_keyIdsForValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

}


vector<PointInfo> OcrLabelInfo::GetPoints() const
{
    return m_points;
}

void OcrLabelInfo::SetPoints(const vector<PointInfo>& _points)
{
    m_points = _points;
    m_pointsHasBeenSet = true;
}

bool OcrLabelInfo::PointsHasBeenSet() const
{
    return m_pointsHasBeenSet;
}

string OcrLabelInfo::GetFrameType() const
{
    return m_frameType;
}

void OcrLabelInfo::SetFrameType(const string& _frameType)
{
    m_frameType = _frameType;
    m_frameTypeHasBeenSet = true;
}

bool OcrLabelInfo::FrameTypeHasBeenSet() const
{
    return m_frameTypeHasBeenSet;
}

string OcrLabelInfo::GetKey() const
{
    return m_key;
}

void OcrLabelInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool OcrLabelInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string OcrLabelInfo::GetKeyId() const
{
    return m_keyId;
}

void OcrLabelInfo::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool OcrLabelInfo::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string OcrLabelInfo::GetValue() const
{
    return m_value;
}

void OcrLabelInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool OcrLabelInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

vector<string> OcrLabelInfo::GetKeyIdsForValue() const
{
    return m_keyIdsForValue;
}

void OcrLabelInfo::SetKeyIdsForValue(const vector<string>& _keyIdsForValue)
{
    m_keyIdsForValue = _keyIdsForValue;
    m_keyIdsForValueHasBeenSet = true;
}

bool OcrLabelInfo::KeyIdsForValueHasBeenSet() const
{
    return m_keyIdsForValueHasBeenSet;
}

string OcrLabelInfo::GetDirection() const
{
    return m_direction;
}

void OcrLabelInfo::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool OcrLabelInfo::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

