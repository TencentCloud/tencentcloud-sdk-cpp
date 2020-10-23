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

#include <tencentcloud/cdn/v20180606/model/DiagnoseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

DiagnoseInfo::DiagnoseInfo() :
    m_diagnoseUrlHasBeenSet(false),
    m_diagnoseLinkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireDateHasBeenSet(false),
    m_visitCountHasBeenSet(false),
    m_clientListHasBeenSet(false)
{
}

CoreInternalOutcome DiagnoseInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DiagnoseUrl") && !value["DiagnoseUrl"].IsNull())
    {
        if (!value["DiagnoseUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiagnoseInfo.DiagnoseUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagnoseUrl = string(value["DiagnoseUrl"].GetString());
        m_diagnoseUrlHasBeenSet = true;
    }

    if (value.HasMember("DiagnoseLink") && !value["DiagnoseLink"].IsNull())
    {
        if (!value["DiagnoseLink"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiagnoseInfo.DiagnoseLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagnoseLink = string(value["DiagnoseLink"].GetString());
        m_diagnoseLinkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiagnoseInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireDate") && !value["ExpireDate"].IsNull())
    {
        if (!value["ExpireDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiagnoseInfo.ExpireDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireDate = string(value["ExpireDate"].GetString());
        m_expireDateHasBeenSet = true;
    }

    if (value.HasMember("VisitCount") && !value["VisitCount"].IsNull())
    {
        if (!value["VisitCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DiagnoseInfo.VisitCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_visitCount = value["VisitCount"].GetInt64();
        m_visitCountHasBeenSet = true;
    }

    if (value.HasMember("ClientList") && !value["ClientList"].IsNull())
    {
        if (!value["ClientList"].IsArray())
            return CoreInternalOutcome(Error("response `DiagnoseInfo.ClientList` is not array type"));

        const Value &tmpValue = value["ClientList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiagnoseList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clientList.push_back(item);
        }
        m_clientListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiagnoseInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_diagnoseUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiagnoseUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diagnoseUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_diagnoseLinkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiagnoseLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diagnoseLink.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expireDate.c_str(), allocator).Move(), allocator);
    }

    if (m_visitCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VisitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_visitCount, allocator);
    }

    if (m_clientListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clientList.begin(); itr != m_clientList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DiagnoseInfo::GetDiagnoseUrl() const
{
    return m_diagnoseUrl;
}

void DiagnoseInfo::SetDiagnoseUrl(const string& _diagnoseUrl)
{
    m_diagnoseUrl = _diagnoseUrl;
    m_diagnoseUrlHasBeenSet = true;
}

bool DiagnoseInfo::DiagnoseUrlHasBeenSet() const
{
    return m_diagnoseUrlHasBeenSet;
}

string DiagnoseInfo::GetDiagnoseLink() const
{
    return m_diagnoseLink;
}

void DiagnoseInfo::SetDiagnoseLink(const string& _diagnoseLink)
{
    m_diagnoseLink = _diagnoseLink;
    m_diagnoseLinkHasBeenSet = true;
}

bool DiagnoseInfo::DiagnoseLinkHasBeenSet() const
{
    return m_diagnoseLinkHasBeenSet;
}

string DiagnoseInfo::GetCreateTime() const
{
    return m_createTime;
}

void DiagnoseInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DiagnoseInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DiagnoseInfo::GetExpireDate() const
{
    return m_expireDate;
}

void DiagnoseInfo::SetExpireDate(const string& _expireDate)
{
    m_expireDate = _expireDate;
    m_expireDateHasBeenSet = true;
}

bool DiagnoseInfo::ExpireDateHasBeenSet() const
{
    return m_expireDateHasBeenSet;
}

int64_t DiagnoseInfo::GetVisitCount() const
{
    return m_visitCount;
}

void DiagnoseInfo::SetVisitCount(const int64_t& _visitCount)
{
    m_visitCount = _visitCount;
    m_visitCountHasBeenSet = true;
}

bool DiagnoseInfo::VisitCountHasBeenSet() const
{
    return m_visitCountHasBeenSet;
}

vector<DiagnoseList> DiagnoseInfo::GetClientList() const
{
    return m_clientList;
}

void DiagnoseInfo::SetClientList(const vector<DiagnoseList>& _clientList)
{
    m_clientList = _clientList;
    m_clientListHasBeenSet = true;
}

bool DiagnoseInfo::ClientListHasBeenSet() const
{
    return m_clientListHasBeenSet;
}

