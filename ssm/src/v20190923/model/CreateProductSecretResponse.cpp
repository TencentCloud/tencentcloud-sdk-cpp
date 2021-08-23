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

#include <tencentcloud/ssm/v20190923/model/CreateProductSecretResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

CreateProductSecretResponse::CreateProductSecretResponse() :
    m_secretNameHasBeenSet(false),
    m_tagCodeHasBeenSet(false),
    m_tagMsgHasBeenSet(false),
    m_flowIDHasBeenSet(false)
{
}

CoreInternalOutcome CreateProductSecretResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SecretName") && !rsp["SecretName"].IsNull())
    {
        if (!rsp["SecretName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretName = string(rsp["SecretName"].GetString());
        m_secretNameHasBeenSet = true;
    }

    if (rsp.HasMember("TagCode") && !rsp["TagCode"].IsNull())
    {
        if (!rsp["TagCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TagCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tagCode = rsp["TagCode"].GetUint64();
        m_tagCodeHasBeenSet = true;
    }

    if (rsp.HasMember("TagMsg") && !rsp["TagMsg"].IsNull())
    {
        if (!rsp["TagMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagMsg = string(rsp["TagMsg"].GetString());
        m_tagMsgHasBeenSet = true;
    }

    if (rsp.HasMember("FlowID") && !rsp["FlowID"].IsNull())
    {
        if (!rsp["FlowID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowID = rsp["FlowID"].GetInt64();
        m_flowIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateProductSecretResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagCode, allocator);
    }

    if (m_tagMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowID, allocator);
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


string CreateProductSecretResponse::GetSecretName() const
{
    return m_secretName;
}

bool CreateProductSecretResponse::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

uint64_t CreateProductSecretResponse::GetTagCode() const
{
    return m_tagCode;
}

bool CreateProductSecretResponse::TagCodeHasBeenSet() const
{
    return m_tagCodeHasBeenSet;
}

string CreateProductSecretResponse::GetTagMsg() const
{
    return m_tagMsg;
}

bool CreateProductSecretResponse::TagMsgHasBeenSet() const
{
    return m_tagMsgHasBeenSet;
}

int64_t CreateProductSecretResponse::GetFlowID() const
{
    return m_flowID;
}

bool CreateProductSecretResponse::FlowIDHasBeenSet() const
{
    return m_flowIDHasBeenSet;
}


