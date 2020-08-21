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

#include <tencentcloud/tms/v20200713/model/TipoffResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20200713::Model;
using namespace rapidjson;
using namespace std;

TipoffResponse::TipoffResponse() :
    m_resultCodeHasBeenSet(false),
    m_resultMsgHasBeenSet(false)
{
}

CoreInternalOutcome TipoffResponse::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ResultCode") && !value["ResultCode"].IsNull())
    {
        if (!value["ResultCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TipoffResponse.ResultCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = value["ResultCode"].GetInt64();
        m_resultCodeHasBeenSet = true;
    }

    if (value.HasMember("ResultMsg") && !value["ResultMsg"].IsNull())
    {
        if (!value["ResultMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `TipoffResponse.ResultMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultMsg = string(value["ResultMsg"].GetString());
        m_resultMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TipoffResponse::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_resultCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultCode, allocator);
    }

    if (m_resultMsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResultMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resultMsg.c_str(), allocator).Move(), allocator);
    }

}


int64_t TipoffResponse::GetResultCode() const
{
    return m_resultCode;
}

void TipoffResponse::SetResultCode(const int64_t& _resultCode)
{
    m_resultCode = _resultCode;
    m_resultCodeHasBeenSet = true;
}

bool TipoffResponse::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

string TipoffResponse::GetResultMsg() const
{
    return m_resultMsg;
}

void TipoffResponse::SetResultMsg(const string& _resultMsg)
{
    m_resultMsg = _resultMsg;
    m_resultMsgHasBeenSet = true;
}

bool TipoffResponse::ResultMsgHasBeenSet() const
{
    return m_resultMsgHasBeenSet;
}

