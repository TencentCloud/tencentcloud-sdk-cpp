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

#include <tencentcloud/faceid/v20180301/model/GenerateReflectSequenceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GenerateReflectSequenceResponse::GenerateReflectSequenceResponse() :
    m_reflectSequenceUrlHasBeenSet(false),
    m_reflectSequenceMd5HasBeenSet(false)
{
}

CoreInternalOutcome GenerateReflectSequenceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ReflectSequenceUrl") && !rsp["ReflectSequenceUrl"].IsNull())
    {
        if (!rsp["ReflectSequenceUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReflectSequenceUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reflectSequenceUrl = string(rsp["ReflectSequenceUrl"].GetString());
        m_reflectSequenceUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ReflectSequenceMd5") && !rsp["ReflectSequenceMd5"].IsNull())
    {
        if (!rsp["ReflectSequenceMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReflectSequenceMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reflectSequenceMd5 = string(rsp["ReflectSequenceMd5"].GetString());
        m_reflectSequenceMd5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GenerateReflectSequenceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_reflectSequenceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReflectSequenceUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reflectSequenceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_reflectSequenceMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReflectSequenceMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reflectSequenceMd5.c_str(), allocator).Move(), allocator);
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


string GenerateReflectSequenceResponse::GetReflectSequenceUrl() const
{
    return m_reflectSequenceUrl;
}

bool GenerateReflectSequenceResponse::ReflectSequenceUrlHasBeenSet() const
{
    return m_reflectSequenceUrlHasBeenSet;
}

string GenerateReflectSequenceResponse::GetReflectSequenceMd5() const
{
    return m_reflectSequenceMd5;
}

bool GenerateReflectSequenceResponse::ReflectSequenceMd5HasBeenSet() const
{
    return m_reflectSequenceMd5HasBeenSet;
}


