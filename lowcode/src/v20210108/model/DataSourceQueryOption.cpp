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

#include <tencentcloud/lowcode/v20210108/model/DataSourceQueryOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

DataSourceQueryOption::DataSourceQueryOption() :
    m_likeNameHasBeenSet(false),
    m_likeTitleHasBeenSet(false)
{
}

CoreInternalOutcome DataSourceQueryOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LikeName") && !value["LikeName"].IsNull())
    {
        if (!value["LikeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceQueryOption.LikeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_likeName = string(value["LikeName"].GetString());
        m_likeNameHasBeenSet = true;
    }

    if (value.HasMember("LikeTitle") && !value["LikeTitle"].IsNull())
    {
        if (!value["LikeTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceQueryOption.LikeTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_likeTitle = string(value["LikeTitle"].GetString());
        m_likeTitleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSourceQueryOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_likeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LikeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_likeName.c_str(), allocator).Move(), allocator);
    }

    if (m_likeTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LikeTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_likeTitle.c_str(), allocator).Move(), allocator);
    }

}


string DataSourceQueryOption::GetLikeName() const
{
    return m_likeName;
}

void DataSourceQueryOption::SetLikeName(const string& _likeName)
{
    m_likeName = _likeName;
    m_likeNameHasBeenSet = true;
}

bool DataSourceQueryOption::LikeNameHasBeenSet() const
{
    return m_likeNameHasBeenSet;
}

string DataSourceQueryOption::GetLikeTitle() const
{
    return m_likeTitle;
}

void DataSourceQueryOption::SetLikeTitle(const string& _likeTitle)
{
    m_likeTitle = _likeTitle;
    m_likeTitleHasBeenSet = true;
}

bool DataSourceQueryOption::LikeTitleHasBeenSet() const
{
    return m_likeTitleHasBeenSet;
}

