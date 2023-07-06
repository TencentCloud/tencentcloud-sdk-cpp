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

#include <tencentcloud/teo/v20220901/model/CnameStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CnameStatus::CnameStatus() :
    m_recordNameHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome CnameStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordName") && !value["RecordName"].IsNull())
    {
        if (!value["RecordName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CnameStatus.RecordName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordName = string(value["RecordName"].GetString());
        m_recordNameHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CnameStatus.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CnameStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CnameStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordName.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string CnameStatus::GetRecordName() const
{
    return m_recordName;
}

void CnameStatus::SetRecordName(const string& _recordName)
{
    m_recordName = _recordName;
    m_recordNameHasBeenSet = true;
}

bool CnameStatus::RecordNameHasBeenSet() const
{
    return m_recordNameHasBeenSet;
}

string CnameStatus::GetCname() const
{
    return m_cname;
}

void CnameStatus::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool CnameStatus::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

string CnameStatus::GetStatus() const
{
    return m_status;
}

void CnameStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CnameStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

