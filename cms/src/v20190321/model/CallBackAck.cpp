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

#include <tencentcloud/cms/v20190321/model/CallBackAck.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

CallBackAck::CallBackAck() :
    m_stdRetCodeHasBeenSet(false),
    m_stdRetMsgHasBeenSet(false)
{
}

CoreInternalOutcome CallBackAck::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StdRetCode") && !value["StdRetCode"].IsNull())
    {
        if (!value["StdRetCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CallBackAck.StdRetCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stdRetCode = value["StdRetCode"].GetInt64();
        m_stdRetCodeHasBeenSet = true;
    }

    if (value.HasMember("StdRetMsg") && !value["StdRetMsg"].IsNull())
    {
        if (!value["StdRetMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `CallBackAck.StdRetMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stdRetMsg = string(value["StdRetMsg"].GetString());
        m_stdRetMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallBackAck::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_stdRetCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StdRetCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stdRetCode, allocator);
    }

    if (m_stdRetMsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StdRetMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_stdRetMsg.c_str(), allocator).Move(), allocator);
    }

}


int64_t CallBackAck::GetStdRetCode() const
{
    return m_stdRetCode;
}

void CallBackAck::SetStdRetCode(const int64_t& _stdRetCode)
{
    m_stdRetCode = _stdRetCode;
    m_stdRetCodeHasBeenSet = true;
}

bool CallBackAck::StdRetCodeHasBeenSet() const
{
    return m_stdRetCodeHasBeenSet;
}

string CallBackAck::GetStdRetMsg() const
{
    return m_stdRetMsg;
}

void CallBackAck::SetStdRetMsg(const string& _stdRetMsg)
{
    m_stdRetMsg = _stdRetMsg;
    m_stdRetMsgHasBeenSet = true;
}

bool CallBackAck::StdRetMsgHasBeenSet() const
{
    return m_stdRetMsgHasBeenSet;
}

