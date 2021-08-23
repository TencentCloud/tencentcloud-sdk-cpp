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

#include <tencentcloud/ms/v20180408/model/VulList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

VulList::VulList() :
    m_vulIdHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_vulCodeHasBeenSet(false),
    m_vulDescHasBeenSet(false),
    m_vulSolutionHasBeenSet(false),
    m_vulSrcTypeHasBeenSet(false),
    m_vulFilepathHasBeenSet(false),
    m_riskLevelHasBeenSet(false)
{
}

CoreInternalOutcome VulList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulList.VulId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = string(value["VulId"].GetString());
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulList.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("VulCode") && !value["VulCode"].IsNull())
    {
        if (!value["VulCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulList.VulCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulCode = string(value["VulCode"].GetString());
        m_vulCodeHasBeenSet = true;
    }

    if (value.HasMember("VulDesc") && !value["VulDesc"].IsNull())
    {
        if (!value["VulDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulList.VulDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulDesc = string(value["VulDesc"].GetString());
        m_vulDescHasBeenSet = true;
    }

    if (value.HasMember("VulSolution") && !value["VulSolution"].IsNull())
    {
        if (!value["VulSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulList.VulSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulSolution = string(value["VulSolution"].GetString());
        m_vulSolutionHasBeenSet = true;
    }

    if (value.HasMember("VulSrcType") && !value["VulSrcType"].IsNull())
    {
        if (!value["VulSrcType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulList.VulSrcType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulSrcType = value["VulSrcType"].GetInt64();
        m_vulSrcTypeHasBeenSet = true;
    }

    if (value.HasMember("VulFilepath") && !value["VulFilepath"].IsNull())
    {
        if (!value["VulFilepath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulList.VulFilepath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulFilepath = string(value["VulFilepath"].GetString());
        m_vulFilepathHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulList.RiskLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetUint64();
        m_riskLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulId.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulCode.c_str(), allocator).Move(), allocator);
    }

    if (m_vulDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_vulSolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulSolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulSolution.c_str(), allocator).Move(), allocator);
    }

    if (m_vulSrcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulSrcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulSrcType, allocator);
    }

    if (m_vulFilepathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulFilepath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulFilepath.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

}


string VulList::GetVulId() const
{
    return m_vulId;
}

void VulList::SetVulId(const string& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulList::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string VulList::GetVulName() const
{
    return m_vulName;
}

void VulList::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulList::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string VulList::GetVulCode() const
{
    return m_vulCode;
}

void VulList::SetVulCode(const string& _vulCode)
{
    m_vulCode = _vulCode;
    m_vulCodeHasBeenSet = true;
}

bool VulList::VulCodeHasBeenSet() const
{
    return m_vulCodeHasBeenSet;
}

string VulList::GetVulDesc() const
{
    return m_vulDesc;
}

void VulList::SetVulDesc(const string& _vulDesc)
{
    m_vulDesc = _vulDesc;
    m_vulDescHasBeenSet = true;
}

bool VulList::VulDescHasBeenSet() const
{
    return m_vulDescHasBeenSet;
}

string VulList::GetVulSolution() const
{
    return m_vulSolution;
}

void VulList::SetVulSolution(const string& _vulSolution)
{
    m_vulSolution = _vulSolution;
    m_vulSolutionHasBeenSet = true;
}

bool VulList::VulSolutionHasBeenSet() const
{
    return m_vulSolutionHasBeenSet;
}

int64_t VulList::GetVulSrcType() const
{
    return m_vulSrcType;
}

void VulList::SetVulSrcType(const int64_t& _vulSrcType)
{
    m_vulSrcType = _vulSrcType;
    m_vulSrcTypeHasBeenSet = true;
}

bool VulList::VulSrcTypeHasBeenSet() const
{
    return m_vulSrcTypeHasBeenSet;
}

string VulList::GetVulFilepath() const
{
    return m_vulFilepath;
}

void VulList::SetVulFilepath(const string& _vulFilepath)
{
    m_vulFilepath = _vulFilepath;
    m_vulFilepathHasBeenSet = true;
}

bool VulList::VulFilepathHasBeenSet() const
{
    return m_vulFilepathHasBeenSet;
}

uint64_t VulList::GetRiskLevel() const
{
    return m_riskLevel;
}

void VulList::SetRiskLevel(const uint64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool VulList::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

