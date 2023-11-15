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

#include <tencentcloud/weilingwith/v20230427/model/AlarmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

AlarmInfo::AlarmInfo() :
    m_workspaceIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_subTypeNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_levelNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_wIDHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_reportImgHasBeenSet(false),
    m_descHasBeenSet(false),
    m_handlePersonSetHasBeenSet(false),
    m_handleRecordSetHasBeenSet(false),
    m_extendHasBeenSet(false),
    m_extendOneHasBeenSet(false),
    m_extendTwoHasBeenSet(false),
    m_echoHasBeenSet(false)
{
}

CoreInternalOutcome AlarmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.WorkspaceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = value["WorkspaceId"].GetInt64();
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Time` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetInt64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("SubType") && !value["SubType"].IsNull())
    {
        if (!value["SubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.SubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subType = string(value["SubType"].GetString());
        m_subTypeHasBeenSet = true;
    }

    if (value.HasMember("SubTypeName") && !value["SubTypeName"].IsNull())
    {
        if (!value["SubTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.SubTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTypeName = string(value["SubTypeName"].GetString());
        m_subTypeNameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("LevelName") && !value["LevelName"].IsNull())
    {
        if (!value["LevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.LevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelName = string(value["LevelName"].GetString());
        m_levelNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("WID") && !value["WID"].IsNull())
    {
        if (!value["WID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.WID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wID = string(value["WID"].GetString());
        m_wIDHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Position` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_position = string(value["Position"].GetString());
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("ReportImg") && !value["ReportImg"].IsNull())
    {
        if (!value["ReportImg"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.ReportImg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reportImg.Deserialize(value["ReportImg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reportImgHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("HandlePersonSet") && !value["HandlePersonSet"].IsNull())
    {
        if (!value["HandlePersonSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.HandlePersonSet` is not array type"));

        const rapidjson::Value &tmpValue = value["HandlePersonSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HandlerPersonInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_handlePersonSet.push_back(item);
        }
        m_handlePersonSetHasBeenSet = true;
    }

    if (value.HasMember("HandleRecordSet") && !value["HandleRecordSet"].IsNull())
    {
        if (!value["HandleRecordSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.HandleRecordSet` is not array type"));

        const rapidjson::Value &tmpValue = value["HandleRecordSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HandleRecordInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_handleRecordSet.push_back(item);
        }
        m_handleRecordSetHasBeenSet = true;
    }

    if (value.HasMember("Extend") && !value["Extend"].IsNull())
    {
        if (!value["Extend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Extend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extend = string(value["Extend"].GetString());
        m_extendHasBeenSet = true;
    }

    if (value.HasMember("ExtendOne") && !value["ExtendOne"].IsNull())
    {
        if (!value["ExtendOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.ExtendOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendOne = string(value["ExtendOne"].GetString());
        m_extendOneHasBeenSet = true;
    }

    if (value.HasMember("ExtendTwo") && !value["ExtendTwo"].IsNull())
    {
        if (!value["ExtendTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.ExtendTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendTwo = string(value["ExtendTwo"].GetString());
        m_extendTwoHasBeenSet = true;
    }

    if (value.HasMember("Echo") && !value["Echo"].IsNull())
    {
        if (!value["Echo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo.Echo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_echo = string(value["Echo"].GetString());
        m_echoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

    if (m_subTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_levelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_wIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wID.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_position.c_str(), allocator).Move(), allocator);
    }

    if (m_reportImgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportImg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reportImg.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_handlePersonSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandlePersonSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_handlePersonSet.begin(); itr != m_handlePersonSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_handleRecordSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleRecordSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_handleRecordSet.begin(); itr != m_handleRecordSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extend.c_str(), allocator).Move(), allocator);
    }

    if (m_extendOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendOne.c_str(), allocator).Move(), allocator);
    }

    if (m_extendTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_echoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Echo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_echo.c_str(), allocator).Move(), allocator);
    }

}


int64_t AlarmInfo::GetWorkspaceId() const
{
    return m_workspaceId;
}

void AlarmInfo::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool AlarmInfo::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string AlarmInfo::GetId() const
{
    return m_id;
}

void AlarmInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AlarmInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AlarmInfo::GetStatus() const
{
    return m_status;
}

void AlarmInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlarmInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AlarmInfo::GetTime() const
{
    return m_time;
}

void AlarmInfo::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool AlarmInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string AlarmInfo::GetType() const
{
    return m_type;
}

void AlarmInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AlarmInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AlarmInfo::GetTypeName() const
{
    return m_typeName;
}

void AlarmInfo::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool AlarmInfo::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string AlarmInfo::GetSubType() const
{
    return m_subType;
}

void AlarmInfo::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool AlarmInfo::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

string AlarmInfo::GetSubTypeName() const
{
    return m_subTypeName;
}

void AlarmInfo::SetSubTypeName(const string& _subTypeName)
{
    m_subTypeName = _subTypeName;
    m_subTypeNameHasBeenSet = true;
}

bool AlarmInfo::SubTypeNameHasBeenSet() const
{
    return m_subTypeNameHasBeenSet;
}

int64_t AlarmInfo::GetLevel() const
{
    return m_level;
}

void AlarmInfo::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool AlarmInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string AlarmInfo::GetLevelName() const
{
    return m_levelName;
}

void AlarmInfo::SetLevelName(const string& _levelName)
{
    m_levelName = _levelName;
    m_levelNameHasBeenSet = true;
}

bool AlarmInfo::LevelNameHasBeenSet() const
{
    return m_levelNameHasBeenSet;
}

int64_t AlarmInfo::GetAppId() const
{
    return m_appId;
}

void AlarmInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AlarmInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AlarmInfo::GetWID() const
{
    return m_wID;
}

void AlarmInfo::SetWID(const string& _wID)
{
    m_wID = _wID;
    m_wIDHasBeenSet = true;
}

bool AlarmInfo::WIDHasBeenSet() const
{
    return m_wIDHasBeenSet;
}

string AlarmInfo::GetDeviceName() const
{
    return m_deviceName;
}

void AlarmInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool AlarmInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string AlarmInfo::GetPosition() const
{
    return m_position;
}

void AlarmInfo::SetPosition(const string& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool AlarmInfo::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

ReportImg AlarmInfo::GetReportImg() const
{
    return m_reportImg;
}

void AlarmInfo::SetReportImg(const ReportImg& _reportImg)
{
    m_reportImg = _reportImg;
    m_reportImgHasBeenSet = true;
}

bool AlarmInfo::ReportImgHasBeenSet() const
{
    return m_reportImgHasBeenSet;
}

string AlarmInfo::GetDesc() const
{
    return m_desc;
}

void AlarmInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AlarmInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

vector<HandlerPersonInfo> AlarmInfo::GetHandlePersonSet() const
{
    return m_handlePersonSet;
}

void AlarmInfo::SetHandlePersonSet(const vector<HandlerPersonInfo>& _handlePersonSet)
{
    m_handlePersonSet = _handlePersonSet;
    m_handlePersonSetHasBeenSet = true;
}

bool AlarmInfo::HandlePersonSetHasBeenSet() const
{
    return m_handlePersonSetHasBeenSet;
}

vector<HandleRecordInfo> AlarmInfo::GetHandleRecordSet() const
{
    return m_handleRecordSet;
}

void AlarmInfo::SetHandleRecordSet(const vector<HandleRecordInfo>& _handleRecordSet)
{
    m_handleRecordSet = _handleRecordSet;
    m_handleRecordSetHasBeenSet = true;
}

bool AlarmInfo::HandleRecordSetHasBeenSet() const
{
    return m_handleRecordSetHasBeenSet;
}

string AlarmInfo::GetExtend() const
{
    return m_extend;
}

void AlarmInfo::SetExtend(const string& _extend)
{
    m_extend = _extend;
    m_extendHasBeenSet = true;
}

bool AlarmInfo::ExtendHasBeenSet() const
{
    return m_extendHasBeenSet;
}

string AlarmInfo::GetExtendOne() const
{
    return m_extendOne;
}

void AlarmInfo::SetExtendOne(const string& _extendOne)
{
    m_extendOne = _extendOne;
    m_extendOneHasBeenSet = true;
}

bool AlarmInfo::ExtendOneHasBeenSet() const
{
    return m_extendOneHasBeenSet;
}

string AlarmInfo::GetExtendTwo() const
{
    return m_extendTwo;
}

void AlarmInfo::SetExtendTwo(const string& _extendTwo)
{
    m_extendTwo = _extendTwo;
    m_extendTwoHasBeenSet = true;
}

bool AlarmInfo::ExtendTwoHasBeenSet() const
{
    return m_extendTwoHasBeenSet;
}

string AlarmInfo::GetEcho() const
{
    return m_echo;
}

void AlarmInfo::SetEcho(const string& _echo)
{
    m_echo = _echo;
    m_echoHasBeenSet = true;
}

bool AlarmInfo::EchoHasBeenSet() const
{
    return m_echoHasBeenSet;
}

