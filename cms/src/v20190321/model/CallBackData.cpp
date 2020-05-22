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

#include <tencentcloud/cms/v20190321/model/CallBackData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

CallBackData::CallBackData() :
    m_resHasBeenSet(false)
{
}

CoreInternalOutcome CallBackData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Res") && !value["Res"].IsNull())
    {
        if (!value["Res"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CallBackData.Res` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_res.Deserialize(value["Res"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallBackData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_resHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Res";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_res.ToJsonObject(value[key.c_str()], allocator);
    }

}


CallBackAck CallBackData::GetRes() const
{
    return m_res;
}

void CallBackData::SetRes(const CallBackAck& _res)
{
    m_res = _res;
    m_resHasBeenSet = true;
}

bool CallBackData::ResHasBeenSet() const
{
    return m_resHasBeenSet;
}

