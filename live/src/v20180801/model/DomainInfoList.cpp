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

#include <tencentcloud/live/v20180801/model/DomainInfoList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

DomainInfoList::DomainInfoList() :
    m_domainHasBeenSet(false),
    m_detailInfoListHasBeenSet(false)
{
}

CoreInternalOutcome DomainInfoList::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfoList.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DetailInfoList") && !value["DetailInfoList"].IsNull())
    {
        if (!value["DetailInfoList"].IsArray())
            return CoreInternalOutcome(Error("response `DomainInfoList.DetailInfoList` is not array type"));

        const Value &tmpValue = value["DetailInfoList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DomainDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailInfoList.push_back(item);
        }
        m_detailInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainInfoList::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_detailInfoListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DetailInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailInfoList.begin(); itr != m_detailInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DomainInfoList::GetDomain() const
{
    return m_domain;
}

void DomainInfoList::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainInfoList::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<DomainDetailInfo> DomainInfoList::GetDetailInfoList() const
{
    return m_detailInfoList;
}

void DomainInfoList::SetDetailInfoList(const vector<DomainDetailInfo>& _detailInfoList)
{
    m_detailInfoList = _detailInfoList;
    m_detailInfoListHasBeenSet = true;
}

bool DomainInfoList::DetailInfoListHasBeenSet() const
{
    return m_detailInfoListHasBeenSet;
}

