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

#include <tencentcloud/organization/v20210331/model/CheckAccountDeleteResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

CheckAccountDeleteResponse::CheckAccountDeleteResponse() :
    m_allowDeleteHasBeenSet(false),
    m_notAllowReasonHasBeenSet(false)
{
}

CoreInternalOutcome CheckAccountDeleteResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AllowDelete") && !rsp["AllowDelete"].IsNull())
    {
        if (!rsp["AllowDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AllowDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowDelete = rsp["AllowDelete"].GetBool();
        m_allowDeleteHasBeenSet = true;
    }

    if (rsp.HasMember("NotAllowReason") && !rsp["NotAllowReason"].IsNull())
    {
        if (!rsp["NotAllowReason"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NotAllowReason` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_notAllowReason.Deserialize(rsp["NotAllowReason"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_notAllowReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CheckAccountDeleteResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_allowDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowDelete, allocator);
    }

    if (m_notAllowReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotAllowReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_notAllowReason.ToJsonObject(value[key.c_str()], allocator);
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


bool CheckAccountDeleteResponse::GetAllowDelete() const
{
    return m_allowDelete;
}

bool CheckAccountDeleteResponse::AllowDeleteHasBeenSet() const
{
    return m_allowDeleteHasBeenSet;
}

NotAllowReason CheckAccountDeleteResponse::GetNotAllowReason() const
{
    return m_notAllowReason;
}

bool CheckAccountDeleteResponse::NotAllowReasonHasBeenSet() const
{
    return m_notAllowReasonHasBeenSet;
}


