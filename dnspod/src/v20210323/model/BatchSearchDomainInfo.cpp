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

#include <tencentcloud/dnspod/v20210323/model/BatchSearchDomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

BatchSearchDomainInfo::BatchSearchDomainInfo() :
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_domainGradeHasBeenSet(false),
    m_recordListHasBeenSet(false)
{
}

CoreInternalOutcome BatchSearchDomainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchSearchDomainInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchSearchDomainInfo.DomainId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = value["DomainId"].GetUint64();
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("DomainGrade") && !value["DomainGrade"].IsNull())
    {
        if (!value["DomainGrade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchSearchDomainInfo.DomainGrade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainGrade = string(value["DomainGrade"].GetString());
        m_domainGradeHasBeenSet = true;
    }

    if (value.HasMember("RecordList") && !value["RecordList"].IsNull())
    {
        if (!value["RecordList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchSearchDomainInfo.RecordList` is not array type"));

        const rapidjson::Value &tmpValue = value["RecordList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BatchSearchRecordInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recordList.push_back(item);
        }
        m_recordListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchSearchDomainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainId, allocator);
    }

    if (m_domainGradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainGrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainGrade.c_str(), allocator).Move(), allocator);
    }

    if (m_recordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recordList.begin(); itr != m_recordList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BatchSearchDomainInfo::GetDomain() const
{
    return m_domain;
}

void BatchSearchDomainInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool BatchSearchDomainInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t BatchSearchDomainInfo::GetDomainId() const
{
    return m_domainId;
}

void BatchSearchDomainInfo::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool BatchSearchDomainInfo::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string BatchSearchDomainInfo::GetDomainGrade() const
{
    return m_domainGrade;
}

void BatchSearchDomainInfo::SetDomainGrade(const string& _domainGrade)
{
    m_domainGrade = _domainGrade;
    m_domainGradeHasBeenSet = true;
}

bool BatchSearchDomainInfo::DomainGradeHasBeenSet() const
{
    return m_domainGradeHasBeenSet;
}

vector<BatchSearchRecordInfo> BatchSearchDomainInfo::GetRecordList() const
{
    return m_recordList;
}

void BatchSearchDomainInfo::SetRecordList(const vector<BatchSearchRecordInfo>& _recordList)
{
    m_recordList = _recordList;
    m_recordListHasBeenSet = true;
}

bool BatchSearchDomainInfo::RecordListHasBeenSet() const
{
    return m_recordListHasBeenSet;
}

