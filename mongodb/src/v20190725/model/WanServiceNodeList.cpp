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

#include <tencentcloud/mongodb/v20190725/model/WanServiceNodeList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

WanServiceNodeList::WanServiceNodeList() :
    m_vipVportHasBeenSet(false),
    m_listenerPortHasBeenSet(false)
{
}

CoreInternalOutcome WanServiceNodeList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VipVport") && !value["VipVport"].IsNull())
    {
        if (!value["VipVport"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WanServiceNodeList.VipVport` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipVport = string(value["VipVport"].GetString());
        m_vipVportHasBeenSet = true;
    }

    if (value.HasMember("ListenerPort") && !value["ListenerPort"].IsNull())
    {
        if (!value["ListenerPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WanServiceNodeList.ListenerPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerPort = string(value["ListenerPort"].GetString());
        m_listenerPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WanServiceNodeList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vipVportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipVport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vipVport.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerPort.c_str(), allocator).Move(), allocator);
    }

}


string WanServiceNodeList::GetVipVport() const
{
    return m_vipVport;
}

void WanServiceNodeList::SetVipVport(const string& _vipVport)
{
    m_vipVport = _vipVport;
    m_vipVportHasBeenSet = true;
}

bool WanServiceNodeList::VipVportHasBeenSet() const
{
    return m_vipVportHasBeenSet;
}

string WanServiceNodeList::GetListenerPort() const
{
    return m_listenerPort;
}

void WanServiceNodeList::SetListenerPort(const string& _listenerPort)
{
    m_listenerPort = _listenerPort;
    m_listenerPortHasBeenSet = true;
}

bool WanServiceNodeList::ListenerPortHasBeenSet() const
{
    return m_listenerPortHasBeenSet;
}

