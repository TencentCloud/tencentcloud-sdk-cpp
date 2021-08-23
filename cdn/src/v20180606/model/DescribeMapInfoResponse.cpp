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

#include <tencentcloud/cdn/v20180606/model/DescribeMapInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DescribeMapInfoResponse::DescribeMapInfoResponse() :
    m_mapInfoListHasBeenSet(false),
    m_serverRegionRelationHasBeenSet(false),
    m_clientRegionRelationHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMapInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MapInfoList") && !rsp["MapInfoList"].IsNull())
    {
        if (!rsp["MapInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MapInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MapInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MapInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mapInfoList.push_back(item);
        }
        m_mapInfoListHasBeenSet = true;
    }

    if (rsp.HasMember("ServerRegionRelation") && !rsp["ServerRegionRelation"].IsNull())
    {
        if (!rsp["ServerRegionRelation"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerRegionRelation` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ServerRegionRelation"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionMapRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serverRegionRelation.push_back(item);
        }
        m_serverRegionRelationHasBeenSet = true;
    }

    if (rsp.HasMember("ClientRegionRelation") && !rsp["ClientRegionRelation"].IsNull())
    {
        if (!rsp["ClientRegionRelation"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClientRegionRelation` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ClientRegionRelation"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionMapRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clientRegionRelation.push_back(item);
        }
        m_clientRegionRelationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMapInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_mapInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mapInfoList.begin(); itr != m_mapInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serverRegionRelationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerRegionRelation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serverRegionRelation.begin(); itr != m_serverRegionRelation.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clientRegionRelationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientRegionRelation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clientRegionRelation.begin(); itr != m_clientRegionRelation.end(); ++itr, ++i)
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


vector<MapInfo> DescribeMapInfoResponse::GetMapInfoList() const
{
    return m_mapInfoList;
}

bool DescribeMapInfoResponse::MapInfoListHasBeenSet() const
{
    return m_mapInfoListHasBeenSet;
}

vector<RegionMapRelation> DescribeMapInfoResponse::GetServerRegionRelation() const
{
    return m_serverRegionRelation;
}

bool DescribeMapInfoResponse::ServerRegionRelationHasBeenSet() const
{
    return m_serverRegionRelationHasBeenSet;
}

vector<RegionMapRelation> DescribeMapInfoResponse::GetClientRegionRelation() const
{
    return m_clientRegionRelation;
}

bool DescribeMapInfoResponse::ClientRegionRelationHasBeenSet() const
{
    return m_clientRegionRelationHasBeenSet;
}


