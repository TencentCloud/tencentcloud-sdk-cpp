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

#include <tencentcloud/lkeap/v20240522/model/CreateSplitDocumentFlowConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

CreateSplitDocumentFlowConfig::CreateSplitDocumentFlowConfig() :
    m_tableResultTypeHasBeenSet(false),
    m_resultTypeHasBeenSet(false),
    m_enableMllmHasBeenSet(false),
    m_maxChunkSizeHasBeenSet(false)
{
}

CoreInternalOutcome CreateSplitDocumentFlowConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableResultType") && !value["TableResultType"].IsNull())
    {
        if (!value["TableResultType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateSplitDocumentFlowConfig.TableResultType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableResultType = string(value["TableResultType"].GetString());
        m_tableResultTypeHasBeenSet = true;
    }

    if (value.HasMember("ResultType") && !value["ResultType"].IsNull())
    {
        if (!value["ResultType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateSplitDocumentFlowConfig.ResultType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultType = string(value["ResultType"].GetString());
        m_resultTypeHasBeenSet = true;
    }

    if (value.HasMember("EnableMllm") && !value["EnableMllm"].IsNull())
    {
        if (!value["EnableMllm"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateSplitDocumentFlowConfig.EnableMllm` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableMllm = value["EnableMllm"].GetBool();
        m_enableMllmHasBeenSet = true;
    }

    if (value.HasMember("MaxChunkSize") && !value["MaxChunkSize"].IsNull())
    {
        if (!value["MaxChunkSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateSplitDocumentFlowConfig.MaxChunkSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxChunkSize = value["MaxChunkSize"].GetInt64();
        m_maxChunkSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateSplitDocumentFlowConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableResultTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableResultType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableResultType.c_str(), allocator).Move(), allocator);
    }

    if (m_resultTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultType.c_str(), allocator).Move(), allocator);
    }

    if (m_enableMllmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMllm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMllm, allocator);
    }

    if (m_maxChunkSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxChunkSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxChunkSize, allocator);
    }

}


string CreateSplitDocumentFlowConfig::GetTableResultType() const
{
    return m_tableResultType;
}

void CreateSplitDocumentFlowConfig::SetTableResultType(const string& _tableResultType)
{
    m_tableResultType = _tableResultType;
    m_tableResultTypeHasBeenSet = true;
}

bool CreateSplitDocumentFlowConfig::TableResultTypeHasBeenSet() const
{
    return m_tableResultTypeHasBeenSet;
}

string CreateSplitDocumentFlowConfig::GetResultType() const
{
    return m_resultType;
}

void CreateSplitDocumentFlowConfig::SetResultType(const string& _resultType)
{
    m_resultType = _resultType;
    m_resultTypeHasBeenSet = true;
}

bool CreateSplitDocumentFlowConfig::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

bool CreateSplitDocumentFlowConfig::GetEnableMllm() const
{
    return m_enableMllm;
}

void CreateSplitDocumentFlowConfig::SetEnableMllm(const bool& _enableMllm)
{
    m_enableMllm = _enableMllm;
    m_enableMllmHasBeenSet = true;
}

bool CreateSplitDocumentFlowConfig::EnableMllmHasBeenSet() const
{
    return m_enableMllmHasBeenSet;
}

int64_t CreateSplitDocumentFlowConfig::GetMaxChunkSize() const
{
    return m_maxChunkSize;
}

void CreateSplitDocumentFlowConfig::SetMaxChunkSize(const int64_t& _maxChunkSize)
{
    m_maxChunkSize = _maxChunkSize;
    m_maxChunkSizeHasBeenSet = true;
}

bool CreateSplitDocumentFlowConfig::MaxChunkSizeHasBeenSet() const
{
    return m_maxChunkSizeHasBeenSet;
}

