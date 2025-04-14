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

#include <tencentcloud/ckafka/v20190819/model/ListCvmAndIpInfoRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ListCvmAndIpInfoRsp::ListCvmAndIpInfoRsp() :
    m_cvmListHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome ListCvmAndIpInfoRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CvmList") && !value["CvmList"].IsNull())
    {
        if (!value["CvmList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListCvmAndIpInfoRsp.CvmList` is not array type"));

        const rapidjson::Value &tmpValue = value["CvmList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CvmAndIpInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cvmList.push_back(item);
        }
        m_cvmListHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListCvmAndIpInfoRsp.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListCvmAndIpInfoRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cvmListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cvmList.begin(); itr != m_cvmList.end(); ++itr, ++i)
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
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


vector<CvmAndIpInfo> ListCvmAndIpInfoRsp::GetCvmList() const
{
    return m_cvmList;
}

void ListCvmAndIpInfoRsp::SetCvmList(const vector<CvmAndIpInfo>& _cvmList)
{
    m_cvmList = _cvmList;
    m_cvmListHasBeenSet = true;
}

bool ListCvmAndIpInfoRsp::CvmListHasBeenSet() const
{
    return m_cvmListHasBeenSet;
}

int64_t ListCvmAndIpInfoRsp::GetTotalCount() const
{
    return m_totalCount;
}

void ListCvmAndIpInfoRsp::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ListCvmAndIpInfoRsp::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

