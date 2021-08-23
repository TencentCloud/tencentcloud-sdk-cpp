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

#include <tencentcloud/tem/v20210701/model/DescribeRunPodPage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

DescribeRunPodPage::DescribeRunPodPage() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_podListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRunPodPage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeRunPodPage.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeRunPodPage.Limit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetInt64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeRunPodPage.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeRunPodPage.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("PodList") && !value["PodList"].IsNull())
    {
        if (!value["PodList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeRunPodPage.PodList` is not array type"));

        const rapidjson::Value &tmpValue = value["PodList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RunVersionPod item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_podList.push_back(item);
        }
        m_podListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeRunPodPage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_podListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_podList.begin(); itr != m_podList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DescribeRunPodPage::GetOffset() const
{
    return m_offset;
}

void DescribeRunPodPage::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRunPodPage::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeRunPodPage::GetLimit() const
{
    return m_limit;
}

void DescribeRunPodPage::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRunPodPage::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeRunPodPage::GetTotalCount() const
{
    return m_totalCount;
}

void DescribeRunPodPage::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool DescribeRunPodPage::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

string DescribeRunPodPage::GetRequestId() const
{
    return m_requestId;
}

void DescribeRunPodPage::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool DescribeRunPodPage::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

vector<RunVersionPod> DescribeRunPodPage::GetPodList() const
{
    return m_podList;
}

void DescribeRunPodPage::SetPodList(const vector<RunVersionPod>& _podList)
{
    m_podList = _podList;
    m_podListHasBeenSet = true;
}

bool DescribeRunPodPage::PodListHasBeenSet() const
{
    return m_podListHasBeenSet;
}

