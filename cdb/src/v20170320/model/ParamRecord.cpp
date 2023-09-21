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

#include <tencentcloud/cdb/v20170320/model/ParamRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ParamRecord::ParamRecord() :
    m_instanceIdHasBeenSet(false),
    m_paramNameHasBeenSet(false),
    m_oldValueHasBeenSet(false),
    m_newValueHasBeenSet(false),
    m_isSucessHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_isSuccessHasBeenSet(false)
{
}

CoreInternalOutcome ParamRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamRecord.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamRecord.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("OldValue") && !value["OldValue"].IsNull())
    {
        if (!value["OldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamRecord.OldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldValue = string(value["OldValue"].GetString());
        m_oldValueHasBeenSet = true;
    }

    if (value.HasMember("NewValue") && !value["NewValue"].IsNull())
    {
        if (!value["NewValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamRecord.NewValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newValue = string(value["NewValue"].GetString());
        m_newValueHasBeenSet = true;
    }

    if (value.HasMember("IsSucess") && !value["IsSucess"].IsNull())
    {
        if (!value["IsSucess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ParamRecord.IsSucess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSucess = value["IsSucess"].GetBool();
        m_isSucessHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamRecord.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("IsSuccess") && !value["IsSuccess"].IsNull())
    {
        if (!value["IsSuccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ParamRecord.IsSuccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSuccess = value["IsSuccess"].GetBool();
        m_isSuccessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_oldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldValue.c_str(), allocator).Move(), allocator);
    }

    if (m_newValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newValue.c_str(), allocator).Move(), allocator);
    }

    if (m_isSucessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSucess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSucess, allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isSuccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSuccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSuccess, allocator);
    }

}


string ParamRecord::GetInstanceId() const
{
    return m_instanceId;
}

void ParamRecord::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ParamRecord::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ParamRecord::GetParamName() const
{
    return m_paramName;
}

void ParamRecord::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool ParamRecord::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string ParamRecord::GetOldValue() const
{
    return m_oldValue;
}

void ParamRecord::SetOldValue(const string& _oldValue)
{
    m_oldValue = _oldValue;
    m_oldValueHasBeenSet = true;
}

bool ParamRecord::OldValueHasBeenSet() const
{
    return m_oldValueHasBeenSet;
}

string ParamRecord::GetNewValue() const
{
    return m_newValue;
}

void ParamRecord::SetNewValue(const string& _newValue)
{
    m_newValue = _newValue;
    m_newValueHasBeenSet = true;
}

bool ParamRecord::NewValueHasBeenSet() const
{
    return m_newValueHasBeenSet;
}

bool ParamRecord::GetIsSucess() const
{
    return m_isSucess;
}

void ParamRecord::SetIsSucess(const bool& _isSucess)
{
    m_isSucess = _isSucess;
    m_isSucessHasBeenSet = true;
}

bool ParamRecord::IsSucessHasBeenSet() const
{
    return m_isSucessHasBeenSet;
}

string ParamRecord::GetModifyTime() const
{
    return m_modifyTime;
}

void ParamRecord::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ParamRecord::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

bool ParamRecord::GetIsSuccess() const
{
    return m_isSuccess;
}

void ParamRecord::SetIsSuccess(const bool& _isSuccess)
{
    m_isSuccess = _isSuccess;
    m_isSuccessHasBeenSet = true;
}

bool ParamRecord::IsSuccessHasBeenSet() const
{
    return m_isSuccessHasBeenSet;
}

