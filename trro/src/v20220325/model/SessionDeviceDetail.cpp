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

#include <tencentcloud/trro/v20220325/model/SessionDeviceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

SessionDeviceDetail::SessionDeviceDetail() :
    m_deviceTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_lostHasBeenSet(false),
    m_networkLatencyHasBeenSet(false),
    m_videoLatencyHasBeenSet(false),
    m_cpuUsedHasBeenSet(false),
    m_memUsedHasBeenSet(false),
    m_timeOffsetHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_verHasBeenSet(false),
    m_sdkModeHasBeenSet(false),
    m_decodeCostHasBeenSet(false),
    m_renderConstHasBeenSet(false),
    m_k100HasBeenSet(false),
    m_k150HasBeenSet(false),
    m_nACKHasBeenSet(false),
    m_bitRateEstimateHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_encodeCostHasBeenSet(false),
    m_captureCostHasBeenSet(false),
    m_renderCostHasBeenSet(false),
    m_configWidthHasBeenSet(false),
    m_configHeightHasBeenSet(false),
    m_frameDeltaHasBeenSet(false),
    m_maxFrameDeltaHasBeenSet(false),
    m_totalBitrateEstimateHasBeenSet(false),
    m_lag100DurationHasBeenSet(false),
    m_lag150DurationHasBeenSet(false),
    m_multiModeHasBeenSet(false),
    m_multiNetHasBeenSet(false)
{
}

