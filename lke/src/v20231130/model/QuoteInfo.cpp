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

#include <tencentcloud/lke/v20231130/model/QuoteInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

QuoteInfo::QuoteInfo() :
    m_positionHasBeenSet(false),
    m_indexHasBeenSet(false)
{
}

CoreInternalOutcome QuoteInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QuoteInfo.Position` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetUint64();
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuoteInfo.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuoteInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_position, allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

}


uint64_t QuoteInfo::GetPosition() const
{
    return m_position;
}

void QuoteInfo::SetPosition(const uint64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool QuoteInfo::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string QuoteInfo::GetIndex() const
{
    return m_index;
}

void QuoteInfo::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool QuoteInfo::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

