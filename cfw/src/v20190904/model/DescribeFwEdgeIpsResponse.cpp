/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cfw/v20190904/model/DescribeFwEdgeIpsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeFwEdgeIpsResponse::DescribeFwEdgeIpsResponse() :
    m_dataHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_regionLstHasBeenSet(false),
    m_instanceTypeLstHasBeenSet(false),
    m_serilCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFwEdgeIpsResponse::Deserialize(const string &payload)
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
            EdgeIpInfo item;
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

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("RegionLst") && !rsp["RegionLst"].IsNull())
    {
        if (!rsp["RegionLst"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegionLst` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RegionLst"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_regionLst.push_back((*itr).GetString());
        }
        m_regionLstHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceTypeLst") && !rsp["InstanceTypeLst"].IsNull())
    {
        if (!rsp["InstanceTypeLst"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceTypeLst` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceTypeLst"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceTypeLst.push_back((*itr).GetString());
        }
        m_instanceTypeLstHasBeenSet = true;
    }

    if (rsp.HasMember("SerilCount") && !rsp["SerilCount"].IsNull())
    {
        if (!rsp["SerilCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SerilCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serilCount = rsp["SerilCount"].GetInt64();
        m_serilCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFwEdgeIpsResponse::ToJsonString() const
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

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_regionLstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionLst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionLst.begin(); itr != m_regionLst.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceTypeLstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypeLst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceTypeLst.begin(); itr != m_instanceTypeLst.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_serilCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerilCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serilCount, allocator);
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


vector<EdgeIpInfo> DescribeFwEdgeIpsResponse::GetData() const
{
    return m_data;
}

bool DescribeFwEdgeIpsResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

int64_t DescribeFwEdgeIpsResponse::GetTotal() const
{
    return m_total;
}

bool DescribeFwEdgeIpsResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<string> DescribeFwEdgeIpsResponse::GetRegionLst() const
{
    return m_regionLst;
}

bool DescribeFwEdgeIpsResponse::RegionLstHasBeenSet() const
{
    return m_regionLstHasBeenSet;
}

vector<string> DescribeFwEdgeIpsResponse::GetInstanceTypeLst() const
{
    return m_instanceTypeLst;
}

bool DescribeFwEdgeIpsResponse::InstanceTypeLstHasBeenSet() const
{
    return m_instanceTypeLstHasBeenSet;
}

int64_t DescribeFwEdgeIpsResponse::GetSerilCount() const
{
    return m_serilCount;
}

bool DescribeFwEdgeIpsResponse::SerilCountHasBeenSet() const
{
    return m_serilCountHasBeenSet;
}


