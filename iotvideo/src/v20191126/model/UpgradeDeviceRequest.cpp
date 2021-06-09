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

#include <tencentcloud/iotvideo/v20191126/model/UpgradeDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

UpgradeDeviceRequest::UpgradeDeviceRequest() :
    m_tidHasBeenSet(false),
    m_otaVersionHasBeenSet(false),
    m_upgradeNowHasBeenSet(false)
{
}

string UpgradeDeviceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_otaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtaVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_otaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upgradeNow, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeDeviceRequest::GetTid() const
{
    return m_tid;
}

void UpgradeDeviceRequest::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool UpgradeDeviceRequest::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

string UpgradeDeviceRequest::GetOtaVersion() const
{
    return m_otaVersion;
}

void UpgradeDeviceRequest::SetOtaVersion(const string& _otaVersion)
{
    m_otaVersion = _otaVersion;
    m_otaVersionHasBeenSet = true;
}

bool UpgradeDeviceRequest::OtaVersionHasBeenSet() const
{
    return m_otaVersionHasBeenSet;
}

bool UpgradeDeviceRequest::GetUpgradeNow() const
{
    return m_upgradeNow;
}

void UpgradeDeviceRequest::SetUpgradeNow(const bool& _upgradeNow)
{
    m_upgradeNow = _upgradeNow;
    m_upgradeNowHasBeenSet = true;
}

bool UpgradeDeviceRequest::UpgradeNowHasBeenSet() const
{
    return m_upgradeNowHasBeenSet;
}


