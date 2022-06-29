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

#include <tencentcloud/cme/v20191029/model/StreamConnectInputInterruptInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

StreamConnectInputInterruptInfo::StreamConnectInputInterruptInfo() :
    m_endPointHasBeenSet(false)
{
}

CoreInternalOutcome StreamConnectInputInterruptInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndPoint") && !value["EndPoint"].IsNull())
    {
        if (!value["EndPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectInputInterruptInfo.EndPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPoint = string(value["EndPoint"].GetString());
        m_endPointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamConnectInputInterruptInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPoint.c_str(), allocator).Move(), allocator);
    }

}


string StreamConnectInputInterruptInfo::GetEndPoint() const
{
    return m_endPoint;
}

void StreamConnectInputInterruptInfo::SetEndPoint(const string& _endPoint)
{
    m_endPoint = _endPoint;
    m_endPointHasBeenSet = true;
}

bool StreamConnectInputInterruptInfo::EndPointHasBeenSet() const
{
    return m_endPointHasBeenSet;
}

