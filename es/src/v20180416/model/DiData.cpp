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

#include <tencentcloud/es/v20180416/model/DiData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DiData::DiData() :
    m_diIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_diDataSourceCvmHasBeenSet(false),
    m_diDataSourceTkeHasBeenSet(false),
    m_diDataSinkServerlessHasBeenSet(false),
    m_diDataSourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome DiData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiId") && !value["DiId"].IsNull())
    {
        if (!value["DiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiData.DiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diId = string(value["DiId"].GetString());
        m_diIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiData.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DiDataSourceCvm") && !value["DiDataSourceCvm"].IsNull())
    {
        if (!value["DiDataSourceCvm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiData.DiDataSourceCvm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diDataSourceCvm.Deserialize(value["DiDataSourceCvm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diDataSourceCvmHasBeenSet = true;
    }

    if (value.HasMember("DiDataSourceTke") && !value["DiDataSourceTke"].IsNull())
    {
        if (!value["DiDataSourceTke"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiData.DiDataSourceTke` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diDataSourceTke.Deserialize(value["DiDataSourceTke"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diDataSourceTkeHasBeenSet = true;
    }

    if (value.HasMember("DiDataSinkServerless") && !value["DiDataSinkServerless"].IsNull())
    {
        if (!value["DiDataSinkServerless"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiData.DiDataSinkServerless` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diDataSinkServerless.Deserialize(value["DiDataSinkServerless"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diDataSinkServerlessHasBeenSet = true;
    }

    if (value.HasMember("DiDataSourceType") && !value["DiDataSourceType"].IsNull())
    {
        if (!value["DiDataSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiData.DiDataSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diDataSourceType = string(value["DiDataSourceType"].GetString());
        m_diDataSourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_diDataSourceCvmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiDataSourceCvm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diDataSourceCvm.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diDataSourceTkeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiDataSourceTke";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diDataSourceTke.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diDataSinkServerlessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiDataSinkServerless";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diDataSinkServerless.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diDataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiDataSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diDataSourceType.c_str(), allocator).Move(), allocator);
    }

}


string DiData::GetDiId() const
{
    return m_diId;
}

void DiData::SetDiId(const string& _diId)
{
    m_diId = _diId;
    m_diIdHasBeenSet = true;
}

bool DiData::DiIdHasBeenSet() const
{
    return m_diIdHasBeenSet;
}

string DiData::GetCreateTime() const
{
    return m_createTime;
}

void DiData::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DiData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DiData::GetStatus() const
{
    return m_status;
}

void DiData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DiData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

DiDataSourceCvm DiData::GetDiDataSourceCvm() const
{
    return m_diDataSourceCvm;
}

void DiData::SetDiDataSourceCvm(const DiDataSourceCvm& _diDataSourceCvm)
{
    m_diDataSourceCvm = _diDataSourceCvm;
    m_diDataSourceCvmHasBeenSet = true;
}

bool DiData::DiDataSourceCvmHasBeenSet() const
{
    return m_diDataSourceCvmHasBeenSet;
}

DiDataSourceTke DiData::GetDiDataSourceTke() const
{
    return m_diDataSourceTke;
}

void DiData::SetDiDataSourceTke(const DiDataSourceTke& _diDataSourceTke)
{
    m_diDataSourceTke = _diDataSourceTke;
    m_diDataSourceTkeHasBeenSet = true;
}

bool DiData::DiDataSourceTkeHasBeenSet() const
{
    return m_diDataSourceTkeHasBeenSet;
}

DiDataSinkServerless DiData::GetDiDataSinkServerless() const
{
    return m_diDataSinkServerless;
}

void DiData::SetDiDataSinkServerless(const DiDataSinkServerless& _diDataSinkServerless)
{
    m_diDataSinkServerless = _diDataSinkServerless;
    m_diDataSinkServerlessHasBeenSet = true;
}

bool DiData::DiDataSinkServerlessHasBeenSet() const
{
    return m_diDataSinkServerlessHasBeenSet;
}

string DiData::GetDiDataSourceType() const
{
    return m_diDataSourceType;
}

void DiData::SetDiDataSourceType(const string& _diDataSourceType)
{
    m_diDataSourceType = _diDataSourceType;
    m_diDataSourceTypeHasBeenSet = true;
}

bool DiData::DiDataSourceTypeHasBeenSet() const
{
    return m_diDataSourceTypeHasBeenSet;
}

