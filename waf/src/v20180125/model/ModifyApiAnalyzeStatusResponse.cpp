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

#include <tencentcloud/waf/v20180125/model/ModifyApiAnalyzeStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyApiAnalyzeStatusResponse::ModifyApiAnalyzeStatusResponse() :
    m_countHasBeenSet(false),
    m_unSupportedListHasBeenSet(false),
    m_failDomainListHasBeenSet(false)
{
}

CoreInternalOutcome ModifyApiAnalyzeStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Count") && !rsp["Count"].IsNull())
    {
        if (!rsp["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = rsp["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (rsp.HasMember("UnSupportedList") && !rsp["UnSupportedList"].IsNull())
    {
        if (!rsp["UnSupportedList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UnSupportedList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UnSupportedList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_unSupportedList.push_back((*itr).GetString());
        }
        m_unSupportedListHasBeenSet = true;
    }

    if (rsp.HasMember("FailDomainList") && !rsp["FailDomainList"].IsNull())
    {
        if (!rsp["FailDomainList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailDomainList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailDomainList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failDomainList.push_back((*itr).GetString());
        }
        m_failDomainListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyApiAnalyzeStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_unSupportedListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnSupportedList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_unSupportedList.begin(); itr != m_unSupportedList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failDomainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailDomainList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failDomainList.begin(); itr != m_failDomainList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


int64_t ModifyApiAnalyzeStatusResponse::GetCount() const
{
    return m_count;
}

bool ModifyApiAnalyzeStatusResponse::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

vector<string> ModifyApiAnalyzeStatusResponse::GetUnSupportedList() const
{
    return m_unSupportedList;
}

bool ModifyApiAnalyzeStatusResponse::UnSupportedListHasBeenSet() const
{
    return m_unSupportedListHasBeenSet;
}

vector<string> ModifyApiAnalyzeStatusResponse::GetFailDomainList() const
{
    return m_failDomainList;
}

bool ModifyApiAnalyzeStatusResponse::FailDomainListHasBeenSet() const
{
    return m_failDomainListHasBeenSet;
}


