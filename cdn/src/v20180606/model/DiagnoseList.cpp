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

#include <tencentcloud/cdn/v20180606/model/DiagnoseList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

DiagnoseList::DiagnoseList() :
    m_diagnoseTagHasBeenSet(false),
    m_reportIdHasBeenSet(false),
    m_clientInfoHasBeenSet(false),
    m_finalDiagnoseHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DiagnoseList::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DiagnoseTag") && !value["DiagnoseTag"].IsNull())
    {
        if (!value["DiagnoseTag"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiagnoseList.DiagnoseTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagnoseTag = string(value["DiagnoseTag"].GetString());
        m_diagnoseTagHasBeenSet = true;
    }

    if (value.HasMember("ReportId") && !value["ReportId"].IsNull())
    {
        if (!value["ReportId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiagnoseList.ReportId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportId = string(value["ReportId"].GetString());
        m_reportIdHasBeenSet = true;
    }

    if (value.HasMember("ClientInfo") && !value["ClientInfo"].IsNull())
    {
        if (!value["ClientInfo"].IsArray())
            return CoreInternalOutcome(Error("response `DiagnoseList.ClientInfo` is not array type"));

        const Value &tmpValue = value["ClientInfo"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClientInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clientInfo.push_back(item);
        }
        m_clientInfoHasBeenSet = true;
    }

    if (value.HasMember("FinalDiagnose") && !value["FinalDiagnose"].IsNull())
    {
        if (!value["FinalDiagnose"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DiagnoseList.FinalDiagnose` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_finalDiagnose = value["FinalDiagnose"].GetInt64();
        m_finalDiagnoseHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DiagnoseList.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiagnoseList::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_diagnoseTagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiagnoseTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diagnoseTag.c_str(), allocator).Move(), allocator);
    }

    if (m_reportIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReportId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_reportId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clientInfo.begin(); itr != m_clientInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_finalDiagnoseHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FinalDiagnose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finalDiagnose, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string DiagnoseList::GetDiagnoseTag() const
{
    return m_diagnoseTag;
}

void DiagnoseList::SetDiagnoseTag(const string& _diagnoseTag)
{
    m_diagnoseTag = _diagnoseTag;
    m_diagnoseTagHasBeenSet = true;
}

bool DiagnoseList::DiagnoseTagHasBeenSet() const
{
    return m_diagnoseTagHasBeenSet;
}

string DiagnoseList::GetReportId() const
{
    return m_reportId;
}

void DiagnoseList::SetReportId(const string& _reportId)
{
    m_reportId = _reportId;
    m_reportIdHasBeenSet = true;
}

bool DiagnoseList::ReportIdHasBeenSet() const
{
    return m_reportIdHasBeenSet;
}

vector<ClientInfo> DiagnoseList::GetClientInfo() const
{
    return m_clientInfo;
}

void DiagnoseList::SetClientInfo(const vector<ClientInfo>& _clientInfo)
{
    m_clientInfo = _clientInfo;
    m_clientInfoHasBeenSet = true;
}

bool DiagnoseList::ClientInfoHasBeenSet() const
{
    return m_clientInfoHasBeenSet;
}

int64_t DiagnoseList::GetFinalDiagnose() const
{
    return m_finalDiagnose;
}

void DiagnoseList::SetFinalDiagnose(const int64_t& _finalDiagnose)
{
    m_finalDiagnose = _finalDiagnose;
    m_finalDiagnoseHasBeenSet = true;
}

bool DiagnoseList::FinalDiagnoseHasBeenSet() const
{
    return m_finalDiagnoseHasBeenSet;
}

string DiagnoseList::GetCreateTime() const
{
    return m_createTime;
}

void DiagnoseList::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DiagnoseList::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

