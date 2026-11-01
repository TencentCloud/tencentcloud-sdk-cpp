/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mps/v20190612/model/CloneViralReference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CloneViralReference::CloneViralReference() :
    m_outfitsHasBeenSet(false),
    m_backgroundsHasBeenSet(false)
{
}

CoreInternalOutcome CloneViralReference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Outfits") && !value["Outfits"].IsNull())
    {
        if (!value["Outfits"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloneViralReference.Outfits` is not array type"));

        const rapidjson::Value &tmpValue = value["Outfits"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_outfits.push_back((*itr).GetString());
        }
        m_outfitsHasBeenSet = true;
    }

    if (value.HasMember("Backgrounds") && !value["Backgrounds"].IsNull())
    {
        if (!value["Backgrounds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloneViralReference.Backgrounds` is not array type"));

        const rapidjson::Value &tmpValue = value["Backgrounds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_backgrounds.push_back((*itr).GetString());
        }
        m_backgroundsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloneViralReference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outfitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outfits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_outfits.begin(); itr != m_outfits.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backgroundsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Backgrounds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backgrounds.begin(); itr != m_backgrounds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> CloneViralReference::GetOutfits() const
{
    return m_outfits;
}

void CloneViralReference::SetOutfits(const vector<string>& _outfits)
{
    m_outfits = _outfits;
    m_outfitsHasBeenSet = true;
}

bool CloneViralReference::OutfitsHasBeenSet() const
{
    return m_outfitsHasBeenSet;
}

vector<string> CloneViralReference::GetBackgrounds() const
{
    return m_backgrounds;
}

void CloneViralReference::SetBackgrounds(const vector<string>& _backgrounds)
{
    m_backgrounds = _backgrounds;
    m_backgroundsHasBeenSet = true;
}

bool CloneViralReference::BackgroundsHasBeenSet() const
{
    return m_backgroundsHasBeenSet;
}

