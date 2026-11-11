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

#include <tencentcloud/redis/v20180412/model/Module.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

Module::Module() :
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isSupportHasBeenSet(false)
{
}

CoreInternalOutcome Module::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Module.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Module.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsSupport") && !value["IsSupport"].IsNull())
    {
        if (!value["IsSupport"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Module.IsSupport` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupport = value["IsSupport"].GetBool();
        m_isSupportHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Module::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupport, allocator);
    }

}


string Module::GetName() const
{
    return m_name;
}

void Module::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Module::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Module::GetStatus() const
{
    return m_status;
}

void Module::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Module::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool Module::GetIsSupport() const
{
    return m_isSupport;
}

void Module::SetIsSupport(const bool& _isSupport)
{
    m_isSupport = _isSupport;
    m_isSupportHasBeenSet = true;
}

bool Module::IsSupportHasBeenSet() const
{
    return m_isSupportHasBeenSet;
}

