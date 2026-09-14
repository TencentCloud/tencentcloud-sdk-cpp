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

#include <tencentcloud/adp/v20260520/model/SearchResultPayload.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SearchResultPayload::SearchResultPayload() :
    m_graphDataHasBeenSet(false),
    m_imageUrlListHasBeenSet(false),
    m_sheetInfoHasBeenSet(false)
{
}

CoreInternalOutcome SearchResultPayload::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GraphData") && !value["GraphData"].IsNull())
    {
        if (!value["GraphData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResultPayload.GraphData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_graphData = string(value["GraphData"].GetString());
        m_graphDataHasBeenSet = true;
    }

    if (value.HasMember("ImageUrlList") && !value["ImageUrlList"].IsNull())
    {
        if (!value["ImageUrlList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchResultPayload.ImageUrlList` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageUrlList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageUrlList.push_back((*itr).GetString());
        }
        m_imageUrlListHasBeenSet = true;
    }

    if (value.HasMember("SheetInfo") && !value["SheetInfo"].IsNull())
    {
        if (!value["SheetInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResultPayload.SheetInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sheetInfo = string(value["SheetInfo"].GetString());
        m_sheetInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchResultPayload::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_graphDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GraphData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_graphData.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrlList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageUrlList.begin(); itr != m_imageUrlList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sheetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SheetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sheetInfo.c_str(), allocator).Move(), allocator);
    }

}


string SearchResultPayload::GetGraphData() const
{
    return m_graphData;
}

void SearchResultPayload::SetGraphData(const string& _graphData)
{
    m_graphData = _graphData;
    m_graphDataHasBeenSet = true;
}

bool SearchResultPayload::GraphDataHasBeenSet() const
{
    return m_graphDataHasBeenSet;
}

vector<string> SearchResultPayload::GetImageUrlList() const
{
    return m_imageUrlList;
}

void SearchResultPayload::SetImageUrlList(const vector<string>& _imageUrlList)
{
    m_imageUrlList = _imageUrlList;
    m_imageUrlListHasBeenSet = true;
}

bool SearchResultPayload::ImageUrlListHasBeenSet() const
{
    return m_imageUrlListHasBeenSet;
}

string SearchResultPayload::GetSheetInfo() const
{
    return m_sheetInfo;
}

void SearchResultPayload::SetSheetInfo(const string& _sheetInfo)
{
    m_sheetInfo = _sheetInfo;
    m_sheetInfoHasBeenSet = true;
}

bool SearchResultPayload::SheetInfoHasBeenSet() const
{
    return m_sheetInfoHasBeenSet;
}

