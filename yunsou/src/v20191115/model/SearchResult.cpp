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

#include <tencentcloud/yunsou/v20191115/model/SearchResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunsou::V20191115::Model;
using namespace std;

SearchResult::SearchResult() :
    m_costTimeHasBeenSet(false),
    m_displayNumHasBeenSet(false),
    m_echoHasBeenSet(false),
    m_eResultNumHasBeenSet(false),
    m_resultNumHasBeenSet(false),
    m_resultListHasBeenSet(false),
    m_segListHasBeenSet(false)
{
}

CoreInternalOutcome SearchResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.CostTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetUint64();
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("DisplayNum") && !value["DisplayNum"].IsNull())
    {
        if (!value["DisplayNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.DisplayNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_displayNum = value["DisplayNum"].GetUint64();
        m_displayNumHasBeenSet = true;
    }

    if (value.HasMember("Echo") && !value["Echo"].IsNull())
    {
        if (!value["Echo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.Echo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_echo = string(value["Echo"].GetString());
        m_echoHasBeenSet = true;
    }

    if (value.HasMember("EResultNum") && !value["EResultNum"].IsNull())
    {
        if (!value["EResultNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.EResultNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eResultNum = value["EResultNum"].GetUint64();
        m_eResultNumHasBeenSet = true;
    }

    if (value.HasMember("ResultNum") && !value["ResultNum"].IsNull())
    {
        if (!value["ResultNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.ResultNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resultNum = value["ResultNum"].GetUint64();
        m_resultNumHasBeenSet = true;
    }

    if (value.HasMember("ResultList") && !value["ResultList"].IsNull())
    {
        if (!value["ResultList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchResult.ResultList` is not array type"));

        const rapidjson::Value &tmpValue = value["ResultList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SearchResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resultList.push_back(item);
        }
        m_resultListHasBeenSet = true;
    }

    if (value.HasMember("SegList") && !value["SegList"].IsNull())
    {
        if (!value["SegList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchResult.SegList` is not array type"));

        const rapidjson::Value &tmpValue = value["SegList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SearchResultSeg item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_segList.push_back(item);
        }
        m_segListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costTime, allocator);
    }

    if (m_displayNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_displayNum, allocator);
    }

    if (m_echoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Echo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_echo.c_str(), allocator).Move(), allocator);
    }

    if (m_eResultNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EResultNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eResultNum, allocator);
    }

    if (m_resultNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultNum, allocator);
    }

    if (m_resultListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resultList.begin(); itr != m_resultList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_segListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_segList.begin(); itr != m_segList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t SearchResult::GetCostTime() const
{
    return m_costTime;
}

void SearchResult::SetCostTime(const uint64_t& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool SearchResult::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

uint64_t SearchResult::GetDisplayNum() const
{
    return m_displayNum;
}

void SearchResult::SetDisplayNum(const uint64_t& _displayNum)
{
    m_displayNum = _displayNum;
    m_displayNumHasBeenSet = true;
}

bool SearchResult::DisplayNumHasBeenSet() const
{
    return m_displayNumHasBeenSet;
}

string SearchResult::GetEcho() const
{
    return m_echo;
}

void SearchResult::SetEcho(const string& _echo)
{
    m_echo = _echo;
    m_echoHasBeenSet = true;
}

bool SearchResult::EchoHasBeenSet() const
{
    return m_echoHasBeenSet;
}

uint64_t SearchResult::GetEResultNum() const
{
    return m_eResultNum;
}

void SearchResult::SetEResultNum(const uint64_t& _eResultNum)
{
    m_eResultNum = _eResultNum;
    m_eResultNumHasBeenSet = true;
}

bool SearchResult::EResultNumHasBeenSet() const
{
    return m_eResultNumHasBeenSet;
}

uint64_t SearchResult::GetResultNum() const
{
    return m_resultNum;
}

void SearchResult::SetResultNum(const uint64_t& _resultNum)
{
    m_resultNum = _resultNum;
    m_resultNumHasBeenSet = true;
}

bool SearchResult::ResultNumHasBeenSet() const
{
    return m_resultNumHasBeenSet;
}

vector<SearchResultItem> SearchResult::GetResultList() const
{
    return m_resultList;
}

void SearchResult::SetResultList(const vector<SearchResultItem>& _resultList)
{
    m_resultList = _resultList;
    m_resultListHasBeenSet = true;
}

bool SearchResult::ResultListHasBeenSet() const
{
    return m_resultListHasBeenSet;
}

vector<SearchResultSeg> SearchResult::GetSegList() const
{
    return m_segList;
}

void SearchResult::SetSegList(const vector<SearchResultSeg>& _segList)
{
    m_segList = _segList;
    m_segListHasBeenSet = true;
}

bool SearchResult::SegListHasBeenSet() const
{
    return m_segListHasBeenSet;
}

