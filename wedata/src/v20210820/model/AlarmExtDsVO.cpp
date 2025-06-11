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

#include <tencentcloud/wedata/v20210820/model/AlarmExtDsVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AlarmExtDsVO::AlarmExtDsVO() :
    m_alarmIdHasBeenSet(false),
    m_propNameHasBeenSet(false),
    m_propValueHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome AlarmExtDsVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmId") && !value["AlarmId"].IsNull())
    {
        if (!value["AlarmId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmExtDsVO.AlarmId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmId = string(value["AlarmId"].GetString());
        m_alarmIdHasBeenSet = true;
    }

    if (value.HasMember("PropName") && !value["PropName"].IsNull())
    {
        if (!value["PropName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmExtDsVO.PropName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propName = string(value["PropName"].GetString());
        m_propNameHasBeenSet = true;
    }

    if (value.HasMember("PropValue") && !value["PropValue"].IsNull())
    {
        if (!value["PropValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmExtDsVO.PropValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propValue = string(value["PropValue"].GetString());
        m_propValueHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmExtDsVO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmExtDsVO.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmExtDsVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmId.c_str(), allocator).Move(), allocator);
    }

    if (m_propNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propName.c_str(), allocator).Move(), allocator);
    }

    if (m_propValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propValue.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string AlarmExtDsVO::GetAlarmId() const
{
    return m_alarmId;
}

void AlarmExtDsVO::SetAlarmId(const string& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool AlarmExtDsVO::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

string AlarmExtDsVO::GetPropName() const
{
    return m_propName;
}

void AlarmExtDsVO::SetPropName(const string& _propName)
{
    m_propName = _propName;
    m_propNameHasBeenSet = true;
}

bool AlarmExtDsVO::PropNameHasBeenSet() const
{
    return m_propNameHasBeenSet;
}

string AlarmExtDsVO::GetPropValue() const
{
    return m_propValue;
}

void AlarmExtDsVO::SetPropValue(const string& _propValue)
{
    m_propValue = _propValue;
    m_propValueHasBeenSet = true;
}

bool AlarmExtDsVO::PropValueHasBeenSet() const
{
    return m_propValueHasBeenSet;
}

string AlarmExtDsVO::GetCreateTime() const
{
    return m_createTime;
}

void AlarmExtDsVO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AlarmExtDsVO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AlarmExtDsVO::GetModifyTime() const
{
    return m_modifyTime;
}

void AlarmExtDsVO::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool AlarmExtDsVO::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

