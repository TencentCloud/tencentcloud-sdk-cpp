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

#include <tencentcloud/dlc/v20210125/model/DataEngineBasicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DataEngineBasicInfo::DataEngineBasicInfo() :
    m_dataEngineNameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_dataEngineIdHasBeenSet(false),
    m_dataEngineTypeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_userUinHasBeenSet(false)
{
}

CoreInternalOutcome DataEngineBasicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataEngineName") && !value["DataEngineName"].IsNull())
    {
        if (!value["DataEngineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineBasicInfo.DataEngineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineName = string(value["DataEngineName"].GetString());
        m_dataEngineNameHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineBasicInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineBasicInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineBasicInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineBasicInfo.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("DataEngineId") && !value["DataEngineId"].IsNull())
    {
        if (!value["DataEngineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineBasicInfo.DataEngineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineId = string(value["DataEngineId"].GetString());
        m_dataEngineIdHasBeenSet = true;
    }

    if (value.HasMember("DataEngineType") && !value["DataEngineType"].IsNull())
    {
        if (!value["DataEngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineBasicInfo.DataEngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineType = string(value["DataEngineType"].GetString());
        m_dataEngineTypeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineBasicInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineBasicInfo.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataEngineBasicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineType.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

}


string DataEngineBasicInfo::GetDataEngineName() const
{
    return m_dataEngineName;
}

void DataEngineBasicInfo::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool DataEngineBasicInfo::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

int64_t DataEngineBasicInfo::GetState() const
{
    return m_state;
}

void DataEngineBasicInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DataEngineBasicInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

int64_t DataEngineBasicInfo::GetCreateTime() const
{
    return m_createTime;
}

void DataEngineBasicInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DataEngineBasicInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DataEngineBasicInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DataEngineBasicInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DataEngineBasicInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DataEngineBasicInfo::GetMessage() const
{
    return m_message;
}

void DataEngineBasicInfo::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool DataEngineBasicInfo::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string DataEngineBasicInfo::GetDataEngineId() const
{
    return m_dataEngineId;
}

void DataEngineBasicInfo::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool DataEngineBasicInfo::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

string DataEngineBasicInfo::GetDataEngineType() const
{
    return m_dataEngineType;
}

void DataEngineBasicInfo::SetDataEngineType(const string& _dataEngineType)
{
    m_dataEngineType = _dataEngineType;
    m_dataEngineTypeHasBeenSet = true;
}

bool DataEngineBasicInfo::DataEngineTypeHasBeenSet() const
{
    return m_dataEngineTypeHasBeenSet;
}

int64_t DataEngineBasicInfo::GetAppId() const
{
    return m_appId;
}

void DataEngineBasicInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DataEngineBasicInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DataEngineBasicInfo::GetUserUin() const
{
    return m_userUin;
}

void DataEngineBasicInfo::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool DataEngineBasicInfo::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

