/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingAkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyNotifySettingAkRequest::ModifyNotifySettingAkRequest() :
    m_alertHasBeenSet(false),
    m_alertGranularityHasBeenSet(false),
    m_assetHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string ModifyNotifySettingAkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_alertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alert";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alert.begin(); itr != m_alert.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_alertGranularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertGranularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alertGranularity, allocator);
    }

    if (m_assetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_asset.begin(); itr != m_asset.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<LevelOption> ModifyNotifySettingAkRequest::GetAlert() const
{
    return m_alert;
}

void ModifyNotifySettingAkRequest::SetAlert(const vector<LevelOption>& _alert)
{
    m_alert = _alert;
    m_alertHasBeenSet = true;
}

bool ModifyNotifySettingAkRequest::AlertHasBeenSet() const
{
    return m_alertHasBeenSet;
}

int64_t ModifyNotifySettingAkRequest::GetAlertGranularity() const
{
    return m_alertGranularity;
}

void ModifyNotifySettingAkRequest::SetAlertGranularity(const int64_t& _alertGranularity)
{
    m_alertGranularity = _alertGranularity;
    m_alertGranularityHasBeenSet = true;
}

bool ModifyNotifySettingAkRequest::AlertGranularityHasBeenSet() const
{
    return m_alertGranularityHasBeenSet;
}

vector<string> ModifyNotifySettingAkRequest::GetAsset() const
{
    return m_asset;
}

void ModifyNotifySettingAkRequest::SetAsset(const vector<string>& _asset)
{
    m_asset = _asset;
    m_assetHasBeenSet = true;
}

bool ModifyNotifySettingAkRequest::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

string ModifyNotifySettingAkRequest::GetBeginTime() const
{
    return m_beginTime;
}

void ModifyNotifySettingAkRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool ModifyNotifySettingAkRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string ModifyNotifySettingAkRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyNotifySettingAkRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyNotifySettingAkRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


