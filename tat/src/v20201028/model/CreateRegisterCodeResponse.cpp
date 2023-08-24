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

#include <tencentcloud/tat/v20201028/model/CreateRegisterCodeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

CreateRegisterCodeResponse::CreateRegisterCodeResponse() :
    m_registerCodeIdHasBeenSet(false),
    m_registerCodeValueHasBeenSet(false)
{
}

CoreInternalOutcome CreateRegisterCodeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RegisterCodeId") && !rsp["RegisterCodeId"].IsNull())
    {
        if (!rsp["RegisterCodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerCodeId = string(rsp["RegisterCodeId"].GetString());
        m_registerCodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("RegisterCodeValue") && !rsp["RegisterCodeValue"].IsNull())
    {
        if (!rsp["RegisterCodeValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCodeValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerCodeValue = string(rsp["RegisterCodeValue"].GetString());
        m_registerCodeValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateRegisterCodeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_registerCodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterCodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerCodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_registerCodeValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterCodeValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerCodeValue.c_str(), allocator).Move(), allocator);
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


string CreateRegisterCodeResponse::GetRegisterCodeId() const
{
    return m_registerCodeId;
}

bool CreateRegisterCodeResponse::RegisterCodeIdHasBeenSet() const
{
    return m_registerCodeIdHasBeenSet;
}

string CreateRegisterCodeResponse::GetRegisterCodeValue() const
{
    return m_registerCodeValue;
}

bool CreateRegisterCodeResponse::RegisterCodeValueHasBeenSet() const
{
    return m_registerCodeValueHasBeenSet;
}


