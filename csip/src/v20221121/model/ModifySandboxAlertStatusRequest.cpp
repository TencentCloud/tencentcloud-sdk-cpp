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

#include <tencentcloud/csip/v20221121/model/ModifySandboxAlertStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifySandboxAlertStatusRequest::ModifySandboxAlertStatusRequest() :
    m_alertTypeHasBeenSet(false),
    m_belongAssetTypeHasBeenSet(false),
    m_iDListHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifySandboxAlertStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_alertTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alertType.c_str(), allocator).Move(), allocator);
    }

    if (m_belongAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongAssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_belongAssetType.c_str(), allocator).Move(), allocator);
    }

    if (m_iDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iDList.begin(); itr != m_iDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySandboxAlertStatusRequest::GetAlertType() const
{
    return m_alertType;
}

void ModifySandboxAlertStatusRequest::SetAlertType(const string& _alertType)
{
    m_alertType = _alertType;
    m_alertTypeHasBeenSet = true;
}

bool ModifySandboxAlertStatusRequest::AlertTypeHasBeenSet() const
{
    return m_alertTypeHasBeenSet;
}

string ModifySandboxAlertStatusRequest::GetBelongAssetType() const
{
    return m_belongAssetType;
}

void ModifySandboxAlertStatusRequest::SetBelongAssetType(const string& _belongAssetType)
{
    m_belongAssetType = _belongAssetType;
    m_belongAssetTypeHasBeenSet = true;
}

bool ModifySandboxAlertStatusRequest::BelongAssetTypeHasBeenSet() const
{
    return m_belongAssetTypeHasBeenSet;
}

vector<int64_t> ModifySandboxAlertStatusRequest::GetIDList() const
{
    return m_iDList;
}

void ModifySandboxAlertStatusRequest::SetIDList(const vector<int64_t>& _iDList)
{
    m_iDList = _iDList;
    m_iDListHasBeenSet = true;
}

bool ModifySandboxAlertStatusRequest::IDListHasBeenSet() const
{
    return m_iDListHasBeenSet;
}

string ModifySandboxAlertStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifySandboxAlertStatusRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifySandboxAlertStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


