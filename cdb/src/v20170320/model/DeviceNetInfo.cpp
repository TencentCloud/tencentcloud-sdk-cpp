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

#include <tencentcloud/cdb/v20170320/model/DeviceNetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DeviceNetInfo::DeviceNetInfo() :
    m_connHasBeenSet(false),
    m_packageInHasBeenSet(false),
    m_packageOutHasBeenSet(false),
    m_flowInHasBeenSet(false),
    m_flowOutHasBeenSet(false)
{
}

CoreInternalOutcome DeviceNetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Conn") && !value["Conn"].IsNull())
    {
        if (!value["Conn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.Conn` is not array type"));

        const rapidjson::Value &tmpValue = value["Conn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_conn.push_back((*itr).GetInt64());
        }
        m_connHasBeenSet = true;
    }

    if (value.HasMember("PackageIn") && !value["PackageIn"].IsNull())
    {
        if (!value["PackageIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.PackageIn` is not array type"));

        const rapidjson::Value &tmpValue = value["PackageIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_packageIn.push_back((*itr).GetInt64());
        }
        m_packageInHasBeenSet = true;
    }

    if (value.HasMember("PackageOut") && !value["PackageOut"].IsNull())
    {
        if (!value["PackageOut"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.PackageOut` is not array type"));

        const rapidjson::Value &tmpValue = value["PackageOut"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_packageOut.push_back((*itr).GetInt64());
        }
        m_packageOutHasBeenSet = true;
    }

    if (value.HasMember("FlowIn") && !value["FlowIn"].IsNull())
    {
        if (!value["FlowIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.FlowIn` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_flowIn.push_back((*itr).GetInt64());
        }
        m_flowInHasBeenSet = true;
    }

    if (value.HasMember("FlowOut") && !value["FlowOut"].IsNull())
    {
        if (!value["FlowOut"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceNetInfo.FlowOut` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowOut"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_flowOut.push_back((*itr).GetInt64());
        }
        m_flowOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceNetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_connHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_conn.begin(); itr != m_conn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_packageInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_packageIn.begin(); itr != m_packageIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_packageOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_packageOut.begin(); itr != m_packageOut.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_flowInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowIn.begin(); itr != m_flowIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_flowOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowOut.begin(); itr != m_flowOut.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> DeviceNetInfo::GetConn() const
{
    return m_conn;
}

void DeviceNetInfo::SetConn(const vector<int64_t>& _conn)
{
    m_conn = _conn;
    m_connHasBeenSet = true;
}

bool DeviceNetInfo::ConnHasBeenSet() const
{
    return m_connHasBeenSet;
}

vector<int64_t> DeviceNetInfo::GetPackageIn() const
{
    return m_packageIn;
}

void DeviceNetInfo::SetPackageIn(const vector<int64_t>& _packageIn)
{
    m_packageIn = _packageIn;
    m_packageInHasBeenSet = true;
}

bool DeviceNetInfo::PackageInHasBeenSet() const
{
    return m_packageInHasBeenSet;
}

vector<int64_t> DeviceNetInfo::GetPackageOut() const
{
    return m_packageOut;
}

void DeviceNetInfo::SetPackageOut(const vector<int64_t>& _packageOut)
{
    m_packageOut = _packageOut;
    m_packageOutHasBeenSet = true;
}

bool DeviceNetInfo::PackageOutHasBeenSet() const
{
    return m_packageOutHasBeenSet;
}

vector<int64_t> DeviceNetInfo::GetFlowIn() const
{
    return m_flowIn;
}

void DeviceNetInfo::SetFlowIn(const vector<int64_t>& _flowIn)
{
    m_flowIn = _flowIn;
    m_flowInHasBeenSet = true;
}

bool DeviceNetInfo::FlowInHasBeenSet() const
{
    return m_flowInHasBeenSet;
}

vector<int64_t> DeviceNetInfo::GetFlowOut() const
{
    return m_flowOut;
}

void DeviceNetInfo::SetFlowOut(const vector<int64_t>& _flowOut)
{
    m_flowOut = _flowOut;
    m_flowOutHasBeenSet = true;
}

bool DeviceNetInfo::FlowOutHasBeenSet() const
{
    return m_flowOutHasBeenSet;
}

