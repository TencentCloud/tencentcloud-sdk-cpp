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

#include <tencentcloud/ckafka/v20190819/model/AppIdResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

AppIdResponse::AppIdResponse() :
    m_totalCountHasBeenSet(false),
    m_appIdListHasBeenSet(false)
{
}

CoreInternalOutcome AppIdResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppIdResponse.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("AppIdList") && !value["AppIdList"].IsNull())
    {
        if (!value["AppIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppIdResponse.AppIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["AppIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_appIdList.push_back((*itr).GetInt64());
        }
        m_appIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppIdResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_appIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appIdList.begin(); itr != m_appIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t AppIdResponse::GetTotalCount() const
{
    return m_totalCount;
}

void AppIdResponse::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool AppIdResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<int64_t> AppIdResponse::GetAppIdList() const
{
    return m_appIdList;
}

void AppIdResponse::SetAppIdList(const vector<int64_t>& _appIdList)
{
    m_appIdList = _appIdList;
    m_appIdListHasBeenSet = true;
}

bool AppIdResponse::AppIdListHasBeenSet() const
{
    return m_appIdListHasBeenSet;
}

