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

#include <tencentcloud/vpc/v20170312/model/ReplaceHighPriorityRoutesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ReplaceHighPriorityRoutesResponse::ReplaceHighPriorityRoutesResponse() :
    m_newHighPriorityRouteSetHasBeenSet(false),
    m_oldHighPriorityRouteSetHasBeenSet(false)
{
}

CoreInternalOutcome ReplaceHighPriorityRoutesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NewHighPriorityRouteSet") && !rsp["NewHighPriorityRouteSet"].IsNull())
    {
        if (!rsp["NewHighPriorityRouteSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NewHighPriorityRouteSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NewHighPriorityRouteSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HighPriorityRoute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_newHighPriorityRouteSet.push_back(item);
        }
        m_newHighPriorityRouteSetHasBeenSet = true;
    }

    if (rsp.HasMember("OldHighPriorityRouteSet") && !rsp["OldHighPriorityRouteSet"].IsNull())
    {
        if (!rsp["OldHighPriorityRouteSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OldHighPriorityRouteSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OldHighPriorityRouteSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HighPriorityRoute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_oldHighPriorityRouteSet.push_back(item);
        }
        m_oldHighPriorityRouteSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ReplaceHighPriorityRoutesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_newHighPriorityRouteSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewHighPriorityRouteSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_newHighPriorityRouteSet.begin(); itr != m_newHighPriorityRouteSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_oldHighPriorityRouteSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldHighPriorityRouteSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_oldHighPriorityRouteSet.begin(); itr != m_oldHighPriorityRouteSet.end(); ++itr, ++i)
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


vector<HighPriorityRoute> ReplaceHighPriorityRoutesResponse::GetNewHighPriorityRouteSet() const
{
    return m_newHighPriorityRouteSet;
}

bool ReplaceHighPriorityRoutesResponse::NewHighPriorityRouteSetHasBeenSet() const
{
    return m_newHighPriorityRouteSetHasBeenSet;
}

vector<HighPriorityRoute> ReplaceHighPriorityRoutesResponse::GetOldHighPriorityRouteSet() const
{
    return m_oldHighPriorityRouteSet;
}

bool ReplaceHighPriorityRoutesResponse::OldHighPriorityRouteSetHasBeenSet() const
{
    return m_oldHighPriorityRouteSetHasBeenSet;
}


