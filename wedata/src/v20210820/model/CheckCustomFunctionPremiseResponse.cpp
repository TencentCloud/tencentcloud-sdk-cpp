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

#include <tencentcloud/wedata/v20210820/model/CheckCustomFunctionPremiseResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CheckCustomFunctionPremiseResponse::CheckCustomFunctionPremiseResponse() :
    m_sparkInstalledHasBeenSet(false),
    m_livyInstalledHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome CheckCustomFunctionPremiseResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SparkInstalled") && !rsp["SparkInstalled"].IsNull())
    {
        if (!rsp["SparkInstalled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SparkInstalled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sparkInstalled = rsp["SparkInstalled"].GetBool();
        m_sparkInstalledHasBeenSet = true;
    }

    if (rsp.HasMember("LivyInstalled") && !rsp["LivyInstalled"].IsNull())
    {
        if (!rsp["LivyInstalled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LivyInstalled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_livyInstalled = rsp["LivyInstalled"].GetBool();
        m_livyInstalledHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMessage") && !rsp["ErrorMessage"].IsNull())
    {
        if (!rsp["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(rsp["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CheckCustomFunctionPremiseResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sparkInstalledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkInstalled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sparkInstalled, allocator);
    }

    if (m_livyInstalledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivyInstalled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_livyInstalled, allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
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


bool CheckCustomFunctionPremiseResponse::GetSparkInstalled() const
{
    return m_sparkInstalled;
}

bool CheckCustomFunctionPremiseResponse::SparkInstalledHasBeenSet() const
{
    return m_sparkInstalledHasBeenSet;
}

bool CheckCustomFunctionPremiseResponse::GetLivyInstalled() const
{
    return m_livyInstalled;
}

bool CheckCustomFunctionPremiseResponse::LivyInstalledHasBeenSet() const
{
    return m_livyInstalledHasBeenSet;
}

string CheckCustomFunctionPremiseResponse::GetErrorMessage() const
{
    return m_errorMessage;
}

bool CheckCustomFunctionPremiseResponse::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}


