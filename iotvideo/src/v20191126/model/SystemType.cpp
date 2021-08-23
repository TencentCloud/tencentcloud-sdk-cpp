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

#include <tencentcloud/iotvideo/v20191126/model/SystemType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

SystemType::SystemType() :
    m_androidHasBeenSet(false),
    m_linuxHasBeenSet(false),
    m_liteOsHasBeenSet(false)
{
}

CoreInternalOutcome SystemType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Android") && !value["Android"].IsNull())
    {
        if (!value["Android"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SystemType.Android` is not array type"));

        const rapidjson::Value &tmpValue = value["Android"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OsData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_android.push_back(item);
        }
        m_androidHasBeenSet = true;
    }

    if (value.HasMember("Linux") && !value["Linux"].IsNull())
    {
        if (!value["Linux"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SystemType.Linux` is not array type"));

        const rapidjson::Value &tmpValue = value["Linux"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OsData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_linux.push_back(item);
        }
        m_linuxHasBeenSet = true;
    }

    if (value.HasMember("LiteOs") && !value["LiteOs"].IsNull())
    {
        if (!value["LiteOs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SystemType.LiteOs` is not array type"));

        const rapidjson::Value &tmpValue = value["LiteOs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OsData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_liteOs.push_back(item);
        }
        m_liteOsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SystemType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_androidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Android";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_android.begin(); itr != m_android.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_linuxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Linux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_linux.begin(); itr != m_linux.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_liteOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiteOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_liteOs.begin(); itr != m_liteOs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<OsData> SystemType::GetAndroid() const
{
    return m_android;
}

void SystemType::SetAndroid(const vector<OsData>& _android)
{
    m_android = _android;
    m_androidHasBeenSet = true;
}

bool SystemType::AndroidHasBeenSet() const
{
    return m_androidHasBeenSet;
}

vector<OsData> SystemType::GetLinux() const
{
    return m_linux;
}

void SystemType::SetLinux(const vector<OsData>& _linux)
{
    m_linux = _linux;
    m_linuxHasBeenSet = true;
}

bool SystemType::LinuxHasBeenSet() const
{
    return m_linuxHasBeenSet;
}

vector<OsData> SystemType::GetLiteOs() const
{
    return m_liteOs;
}

void SystemType::SetLiteOs(const vector<OsData>& _liteOs)
{
    m_liteOs = _liteOs;
    m_liteOsHasBeenSet = true;
}

bool SystemType::LiteOsHasBeenSet() const
{
    return m_liteOsHasBeenSet;
}

