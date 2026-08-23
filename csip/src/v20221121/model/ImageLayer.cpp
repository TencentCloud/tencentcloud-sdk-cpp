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

#include <tencentcloud/csip/v20221121/model/ImageLayer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageLayer::ImageLayer() :
    m_layerIndexHasBeenSet(false),
    m_layerIdHasBeenSet(false),
    m_layerCmdHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_criticalLevelVulCntHasBeenSet(false),
    m_highLevelVulCntHasBeenSet(false),
    m_mediumLevelVulCntHasBeenSet(false),
    m_lowLevelVulCntHasBeenSet(false),
    m_virusCntHasBeenSet(false),
    m_sensitiveCntHasBeenSet(false),
    m_layerCreateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ImageLayer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LayerIndex") && !value["LayerIndex"].IsNull())
    {
        if (!value["LayerIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayer.LayerIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_layerIndex = value["LayerIndex"].GetUint64();
        m_layerIndexHasBeenSet = true;
    }

    if (value.HasMember("LayerId") && !value["LayerId"].IsNull())
    {
        if (!value["LayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayer.LayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layerId = string(value["LayerId"].GetString());
        m_layerIdHasBeenSet = true;
    }

    if (value.HasMember("LayerCmd") && !value["LayerCmd"].IsNull())
    {
        if (!value["LayerCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayer.LayerCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layerCmd = string(value["LayerCmd"].GetString());
        m_layerCmdHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayer.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("CriticalLevelVulCnt") && !value["CriticalLevelVulCnt"].IsNull())
    {
        if (!value["CriticalLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayer.CriticalLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalLevelVulCnt = value["CriticalLevelVulCnt"].GetUint64();
        m_criticalLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("HighLevelVulCnt") && !value["HighLevelVulCnt"].IsNull())
    {
        if (!value["HighLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayer.HighLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highLevelVulCnt = value["HighLevelVulCnt"].GetUint64();
        m_highLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("MediumLevelVulCnt") && !value["MediumLevelVulCnt"].IsNull())
    {
        if (!value["MediumLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayer.MediumLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediumLevelVulCnt = value["MediumLevelVulCnt"].GetUint64();
        m_mediumLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("LowLevelVulCnt") && !value["LowLevelVulCnt"].IsNull())
    {
        if (!value["LowLevelVulCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayer.LowLevelVulCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lowLevelVulCnt = value["LowLevelVulCnt"].GetUint64();
        m_lowLevelVulCntHasBeenSet = true;
    }

    if (value.HasMember("VirusCnt") && !value["VirusCnt"].IsNull())
    {
        if (!value["VirusCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayer.VirusCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virusCnt = value["VirusCnt"].GetUint64();
        m_virusCntHasBeenSet = true;
    }

    if (value.HasMember("SensitiveCnt") && !value["SensitiveCnt"].IsNull())
    {
        if (!value["SensitiveCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayer.SensitiveCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveCnt = value["SensitiveCnt"].GetUint64();
        m_sensitiveCntHasBeenSet = true;
    }

    if (value.HasMember("LayerCreateTime") && !value["LayerCreateTime"].IsNull())
    {
        if (!value["LayerCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayer.LayerCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layerCreateTime = string(value["LayerCreateTime"].GetString());
        m_layerCreateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageLayer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_layerIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layerIndex, allocator);
    }

    if (m_layerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layerId.c_str(), allocator).Move(), allocator);
    }

    if (m_layerCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layerCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_criticalLevelVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalLevelVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalLevelVulCnt, allocator);
    }

    if (m_highLevelVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLevelVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highLevelVulCnt, allocator);
    }

    if (m_mediumLevelVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediumLevelVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediumLevelVulCnt, allocator);
    }

    if (m_lowLevelVulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLevelVulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowLevelVulCnt, allocator);
    }

    if (m_virusCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virusCnt, allocator);
    }

    if (m_sensitiveCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveCnt, allocator);
    }

    if (m_layerCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layerCreateTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ImageLayer::GetLayerIndex() const
{
    return m_layerIndex;
}

void ImageLayer::SetLayerIndex(const uint64_t& _layerIndex)
{
    m_layerIndex = _layerIndex;
    m_layerIndexHasBeenSet = true;
}

bool ImageLayer::LayerIndexHasBeenSet() const
{
    return m_layerIndexHasBeenSet;
}

string ImageLayer::GetLayerId() const
{
    return m_layerId;
}

void ImageLayer::SetLayerId(const string& _layerId)
{
    m_layerId = _layerId;
    m_layerIdHasBeenSet = true;
}

bool ImageLayer::LayerIdHasBeenSet() const
{
    return m_layerIdHasBeenSet;
}

string ImageLayer::GetLayerCmd() const
{
    return m_layerCmd;
}

void ImageLayer::SetLayerCmd(const string& _layerCmd)
{
    m_layerCmd = _layerCmd;
    m_layerCmdHasBeenSet = true;
}

bool ImageLayer::LayerCmdHasBeenSet() const
{
    return m_layerCmdHasBeenSet;
}

uint64_t ImageLayer::GetSize() const
{
    return m_size;
}

void ImageLayer::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool ImageLayer::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

uint64_t ImageLayer::GetCriticalLevelVulCnt() const
{
    return m_criticalLevelVulCnt;
}

void ImageLayer::SetCriticalLevelVulCnt(const uint64_t& _criticalLevelVulCnt)
{
    m_criticalLevelVulCnt = _criticalLevelVulCnt;
    m_criticalLevelVulCntHasBeenSet = true;
}

bool ImageLayer::CriticalLevelVulCntHasBeenSet() const
{
    return m_criticalLevelVulCntHasBeenSet;
}

uint64_t ImageLayer::GetHighLevelVulCnt() const
{
    return m_highLevelVulCnt;
}

void ImageLayer::SetHighLevelVulCnt(const uint64_t& _highLevelVulCnt)
{
    m_highLevelVulCnt = _highLevelVulCnt;
    m_highLevelVulCntHasBeenSet = true;
}

bool ImageLayer::HighLevelVulCntHasBeenSet() const
{
    return m_highLevelVulCntHasBeenSet;
}

uint64_t ImageLayer::GetMediumLevelVulCnt() const
{
    return m_mediumLevelVulCnt;
}

void ImageLayer::SetMediumLevelVulCnt(const uint64_t& _mediumLevelVulCnt)
{
    m_mediumLevelVulCnt = _mediumLevelVulCnt;
    m_mediumLevelVulCntHasBeenSet = true;
}

bool ImageLayer::MediumLevelVulCntHasBeenSet() const
{
    return m_mediumLevelVulCntHasBeenSet;
}

uint64_t ImageLayer::GetLowLevelVulCnt() const
{
    return m_lowLevelVulCnt;
}

void ImageLayer::SetLowLevelVulCnt(const uint64_t& _lowLevelVulCnt)
{
    m_lowLevelVulCnt = _lowLevelVulCnt;
    m_lowLevelVulCntHasBeenSet = true;
}

bool ImageLayer::LowLevelVulCntHasBeenSet() const
{
    return m_lowLevelVulCntHasBeenSet;
}

uint64_t ImageLayer::GetVirusCnt() const
{
    return m_virusCnt;
}

void ImageLayer::SetVirusCnt(const uint64_t& _virusCnt)
{
    m_virusCnt = _virusCnt;
    m_virusCntHasBeenSet = true;
}

bool ImageLayer::VirusCntHasBeenSet() const
{
    return m_virusCntHasBeenSet;
}

uint64_t ImageLayer::GetSensitiveCnt() const
{
    return m_sensitiveCnt;
}

void ImageLayer::SetSensitiveCnt(const uint64_t& _sensitiveCnt)
{
    m_sensitiveCnt = _sensitiveCnt;
    m_sensitiveCntHasBeenSet = true;
}

bool ImageLayer::SensitiveCntHasBeenSet() const
{
    return m_sensitiveCntHasBeenSet;
}

string ImageLayer::GetLayerCreateTime() const
{
    return m_layerCreateTime;
}

void ImageLayer::SetLayerCreateTime(const string& _layerCreateTime)
{
    m_layerCreateTime = _layerCreateTime;
    m_layerCreateTimeHasBeenSet = true;
}

bool ImageLayer::LayerCreateTimeHasBeenSet() const
{
    return m_layerCreateTimeHasBeenSet;
}

