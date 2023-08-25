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

#include <tencentcloud/dsgc/v20190723/model/QueryResourceDbBindStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

QueryResourceDbBindStatusResponse::QueryResourceDbBindStatusResponse() :
    m_bindDbNumsHasBeenSet(false),
    m_unbindDbNumsHasBeenSet(false)
{
}

CoreInternalOutcome QueryResourceDbBindStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BindDbNums") && !rsp["BindDbNums"].IsNull())
    {
        if (!rsp["BindDbNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BindDbNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bindDbNums = rsp["BindDbNums"].GetUint64();
        m_bindDbNumsHasBeenSet = true;
    }

    if (rsp.HasMember("UnbindDbNums") && !rsp["UnbindDbNums"].IsNull())
    {
        if (!rsp["UnbindDbNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnbindDbNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unbindDbNums = rsp["UnbindDbNums"].GetUint64();
        m_unbindDbNumsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryResourceDbBindStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_bindDbNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindDbNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindDbNums, allocator);
    }

    if (m_unbindDbNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnbindDbNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unbindDbNums, allocator);
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


uint64_t QueryResourceDbBindStatusResponse::GetBindDbNums() const
{
    return m_bindDbNums;
}

bool QueryResourceDbBindStatusResponse::BindDbNumsHasBeenSet() const
{
    return m_bindDbNumsHasBeenSet;
}

uint64_t QueryResourceDbBindStatusResponse::GetUnbindDbNums() const
{
    return m_unbindDbNums;
}

bool QueryResourceDbBindStatusResponse::UnbindDbNumsHasBeenSet() const
{
    return m_unbindDbNumsHasBeenSet;
}


