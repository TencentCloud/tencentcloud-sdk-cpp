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

#include <tencentcloud/cfw/v20190904/model/CreateAlertCenterIsolateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CreateAlertCenterIsolateRequest::CreateAlertCenterIsolateRequest() :
    m_handleAssetListHasBeenSet(false),
    m_handleTimeHasBeenSet(false),
    m_alertDirectionHasBeenSet(false),
    m_isolateTypeHasBeenSet(false),
    m_omModeHasBeenSet(false)
{
}

string CreateAlertCenterIsolateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_handleAssetListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleAssetList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_handleAssetList.begin(); itr != m_handleAssetList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_handleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_handleTime, allocator);
    }

    if (m_alertDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alertDirection, allocator);
    }

    if (m_isolateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_isolateType.begin(); itr != m_isolateType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_omModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OmMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_omMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateAlertCenterIsolateRequest::GetHandleAssetList() const
{
    return m_handleAssetList;
}

void CreateAlertCenterIsolateRequest::SetHandleAssetList(const vector<string>& _handleAssetList)
{
    m_handleAssetList = _handleAssetList;
    m_handleAssetListHasBeenSet = true;
}

bool CreateAlertCenterIsolateRequest::HandleAssetListHasBeenSet() const
{
    return m_handleAssetListHasBeenSet;
}

int64_t CreateAlertCenterIsolateRequest::GetHandleTime() const
{
    return m_handleTime;
}

void CreateAlertCenterIsolateRequest::SetHandleTime(const int64_t& _handleTime)
{
    m_handleTime = _handleTime;
    m_handleTimeHasBeenSet = true;
}

bool CreateAlertCenterIsolateRequest::HandleTimeHasBeenSet() const
{
    return m_handleTimeHasBeenSet;
}

int64_t CreateAlertCenterIsolateRequest::GetAlertDirection() const
{
    return m_alertDirection;
}

void CreateAlertCenterIsolateRequest::SetAlertDirection(const int64_t& _alertDirection)
{
    m_alertDirection = _alertDirection;
    m_alertDirectionHasBeenSet = true;
}

bool CreateAlertCenterIsolateRequest::AlertDirectionHasBeenSet() const
{
    return m_alertDirectionHasBeenSet;
}

vector<int64_t> CreateAlertCenterIsolateRequest::GetIsolateType() const
{
    return m_isolateType;
}

void CreateAlertCenterIsolateRequest::SetIsolateType(const vector<int64_t>& _isolateType)
{
    m_isolateType = _isolateType;
    m_isolateTypeHasBeenSet = true;
}

bool CreateAlertCenterIsolateRequest::IsolateTypeHasBeenSet() const
{
    return m_isolateTypeHasBeenSet;
}

int64_t CreateAlertCenterIsolateRequest::GetOmMode() const
{
    return m_omMode;
}

void CreateAlertCenterIsolateRequest::SetOmMode(const int64_t& _omMode)
{
    m_omMode = _omMode;
    m_omModeHasBeenSet = true;
}

bool CreateAlertCenterIsolateRequest::OmModeHasBeenSet() const
{
    return m_omModeHasBeenSet;
}


