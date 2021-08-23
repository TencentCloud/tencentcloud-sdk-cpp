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

#include <tencentcloud/ecc/v20181213/model/ErrorCoordinate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecc::V20181213::Model;
using namespace std;

ErrorCoordinate::ErrorCoordinate() :
    m_coordinateHasBeenSet(false)
{
}

CoreInternalOutcome ErrorCoordinate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Coordinate") && !value["Coordinate"].IsNull())
    {
        if (!value["Coordinate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ErrorCoordinate.Coordinate` is not array type"));

        const rapidjson::Value &tmpValue = value["Coordinate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_coordinate.push_back((*itr).GetInt64());
        }
        m_coordinateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrorCoordinate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_coordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coordinate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_coordinate.begin(); itr != m_coordinate.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> ErrorCoordinate::GetCoordinate() const
{
    return m_coordinate;
}

void ErrorCoordinate::SetCoordinate(const vector<int64_t>& _coordinate)
{
    m_coordinate = _coordinate;
    m_coordinateHasBeenSet = true;
}

bool ErrorCoordinate::CoordinateHasBeenSet() const
{
    return m_coordinateHasBeenSet;
}

