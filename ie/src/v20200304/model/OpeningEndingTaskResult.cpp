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

#include <tencentcloud/ie/v20200304/model/OpeningEndingTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace rapidjson;
using namespace std;

OpeningEndingTaskResult::OpeningEndingTaskResult() :
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_itemHasBeenSet(false)
{
}

CoreInternalOutcome OpeningEndingTaskResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OpeningEndingTaskResult.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OpeningEndingTaskResult.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `OpeningEndingTaskResult.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OpeningEndingTaskResult.Item` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_item.Deserialize(value["Item"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpeningEndingTaskResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_itemHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_item.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t OpeningEndingTaskResult::GetStatus() const
{
    return m_status;
}

void OpeningEndingTaskResult::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OpeningEndingTaskResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t OpeningEndingTaskResult::GetErrCode() const
{
    return m_errCode;
}

void OpeningEndingTaskResult::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool OpeningEndingTaskResult::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string OpeningEndingTaskResult::GetErrMsg() const
{
    return m_errMsg;
}

void OpeningEndingTaskResult::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool OpeningEndingTaskResult::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

OpeningEndingTaskResultItem OpeningEndingTaskResult::GetItem() const
{
    return m_item;
}

void OpeningEndingTaskResult::SetItem(const OpeningEndingTaskResultItem& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool OpeningEndingTaskResult::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

