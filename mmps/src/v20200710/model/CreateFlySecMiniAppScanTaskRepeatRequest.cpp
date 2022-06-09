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

#include <tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppScanTaskRepeatRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

CreateFlySecMiniAppScanTaskRepeatRequest::CreateFlySecMiniAppScanTaskRepeatRequest() :
    m_miniAppIDHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_orgTaskIDHasBeenSet(false),
    m_miniAppTestAccountHasBeenSet(false),
    m_miniAppTestPwdHasBeenSet(false),
    m_scanVersionHasBeenSet(false)
{
}

string CreateFlySecMiniAppScanTaskRepeatRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_miniAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_miniAppID.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_orgTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgTaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgTaskID.c_str(), allocator).Move(), allocator);
    }

    if (m_miniAppTestAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppTestAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_miniAppTestAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_miniAppTestPwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppTestPwd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_miniAppTestPwd.c_str(), allocator).Move(), allocator);
    }

    if (m_scanVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanVersion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFlySecMiniAppScanTaskRepeatRequest::GetMiniAppID() const
{
    return m_miniAppID;
}

void CreateFlySecMiniAppScanTaskRepeatRequest::SetMiniAppID(const string& _miniAppID)
{
    m_miniAppID = _miniAppID;
    m_miniAppIDHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRepeatRequest::MiniAppIDHasBeenSet() const
{
    return m_miniAppIDHasBeenSet;
}

int64_t CreateFlySecMiniAppScanTaskRepeatRequest::GetMode() const
{
    return m_mode;
}

void CreateFlySecMiniAppScanTaskRepeatRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRepeatRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string CreateFlySecMiniAppScanTaskRepeatRequest::GetOrgTaskID() const
{
    return m_orgTaskID;
}

void CreateFlySecMiniAppScanTaskRepeatRequest::SetOrgTaskID(const string& _orgTaskID)
{
    m_orgTaskID = _orgTaskID;
    m_orgTaskIDHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRepeatRequest::OrgTaskIDHasBeenSet() const
{
    return m_orgTaskIDHasBeenSet;
}

string CreateFlySecMiniAppScanTaskRepeatRequest::GetMiniAppTestAccount() const
{
    return m_miniAppTestAccount;
}

void CreateFlySecMiniAppScanTaskRepeatRequest::SetMiniAppTestAccount(const string& _miniAppTestAccount)
{
    m_miniAppTestAccount = _miniAppTestAccount;
    m_miniAppTestAccountHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRepeatRequest::MiniAppTestAccountHasBeenSet() const
{
    return m_miniAppTestAccountHasBeenSet;
}

string CreateFlySecMiniAppScanTaskRepeatRequest::GetMiniAppTestPwd() const
{
    return m_miniAppTestPwd;
}

void CreateFlySecMiniAppScanTaskRepeatRequest::SetMiniAppTestPwd(const string& _miniAppTestPwd)
{
    m_miniAppTestPwd = _miniAppTestPwd;
    m_miniAppTestPwdHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRepeatRequest::MiniAppTestPwdHasBeenSet() const
{
    return m_miniAppTestPwdHasBeenSet;
}

int64_t CreateFlySecMiniAppScanTaskRepeatRequest::GetScanVersion() const
{
    return m_scanVersion;
}

void CreateFlySecMiniAppScanTaskRepeatRequest::SetScanVersion(const int64_t& _scanVersion)
{
    m_scanVersion = _scanVersion;
    m_scanVersionHasBeenSet = true;
}

bool CreateFlySecMiniAppScanTaskRepeatRequest::ScanVersionHasBeenSet() const
{
    return m_scanVersionHasBeenSet;
}


