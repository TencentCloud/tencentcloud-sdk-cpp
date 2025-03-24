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

#include <tencentcloud/chc/v20230418/model/PersonnelVisitBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

PersonnelVisitBaseInfo::PersonnelVisitBaseInfo() :
    m_idcNameHasBeenSet(false),
    m_visitReasonHasBeenSet(false),
    m_visitRemarkHasBeenSet(false),
    m_enterStartTimeHasBeenSet(false),
    m_enterEndTimeHasBeenSet(false),
    m_idcUnitNameListHasBeenSet(false)
{
}

CoreInternalOutcome PersonnelVisitBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdcName") && !value["IdcName"].IsNull())
    {
        if (!value["IdcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonnelVisitBaseInfo.IdcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcName = string(value["IdcName"].GetString());
        m_idcNameHasBeenSet = true;
    }

    if (value.HasMember("VisitReason") && !value["VisitReason"].IsNull())
    {
        if (!value["VisitReason"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PersonnelVisitBaseInfo.VisitReason` is not array type"));

        const rapidjson::Value &tmpValue = value["VisitReason"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_visitReason.push_back((*itr).GetString());
        }
        m_visitReasonHasBeenSet = true;
    }

    if (value.HasMember("VisitRemark") && !value["VisitRemark"].IsNull())
    {
        if (!value["VisitRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonnelVisitBaseInfo.VisitRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_visitRemark = string(value["VisitRemark"].GetString());
        m_visitRemarkHasBeenSet = true;
    }

    if (value.HasMember("EnterStartTime") && !value["EnterStartTime"].IsNull())
    {
        if (!value["EnterStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonnelVisitBaseInfo.EnterStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enterStartTime = string(value["EnterStartTime"].GetString());
        m_enterStartTimeHasBeenSet = true;
    }

    if (value.HasMember("EnterEndTime") && !value["EnterEndTime"].IsNull())
    {
        if (!value["EnterEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonnelVisitBaseInfo.EnterEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enterEndTime = string(value["EnterEndTime"].GetString());
        m_enterEndTimeHasBeenSet = true;
    }

    if (value.HasMember("IdcUnitNameList") && !value["IdcUnitNameList"].IsNull())
    {
        if (!value["IdcUnitNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PersonnelVisitBaseInfo.IdcUnitNameList` is not array type"));

        const rapidjson::Value &tmpValue = value["IdcUnitNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_idcUnitNameList.push_back((*itr).GetString());
        }
        m_idcUnitNameListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonnelVisitBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcName.c_str(), allocator).Move(), allocator);
    }

    if (m_visitReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_visitReason.begin(); itr != m_visitReason.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_visitRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_visitRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_enterStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enterStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enterEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enterEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_idcUnitNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcUnitNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idcUnitNameList.begin(); itr != m_idcUnitNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string PersonnelVisitBaseInfo::GetIdcName() const
{
    return m_idcName;
}

void PersonnelVisitBaseInfo::SetIdcName(const string& _idcName)
{
    m_idcName = _idcName;
    m_idcNameHasBeenSet = true;
}

bool PersonnelVisitBaseInfo::IdcNameHasBeenSet() const
{
    return m_idcNameHasBeenSet;
}

vector<string> PersonnelVisitBaseInfo::GetVisitReason() const
{
    return m_visitReason;
}

void PersonnelVisitBaseInfo::SetVisitReason(const vector<string>& _visitReason)
{
    m_visitReason = _visitReason;
    m_visitReasonHasBeenSet = true;
}

bool PersonnelVisitBaseInfo::VisitReasonHasBeenSet() const
{
    return m_visitReasonHasBeenSet;
}

string PersonnelVisitBaseInfo::GetVisitRemark() const
{
    return m_visitRemark;
}

void PersonnelVisitBaseInfo::SetVisitRemark(const string& _visitRemark)
{
    m_visitRemark = _visitRemark;
    m_visitRemarkHasBeenSet = true;
}

bool PersonnelVisitBaseInfo::VisitRemarkHasBeenSet() const
{
    return m_visitRemarkHasBeenSet;
}

string PersonnelVisitBaseInfo::GetEnterStartTime() const
{
    return m_enterStartTime;
}

void PersonnelVisitBaseInfo::SetEnterStartTime(const string& _enterStartTime)
{
    m_enterStartTime = _enterStartTime;
    m_enterStartTimeHasBeenSet = true;
}

bool PersonnelVisitBaseInfo::EnterStartTimeHasBeenSet() const
{
    return m_enterStartTimeHasBeenSet;
}

string PersonnelVisitBaseInfo::GetEnterEndTime() const
{
    return m_enterEndTime;
}

void PersonnelVisitBaseInfo::SetEnterEndTime(const string& _enterEndTime)
{
    m_enterEndTime = _enterEndTime;
    m_enterEndTimeHasBeenSet = true;
}

bool PersonnelVisitBaseInfo::EnterEndTimeHasBeenSet() const
{
    return m_enterEndTimeHasBeenSet;
}

vector<string> PersonnelVisitBaseInfo::GetIdcUnitNameList() const
{
    return m_idcUnitNameList;
}

void PersonnelVisitBaseInfo::SetIdcUnitNameList(const vector<string>& _idcUnitNameList)
{
    m_idcUnitNameList = _idcUnitNameList;
    m_idcUnitNameListHasBeenSet = true;
}

bool PersonnelVisitBaseInfo::IdcUnitNameListHasBeenSet() const
{
    return m_idcUnitNameListHasBeenSet;
}

