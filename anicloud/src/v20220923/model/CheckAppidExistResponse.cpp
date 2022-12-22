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

#include <tencentcloud/anicloud/v20220923/model/CheckAppidExistResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Anicloud::V20220923::Model;
using namespace std;

CheckAppidExistResponse::CheckAppidExistResponse() :
    m_existHasBeenSet(false),
    m_hasErrorHasBeenSet(false),
    m_msgHasBeenSet(false)
{
}

CoreInternalOutcome CheckAppidExistResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Exist") && !rsp["Exist"].IsNull())
    {
        if (!rsp["Exist"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Exist` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_exist = rsp["Exist"].GetBool();
        m_existHasBeenSet = true;
    }

    if (rsp.HasMember("HasError") && !rsp["HasError"].IsNull())
    {
        if (!rsp["HasError"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HasError` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasError = rsp["HasError"].GetBool();
        m_hasErrorHasBeenSet = true;
    }

    if (rsp.HasMember("Msg") && !rsp["Msg"].IsNull())
    {
        if (!rsp["Msg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(rsp["Msg"].GetString());
        m_msgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CheckAppidExistResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_existHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exist, allocator);
    }

    if (m_hasErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasError, allocator);
    }

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
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


bool CheckAppidExistResponse::GetExist() const
{
    return m_exist;
}

bool CheckAppidExistResponse::ExistHasBeenSet() const
{
    return m_existHasBeenSet;
}

bool CheckAppidExistResponse::GetHasError() const
{
    return m_hasError;
}

bool CheckAppidExistResponse::HasErrorHasBeenSet() const
{
    return m_hasErrorHasBeenSet;
}

string CheckAppidExistResponse::GetMsg() const
{
    return m_msg;
}

bool CheckAppidExistResponse::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}


