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

#include <tencentcloud/ctem/v20231128/model/DisplayFakeMiniProgram.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayFakeMiniProgram::DisplayFakeMiniProgram() :
    m_idHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_programNameHasBeenSet(false),
    m_programIdHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_qrCodeHasBeenSet(false),
    m_handlingStatusHasBeenSet(false),
    m_shutdownStatusHasBeenSet(false),
    m_shutdownTimeHasBeenSet(false)
{
}

CoreInternalOutcome DisplayFakeMiniProgram::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeMiniProgram.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeMiniProgram.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("ProgramName") && !value["ProgramName"].IsNull())
    {
        if (!value["ProgramName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeMiniProgram.ProgramName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programName = string(value["ProgramName"].GetString());
        m_programNameHasBeenSet = true;
    }

    if (value.HasMember("ProgramId") && !value["ProgramId"].IsNull())
    {
        if (!value["ProgramId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeMiniProgram.ProgramId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_programId = string(value["ProgramId"].GetString());
        m_programIdHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeMiniProgram.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("QrCode") && !value["QrCode"].IsNull())
    {
        if (!value["QrCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeMiniProgram.QrCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qrCode = string(value["QrCode"].GetString());
        m_qrCodeHasBeenSet = true;
    }

    if (value.HasMember("HandlingStatus") && !value["HandlingStatus"].IsNull())
    {
        if (!value["HandlingStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeMiniProgram.HandlingStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_handlingStatus = value["HandlingStatus"].GetInt64();
        m_handlingStatusHasBeenSet = true;
    }

    if (value.HasMember("ShutdownStatus") && !value["ShutdownStatus"].IsNull())
    {
        if (!value["ShutdownStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeMiniProgram.ShutdownStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shutdownStatus = value["ShutdownStatus"].GetInt64();
        m_shutdownStatusHasBeenSet = true;
    }

    if (value.HasMember("ShutdownTime") && !value["ShutdownTime"].IsNull())
    {
        if (!value["ShutdownTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeMiniProgram.ShutdownTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shutdownTime = string(value["ShutdownTime"].GetString());
        m_shutdownTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayFakeMiniProgram::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_programNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programName.c_str(), allocator).Move(), allocator);
    }

    if (m_programIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_programId.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_qrCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qrCode.c_str(), allocator).Move(), allocator);
    }

    if (m_handlingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandlingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handlingStatus, allocator);
    }

    if (m_shutdownStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShutdownStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shutdownStatus, allocator);
    }

    if (m_shutdownTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShutdownTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shutdownTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t DisplayFakeMiniProgram::GetId() const
{
    return m_id;
}

void DisplayFakeMiniProgram::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayFakeMiniProgram::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplayFakeMiniProgram::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayFakeMiniProgram::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayFakeMiniProgram::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayFakeMiniProgram::GetProgramName() const
{
    return m_programName;
}

void DisplayFakeMiniProgram::SetProgramName(const string& _programName)
{
    m_programName = _programName;
    m_programNameHasBeenSet = true;
}

bool DisplayFakeMiniProgram::ProgramNameHasBeenSet() const
{
    return m_programNameHasBeenSet;
}

string DisplayFakeMiniProgram::GetProgramId() const
{
    return m_programId;
}

void DisplayFakeMiniProgram::SetProgramId(const string& _programId)
{
    m_programId = _programId;
    m_programIdHasBeenSet = true;
}

bool DisplayFakeMiniProgram::ProgramIdHasBeenSet() const
{
    return m_programIdHasBeenSet;
}

string DisplayFakeMiniProgram::GetCategory() const
{
    return m_category;
}

void DisplayFakeMiniProgram::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool DisplayFakeMiniProgram::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string DisplayFakeMiniProgram::GetQrCode() const
{
    return m_qrCode;
}

void DisplayFakeMiniProgram::SetQrCode(const string& _qrCode)
{
    m_qrCode = _qrCode;
    m_qrCodeHasBeenSet = true;
}

bool DisplayFakeMiniProgram::QrCodeHasBeenSet() const
{
    return m_qrCodeHasBeenSet;
}

int64_t DisplayFakeMiniProgram::GetHandlingStatus() const
{
    return m_handlingStatus;
}

void DisplayFakeMiniProgram::SetHandlingStatus(const int64_t& _handlingStatus)
{
    m_handlingStatus = _handlingStatus;
    m_handlingStatusHasBeenSet = true;
}

bool DisplayFakeMiniProgram::HandlingStatusHasBeenSet() const
{
    return m_handlingStatusHasBeenSet;
}

int64_t DisplayFakeMiniProgram::GetShutdownStatus() const
{
    return m_shutdownStatus;
}

void DisplayFakeMiniProgram::SetShutdownStatus(const int64_t& _shutdownStatus)
{
    m_shutdownStatus = _shutdownStatus;
    m_shutdownStatusHasBeenSet = true;
}

bool DisplayFakeMiniProgram::ShutdownStatusHasBeenSet() const
{
    return m_shutdownStatusHasBeenSet;
}

string DisplayFakeMiniProgram::GetShutdownTime() const
{
    return m_shutdownTime;
}

void DisplayFakeMiniProgram::SetShutdownTime(const string& _shutdownTime)
{
    m_shutdownTime = _shutdownTime;
    m_shutdownTimeHasBeenSet = true;
}

bool DisplayFakeMiniProgram::ShutdownTimeHasBeenSet() const
{
    return m_shutdownTimeHasBeenSet;
}

