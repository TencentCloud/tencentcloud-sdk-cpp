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

#include <tencentcloud/tione/v20211111/model/HyperParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

HyperParameter::HyperParameter() :
    m_maxNNZHasBeenSet(false),
    m_slotNumHasBeenSet(false),
    m_cpuCachePercentageHasBeenSet(false),
    m_gpuCachePercentageHasBeenSet(false),
    m_enableDistributedHasBeenSet(false),
    m_minBlockSizePtHasBeenSet(false),
    m_minBlockSizeTfHasBeenSet(false),
    m_pipelineArgsHasBeenSet(false),
    m_loraScaleHasBeenSet(false)
{
}

CoreInternalOutcome HyperParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxNNZ") && !value["MaxNNZ"].IsNull())
    {
        if (!value["MaxNNZ"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HyperParameter.MaxNNZ` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxNNZ = string(value["MaxNNZ"].GetString());
        m_maxNNZHasBeenSet = true;
    }

    if (value.HasMember("SlotNum") && !value["SlotNum"].IsNull())
    {
        if (!value["SlotNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HyperParameter.SlotNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slotNum = string(value["SlotNum"].GetString());
        m_slotNumHasBeenSet = true;
    }

    if (value.HasMember("CpuCachePercentage") && !value["CpuCachePercentage"].IsNull())
    {
        if (!value["CpuCachePercentage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HyperParameter.CpuCachePercentage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuCachePercentage = string(value["CpuCachePercentage"].GetString());
        m_cpuCachePercentageHasBeenSet = true;
    }

    if (value.HasMember("GpuCachePercentage") && !value["GpuCachePercentage"].IsNull())
    {
        if (!value["GpuCachePercentage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HyperParameter.GpuCachePercentage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuCachePercentage = string(value["GpuCachePercentage"].GetString());
        m_gpuCachePercentageHasBeenSet = true;
    }

    if (value.HasMember("EnableDistributed") && !value["EnableDistributed"].IsNull())
    {
        if (!value["EnableDistributed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HyperParameter.EnableDistributed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enableDistributed = string(value["EnableDistributed"].GetString());
        m_enableDistributedHasBeenSet = true;
    }

    if (value.HasMember("MinBlockSizePt") && !value["MinBlockSizePt"].IsNull())
    {
        if (!value["MinBlockSizePt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HyperParameter.MinBlockSizePt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minBlockSizePt = string(value["MinBlockSizePt"].GetString());
        m_minBlockSizePtHasBeenSet = true;
    }

    if (value.HasMember("MinBlockSizeTf") && !value["MinBlockSizeTf"].IsNull())
    {
        if (!value["MinBlockSizeTf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HyperParameter.MinBlockSizeTf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minBlockSizeTf = string(value["MinBlockSizeTf"].GetString());
        m_minBlockSizeTfHasBeenSet = true;
    }

    if (value.HasMember("PipelineArgs") && !value["PipelineArgs"].IsNull())
    {
        if (!value["PipelineArgs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HyperParameter.PipelineArgs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pipelineArgs = string(value["PipelineArgs"].GetString());
        m_pipelineArgsHasBeenSet = true;
    }

    if (value.HasMember("LoraScale") && !value["LoraScale"].IsNull())
    {
        if (!value["LoraScale"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HyperParameter.LoraScale` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loraScale = string(value["LoraScale"].GetString());
        m_loraScaleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HyperParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxNNZHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNNZ";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxNNZ.c_str(), allocator).Move(), allocator);
    }

    if (m_slotNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlotNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slotNum.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuCachePercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuCachePercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuCachePercentage.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuCachePercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuCachePercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuCachePercentage.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDistributedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDistributed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enableDistributed.c_str(), allocator).Move(), allocator);
    }

    if (m_minBlockSizePtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinBlockSizePt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minBlockSizePt.c_str(), allocator).Move(), allocator);
    }

    if (m_minBlockSizeTfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinBlockSizeTf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minBlockSizeTf.c_str(), allocator).Move(), allocator);
    }

    if (m_pipelineArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pipelineArgs.c_str(), allocator).Move(), allocator);
    }

    if (m_loraScaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraScale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loraScale.c_str(), allocator).Move(), allocator);
    }

}


