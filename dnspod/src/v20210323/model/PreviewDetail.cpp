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

#include <tencentcloud/dnspod/v20210323/model/PreviewDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

PreviewDetail::PreviewDetail() :
    m_nameHasBeenSet(false),
    m_gradeHasBeenSet(false),
    m_gradeTitleHasBeenSet(false),
    m_recordsHasBeenSet(false),
    m_domainParkingStatusHasBeenSet(false),
    m_lineCountHasBeenSet(false),
    m_lineGroupCountHasBeenSet(false),
    m_aliasCountHasBeenSet(false),
    m_maxAliasCountHasBeenSet(false),
    m_resolveCountHasBeenSet(false),
    m_vASCountHasBeenSet(false)
{
}

CoreInternalOutcome PreviewDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Grade") && !value["Grade"].IsNull())
    {
        if (!value["Grade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewDetail.Grade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grade = string(value["Grade"].GetString());
        m_gradeHasBeenSet = true;
    }

    if (value.HasMember("GradeTitle") && !value["GradeTitle"].IsNull())
    {
        if (!value["GradeTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewDetail.GradeTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gradeTitle = string(value["GradeTitle"].GetString());
        m_gradeTitleHasBeenSet = true;
    }

    if (value.HasMember("Records") && !value["Records"].IsNull())
    {
        if (!value["Records"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewDetail.Records` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_records = value["Records"].GetUint64();
        m_recordsHasBeenSet = true;
    }

    if (value.HasMember("DomainParkingStatus") && !value["DomainParkingStatus"].IsNull())
    {
        if (!value["DomainParkingStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewDetail.DomainParkingStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainParkingStatus = value["DomainParkingStatus"].GetUint64();
        m_domainParkingStatusHasBeenSet = true;
    }

    if (value.HasMember("LineCount") && !value["LineCount"].IsNull())
    {
        if (!value["LineCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewDetail.LineCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lineCount = value["LineCount"].GetUint64();
        m_lineCountHasBeenSet = true;
    }

    if (value.HasMember("LineGroupCount") && !value["LineGroupCount"].IsNull())
    {
        if (!value["LineGroupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewDetail.LineGroupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lineGroupCount = value["LineGroupCount"].GetUint64();
        m_lineGroupCountHasBeenSet = true;
    }

    if (value.HasMember("AliasCount") && !value["AliasCount"].IsNull())
    {
        if (!value["AliasCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewDetail.AliasCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aliasCount = value["AliasCount"].GetUint64();
        m_aliasCountHasBeenSet = true;
    }

    if (value.HasMember("MaxAliasCount") && !value["MaxAliasCount"].IsNull())
    {
        if (!value["MaxAliasCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewDetail.MaxAliasCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAliasCount = value["MaxAliasCount"].GetUint64();
        m_maxAliasCountHasBeenSet = true;
    }

    if (value.HasMember("ResolveCount") && !value["ResolveCount"].IsNull())
    {
        if (!value["ResolveCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewDetail.ResolveCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resolveCount = value["ResolveCount"].GetUint64();
        m_resolveCountHasBeenSet = true;
    }

    if (value.HasMember("VASCount") && !value["VASCount"].IsNull())
    {
        if (!value["VASCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewDetail.VASCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vASCount = value["VASCount"].GetUint64();
        m_vASCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PreviewDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grade.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GradeTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gradeTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_recordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Records";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_records, allocator);
    }

    if (m_domainParkingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainParkingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainParkingStatus, allocator);
    }

    if (m_lineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineCount, allocator);
    }

    if (m_lineGroupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineGroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineGroupCount, allocator);
    }

    if (m_aliasCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aliasCount, allocator);
    }

    if (m_maxAliasCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAliasCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAliasCount, allocator);
    }

    if (m_resolveCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolveCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resolveCount, allocator);
    }

    if (m_vASCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VASCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vASCount, allocator);
    }

}


string PreviewDetail::GetName() const
{
    return m_name;
}

void PreviewDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PreviewDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PreviewDetail::GetGrade() const
{
    return m_grade;
}

void PreviewDetail::SetGrade(const string& _grade)
{
    m_grade = _grade;
    m_gradeHasBeenSet = true;
}

bool PreviewDetail::GradeHasBeenSet() const
{
    return m_gradeHasBeenSet;
}

string PreviewDetail::GetGradeTitle() const
{
    return m_gradeTitle;
}

void PreviewDetail::SetGradeTitle(const string& _gradeTitle)
{
    m_gradeTitle = _gradeTitle;
    m_gradeTitleHasBeenSet = true;
}

bool PreviewDetail::GradeTitleHasBeenSet() const
{
    return m_gradeTitleHasBeenSet;
}

uint64_t PreviewDetail::GetRecords() const
{
    return m_records;
}

void PreviewDetail::SetRecords(const uint64_t& _records)
{
    m_records = _records;
    m_recordsHasBeenSet = true;
}

bool PreviewDetail::RecordsHasBeenSet() const
{
    return m_recordsHasBeenSet;
}

uint64_t PreviewDetail::GetDomainParkingStatus() const
{
    return m_domainParkingStatus;
}

void PreviewDetail::SetDomainParkingStatus(const uint64_t& _domainParkingStatus)
{
    m_domainParkingStatus = _domainParkingStatus;
    m_domainParkingStatusHasBeenSet = true;
}

bool PreviewDetail::DomainParkingStatusHasBeenSet() const
{
    return m_domainParkingStatusHasBeenSet;
}

uint64_t PreviewDetail::GetLineCount() const
{
    return m_lineCount;
}

void PreviewDetail::SetLineCount(const uint64_t& _lineCount)
{
    m_lineCount = _lineCount;
    m_lineCountHasBeenSet = true;
}

bool PreviewDetail::LineCountHasBeenSet() const
{
    return m_lineCountHasBeenSet;
}

uint64_t PreviewDetail::GetLineGroupCount() const
{
    return m_lineGroupCount;
}

void PreviewDetail::SetLineGroupCount(const uint64_t& _lineGroupCount)
{
    m_lineGroupCount = _lineGroupCount;
    m_lineGroupCountHasBeenSet = true;
}

bool PreviewDetail::LineGroupCountHasBeenSet() const
{
    return m_lineGroupCountHasBeenSet;
}

uint64_t PreviewDetail::GetAliasCount() const
{
    return m_aliasCount;
}

void PreviewDetail::SetAliasCount(const uint64_t& _aliasCount)
{
    m_aliasCount = _aliasCount;
    m_aliasCountHasBeenSet = true;
}

bool PreviewDetail::AliasCountHasBeenSet() const
{
    return m_aliasCountHasBeenSet;
}

uint64_t PreviewDetail::GetMaxAliasCount() const
{
    return m_maxAliasCount;
}

void PreviewDetail::SetMaxAliasCount(const uint64_t& _maxAliasCount)
{
    m_maxAliasCount = _maxAliasCount;
    m_maxAliasCountHasBeenSet = true;
}

bool PreviewDetail::MaxAliasCountHasBeenSet() const
{
    return m_maxAliasCountHasBeenSet;
}

uint64_t PreviewDetail::GetResolveCount() const
{
    return m_resolveCount;
}

void PreviewDetail::SetResolveCount(const uint64_t& _resolveCount)
{
    m_resolveCount = _resolveCount;
    m_resolveCountHasBeenSet = true;
}

bool PreviewDetail::ResolveCountHasBeenSet() const
{
    return m_resolveCountHasBeenSet;
}

uint64_t PreviewDetail::GetVASCount() const
{
    return m_vASCount;
}

void PreviewDetail::SetVASCount(const uint64_t& _vASCount)
{
    m_vASCount = _vASCount;
    m_vASCountHasBeenSet = true;
}

bool PreviewDetail::VASCountHasBeenSet() const
{
    return m_vASCountHasBeenSet;
}

