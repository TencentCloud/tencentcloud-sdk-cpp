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

#include <tencentcloud/live/v20180801/model/CasterOutputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CasterOutputInfo::CasterOutputInfo() :
    m_outputIndexHasBeenSet(false),
    m_outputUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_outputStreamIdHasBeenSet(false),
    m_outputTypeHasBeenSet(false),
    m_outputDomainNameHasBeenSet(false),
    m_outputAppNameHasBeenSet(false),
    m_outputParamHasBeenSet(false)
{
}

CoreInternalOutcome CasterOutputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputIndex") && !value["OutputIndex"].IsNull())
    {
        if (!value["OutputIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterOutputInfo.OutputIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputIndex = value["OutputIndex"].GetUint64();
        m_outputIndexHasBeenSet = true;
    }

    if (value.HasMember("OutputUrl") && !value["OutputUrl"].IsNull())
    {
        if (!value["OutputUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterOutputInfo.OutputUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputUrl = string(value["OutputUrl"].GetString());
        m_outputUrlHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterOutputInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("OutputStreamId") && !value["OutputStreamId"].IsNull())
    {
        if (!value["OutputStreamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterOutputInfo.OutputStreamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputStreamId = string(value["OutputStreamId"].GetString());
        m_outputStreamIdHasBeenSet = true;
    }

    if (value.HasMember("OutputType") && !value["OutputType"].IsNull())
    {
        if (!value["OutputType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterOutputInfo.OutputType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputType = value["OutputType"].GetUint64();
        m_outputTypeHasBeenSet = true;
    }

    if (value.HasMember("OutputDomainName") && !value["OutputDomainName"].IsNull())
    {
        if (!value["OutputDomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterOutputInfo.OutputDomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputDomainName = string(value["OutputDomainName"].GetString());
        m_outputDomainNameHasBeenSet = true;
    }

    if (value.HasMember("OutputAppName") && !value["OutputAppName"].IsNull())
    {
        if (!value["OutputAppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterOutputInfo.OutputAppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputAppName = string(value["OutputAppName"].GetString());
        m_outputAppNameHasBeenSet = true;
    }

    if (value.HasMember("OutputParam") && !value["OutputParam"].IsNull())
    {
        if (!value["OutputParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterOutputInfo.OutputParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputParam = string(value["OutputParam"].GetString());
        m_outputParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CasterOutputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputIndex, allocator);
    }

    if (m_outputUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_outputStreamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStreamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputStreamId.c_str(), allocator).Move(), allocator);
    }

    if (m_outputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputType, allocator);
    }

    if (m_outputDomainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputDomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputDomainName.c_str(), allocator).Move(), allocator);
    }

    if (m_outputAppNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputAppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputAppName.c_str(), allocator).Move(), allocator);
    }

    if (m_outputParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputParam.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CasterOutputInfo::GetOutputIndex() const
{
    return m_outputIndex;
}

void CasterOutputInfo::SetOutputIndex(const uint64_t& _outputIndex)
{
    m_outputIndex = _outputIndex;
    m_outputIndexHasBeenSet = true;
}

bool CasterOutputInfo::OutputIndexHasBeenSet() const
{
    return m_outputIndexHasBeenSet;
}

string CasterOutputInfo::GetOutputUrl() const
{
    return m_outputUrl;
}

void CasterOutputInfo::SetOutputUrl(const string& _outputUrl)
{
    m_outputUrl = _outputUrl;
    m_outputUrlHasBeenSet = true;
}

bool CasterOutputInfo::OutputUrlHasBeenSet() const
{
    return m_outputUrlHasBeenSet;
}

string CasterOutputInfo::GetDescription() const
{
    return m_description;
}

void CasterOutputInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CasterOutputInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CasterOutputInfo::GetOutputStreamId() const
{
    return m_outputStreamId;
}

void CasterOutputInfo::SetOutputStreamId(const string& _outputStreamId)
{
    m_outputStreamId = _outputStreamId;
    m_outputStreamIdHasBeenSet = true;
}

bool CasterOutputInfo::OutputStreamIdHasBeenSet() const
{
    return m_outputStreamIdHasBeenSet;
}

uint64_t CasterOutputInfo::GetOutputType() const
{
    return m_outputType;
}

void CasterOutputInfo::SetOutputType(const uint64_t& _outputType)
{
    m_outputType = _outputType;
    m_outputTypeHasBeenSet = true;
}

bool CasterOutputInfo::OutputTypeHasBeenSet() const
{
    return m_outputTypeHasBeenSet;
}

string CasterOutputInfo::GetOutputDomainName() const
{
    return m_outputDomainName;
}

void CasterOutputInfo::SetOutputDomainName(const string& _outputDomainName)
{
    m_outputDomainName = _outputDomainName;
    m_outputDomainNameHasBeenSet = true;
}

bool CasterOutputInfo::OutputDomainNameHasBeenSet() const
{
    return m_outputDomainNameHasBeenSet;
}

string CasterOutputInfo::GetOutputAppName() const
{
    return m_outputAppName;
}

void CasterOutputInfo::SetOutputAppName(const string& _outputAppName)
{
    m_outputAppName = _outputAppName;
    m_outputAppNameHasBeenSet = true;
}

bool CasterOutputInfo::OutputAppNameHasBeenSet() const
{
    return m_outputAppNameHasBeenSet;
}

string CasterOutputInfo::GetOutputParam() const
{
    return m_outputParam;
}

void CasterOutputInfo::SetOutputParam(const string& _outputParam)
{
    m_outputParam = _outputParam;
    m_outputParamHasBeenSet = true;
}

bool CasterOutputInfo::OutputParamHasBeenSet() const
{
    return m_outputParamHasBeenSet;
}

