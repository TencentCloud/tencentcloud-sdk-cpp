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

#include <tencentcloud/ame/v20190916/model/DescribeStationsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

DescribeStationsResponse::DescribeStationsResponse() :
    m_totalHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_haveMoreHasBeenSet(false),
    m_stationsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeStationsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("Offset") && !rsp["Offset"].IsNull())
    {
        if (!rsp["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = rsp["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }

    if (rsp.HasMember("Size") && !rsp["Size"].IsNull())
    {
        if (!rsp["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = rsp["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (rsp.HasMember("HaveMore") && !rsp["HaveMore"].IsNull())
    {
        if (!rsp["HaveMore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HaveMore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_haveMore = rsp["HaveMore"].GetUint64();
        m_haveMoreHasBeenSet = true;
    }

    if (rsp.HasMember("Stations") && !rsp["Stations"].IsNull())
    {
        if (!rsp["Stations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Stations` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Stations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Station item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_stations.push_back(item);
        }
        m_stationsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeStationsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_haveMoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaveMore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_haveMore, allocator);
    }

    if (m_stationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stations.begin(); itr != m_stations.end(); ++itr, ++i)
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


uint64_t DescribeStationsResponse::GetTotal() const
{
    return m_total;
}

bool DescribeStationsResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t DescribeStationsResponse::GetOffset() const
{
    return m_offset;
}

bool DescribeStationsResponse::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeStationsResponse::GetSize() const
{
    return m_size;
}

bool DescribeStationsResponse::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

uint64_t DescribeStationsResponse::GetHaveMore() const
{
    return m_haveMore;
}

bool DescribeStationsResponse::HaveMoreHasBeenSet() const
{
    return m_haveMoreHasBeenSet;
}

vector<Station> DescribeStationsResponse::GetStations() const
{
    return m_stations;
}

bool DescribeStationsResponse::StationsHasBeenSet() const
{
    return m_stationsHasBeenSet;
}


