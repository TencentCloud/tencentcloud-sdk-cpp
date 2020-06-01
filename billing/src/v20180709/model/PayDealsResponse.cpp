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

#include <tencentcloud/billing/v20180709/model/PayDealsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace rapidjson;
using namespace std;

PayDealsResponse::PayDealsResponse() :
    m_orderIdsHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_bigDealIdsHasBeenSet(false)
{
}

CoreInternalOutcome PayDealsResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("OrderIds") && !rsp["OrderIds"].IsNull())
    {
        if (!rsp["OrderIds"].IsArray())
            return CoreInternalOutcome(Error("response `OrderIds` is not array type"));

        const Value &tmpValue = rsp["OrderIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_orderIds.push_back((*itr).GetString());
        }
        m_orderIdsHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceIds") && !rsp["ResourceIds"].IsNull())
    {
        if (!rsp["ResourceIds"].IsArray())
            return CoreInternalOutcome(Error("response `ResourceIds` is not array type"));

        const Value &tmpValue = rsp["ResourceIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceIds.push_back((*itr).GetString());
        }
        m_resourceIdsHasBeenSet = true;
    }

    if (rsp.HasMember("BigDealIds") && !rsp["BigDealIds"].IsNull())
    {
        if (!rsp["BigDealIds"].IsArray())
            return CoreInternalOutcome(Error("response `BigDealIds` is not array type"));

        const Value &tmpValue = rsp["BigDealIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bigDealIds.push_back((*itr).GetString());
        }
        m_bigDealIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<string> PayDealsResponse::GetOrderIds() const
{
    return m_orderIds;
}

bool PayDealsResponse::OrderIdsHasBeenSet() const
{
    return m_orderIdsHasBeenSet;
}

vector<string> PayDealsResponse::GetResourceIds() const
{
    return m_resourceIds;
}

bool PayDealsResponse::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

vector<string> PayDealsResponse::GetBigDealIds() const
{
    return m_bigDealIds;
}

bool PayDealsResponse::BigDealIdsHasBeenSet() const
{
    return m_bigDealIdsHasBeenSet;
}


