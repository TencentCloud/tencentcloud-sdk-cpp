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

#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterCFGViewCFGRiskListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeRiskCenterCFGViewCFGRiskListResponse::DescribeRiskCenterCFGViewCFGRiskListResponse() :
    m_totalCountHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_statusListsHasBeenSet(false),
    m_levelListsHasBeenSet(false),
    m_cFGNameListsHasBeenSet(false),
    m_checkTypeListsHasBeenSet(false),
    m_instanceTypeListsHasBeenSet(false),
    m_fromListsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRiskCenterCFGViewCFGRiskListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CFGViewCFGRisk item;
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

    if (rsp.HasMember("StatusLists") && !rsp["StatusLists"].IsNull())
    {
        if (!rsp["StatusLists"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StatusLists` is not array type"));

        const rapidjson::Value &tmpValue = rsp["StatusLists"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statusLists.push_back(item);
        }
        m_statusListsHasBeenSet = true;
    }

    if (rsp.HasMember("LevelLists") && !rsp["LevelLists"].IsNull())
    {
        if (!rsp["LevelLists"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LevelLists` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LevelLists"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_levelLists.push_back(item);
        }
        m_levelListsHasBeenSet = true;
    }

    if (rsp.HasMember("CFGNameLists") && !rsp["CFGNameLists"].IsNull())
    {
        if (!rsp["CFGNameLists"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CFGNameLists` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CFGNameLists"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cFGNameLists.push_back(item);
        }
        m_cFGNameListsHasBeenSet = true;
    }

    if (rsp.HasMember("CheckTypeLists") && !rsp["CheckTypeLists"].IsNull())
    {
        if (!rsp["CheckTypeLists"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CheckTypeLists` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CheckTypeLists"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_checkTypeLists.push_back(item);
        }
        m_checkTypeListsHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceTypeLists") && !rsp["InstanceTypeLists"].IsNull())
    {
        if (!rsp["InstanceTypeLists"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceTypeLists` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceTypeLists"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceTypeLists.push_back(item);
        }
        m_instanceTypeListsHasBeenSet = true;
    }

    if (rsp.HasMember("FromLists") && !rsp["FromLists"].IsNull())
    {
        if (!rsp["FromLists"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FromLists` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FromLists"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fromLists.push_back(item);
        }
        m_fromListsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRiskCenterCFGViewCFGRiskListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

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

    if (m_statusListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusLists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statusLists.begin(); itr != m_statusLists.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_levelListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelLists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_levelLists.begin(); itr != m_levelLists.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cFGNameListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFGNameLists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cFGNameLists.begin(); itr != m_cFGNameLists.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_checkTypeListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckTypeLists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_checkTypeLists.begin(); itr != m_checkTypeLists.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceTypeListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypeLists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceTypeLists.begin(); itr != m_instanceTypeLists.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fromListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromLists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fromLists.begin(); itr != m_fromLists.end(); ++itr, ++i)
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


int64_t DescribeRiskCenterCFGViewCFGRiskListResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeRiskCenterCFGViewCFGRiskListResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<CFGViewCFGRisk> DescribeRiskCenterCFGViewCFGRiskListResponse::GetData() const
{
    return m_data;
}

bool DescribeRiskCenterCFGViewCFGRiskListResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

vector<FilterDataObject> DescribeRiskCenterCFGViewCFGRiskListResponse::GetStatusLists() const
{
    return m_statusLists;
}

bool DescribeRiskCenterCFGViewCFGRiskListResponse::StatusListsHasBeenSet() const
{
    return m_statusListsHasBeenSet;
}

vector<FilterDataObject> DescribeRiskCenterCFGViewCFGRiskListResponse::GetLevelLists() const
{
    return m_levelLists;
}

bool DescribeRiskCenterCFGViewCFGRiskListResponse::LevelListsHasBeenSet() const
{
    return m_levelListsHasBeenSet;
}

vector<FilterDataObject> DescribeRiskCenterCFGViewCFGRiskListResponse::GetCFGNameLists() const
{
    return m_cFGNameLists;
}

bool DescribeRiskCenterCFGViewCFGRiskListResponse::CFGNameListsHasBeenSet() const
{
    return m_cFGNameListsHasBeenSet;
}

vector<FilterDataObject> DescribeRiskCenterCFGViewCFGRiskListResponse::GetCheckTypeLists() const
{
    return m_checkTypeLists;
}

bool DescribeRiskCenterCFGViewCFGRiskListResponse::CheckTypeListsHasBeenSet() const
{
    return m_checkTypeListsHasBeenSet;
}

vector<FilterDataObject> DescribeRiskCenterCFGViewCFGRiskListResponse::GetInstanceTypeLists() const
{
    return m_instanceTypeLists;
}

bool DescribeRiskCenterCFGViewCFGRiskListResponse::InstanceTypeListsHasBeenSet() const
{
    return m_instanceTypeListsHasBeenSet;
}

vector<FilterDataObject> DescribeRiskCenterCFGViewCFGRiskListResponse::GetFromLists() const
{
    return m_fromLists;
}

bool DescribeRiskCenterCFGViewCFGRiskListResponse::FromListsHasBeenSet() const
{
    return m_fromListsHasBeenSet;
}


