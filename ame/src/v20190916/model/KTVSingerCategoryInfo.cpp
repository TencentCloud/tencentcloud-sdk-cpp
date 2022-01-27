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

#include <tencentcloud/ame/v20190916/model/KTVSingerCategoryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

KTVSingerCategoryInfo::KTVSingerCategoryInfo() :
    m_chineseNameHasBeenSet(false),
    m_englishNameHasBeenSet(false)
{
}

CoreInternalOutcome KTVSingerCategoryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChineseName") && !value["ChineseName"].IsNull())
    {
        if (!value["ChineseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVSingerCategoryInfo.ChineseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chineseName = string(value["ChineseName"].GetString());
        m_chineseNameHasBeenSet = true;
    }

    if (value.HasMember("EnglishName") && !value["EnglishName"].IsNull())
    {
        if (!value["EnglishName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVSingerCategoryInfo.EnglishName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_englishName = string(value["EnglishName"].GetString());
        m_englishNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KTVSingerCategoryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chineseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChineseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chineseName.c_str(), allocator).Move(), allocator);
    }

    if (m_englishNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnglishName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_englishName.c_str(), allocator).Move(), allocator);
    }

}


string KTVSingerCategoryInfo::GetChineseName() const
{
    return m_chineseName;
}

void KTVSingerCategoryInfo::SetChineseName(const string& _chineseName)
{
    m_chineseName = _chineseName;
    m_chineseNameHasBeenSet = true;
}

bool KTVSingerCategoryInfo::ChineseNameHasBeenSet() const
{
    return m_chineseNameHasBeenSet;
}

string KTVSingerCategoryInfo::GetEnglishName() const
{
    return m_englishName;
}

void KTVSingerCategoryInfo::SetEnglishName(const string& _englishName)
{
    m_englishName = _englishName;
    m_englishNameHasBeenSet = true;
}

bool KTVSingerCategoryInfo::EnglishNameHasBeenSet() const
{
    return m_englishNameHasBeenSet;
}

