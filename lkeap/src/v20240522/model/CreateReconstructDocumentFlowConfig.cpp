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

#include <tencentcloud/lkeap/v20240522/model/CreateReconstructDocumentFlowConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

CreateReconstructDocumentFlowConfig::CreateReconstructDocumentFlowConfig() :
    m_tableResultTypeHasBeenSet(false),
    m_resultTypeHasBeenSet(false)
{
}

CoreInternalOutcome CreateReconstructDocumentFlowConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableResultType") && !value["TableResultType"].IsNull())
    {
        if (!value["TableResultType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateReconstructDocumentFlowConfig.TableResultType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableResultType = string(value["TableResultType"].GetString());
        m_tableResultTypeHasBeenSet = true;
    }

    if (value.HasMember("ResultType") && !value["ResultType"].IsNull())
    {
        if (!value["ResultType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateReconstructDocumentFlowConfig.ResultType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultType = string(value["ResultType"].GetString());
        m_resultTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateReconstructDocumentFlowConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string CreateReconstructDocumentFlowConfig::GetTableResultType() const
{
    return m_tableResultType;
}

void CreateReconstructDocumentFlowConfig::SetTableResultType(const string& _tableResultType)
{
    m_tableResultType = _tableResultType;
    m_tableResultTypeHasBeenSet = true;
}

bool CreateReconstructDocumentFlowConfig::TableResultTypeHasBeenSet() const
{
    return m_tableResultTypeHasBeenSet;
}

string CreateReconstructDocumentFlowConfig::GetResultType() const
{
    return m_resultType;
}

void CreateReconstructDocumentFlowConfig::SetResultType(const string& _resultType)
{
    m_resultType = _resultType;
    m_resultTypeHasBeenSet = true;
}

bool CreateReconstructDocumentFlowConfig::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

