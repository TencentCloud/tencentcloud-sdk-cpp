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

#include <tencentcloud/tag/v20180813/model/GetResourcesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tag::V20180813::Model;
using namespace std;

GetResourcesResponse::GetResourcesResponse() :
    m_paginationTokenHasBeenSet(false),
    m_resourceTagMappingListHasBeenSet(false)
{
}

CoreInternalOutcome GetResourcesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PaginationToken") && !rsp["PaginationToken"].IsNull())
    {
        if (!rsp["PaginationToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaginationToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paginationToken = string(rsp["PaginationToken"].GetString());
        m_paginationTokenHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceTagMappingList") && !rsp["ResourceTagMappingList"].IsNull())
    {
        if (!rsp["ResourceTagMappingList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceTagMappingList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ResourceTagMappingList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceTagMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceTagMappingList.push_back(item);
        }
        m_resourceTagMappingListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetResourcesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_paginationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaginationToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paginationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagMappingListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTagMappingList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTagMappingList.begin(); itr != m_resourceTagMappingList.end(); ++itr, ++i)
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


string GetResourcesResponse::GetPaginationToken() const
{
    return m_paginationToken;
}

bool GetResourcesResponse::PaginationTokenHasBeenSet() const
{
    return m_paginationTokenHasBeenSet;
}

vector<ResourceTagMapping> GetResourcesResponse::GetResourceTagMappingList() const
{
    return m_resourceTagMappingList;
}

bool GetResourcesResponse::ResourceTagMappingListHasBeenSet() const
{
    return m_resourceTagMappingListHasBeenSet;
}


