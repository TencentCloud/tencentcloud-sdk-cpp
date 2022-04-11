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

#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespPayload.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Icr::V20211014::Model;
using namespace std;

GetIndustryV1HomeMembersRespPayload::GetIndustryV1HomeMembersRespPayload() :
    m_accountLevelHasBeenSet(false),
    m_dataListHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome GetIndustryV1HomeMembersRespPayload::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountLevel") && !value["AccountLevel"].IsNull())
    {
        if (!value["AccountLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespPayload.AccountLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountLevel = string(value["AccountLevel"].GetString());
        m_accountLevelHasBeenSet = true;
    }

    if (value.HasMember("DataList") && !value["DataList"].IsNull())
    {
        if (!value["DataList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespPayload.DataList` is not array type"));

        const rapidjson::Value &tmpValue = value["DataList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GetIndustryV1HomeMembersRespData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataList.push_back(item);
        }
        m_dataListHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespPayload.Limit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetInt64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespPayload.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespPayload.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetIndustryV1HomeMembersRespPayload::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_dataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataList.begin(); itr != m_dataList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

}


string GetIndustryV1HomeMembersRespPayload::GetAccountLevel() const
{
    return m_accountLevel;
}

void GetIndustryV1HomeMembersRespPayload::SetAccountLevel(const string& _accountLevel)
{
    m_accountLevel = _accountLevel;
    m_accountLevelHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespPayload::AccountLevelHasBeenSet() const
{
    return m_accountLevelHasBeenSet;
}

vector<GetIndustryV1HomeMembersRespData> GetIndustryV1HomeMembersRespPayload::GetDataList() const
{
    return m_dataList;
}

void GetIndustryV1HomeMembersRespPayload::SetDataList(const vector<GetIndustryV1HomeMembersRespData>& _dataList)
{
    m_dataList = _dataList;
    m_dataListHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespPayload::DataListHasBeenSet() const
{
    return m_dataListHasBeenSet;
}

int64_t GetIndustryV1HomeMembersRespPayload::GetLimit() const
{
    return m_limit;
}

void GetIndustryV1HomeMembersRespPayload::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespPayload::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t GetIndustryV1HomeMembersRespPayload::GetOffset() const
{
    return m_offset;
}

void GetIndustryV1HomeMembersRespPayload::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespPayload::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t GetIndustryV1HomeMembersRespPayload::GetTotal() const
{
    return m_total;
}

void GetIndustryV1HomeMembersRespPayload::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespPayload::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

