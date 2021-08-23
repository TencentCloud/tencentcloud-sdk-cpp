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

#include <tencentcloud/ame/v20190916/model/Station.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

Station::Station() :
    m_categoryIDHasBeenSet(false),
    m_categoryCodeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rankHasBeenSet(false),
    m_imagePathMapHasBeenSet(false)
{
}

CoreInternalOutcome Station::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryID") && !value["CategoryID"].IsNull())
    {
        if (!value["CategoryID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Station.CategoryID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryID = string(value["CategoryID"].GetString());
        m_categoryIDHasBeenSet = true;
    }

    if (value.HasMember("CategoryCode") && !value["CategoryCode"].IsNull())
    {
        if (!value["CategoryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Station.CategoryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryCode = string(value["CategoryCode"].GetString());
        m_categoryCodeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Station.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Rank") && !value["Rank"].IsNull())
    {
        if (!value["Rank"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Station.Rank` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rank = value["Rank"].GetInt64();
        m_rankHasBeenSet = true;
    }

    if (value.HasMember("ImagePathMap") && !value["ImagePathMap"].IsNull())
    {
        if (!value["ImagePathMap"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Station.ImagePathMap` is not array type"));

        const rapidjson::Value &tmpValue = value["ImagePathMap"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImagePath item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imagePathMap.push_back(item);
        }
        m_imagePathMapHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Station::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryID.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_rankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rank, allocator);
    }

    if (m_imagePathMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePathMap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imagePathMap.begin(); itr != m_imagePathMap.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Station::GetCategoryID() const
{
    return m_categoryID;
}

void Station::SetCategoryID(const string& _categoryID)
{
    m_categoryID = _categoryID;
    m_categoryIDHasBeenSet = true;
}

bool Station::CategoryIDHasBeenSet() const
{
    return m_categoryIDHasBeenSet;
}

string Station::GetCategoryCode() const
{
    return m_categoryCode;
}

void Station::SetCategoryCode(const string& _categoryCode)
{
    m_categoryCode = _categoryCode;
    m_categoryCodeHasBeenSet = true;
}

bool Station::CategoryCodeHasBeenSet() const
{
    return m_categoryCodeHasBeenSet;
}

string Station::GetName() const
{
    return m_name;
}

void Station::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Station::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t Station::GetRank() const
{
    return m_rank;
}

void Station::SetRank(const int64_t& _rank)
{
    m_rank = _rank;
    m_rankHasBeenSet = true;
}

bool Station::RankHasBeenSet() const
{
    return m_rankHasBeenSet;
}

vector<ImagePath> Station::GetImagePathMap() const
{
    return m_imagePathMap;
}

void Station::SetImagePathMap(const vector<ImagePath>& _imagePathMap)
{
    m_imagePathMap = _imagePathMap;
    m_imagePathMapHasBeenSet = true;
}

bool Station::ImagePathMapHasBeenSet() const
{
    return m_imagePathMapHasBeenSet;
}

