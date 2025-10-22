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

#include <tencentcloud/tcss/v20201101/model/DeleteCompliancePolicyItemFromWhitelistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DeleteCompliancePolicyItemFromWhitelistRequest::DeleteCompliancePolicyItemFromWhitelistRequest() :
    m_whitelistIdSetHasBeenSet(false)
{
}

string DeleteCompliancePolicyItemFromWhitelistRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_whitelistIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhitelistIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_whitelistIdSet.begin(); itr != m_whitelistIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> DeleteCompliancePolicyItemFromWhitelistRequest::GetWhitelistIdSet() const
{
    return m_whitelistIdSet;
}

void DeleteCompliancePolicyItemFromWhitelistRequest::SetWhitelistIdSet(const vector<uint64_t>& _whitelistIdSet)
{
    m_whitelistIdSet = _whitelistIdSet;
    m_whitelistIdSetHasBeenSet = true;
}

bool DeleteCompliancePolicyItemFromWhitelistRequest::WhitelistIdSetHasBeenSet() const
{
    return m_whitelistIdSetHasBeenSet;
}


