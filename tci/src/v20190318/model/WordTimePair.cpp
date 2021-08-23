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

#include <tencentcloud/tci/v20190318/model/WordTimePair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

WordTimePair::WordTimePair() :
    m_mbtmHasBeenSet(false),
    m_metmHasBeenSet(false)
{
}

CoreInternalOutcome WordTimePair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mbtm") && !value["Mbtm"].IsNull())
    {
        if (!value["Mbtm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WordTimePair.Mbtm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mbtm = value["Mbtm"].GetInt64();
        m_mbtmHasBeenSet = true;
    }

    if (value.HasMember("Metm") && !value["Metm"].IsNull())
    {
        if (!value["Metm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WordTimePair.Metm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metm = value["Metm"].GetInt64();
        m_metmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WordTimePair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mbtmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mbtm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mbtm, allocator);
    }

    if (m_metmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metm, allocator);
    }

}


int64_t WordTimePair::GetMbtm() const
{
    return m_mbtm;
}

void WordTimePair::SetMbtm(const int64_t& _mbtm)
{
    m_mbtm = _mbtm;
    m_mbtmHasBeenSet = true;
}

bool WordTimePair::MbtmHasBeenSet() const
{
    return m_mbtmHasBeenSet;
}

int64_t WordTimePair::GetMetm() const
{
    return m_metm;
}

void WordTimePair::SetMetm(const int64_t& _metm)
{
    m_metm = _metm;
    m_metmHasBeenSet = true;
}

bool WordTimePair::MetmHasBeenSet() const
{
    return m_metmHasBeenSet;
}

