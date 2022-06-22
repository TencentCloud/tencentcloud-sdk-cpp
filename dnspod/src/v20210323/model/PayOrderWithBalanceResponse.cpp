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

#include <tencentcloud/dnspod/v20210323/model/PayOrderWithBalanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

PayOrderWithBalanceResponse::PayOrderWithBalanceResponse() :
    m_dealIdListHasBeenSet(false),
    m_bigDealIdListHasBeenSet(false),
    m_dealNameListHasBeenSet(false)
{
}

CoreInternalOutcome PayOrderWithBalanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DealIdList") && !rsp["DealIdList"].IsNull())
    {
        if (!rsp["DealIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DealIdList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DealIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dealIdList.push_back((*itr).GetString());
        }
        m_dealIdListHasBeenSet = true;
    }

    if (rsp.HasMember("BigDealIdList") && !rsp["BigDealIdList"].IsNull())
    {
        if (!rsp["BigDealIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BigDealIdList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BigDealIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bigDealIdList.push_back((*itr).GetString());
        }
        m_bigDealIdListHasBeenSet = true;
    }

    if (rsp.HasMember("DealNameList") && !rsp["DealNameList"].IsNull())
    {
        if (!rsp["DealNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DealNameList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DealNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dealNameList.push_back((*itr).GetString());
        }
        m_dealNameListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string PayOrderWithBalanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dealIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dealIdList.begin(); itr != m_dealIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bigDealIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigDealIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bigDealIdList.begin(); itr != m_bigDealIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dealNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dealNameList.begin(); itr != m_dealNameList.end(); ++itr)
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


vector<string> PayOrderWithBalanceResponse::GetDealIdList() const
{
    return m_dealIdList;
}

bool PayOrderWithBalanceResponse::DealIdListHasBeenSet() const
{
    return m_dealIdListHasBeenSet;
}

vector<string> PayOrderWithBalanceResponse::GetBigDealIdList() const
{
    return m_bigDealIdList;
}

bool PayOrderWithBalanceResponse::BigDealIdListHasBeenSet() const
{
    return m_bigDealIdListHasBeenSet;
}

vector<string> PayOrderWithBalanceResponse::GetDealNameList() const
{
    return m_dealNameList;
}

bool PayOrderWithBalanceResponse::DealNameListHasBeenSet() const
{
    return m_dealNameListHasBeenSet;
}


