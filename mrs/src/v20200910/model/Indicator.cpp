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

#include <tencentcloud/mrs/v20200910/model/Indicator.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Indicator::Indicator() :
    m_indicatorsHasBeenSet(false),
    m_blockTitleHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome Indicator::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Indicators") && !value["Indicators"].IsNull())
    {
        if (!value["Indicators"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Indicator.Indicators` is not array type"));

        const rapidjson::Value &tmpValue = value["Indicators"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndicatorItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_indicators.push_back(item);
        }
        m_indicatorsHasBeenSet = true;
    }

    if (value.HasMember("BlockTitle") && !value["BlockTitle"].IsNull())
    {
        if (!value["BlockTitle"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Indicator.BlockTitle` is not array type"));

        const rapidjson::Value &tmpValue = value["BlockTitle"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BlockTitle item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_blockTitle.push_back(item);
        }
        m_blockTitleHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Indicator.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Indicator::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indicatorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indicators";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_indicators.begin(); itr != m_indicators.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_blockTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_blockTitle.begin(); itr != m_blockTitle.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


vector<IndicatorItem> Indicator::GetIndicators() const
{
    return m_indicators;
}

void Indicator::SetIndicators(const vector<IndicatorItem>& _indicators)
{
    m_indicators = _indicators;
    m_indicatorsHasBeenSet = true;
}

bool Indicator::IndicatorsHasBeenSet() const
{
    return m_indicatorsHasBeenSet;
}

vector<BlockTitle> Indicator::GetBlockTitle() const
{
    return m_blockTitle;
}

void Indicator::SetBlockTitle(const vector<BlockTitle>& _blockTitle)
{
    m_blockTitle = _blockTitle;
    m_blockTitleHasBeenSet = true;
}

bool Indicator::BlockTitleHasBeenSet() const
{
    return m_blockTitleHasBeenSet;
}

int64_t Indicator::GetPage() const
{
    return m_page;
}

void Indicator::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool Indicator::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

