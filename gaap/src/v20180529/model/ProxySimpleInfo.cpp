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

#include <tencentcloud/gaap/v20180529/model/ProxySimpleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

ProxySimpleInfo::ProxySimpleInfo() :
    m_proxyIdHasBeenSet(false),
    m_proxyNameHasBeenSet(false),
    m_listenerListHasBeenSet(false)
{
}

CoreInternalOutcome ProxySimpleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxySimpleInfo.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyName") && !value["ProxyName"].IsNull())
    {
        if (!value["ProxyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxySimpleInfo.ProxyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyName = string(value["ProxyName"].GetString());
        m_proxyNameHasBeenSet = true;
    }

    if (value.HasMember("ListenerList") && !value["ListenerList"].IsNull())
    {
        if (!value["ListenerList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxySimpleInfo.ListenerList` is not array type"));

        const rapidjson::Value &tmpValue = value["ListenerList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ListenerInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_listenerList.push_back(item);
        }
        m_listenerListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxySimpleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyName.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_listenerList.begin(); itr != m_listenerList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ProxySimpleInfo::GetProxyId() const
{
    return m_proxyId;
}

void ProxySimpleInfo::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool ProxySimpleInfo::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string ProxySimpleInfo::GetProxyName() const
{
    return m_proxyName;
}

void ProxySimpleInfo::SetProxyName(const string& _proxyName)
{
    m_proxyName = _proxyName;
    m_proxyNameHasBeenSet = true;
}

bool ProxySimpleInfo::ProxyNameHasBeenSet() const
{
    return m_proxyNameHasBeenSet;
}

vector<ListenerInfo> ProxySimpleInfo::GetListenerList() const
{
    return m_listenerList;
}

void ProxySimpleInfo::SetListenerList(const vector<ListenerInfo>& _listenerList)
{
    m_listenerList = _listenerList;
    m_listenerListHasBeenSet = true;
}

bool ProxySimpleInfo::ListenerListHasBeenSet() const
{
    return m_listenerListHasBeenSet;
}