CoreInternalOutcome SessionDeviceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.Rate` is not array type"));

        const rapidjson::Value &tmpValue = value["Rate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rate.push_back((*itr).GetInt64());
        }
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.Fps` is not array type"));

        const rapidjson::Value &tmpValue = value["Fps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fps.push_back((*itr).GetInt64());
        }
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Lost") && !value["Lost"].IsNull())
    {
        if (!value["Lost"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.Lost` is not array type"));

        const rapidjson::Value &tmpValue = value["Lost"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lost.push_back((*itr).GetDouble());
        }
        m_lostHasBeenSet = true;
    }

    if (value.HasMember("NetworkLatency") && !value["NetworkLatency"].IsNull())
    {
        if (!value["NetworkLatency"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.NetworkLatency` is not array type"));

        const rapidjson::Value &tmpValue = value["NetworkLatency"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_networkLatency.push_back((*itr).GetInt64());
        }
        m_networkLatencyHasBeenSet = true;
    }

    if (value.HasMember("VideoLatency") && !value["VideoLatency"].IsNull())
    {
        if (!value["VideoLatency"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.VideoLatency` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoLatency"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_videoLatency.push_back((*itr).GetInt64());
        }
        m_videoLatencyHasBeenSet = true;
    }

    if (value.HasMember("CpuUsed") && !value["CpuUsed"].IsNull())
    {
        if (!value["CpuUsed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.CpuUsed` is not array type"));

        const rapidjson::Value &tmpValue = value["CpuUsed"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cpuUsed.push_back((*itr).GetDouble());
        }
        m_cpuUsedHasBeenSet = true;
    }

    if (value.HasMember("MemUsed") && !value["MemUsed"].IsNull())
    {
        if (!value["MemUsed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.MemUsed` is not array type"));

        const rapidjson::Value &tmpValue = value["MemUsed"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_memUsed.push_back((*itr).GetDouble());
        }
        m_memUsedHasBeenSet = true;
    }

    if (value.HasMember("TimeOffset") && !value["TimeOffset"].IsNull())
    {
        if (!value["TimeOffset"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.TimeOffset` is not array type"));

        const rapidjson::Value &tmpValue = value["TimeOffset"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timeOffset.push_back((*itr).GetUint64());
        }
        m_timeOffsetHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("Ver") && !value["Ver"].IsNull())
    {
        if (!value["Ver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.Ver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ver = string(value["Ver"].GetString());
        m_verHasBeenSet = true;
    }

    if (value.HasMember("SdkMode") && !value["SdkMode"].IsNull())
    {
        if (!value["SdkMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.SdkMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkMode = string(value["SdkMode"].GetString());
        m_sdkModeHasBeenSet = true;
    }

    if (value.HasMember("DecodeCost") && !value["DecodeCost"].IsNull())
    {
        if (!value["DecodeCost"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.DecodeCost` is not array type"));

        const rapidjson::Value &tmpValue = value["DecodeCost"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_decodeCost.push_back((*itr).GetInt64());
        }
        m_decodeCostHasBeenSet = true;
    }

    if (value.HasMember("RenderConst") && !value["RenderConst"].IsNull())
    {
        if (!value["RenderConst"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.RenderConst` is not array type"));

        const rapidjson::Value &tmpValue = value["RenderConst"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_renderConst.push_back((*itr).GetInt64());
        }
        m_renderConstHasBeenSet = true;
    }

    if (value.HasMember("K100") && !value["K100"].IsNull())
    {
        if (!value["K100"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.K100` is not array type"));

        const rapidjson::Value &tmpValue = value["K100"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_k100.push_back((*itr).GetDouble());
        }
        m_k100HasBeenSet = true;
    }

    if (value.HasMember("K150") && !value["K150"].IsNull())
    {
        if (!value["K150"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.K150` is not array type"));

        const rapidjson::Value &tmpValue = value["K150"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_k150.push_back((*itr).GetDouble());
        }
        m_k150HasBeenSet = true;
    }

    if (value.HasMember("NACK") && !value["NACK"].IsNull())
    {
        if (!value["NACK"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.NACK` is not array type"));

        const rapidjson::Value &tmpValue = value["NACK"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nACK.push_back((*itr).GetInt64());
        }
        m_nACKHasBeenSet = true;
    }

    if (value.HasMember("BitRateEstimate") && !value["BitRateEstimate"].IsNull())
    {
        if (!value["BitRateEstimate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.BitRateEstimate` is not array type"));

        const rapidjson::Value &tmpValue = value["BitRateEstimate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bitRateEstimate.push_back((*itr).GetInt64());
        }
        m_bitRateEstimateHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("EncodeCost") && !value["EncodeCost"].IsNull())
    {
        if (!value["EncodeCost"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.EncodeCost` is not array type"));

        const rapidjson::Value &tmpValue = value["EncodeCost"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_encodeCost.push_back((*itr).GetInt64());
        }
        m_encodeCostHasBeenSet = true;
    }

    if (value.HasMember("CaptureCost") && !value["CaptureCost"].IsNull())
    {
        if (!value["CaptureCost"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.CaptureCost` is not array type"));

        const rapidjson::Value &tmpValue = value["CaptureCost"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_captureCost.push_back((*itr).GetInt64());
        }
        m_captureCostHasBeenSet = true;
    }

    if (value.HasMember("RenderCost") && !value["RenderCost"].IsNull())
    {
        if (!value["RenderCost"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.RenderCost` is not array type"));

        const rapidjson::Value &tmpValue = value["RenderCost"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_renderCost.push_back((*itr).GetInt64());
        }
        m_renderCostHasBeenSet = true;
    }

    if (value.HasMember("ConfigWidth") && !value["ConfigWidth"].IsNull())
    {
        if (!value["ConfigWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.ConfigWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configWidth = value["ConfigWidth"].GetInt64();
        m_configWidthHasBeenSet = true;
    }

    if (value.HasMember("ConfigHeight") && !value["ConfigHeight"].IsNull())
    {
        if (!value["ConfigHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.ConfigHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configHeight = value["ConfigHeight"].GetInt64();
        m_configHeightHasBeenSet = true;
    }

    if (value.HasMember("FrameDelta") && !value["FrameDelta"].IsNull())
    {
        if (!value["FrameDelta"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.FrameDelta` is not array type"));

        const rapidjson::Value &tmpValue = value["FrameDelta"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_frameDelta.push_back((*itr).GetInt64());
        }
        m_frameDeltaHasBeenSet = true;
    }

    if (value.HasMember("MaxFrameDelta") && !value["MaxFrameDelta"].IsNull())
    {
        if (!value["MaxFrameDelta"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.MaxFrameDelta` is not array type"));

        const rapidjson::Value &tmpValue = value["MaxFrameDelta"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_maxFrameDelta.push_back((*itr).GetInt64());
        }
        m_maxFrameDeltaHasBeenSet = true;
    }

    if (value.HasMember("TotalBitrateEstimate") && !value["TotalBitrateEstimate"].IsNull())
    {
        if (!value["TotalBitrateEstimate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.TotalBitrateEstimate` is not array type"));

        const rapidjson::Value &tmpValue = value["TotalBitrateEstimate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_totalBitrateEstimate.push_back((*itr).GetInt64());
        }
        m_totalBitrateEstimateHasBeenSet = true;
    }

    if (value.HasMember("Lag100Duration") && !value["Lag100Duration"].IsNull())
    {
        if (!value["Lag100Duration"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.Lag100Duration` is not array type"));

        const rapidjson::Value &tmpValue = value["Lag100Duration"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lag100Duration.push_back((*itr).GetInt64());
        }
        m_lag100DurationHasBeenSet = true;
    }

    if (value.HasMember("Lag150Duration") && !value["Lag150Duration"].IsNull())
    {
        if (!value["Lag150Duration"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.Lag150Duration` is not array type"));

        const rapidjson::Value &tmpValue = value["Lag150Duration"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lag150Duration.push_back((*itr).GetInt64());
        }
        m_lag150DurationHasBeenSet = true;
    }

    if (value.HasMember("MultiMode") && !value["MultiMode"].IsNull())
    {
        if (!value["MultiMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.MultiMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_multiMode = value["MultiMode"].GetInt64();
        m_multiModeHasBeenSet = true;
    }

    if (value.HasMember("MultiNet") && !value["MultiNet"].IsNull())
    {
        if (!value["MultiNet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.MultiNet` is not array type"));

        const rapidjson::Value &tmpValue = value["MultiNet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MultiNet item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_multiNet.push_back(item);
        }
        m_multiNetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionDeviceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rate.begin(); itr != m_rate.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fps.begin(); itr != m_fps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_lostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lost.begin(); itr != m_lost.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_networkLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_networkLatency.begin(); itr != m_networkLatency.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_videoLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_videoLatency.begin(); itr != m_videoLatency.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_cpuUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cpuUsed.begin(); itr != m_cpuUsed.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_memUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memUsed.begin(); itr != m_memUsed.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_timeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timeOffset.begin(); itr != m_timeOffset.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_verHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ver.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkMode.c_str(), allocator).Move(), allocator);
    }

    if (m_decodeCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DecodeCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_decodeCost.begin(); itr != m_decodeCost.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_renderConstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenderConst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_renderConst.begin(); itr != m_renderConst.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_k100HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K100";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_k100.begin(); itr != m_k100.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_k150HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K150";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_k150.begin(); itr != m_k150.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_nACKHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NACK";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nACK.begin(); itr != m_nACK.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_bitRateEstimateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BitRateEstimate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bitRateEstimate.begin(); itr != m_bitRateEstimate.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_encodeCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodeCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_encodeCost.begin(); itr != m_encodeCost.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_captureCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptureCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_captureCost.begin(); itr != m_captureCost.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_renderCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenderCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_renderCost.begin(); itr != m_renderCost.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_configWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configWidth, allocator);
    }

    if (m_configHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configHeight, allocator);
    }

    if (m_frameDeltaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameDelta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_frameDelta.begin(); itr != m_frameDelta.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_maxFrameDeltaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFrameDelta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_maxFrameDelta.begin(); itr != m_maxFrameDelta.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_totalBitrateEstimateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBitrateEstimate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_totalBitrateEstimate.begin(); itr != m_totalBitrateEstimate.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_lag100DurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lag100Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lag100Duration.begin(); itr != m_lag100Duration.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_lag150DurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lag150Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lag150Duration.begin(); itr != m_lag150Duration.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_multiModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiMode, allocator);
    }

    if (m_multiNetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiNet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiNet.begin(); itr != m_multiNet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SessionDeviceDetail::GetDeviceType() const
{
    return m_deviceType;
}

void SessionDeviceDetail::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool SessionDeviceDetail::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

uint64_t SessionDeviceDetail::GetStartTime() const
{
    return m_startTime;
}

void SessionDeviceDetail::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SessionDeviceDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t SessionDeviceDetail::GetEndTime() const
{
    return m_endTime;
}

void SessionDeviceDetail::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SessionDeviceDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SessionDeviceDetail::GetSessionId() const
{
    return m_sessionId;
}

void SessionDeviceDetail::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool SessionDeviceDetail::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetRate() const
{
    return m_rate;
}

void SessionDeviceDetail::SetRate(const vector<int64_t>& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool SessionDeviceDetail::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetFps() const
{
    return m_fps;
}

void SessionDeviceDetail::SetFps(const vector<int64_t>& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool SessionDeviceDetail::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

vector<double> SessionDeviceDetail::GetLost() const
{
    return m_lost;
}

void SessionDeviceDetail::SetLost(const vector<double>& _lost)
{
    m_lost = _lost;
    m_lostHasBeenSet = true;
}

bool SessionDeviceDetail::LostHasBeenSet() const
{
    return m_lostHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetNetworkLatency() const
{
    return m_networkLatency;
}

void SessionDeviceDetail::SetNetworkLatency(const vector<int64_t>& _networkLatency)
{
    m_networkLatency = _networkLatency;
    m_networkLatencyHasBeenSet = true;
}

bool SessionDeviceDetail::NetworkLatencyHasBeenSet() const
{
    return m_networkLatencyHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetVideoLatency() const
{
    return m_videoLatency;
}

void SessionDeviceDetail::SetVideoLatency(const vector<int64_t>& _videoLatency)
{
    m_videoLatency = _videoLatency;
    m_videoLatencyHasBeenSet = true;
}

bool SessionDeviceDetail::VideoLatencyHasBeenSet() const
{
    return m_videoLatencyHasBeenSet;
}

vector<double> SessionDeviceDetail::GetCpuUsed() const
{
    return m_cpuUsed;
}

void SessionDeviceDetail::SetCpuUsed(const vector<double>& _cpuUsed)
{
    m_cpuUsed = _cpuUsed;
    m_cpuUsedHasBeenSet = true;
}

bool SessionDeviceDetail::CpuUsedHasBeenSet() const
{
    return m_cpuUsedHasBeenSet;
}

vector<double> SessionDeviceDetail::GetMemUsed() const
{
    return m_memUsed;
}

void SessionDeviceDetail::SetMemUsed(const vector<double>& _memUsed)
{
    m_memUsed = _memUsed;
    m_memUsedHasBeenSet = true;
}

bool SessionDeviceDetail::MemUsedHasBeenSet() const
{
    return m_memUsedHasBeenSet;
}

vector<uint64_t> SessionDeviceDetail::GetTimeOffset() const
{
    return m_timeOffset;
}

void SessionDeviceDetail::SetTimeOffset(const vector<uint64_t>& _timeOffset)
{
    m_timeOffset = _timeOffset;
    m_timeOffsetHasBeenSet = true;
}

bool SessionDeviceDetail::TimeOffsetHasBeenSet() const
{
    return m_timeOffsetHasBeenSet;
}

string SessionDeviceDetail::GetProjectId() const
{
    return m_projectId;
}

void SessionDeviceDetail::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SessionDeviceDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SessionDeviceDetail::GetDeviceId() const
{
    return m_deviceId;
}

void SessionDeviceDetail::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool SessionDeviceDetail::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string SessionDeviceDetail::GetVer() const
{
    return m_ver;
}

void SessionDeviceDetail::SetVer(const string& _ver)
{
    m_ver = _ver;
    m_verHasBeenSet = true;
}

bool SessionDeviceDetail::VerHasBeenSet() const
{
    return m_verHasBeenSet;
}

string SessionDeviceDetail::GetSdkMode() const
{
    return m_sdkMode;
}

void SessionDeviceDetail::SetSdkMode(const string& _sdkMode)
{
    m_sdkMode = _sdkMode;
    m_sdkModeHasBeenSet = true;
}

bool SessionDeviceDetail::SdkModeHasBeenSet() const
{
    return m_sdkModeHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetDecodeCost() const
{
    return m_decodeCost;
}

void SessionDeviceDetail::SetDecodeCost(const vector<int64_t>& _decodeCost)
{
    m_decodeCost = _decodeCost;
    m_decodeCostHasBeenSet = true;
}

bool SessionDeviceDetail::DecodeCostHasBeenSet() const
{
    return m_decodeCostHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetRenderConst() const
{
    return m_renderConst;
}

void SessionDeviceDetail::SetRenderConst(const vector<int64_t>& _renderConst)
{
    m_renderConst = _renderConst;
    m_renderConstHasBeenSet = true;
}

bool SessionDeviceDetail::RenderConstHasBeenSet() const
{
    return m_renderConstHasBeenSet;
}

vector<double> SessionDeviceDetail::GetK100() const
{
    return m_k100;
}

void SessionDeviceDetail::SetK100(const vector<double>& _k100)
{
    m_k100 = _k100;
    m_k100HasBeenSet = true;
}

bool SessionDeviceDetail::K100HasBeenSet() const
{
    return m_k100HasBeenSet;
}

vector<double> SessionDeviceDetail::GetK150() const
{
    return m_k150;
}

void SessionDeviceDetail::SetK150(const vector<double>& _k150)
{
    m_k150 = _k150;
    m_k150HasBeenSet = true;
}

bool SessionDeviceDetail::K150HasBeenSet() const
{
    return m_k150HasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetNACK() const
{
    return m_nACK;
}

void SessionDeviceDetail::SetNACK(const vector<int64_t>& _nACK)
{
    m_nACK = _nACK;
    m_nACKHasBeenSet = true;
}

bool SessionDeviceDetail::NACKHasBeenSet() const
{
    return m_nACKHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetBitRateEstimate() const
{
    return m_bitRateEstimate;
}

void SessionDeviceDetail::SetBitRateEstimate(const vector<int64_t>& _bitRateEstimate)
{
    m_bitRateEstimate = _bitRateEstimate;
    m_bitRateEstimateHasBeenSet = true;
}

bool SessionDeviceDetail::BitRateEstimateHasBeenSet() const
{
    return m_bitRateEstimateHasBeenSet;
}

int64_t SessionDeviceDetail::GetWidth() const
{
    return m_width;
}

void SessionDeviceDetail::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool SessionDeviceDetail::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t SessionDeviceDetail::GetHeight() const
{
    return m_height;
}

void SessionDeviceDetail::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool SessionDeviceDetail::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetEncodeCost() const
{
    return m_encodeCost;
}

void SessionDeviceDetail::SetEncodeCost(const vector<int64_t>& _encodeCost)
{
    m_encodeCost = _encodeCost;
    m_encodeCostHasBeenSet = true;
}

bool SessionDeviceDetail::EncodeCostHasBeenSet() const
{
    return m_encodeCostHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetCaptureCost() const
{
    return m_captureCost;
}

void SessionDeviceDetail::SetCaptureCost(const vector<int64_t>& _captureCost)
{
    m_captureCost = _captureCost;
    m_captureCostHasBeenSet = true;
}

bool SessionDeviceDetail::CaptureCostHasBeenSet() const
{
    return m_captureCostHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetRenderCost() const
{
    return m_renderCost;
}

void SessionDeviceDetail::SetRenderCost(const vector<int64_t>& _renderCost)
{
    m_renderCost = _renderCost;
    m_renderCostHasBeenSet = true;
}

bool SessionDeviceDetail::RenderCostHasBeenSet() const
{
    return m_renderCostHasBeenSet;
}

int64_t SessionDeviceDetail::GetConfigWidth() const
{
    return m_configWidth;
}

void SessionDeviceDetail::SetConfigWidth(const int64_t& _configWidth)
{
    m_configWidth = _configWidth;
    m_configWidthHasBeenSet = true;
}

bool SessionDeviceDetail::ConfigWidthHasBeenSet() const
{
    return m_configWidthHasBeenSet;
}

int64_t SessionDeviceDetail::GetConfigHeight() const
{
    return m_configHeight;
}

void SessionDeviceDetail::SetConfigHeight(const int64_t& _configHeight)
{
    m_configHeight = _configHeight;
    m_configHeightHasBeenSet = true;
}

bool SessionDeviceDetail::ConfigHeightHasBeenSet() const
{
    return m_configHeightHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetFrameDelta() const
{
    return m_frameDelta;
}

void SessionDeviceDetail::SetFrameDelta(const vector<int64_t>& _frameDelta)
{
    m_frameDelta = _frameDelta;
    m_frameDeltaHasBeenSet = true;
}

bool SessionDeviceDetail::FrameDeltaHasBeenSet() const
{
    return m_frameDeltaHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetMaxFrameDelta() const
{
    return m_maxFrameDelta;
}

void SessionDeviceDetail::SetMaxFrameDelta(const vector<int64_t>& _maxFrameDelta)
{
    m_maxFrameDelta = _maxFrameDelta;
    m_maxFrameDeltaHasBeenSet = true;
}

bool SessionDeviceDetail::MaxFrameDeltaHasBeenSet() const
{
    return m_maxFrameDeltaHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetTotalBitrateEstimate() const
{
    return m_totalBitrateEstimate;
}

void SessionDeviceDetail::SetTotalBitrateEstimate(const vector<int64_t>& _totalBitrateEstimate)
{
    m_totalBitrateEstimate = _totalBitrateEstimate;
    m_totalBitrateEstimateHasBeenSet = true;
}

bool SessionDeviceDetail::TotalBitrateEstimateHasBeenSet() const
{
    return m_totalBitrateEstimateHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetLag100Duration() const
{
    return m_lag100Duration;
}

void SessionDeviceDetail::SetLag100Duration(const vector<int64_t>& _lag100Duration)
{
    m_lag100Duration = _lag100Duration;
    m_lag100DurationHasBeenSet = true;
}

bool SessionDeviceDetail::Lag100DurationHasBeenSet() const
{
    return m_lag100DurationHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetLag150Duration() const
{
    return m_lag150Duration;
}

void SessionDeviceDetail::SetLag150Duration(const vector<int64_t>& _lag150Duration)
{
    m_lag150Duration = _lag150Duration;
    m_lag150DurationHasBeenSet = true;
}

bool SessionDeviceDetail::Lag150DurationHasBeenSet() const
{
    return m_lag150DurationHasBeenSet;
}

int64_t SessionDeviceDetail::GetMultiMode() const
{
    return m_multiMode;
}

void SessionDeviceDetail::SetMultiMode(const int64_t& _multiMode)
{
    m_multiMode = _multiMode;
    m_multiModeHasBeenSet = true;
}

bool SessionDeviceDetail::MultiModeHasBeenSet() const
{
    return m_multiModeHasBeenSet;
}

vector<MultiNet> SessionDeviceDetail::GetMultiNet() const
{
    return m_multiNet;
}

void SessionDeviceDetail::SetMultiNet(const vector<MultiNet>& _multiNet)
{
    m_multiNet = _multiNet;
    m_multiNetHasBeenSet = true;
}

bool SessionDeviceDetail::MultiNetHasBeenSet() const
{
    return m_multiNetHasBeenSet;
}

