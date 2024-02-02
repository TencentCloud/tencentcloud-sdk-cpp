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

#include <tencentcloud/csip/v20221121/model/DescribeVULRiskAdvanceCFGListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeVULRiskAdvanceCFGListResponse::DescribeVULRiskAdvanceCFGListResponse() :
    m_dataHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_riskLevelListsHasBeenSet(false),
    m_vULTypeListsHasBeenSet(false),
    m_checkFromListsHasBeenSet(false),
    m_vulTagListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVULRiskAdvanceCFGListResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VULRiskAdvanceCFGList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskLevelLists") && !rsp["RiskLevelLists"].IsNull())
    {
        if (!rsp["RiskLevelLists"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskLevelLists` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskLevelLists"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskLevelLists.push_back(item);
        }
        m_riskLevelListsHasBeenSet = true;
    }

    if (rsp.HasMember("VULTypeLists") && !rsp["VULTypeLists"].IsNull())
    {
        if (!rsp["VULTypeLists"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VULTypeLists` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VULTypeLists"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vULTypeLists.push_back(item);
        }
        m_vULTypeListsHasBeenSet = true;
    }

    if (rsp.HasMember("CheckFromLists") && !rsp["CheckFromLists"].IsNull())
    {
        if (!rsp["CheckFromLists"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CheckFromLists` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CheckFromLists"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_checkFromLists.push_back(item);
        }
        m_checkFromListsHasBeenSet = true;
    }

    if (rsp.HasMember("VulTagList") && !rsp["VulTagList"].IsNull())
    {
        if (!rsp["VulTagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulTagList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VulTagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vulTagList.push_back(item);
        }
        m_vulTagListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVULRiskAdvanceCFGListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
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

    if (m_riskLevelListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelLists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskLevelLists.begin(); itr != m_riskLevelLists.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vULTypeListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULTypeLists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vULTypeLists.begin(); itr != m_vULTypeLists.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_checkFromListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckFromLists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_checkFromLists.begin(); itr != m_checkFromLists.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vulTagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulTagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vulTagList.begin(); itr != m_vulTagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<VULRiskAdvanceCFGList> DescribeVULRiskAdvanceCFGListResponse::GetData() const
{
    return m_data;
}

bool DescribeVULRiskAdvanceCFGListResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

int64_t DescribeVULRiskAdvanceCFGListResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeVULRiskAdvanceCFGListResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<FilterDataObject> DescribeVULRiskAdvanceCFGListResponse::GetRiskLevelLists() const
{
    return m_riskLevelLists;
}

bool DescribeVULRiskAdvanceCFGListResponse::RiskLevelListsHasBeenSet() const
{
    return m_riskLevelListsHasBeenSet;
}

vector<FilterDataObject> DescribeVULRiskAdvanceCFGListResponse::GetVULTypeLists() const
{
    return m_vULTypeLists;
}

bool DescribeVULRiskAdvanceCFGListResponse::VULTypeListsHasBeenSet() const
{
    return m_vULTypeListsHasBeenSet;
}

vector<FilterDataObject> DescribeVULRiskAdvanceCFGListResponse::GetCheckFromLists() const
{
    return m_checkFromLists;
}

bool DescribeVULRiskAdvanceCFGListResponse::CheckFromListsHasBeenSet() const
{
    return m_checkFromListsHasBeenSet;
}

vector<FilterDataObject> DescribeVULRiskAdvanceCFGListResponse::GetVulTagList() const
{
    return m_vulTagList;
}

bool DescribeVULRiskAdvanceCFGListResponse::VulTagListHasBeenSet() const
{
    return m_vulTagListHasBeenSet;
}


