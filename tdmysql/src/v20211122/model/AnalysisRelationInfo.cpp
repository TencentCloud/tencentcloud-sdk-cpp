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

#include <tencentcloud/tdmysql/v20211122/model/AnalysisRelationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

AnalysisRelationInfo::AnalysisRelationInfo() :
    m_primaryInstanceIdHasBeenSet(false),
    m_analysisInstanceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_updateAtHasBeenSet(false)
{
}

CoreInternalOutcome AnalysisRelationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrimaryInstanceId") && !value["PrimaryInstanceId"].IsNull())
    {
        if (!value["PrimaryInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisRelationInfo.PrimaryInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryInstanceId = string(value["PrimaryInstanceId"].GetString());
        m_primaryInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("AnalysisInstanceId") && !value["AnalysisInstanceId"].IsNull())
    {
        if (!value["AnalysisInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisRelationInfo.AnalysisInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_analysisInstanceId = string(value["AnalysisInstanceId"].GetString());
        m_analysisInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisRelationInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisRelationInfo.CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(value["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }

    if (value.HasMember("UpdateAt") && !value["UpdateAt"].IsNull())
    {
        if (!value["UpdateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisRelationInfo.UpdateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateAt = string(value["UpdateAt"].GetString());
        m_updateAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalysisRelationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_primaryInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_analysisInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_analysisInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updateAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateAt.c_str(), allocator).Move(), allocator);
    }

}


string AnalysisRelationInfo::GetPrimaryInstanceId() const
{
    return m_primaryInstanceId;
}

void AnalysisRelationInfo::SetPrimaryInstanceId(const string& _primaryInstanceId)
{
    m_primaryInstanceId = _primaryInstanceId;
    m_primaryInstanceIdHasBeenSet = true;
}

bool AnalysisRelationInfo::PrimaryInstanceIdHasBeenSet() const
{
    return m_primaryInstanceIdHasBeenSet;
}

string AnalysisRelationInfo::GetAnalysisInstanceId() const
{
    return m_analysisInstanceId;
}

void AnalysisRelationInfo::SetAnalysisInstanceId(const string& _analysisInstanceId)
{
    m_analysisInstanceId = _analysisInstanceId;
    m_analysisInstanceIdHasBeenSet = true;
}

bool AnalysisRelationInfo::AnalysisInstanceIdHasBeenSet() const
{
    return m_analysisInstanceIdHasBeenSet;
}

string AnalysisRelationInfo::GetStatus() const
{
    return m_status;
}

void AnalysisRelationInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AnalysisRelationInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AnalysisRelationInfo::GetCreateAt() const
{
    return m_createAt;
}

void AnalysisRelationInfo::SetCreateAt(const string& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool AnalysisRelationInfo::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

string AnalysisRelationInfo::GetUpdateAt() const
{
    return m_updateAt;
}

void AnalysisRelationInfo::SetUpdateAt(const string& _updateAt)
{
    m_updateAt = _updateAt;
    m_updateAtHasBeenSet = true;
}

bool AnalysisRelationInfo::UpdateAtHasBeenSet() const
{
    return m_updateAtHasBeenSet;
}

