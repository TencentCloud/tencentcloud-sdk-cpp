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

#include <tencentcloud/ocr/v20181119/model/WordCoordPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

WordCoordPoint::WordCoordPoint() :
    m_wordCoordinateHasBeenSet(false)
{
}

CoreInternalOutcome WordCoordPoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WordCoordinate") && !value["WordCoordinate"].IsNull())
    {
        if (!value["WordCoordinate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WordCoordPoint.WordCoordinate` is not array type"));

        const rapidjson::Value &tmpValue = value["WordCoordinate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_wordCoordinate.push_back(item);
        }
        m_wordCoordinateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WordCoordPoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wordCoordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordCoordinate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wordCoordinate.begin(); itr != m_wordCoordinate.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<Coord> WordCoordPoint::GetWordCoordinate() const
{
    return m_wordCoordinate;
}

void WordCoordPoint::SetWordCoordinate(const vector<Coord>& _wordCoordinate)
{
    m_wordCoordinate = _wordCoordinate;
    m_wordCoordinateHasBeenSet = true;
}

bool WordCoordPoint::WordCoordinateHasBeenSet() const
{
    return m_wordCoordinateHasBeenSet;
}

