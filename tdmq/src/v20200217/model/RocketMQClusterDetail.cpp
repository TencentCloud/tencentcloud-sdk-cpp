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

#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQClusterDetail::RocketMQClusterDetail() :
    m_infoHasBeenSet(false),
    m_configHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQClusterDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterDetail.Info` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_info.Deserialize(value["Info"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_infoHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterDetail.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQClusterDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_info.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


RocketMQClusterInfo RocketMQClusterDetail::GetInfo() const
{
    return m_info;
}

void RocketMQClusterDetail::SetInfo(const RocketMQClusterInfo& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool RocketMQClusterDetail::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

RocketMQClusterConfig RocketMQClusterDetail::GetConfig() const
{
    return m_config;
}

void RocketMQClusterDetail::SetConfig(const RocketMQClusterConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool RocketMQClusterDetail::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

int64_t RocketMQClusterDetail::GetStatus() const
{
    return m_status;
}

void RocketMQClusterDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RocketMQClusterDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

