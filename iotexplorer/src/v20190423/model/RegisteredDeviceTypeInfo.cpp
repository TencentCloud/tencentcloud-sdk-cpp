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

#include <tencentcloud/iotexplorer/v20190423/model/RegisteredDeviceTypeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

RegisteredDeviceTypeInfo::RegisteredDeviceTypeInfo() :
    m_normalDeviceNumHasBeenSet(false),
    m_gatewayDeviceNumHasBeenSet(false),
    m_subDeviceNumHasBeenSet(false),
    m_videoDeviceNumHasBeenSet(false)
{
}

CoreInternalOutcome RegisteredDeviceTypeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NormalDeviceNum") && !value["NormalDeviceNum"].IsNull())
    {
        if (!value["NormalDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegisteredDeviceTypeInfo.NormalDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_normalDeviceNum = value["NormalDeviceNum"].GetInt64();
        m_normalDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("GatewayDeviceNum") && !value["GatewayDeviceNum"].IsNull())
    {
        if (!value["GatewayDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegisteredDeviceTypeInfo.GatewayDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayDeviceNum = value["GatewayDeviceNum"].GetInt64();
        m_gatewayDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("SubDeviceNum") && !value["SubDeviceNum"].IsNull())
    {
        if (!value["SubDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegisteredDeviceTypeInfo.SubDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subDeviceNum = value["SubDeviceNum"].GetInt64();
        m_subDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("VideoDeviceNum") && !value["VideoDeviceNum"].IsNull())
    {
        if (!value["VideoDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegisteredDeviceTypeInfo.VideoDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoDeviceNum = value["VideoDeviceNum"].GetInt64();
        m_videoDeviceNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegisteredDeviceTypeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_normalDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normalDeviceNum, allocator);
    }

    if (m_gatewayDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gatewayDeviceNum, allocator);
    }

    if (m_subDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subDeviceNum, allocator);
    }

    if (m_videoDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoDeviceNum, allocator);
    }

}


int64_t RegisteredDeviceTypeInfo::GetNormalDeviceNum() const
{
    return m_normalDeviceNum;
}

void RegisteredDeviceTypeInfo::SetNormalDeviceNum(const int64_t& _normalDeviceNum)
{
    m_normalDeviceNum = _normalDeviceNum;
    m_normalDeviceNumHasBeenSet = true;
}

bool RegisteredDeviceTypeInfo::NormalDeviceNumHasBeenSet() const
{
    return m_normalDeviceNumHasBeenSet;
}

int64_t RegisteredDeviceTypeInfo::GetGatewayDeviceNum() const
{
    return m_gatewayDeviceNum;
}

void RegisteredDeviceTypeInfo::SetGatewayDeviceNum(const int64_t& _gatewayDeviceNum)
{
    m_gatewayDeviceNum = _gatewayDeviceNum;
    m_gatewayDeviceNumHasBeenSet = true;
}

bool RegisteredDeviceTypeInfo::GatewayDeviceNumHasBeenSet() const
{
    return m_gatewayDeviceNumHasBeenSet;
}

int64_t RegisteredDeviceTypeInfo::GetSubDeviceNum() const
{
    return m_subDeviceNum;
}

void RegisteredDeviceTypeInfo::SetSubDeviceNum(const int64_t& _subDeviceNum)
{
    m_subDeviceNum = _subDeviceNum;
    m_subDeviceNumHasBeenSet = true;
}

bool RegisteredDeviceTypeInfo::SubDeviceNumHasBeenSet() const
{
    return m_subDeviceNumHasBeenSet;
}

int64_t RegisteredDeviceTypeInfo::GetVideoDeviceNum() const
{
    return m_videoDeviceNum;
}

void RegisteredDeviceTypeInfo::SetVideoDeviceNum(const int64_t& _videoDeviceNum)
{
    m_videoDeviceNum = _videoDeviceNum;
    m_videoDeviceNumHasBeenSet = true;
}

bool RegisteredDeviceTypeInfo::VideoDeviceNumHasBeenSet() const
{
    return m_videoDeviceNumHasBeenSet;
}

