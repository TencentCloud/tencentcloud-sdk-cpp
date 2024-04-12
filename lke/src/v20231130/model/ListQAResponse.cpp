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

#include <tencentcloud/lke/v20231130/model/ListQAResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ListQAResponse::ListQAResponse() :
    m_totalHasBeenSet(false),
    m_waitVerifyTotalHasBeenSet(false),
    m_notAcceptedTotalHasBeenSet(false),
    m_acceptedTotalHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_listHasBeenSet(false)
{
}

CoreInternalOutcome ListQAResponse::Deserialize(const string &payload)
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
        if (!rsp["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(rsp["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("WaitVerifyTotal") && !rsp["WaitVerifyTotal"].IsNull())
    {
        if (!rsp["WaitVerifyTotal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaitVerifyTotal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waitVerifyTotal = string(rsp["WaitVerifyTotal"].GetString());
        m_waitVerifyTotalHasBeenSet = true;
    }

    if (rsp.HasMember("NotAcceptedTotal") && !rsp["NotAcceptedTotal"].IsNull())
    {
        if (!rsp["NotAcceptedTotal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotAcceptedTotal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notAcceptedTotal = string(rsp["NotAcceptedTotal"].GetString());
        m_notAcceptedTotalHasBeenSet = true;
    }

    if (rsp.HasMember("AcceptedTotal") && !rsp["AcceptedTotal"].IsNull())
    {
        if (!rsp["AcceptedTotal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcceptedTotal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acceptedTotal = string(rsp["AcceptedTotal"].GetString());
        m_acceptedTotalHasBeenSet = true;
    }

    if (rsp.HasMember("PageNumber") && !rsp["PageNumber"].IsNull())
    {
        if (!rsp["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = rsp["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (rsp.HasMember("List") && !rsp["List"].IsNull())
    {
        if (!rsp["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `List` is not array type"));

        const rapidjson::Value &tmpValue = rsp["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ListQaItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_list.push_back(item);
        }
        m_listHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ListQAResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_waitVerifyTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitVerifyTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_waitVerifyTotal.c_str(), allocator).Move(), allocator);
    }

    if (m_notAcceptedTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotAcceptedTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notAcceptedTotal.c_str(), allocator).Move(), allocator);
    }

    if (m_acceptedTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceptedTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_acceptedTotal.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr, ++i)
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


string ListQAResponse::GetTotal() const
{
    return m_total;
}

bool ListQAResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string ListQAResponse::GetWaitVerifyTotal() const
{
    return m_waitVerifyTotal;
}

bool ListQAResponse::WaitVerifyTotalHasBeenSet() const
{
    return m_waitVerifyTotalHasBeenSet;
}

string ListQAResponse::GetNotAcceptedTotal() const
{
    return m_notAcceptedTotal;
}

bool ListQAResponse::NotAcceptedTotalHasBeenSet() const
{
    return m_notAcceptedTotalHasBeenSet;
}

string ListQAResponse::GetAcceptedTotal() const
{
    return m_acceptedTotal;
}

bool ListQAResponse::AcceptedTotalHasBeenSet() const
{
    return m_acceptedTotalHasBeenSet;
}

int64_t ListQAResponse::GetPageNumber() const
{
    return m_pageNumber;
}

bool ListQAResponse::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

vector<ListQaItem> ListQAResponse::GetList() const
{
    return m_list;
}

bool ListQAResponse::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}


