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

#include <tencentcloud/weilingwith/v20230427/model/ApplicationList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ApplicationList::ApplicationList() :
    m_applicationInfoListHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationInfoList") && !value["ApplicationInfoList"].IsNull())
    {
        if (!value["ApplicationInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationList.ApplicationInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ApplicationInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApplicationInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_applicationInfoList.push_back(item);
        }
        m_applicationInfoListHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationList.TotalCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = string(value["TotalCount"].GetString());
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_applicationInfoList.begin(); itr != m_applicationInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCount.c_str(), allocator).Move(), allocator);
    }

}


vector<ApplicationInfo> ApplicationList::GetApplicationInfoList() const
{
    return m_applicationInfoList;
}

void ApplicationList::SetApplicationInfoList(const vector<ApplicationInfo>& _applicationInfoList)
{
    m_applicationInfoList = _applicationInfoList;
    m_applicationInfoListHasBeenSet = true;
}

bool ApplicationList::ApplicationInfoListHasBeenSet() const
{
    return m_applicationInfoListHasBeenSet;
}

string ApplicationList::GetTotalCount() const
{
    return m_totalCount;
}

void ApplicationList::SetTotalCount(const string& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ApplicationList::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

