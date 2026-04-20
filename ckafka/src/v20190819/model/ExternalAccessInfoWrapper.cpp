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

#include <tencentcloud/ckafka/v20190819/model/ExternalAccessInfoWrapper.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ExternalAccessInfoWrapper::ExternalAccessInfoWrapper() :
    m_totalCountHasBeenSet(false),
    m_ipWhitelistHasBeenSet(false)
{
}

CoreInternalOutcome ExternalAccessInfoWrapper::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalAccessInfoWrapper.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("IpWhitelist") && !value["IpWhitelist"].IsNull())
    {
        if (!value["IpWhitelist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExternalAccessInfoWrapper.IpWhitelist` is not array type"));

        const rapidjson::Value &tmpValue = value["IpWhitelist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IpWhitelistDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ipWhitelist.push_back(item);
        }
        m_ipWhitelistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalAccessInfoWrapper::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_ipWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipWhitelist.begin(); itr != m_ipWhitelist.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ExternalAccessInfoWrapper::GetTotalCount() const
{
    return m_totalCount;
}

void ExternalAccessInfoWrapper::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ExternalAccessInfoWrapper::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<IpWhitelistDTO> ExternalAccessInfoWrapper::GetIpWhitelist() const
{
    return m_ipWhitelist;
}

void ExternalAccessInfoWrapper::SetIpWhitelist(const vector<IpWhitelistDTO>& _ipWhitelist)
{
    m_ipWhitelist = _ipWhitelist;
    m_ipWhitelistHasBeenSet = true;
}

bool ExternalAccessInfoWrapper::IpWhitelistHasBeenSet() const
{
    return m_ipWhitelistHasBeenSet;
}

