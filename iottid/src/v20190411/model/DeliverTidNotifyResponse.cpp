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

#include <tencentcloud/iottid/v20190411/model/DeliverTidNotifyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iottid::V20190411::Model;
using namespace std;

DeliverTidNotifyResponse::DeliverTidNotifyResponse() :
    m_remaindCountHasBeenSet(false),
    m_tidHasBeenSet(false),
    m_productKeyHasBeenSet(false)
{
}

CoreInternalOutcome DeliverTidNotifyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RemaindCount") && !rsp["RemaindCount"].IsNull())
    {
        if (!rsp["RemaindCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RemaindCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_remaindCount = rsp["RemaindCount"].GetUint64();
        m_remaindCountHasBeenSet = true;
    }

    if (rsp.HasMember("Tid") && !rsp["Tid"].IsNull())
    {
        if (!rsp["Tid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tid = string(rsp["Tid"].GetString());
        m_tidHasBeenSet = true;
    }

    if (rsp.HasMember("ProductKey") && !rsp["ProductKey"].IsNull())
    {
        if (!rsp["ProductKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productKey = string(rsp["ProductKey"].GetString());
        m_productKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DeliverTidNotifyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_remaindCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemaindCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remaindCount, allocator);
    }

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_productKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productKey.c_str(), allocator).Move(), allocator);
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


uint64_t DeliverTidNotifyResponse::GetRemaindCount() const
{
    return m_remaindCount;
}

bool DeliverTidNotifyResponse::RemaindCountHasBeenSet() const
{
    return m_remaindCountHasBeenSet;
}

string DeliverTidNotifyResponse::GetTid() const
{
    return m_tid;
}

bool DeliverTidNotifyResponse::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

string DeliverTidNotifyResponse::GetProductKey() const
{
    return m_productKey;
}

bool DeliverTidNotifyResponse::ProductKeyHasBeenSet() const
{
    return m_productKeyHasBeenSet;
}


