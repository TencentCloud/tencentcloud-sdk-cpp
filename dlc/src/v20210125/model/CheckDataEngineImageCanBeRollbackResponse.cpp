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

#include <tencentcloud/dlc/v20210125/model/CheckDataEngineImageCanBeRollbackResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CheckDataEngineImageCanBeRollbackResponse::CheckDataEngineImageCanBeRollbackResponse() :
    m_toRecordIdHasBeenSet(false),
    m_fromRecordIdHasBeenSet(false),
    m_isRollbackHasBeenSet(false)
{
}

CoreInternalOutcome CheckDataEngineImageCanBeRollbackResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ToRecordId") && !rsp["ToRecordId"].IsNull())
    {
        if (!rsp["ToRecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ToRecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toRecordId = string(rsp["ToRecordId"].GetString());
        m_toRecordIdHasBeenSet = true;
    }

    if (rsp.HasMember("FromRecordId") && !rsp["FromRecordId"].IsNull())
    {
        if (!rsp["FromRecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FromRecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromRecordId = string(rsp["FromRecordId"].GetString());
        m_fromRecordIdHasBeenSet = true;
    }

    if (rsp.HasMember("IsRollback") && !rsp["IsRollback"].IsNull())
    {
        if (!rsp["IsRollback"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsRollback` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRollback = rsp["IsRollback"].GetBool();
        m_isRollbackHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CheckDataEngineImageCanBeRollbackResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_toRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toRecordId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromRecordId.c_str(), allocator).Move(), allocator);
    }

    if (m_isRollbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRollback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRollback, allocator);
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


string CheckDataEngineImageCanBeRollbackResponse::GetToRecordId() const
{
    return m_toRecordId;
}

bool CheckDataEngineImageCanBeRollbackResponse::ToRecordIdHasBeenSet() const
{
    return m_toRecordIdHasBeenSet;
}

string CheckDataEngineImageCanBeRollbackResponse::GetFromRecordId() const
{
    return m_fromRecordId;
}

bool CheckDataEngineImageCanBeRollbackResponse::FromRecordIdHasBeenSet() const
{
    return m_fromRecordIdHasBeenSet;
}

bool CheckDataEngineImageCanBeRollbackResponse::GetIsRollback() const
{
    return m_isRollback;
}

bool CheckDataEngineImageCanBeRollbackResponse::IsRollbackHasBeenSet() const
{
    return m_isRollbackHasBeenSet;
}


