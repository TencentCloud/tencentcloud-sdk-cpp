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

#include <tencentcloud/mrs/v20200910/model/MarryHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

MarryHistory::MarryHistory() :
    m_marriageHasBeenSet(false),
    m_fertilityHasBeenSet(false)
{
}

CoreInternalOutcome MarryHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Marriage") && !value["Marriage"].IsNull())
    {
        if (!value["Marriage"].IsString())
        {
            return CoreInternalOutcome(Error("response `MarryHistory.Marriage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_marriage = string(value["Marriage"].GetString());
        m_marriageHasBeenSet = true;
    }

    if (value.HasMember("Fertility") && !value["Fertility"].IsNull())
    {
        if (!value["Fertility"].IsString())
        {
            return CoreInternalOutcome(Error("response `MarryHistory.Fertility` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fertility = string(value["Fertility"].GetString());
        m_fertilityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MarryHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_marriageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Marriage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_marriage.c_str(), allocator).Move(), allocator);
    }

    if (m_fertilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fertility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fertility.c_str(), allocator).Move(), allocator);
    }

}


string MarryHistory::GetMarriage() const
{
    return m_marriage;
}

void MarryHistory::SetMarriage(const string& _marriage)
{
    m_marriage = _marriage;
    m_marriageHasBeenSet = true;
}

bool MarryHistory::MarriageHasBeenSet() const
{
    return m_marriageHasBeenSet;
}

string MarryHistory::GetFertility() const
{
    return m_fertility;
}

void MarryHistory::SetFertility(const string& _fertility)
{
    m_fertility = _fertility;
    m_fertilityHasBeenSet = true;
}

bool MarryHistory::FertilityHasBeenSet() const
{
    return m_fertilityHasBeenSet;
}

