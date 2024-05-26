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

#include <tencentcloud/iotexplorer/v20190423/model/ActivateTWeCallLicenseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ActivateTWeCallLicenseRequest::ActivateTWeCallLicenseRequest() :
    m_pkgTypeHasBeenSet(false),
    m_miniProgramAppIdHasBeenSet(false),
    m_deviceListHasBeenSet(false)
{
}

string ActivateTWeCallLicenseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pkgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pkgType, allocator);
    }

    if (m_miniProgramAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniProgramAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_miniProgramAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceList.begin(); itr != m_deviceList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ActivateTWeCallLicenseRequest::GetPkgType() const
{
    return m_pkgType;
}

void ActivateTWeCallLicenseRequest::SetPkgType(const int64_t& _pkgType)
{
    m_pkgType = _pkgType;
    m_pkgTypeHasBeenSet = true;
}

bool ActivateTWeCallLicenseRequest::PkgTypeHasBeenSet() const
{
    return m_pkgTypeHasBeenSet;
}

string ActivateTWeCallLicenseRequest::GetMiniProgramAppId() const
{
    return m_miniProgramAppId;
}

void ActivateTWeCallLicenseRequest::SetMiniProgramAppId(const string& _miniProgramAppId)
{
    m_miniProgramAppId = _miniProgramAppId;
    m_miniProgramAppIdHasBeenSet = true;
}

bool ActivateTWeCallLicenseRequest::MiniProgramAppIdHasBeenSet() const
{
    return m_miniProgramAppIdHasBeenSet;
}

vector<TWeCallInfo> ActivateTWeCallLicenseRequest::GetDeviceList() const
{
    return m_deviceList;
}

void ActivateTWeCallLicenseRequest::SetDeviceList(const vector<TWeCallInfo>& _deviceList)
{
    m_deviceList = _deviceList;
    m_deviceListHasBeenSet = true;
}

bool ActivateTWeCallLicenseRequest::DeviceListHasBeenSet() const
{
    return m_deviceListHasBeenSet;
}


