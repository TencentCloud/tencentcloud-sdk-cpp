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

#include <tencentcloud/cfw/v20190904/model/SwitchError.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

SwitchError::SwitchError() :
    m_errInsHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_errKeyHasBeenSet(false),
    m_insertTimeHasBeenSet(false)
{
}

CoreInternalOutcome SwitchError::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrIns") && !value["ErrIns"].IsNull())
    {
        if (!value["ErrIns"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchError.ErrIns` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errIns = string(value["ErrIns"].GetString());
        m_errInsHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchError.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("ErrKey") && !value["ErrKey"].IsNull())
    {
        if (!value["ErrKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchError.ErrKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errKey = string(value["ErrKey"].GetString());
        m_errKeyHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchError.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SwitchError::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errInsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrIns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errIns.c_str(), allocator).Move(), allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_errKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errKey.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

}


string SwitchError::GetErrIns() const
{
    return m_errIns;
}

void SwitchError::SetErrIns(const string& _errIns)
{
    m_errIns = _errIns;
    m_errInsHasBeenSet = true;
}

bool SwitchError::ErrInsHasBeenSet() const
{
    return m_errInsHasBeenSet;
}

string SwitchError::GetErrMsg() const
{
    return m_errMsg;
}

void SwitchError::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool SwitchError::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

string SwitchError::GetErrKey() const
{
    return m_errKey;
}

void SwitchError::SetErrKey(const string& _errKey)
{
    m_errKey = _errKey;
    m_errKeyHasBeenSet = true;
}

bool SwitchError::ErrKeyHasBeenSet() const
{
    return m_errKeyHasBeenSet;
}

string SwitchError::GetInsertTime() const
{
    return m_insertTime;
}

void SwitchError::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool SwitchError::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

