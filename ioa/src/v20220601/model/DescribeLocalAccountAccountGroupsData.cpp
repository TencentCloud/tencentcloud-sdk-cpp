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

#include <tencentcloud/ioa/v20220601/model/DescribeLocalAccountAccountGroupsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeLocalAccountAccountGroupsData::DescribeLocalAccountAccountGroupsData() :
    m_accountGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLocalAccountAccountGroupsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountGroupId") && !value["AccountGroupId"].IsNull())
    {
        if (!value["AccountGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountAccountGroupsData.AccountGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupId = value["AccountGroupId"].GetInt64();
        m_accountGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeLocalAccountAccountGroupsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountGroupId, allocator);
    }

}


int64_t DescribeLocalAccountAccountGroupsData::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void DescribeLocalAccountAccountGroupsData::SetAccountGroupId(const int64_t& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool DescribeLocalAccountAccountGroupsData::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

