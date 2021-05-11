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

#include <tencentcloud/cvm/v20170312/model/AccountQuotaOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

AccountQuotaOverview::AccountQuotaOverview() :
    m_regionHasBeenSet(false),
    m_accountQuotaHasBeenSet(false)
{
}

CoreInternalOutcome AccountQuotaOverview::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccountQuotaOverview.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AccountQuota") && !value["AccountQuota"].IsNull())
    {
        if (!value["AccountQuota"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AccountQuotaOverview.AccountQuota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accountQuota.Deserialize(value["AccountQuota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accountQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountQuotaOverview::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_accountQuotaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccountQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_accountQuota.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AccountQuotaOverview::GetRegion() const
{
    return m_region;
}

void AccountQuotaOverview::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AccountQuotaOverview::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

AccountQuota AccountQuotaOverview::GetAccountQuota() const
{
    return m_accountQuota;
}

void AccountQuotaOverview::SetAccountQuota(const AccountQuota& _accountQuota)
{
    m_accountQuota = _accountQuota;
    m_accountQuotaHasBeenSet = true;
}

bool AccountQuotaOverview::AccountQuotaHasBeenSet() const
{
    return m_accountQuotaHasBeenSet;
}

