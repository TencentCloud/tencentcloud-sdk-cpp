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

#include <tencentcloud/cms/v20190321/model/MessageIdGjh.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

MessageIdGjh::MessageIdGjh() :
    m_strMsgIDHasBeenSet(false)
{
}

CoreInternalOutcome MessageIdGjh::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StrMsgID") && !value["StrMsgID"].IsNull())
    {
        if (!value["StrMsgID"].IsString())
        {
            return CoreInternalOutcome(Error("response `MessageIdGjh.StrMsgID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strMsgID = string(value["StrMsgID"].GetString());
        m_strMsgIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageIdGjh::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_strMsgIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StrMsgID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_strMsgID.c_str(), allocator).Move(), allocator);
    }

}


string MessageIdGjh::GetStrMsgID() const
{
    return m_strMsgID;
}

void MessageIdGjh::SetStrMsgID(const string& _strMsgID)
{
    m_strMsgID = _strMsgID;
    m_strMsgIDHasBeenSet = true;
}

bool MessageIdGjh::StrMsgIDHasBeenSet() const
{
    return m_strMsgIDHasBeenSet;
}

