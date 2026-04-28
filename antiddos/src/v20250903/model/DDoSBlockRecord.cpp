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

#include <tencentcloud/antiddos/v20250903/model/DDoSBlockRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

DDoSBlockRecord::DDoSBlockRecord() :
    m_resourceHasBeenSet(false),
    m_blockTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DDoSBlockRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSBlockRecord.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("BlockTime") && !value["BlockTime"].IsNull())
    {
        if (!value["BlockTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSBlockRecord.BlockTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockTime = string(value["BlockTime"].GetString());
        m_blockTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSBlockRecord.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSBlockRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_blockTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string DDoSBlockRecord::GetResource() const
{
    return m_resource;
}

void DDoSBlockRecord::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool DDoSBlockRecord::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string DDoSBlockRecord::GetBlockTime() const
{
    return m_blockTime;
}

void DDoSBlockRecord::SetBlockTime(const string& _blockTime)
{
    m_blockTime = _blockTime;
    m_blockTimeHasBeenSet = true;
}

bool DDoSBlockRecord::BlockTimeHasBeenSet() const
{
    return m_blockTimeHasBeenSet;
}

string DDoSBlockRecord::GetStatus() const
{
    return m_status;
}

void DDoSBlockRecord::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DDoSBlockRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

