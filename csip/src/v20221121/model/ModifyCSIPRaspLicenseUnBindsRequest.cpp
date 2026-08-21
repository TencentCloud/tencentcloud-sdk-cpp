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

#include <tencentcloud/csip/v20221121/model/ModifyCSIPRaspLicenseUnBindsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyCSIPRaspLicenseUnBindsRequest::ModifyCSIPRaspLicenseUnBindsRequest() :
    m_instanceIDsHasBeenSet(false),
    m_isAllHasBeenSet(false)
{
}

string ModifyCSIPRaspLicenseUnBindsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIDs.begin(); itr != m_instanceIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAll, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyCSIPRaspLicenseUnBindsRequest::GetInstanceIDs() const
{
    return m_instanceIDs;
}

void ModifyCSIPRaspLicenseUnBindsRequest::SetInstanceIDs(const vector<string>& _instanceIDs)
{
    m_instanceIDs = _instanceIDs;
    m_instanceIDsHasBeenSet = true;
}

bool ModifyCSIPRaspLicenseUnBindsRequest::InstanceIDsHasBeenSet() const
{
    return m_instanceIDsHasBeenSet;
}

bool ModifyCSIPRaspLicenseUnBindsRequest::GetIsAll() const
{
    return m_isAll;
}

void ModifyCSIPRaspLicenseUnBindsRequest::SetIsAll(const bool& _isAll)
{
    m_isAll = _isAll;
    m_isAllHasBeenSet = true;
}

bool ModifyCSIPRaspLicenseUnBindsRequest::IsAllHasBeenSet() const
{
    return m_isAllHasBeenSet;
}


