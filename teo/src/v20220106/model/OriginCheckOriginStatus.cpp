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

#include <tencentcloud/teo/v20220106/model/OriginCheckOriginStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

OriginCheckOriginStatus::OriginCheckOriginStatus() :
    m_statusHasBeenSet(false),
    m_hostHasBeenSet(false)
{
}

CoreInternalOutcome OriginCheckOriginStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginCheckOriginStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginCheckOriginStatus.Host` is not array type"));

        const rapidjson::Value &tmpValue = value["Host"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_host.push_back((*itr).GetString());
        }
        m_hostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginCheckOriginStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_host.begin(); itr != m_host.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string OriginCheckOriginStatus::GetStatus() const
{
    return m_status;
}

void OriginCheckOriginStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OriginCheckOriginStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> OriginCheckOriginStatus::GetHost() const
{
    return m_host;
}

void OriginCheckOriginStatus::SetHost(const vector<string>& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool OriginCheckOriginStatus::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

