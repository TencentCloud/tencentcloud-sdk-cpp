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

#include <tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanTaskParamResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

DescribeFlySecMiniAppScanTaskParamResponse::DescribeFlySecMiniAppScanTaskParamResponse() :
    m_retHasBeenSet(false),
    m_miniAppIDHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_miniAppTestAccountHasBeenSet(false),
    m_miniAppTestPwdHasBeenSet(false),
    m_scanVersionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFlySecMiniAppScanTaskParamResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Ret") && !rsp["Ret"].IsNull())
    {
        if (!rsp["Ret"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ret` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ret = rsp["Ret"].GetInt64();
        m_retHasBeenSet = true;
    }

    if (rsp.HasMember("MiniAppID") && !rsp["MiniAppID"].IsNull())
    {
        if (!rsp["MiniAppID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppID = string(rsp["MiniAppID"].GetString());
        m_miniAppIDHasBeenSet = true;
    }

    if (rsp.HasMember("Mode") && !rsp["Mode"].IsNull())
    {
        if (!rsp["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = rsp["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }

    if (rsp.HasMember("MiniAppTestAccount") && !rsp["MiniAppTestAccount"].IsNull())
    {
        if (!rsp["MiniAppTestAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppTestAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppTestAccount = string(rsp["MiniAppTestAccount"].GetString());
        m_miniAppTestAccountHasBeenSet = true;
    }

    if (rsp.HasMember("MiniAppTestPwd") && !rsp["MiniAppTestPwd"].IsNull())
    {
        if (!rsp["MiniAppTestPwd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppTestPwd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppTestPwd = string(rsp["MiniAppTestPwd"].GetString());
        m_miniAppTestPwdHasBeenSet = true;
    }

    if (rsp.HasMember("ScanVersion") && !rsp["ScanVersion"].IsNull())
    {
        if (!rsp["ScanVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanVersion = rsp["ScanVersion"].GetInt64();
        m_scanVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFlySecMiniAppScanTaskParamResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_retHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ret, allocator);
    }

    if (m_miniAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniAppID.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_miniAppTestAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppTestAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniAppTestAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_miniAppTestPwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppTestPwd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniAppTestPwd.c_str(), allocator).Move(), allocator);
    }

    if (m_scanVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanVersion, allocator);
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


int64_t DescribeFlySecMiniAppScanTaskParamResponse::GetRet() const
{
    return m_ret;
}

bool DescribeFlySecMiniAppScanTaskParamResponse::RetHasBeenSet() const
{
    return m_retHasBeenSet;
}

string DescribeFlySecMiniAppScanTaskParamResponse::GetMiniAppID() const
{
    return m_miniAppID;
}

bool DescribeFlySecMiniAppScanTaskParamResponse::MiniAppIDHasBeenSet() const
{
    return m_miniAppIDHasBeenSet;
}

int64_t DescribeFlySecMiniAppScanTaskParamResponse::GetMode() const
{
    return m_mode;
}

bool DescribeFlySecMiniAppScanTaskParamResponse::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DescribeFlySecMiniAppScanTaskParamResponse::GetMiniAppTestAccount() const
{
    return m_miniAppTestAccount;
}

bool DescribeFlySecMiniAppScanTaskParamResponse::MiniAppTestAccountHasBeenSet() const
{
    return m_miniAppTestAccountHasBeenSet;
}

string DescribeFlySecMiniAppScanTaskParamResponse::GetMiniAppTestPwd() const
{
    return m_miniAppTestPwd;
}

bool DescribeFlySecMiniAppScanTaskParamResponse::MiniAppTestPwdHasBeenSet() const
{
    return m_miniAppTestPwdHasBeenSet;
}

int64_t DescribeFlySecMiniAppScanTaskParamResponse::GetScanVersion() const
{
    return m_scanVersion;
}

bool DescribeFlySecMiniAppScanTaskParamResponse::ScanVersionHasBeenSet() const
{
    return m_scanVersionHasBeenSet;
}


