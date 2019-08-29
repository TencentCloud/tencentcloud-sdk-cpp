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

#include <tencentcloud/gaap/v20180529/model/ProxyIdDict.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

ProxyIdDict::ProxyIdDict() :
    m_proxyIdHasBeenSet(false)
{
}

CoreInternalOutcome ProxyIdDict::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyIdDict.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyIdDict::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_proxyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

}


string ProxyIdDict::GetProxyId() const
{
    return m_proxyId;
}

void ProxyIdDict::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool ProxyIdDict::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