string HyperParameter::GetMaxNNZ() const
{
    return m_maxNNZ;
}

void HyperParameter::SetMaxNNZ(const string& _maxNNZ)
{
    m_maxNNZ = _maxNNZ;
    m_maxNNZHasBeenSet = true;
}

bool HyperParameter::MaxNNZHasBeenSet() const
{
    return m_maxNNZHasBeenSet;
}

string HyperParameter::GetSlotNum() const
{
    return m_slotNum;
}

void HyperParameter::SetSlotNum(const string& _slotNum)
{
    m_slotNum = _slotNum;
    m_slotNumHasBeenSet = true;
}

bool HyperParameter::SlotNumHasBeenSet() const
{
    return m_slotNumHasBeenSet;
}

string HyperParameter::GetCpuCachePercentage() const
{
    return m_cpuCachePercentage;
}

void HyperParameter::SetCpuCachePercentage(const string& _cpuCachePercentage)
{
    m_cpuCachePercentage = _cpuCachePercentage;
    m_cpuCachePercentageHasBeenSet = true;
}

bool HyperParameter::CpuCachePercentageHasBeenSet() const
{
    return m_cpuCachePercentageHasBeenSet;
}

string HyperParameter::GetGpuCachePercentage() const
{
    return m_gpuCachePercentage;
}

void HyperParameter::SetGpuCachePercentage(const string& _gpuCachePercentage)
{
    m_gpuCachePercentage = _gpuCachePercentage;
    m_gpuCachePercentageHasBeenSet = true;
}

bool HyperParameter::GpuCachePercentageHasBeenSet() const
{
    return m_gpuCachePercentageHasBeenSet;
}

string HyperParameter::GetEnableDistributed() const
{
    return m_enableDistributed;
}

void HyperParameter::SetEnableDistributed(const string& _enableDistributed)
{
    m_enableDistributed = _enableDistributed;
    m_enableDistributedHasBeenSet = true;
}

bool HyperParameter::EnableDistributedHasBeenSet() const
{
    return m_enableDistributedHasBeenSet;
}

string HyperParameter::GetMinBlockSizePt() const
{
    return m_minBlockSizePt;
}

void HyperParameter::SetMinBlockSizePt(const string& _minBlockSizePt)
{
    m_minBlockSizePt = _minBlockSizePt;
    m_minBlockSizePtHasBeenSet = true;
}

bool HyperParameter::MinBlockSizePtHasBeenSet() const
{
    return m_minBlockSizePtHasBeenSet;
}

string HyperParameter::GetMinBlockSizeTf() const
{
    return m_minBlockSizeTf;
}

void HyperParameter::SetMinBlockSizeTf(const string& _minBlockSizeTf)
{
    m_minBlockSizeTf = _minBlockSizeTf;
    m_minBlockSizeTfHasBeenSet = true;
}

bool HyperParameter::MinBlockSizeTfHasBeenSet() const
{
    return m_minBlockSizeTfHasBeenSet;
}

string HyperParameter::GetPipelineArgs() const
{
    return m_pipelineArgs;
}

void HyperParameter::SetPipelineArgs(const string& _pipelineArgs)
{
    m_pipelineArgs = _pipelineArgs;
    m_pipelineArgsHasBeenSet = true;
}

bool HyperParameter::PipelineArgsHasBeenSet() const
{
    return m_pipelineArgsHasBeenSet;
}

string HyperParameter::GetLoraScale() const
{
    return m_loraScale;
}

void HyperParameter::SetLoraScale(const string& _loraScale)
{
    m_loraScale = _loraScale;
    m_loraScaleHasBeenSet = true;
}

bool HyperParameter::LoraScaleHasBeenSet() const
{
    return m_loraScaleHasBeenSet;
}

