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

#include <tencentcloud/lke/v20231130/model/ReRankDataObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ReRankDataObject::ReRankDataObject() :
    m_promptAHasBeenSet(false),
    m_promptBHasBeenSet(false)
{
}

CoreInternalOutcome ReRankDataObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PromptA") && !value["PromptA"].IsNull())
    {
        if (!value["PromptA"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReRankDataObject.PromptA` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptA = string(value["PromptA"].GetString());
        m_promptAHasBeenSet = true;
    }

    if (value.HasMember("PromptB") && !value["PromptB"].IsNull())
    {
        if (!value["PromptB"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReRankDataObject.PromptB` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptB = string(value["PromptB"].GetString());
        m_promptBHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReRankDataObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_promptAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptA.c_str(), allocator).Move(), allocator);
    }

    if (m_promptBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptB.c_str(), allocator).Move(), allocator);
    }

}


string ReRankDataObject::GetPromptA() const
{
    return m_promptA;
}

void ReRankDataObject::SetPromptA(const string& _promptA)
{
    m_promptA = _promptA;
    m_promptAHasBeenSet = true;
}

bool ReRankDataObject::PromptAHasBeenSet() const
{
    return m_promptAHasBeenSet;
}

string ReRankDataObject::GetPromptB() const
{
    return m_promptB;
}

void ReRankDataObject::SetPromptB(const string& _promptB)
{
    m_promptB = _promptB;
    m_promptBHasBeenSet = true;
}

bool ReRankDataObject::PromptBHasBeenSet() const
{
    return m_promptBHasBeenSet;
}

