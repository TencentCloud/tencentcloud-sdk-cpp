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

#include <tencentcloud/ess/v20201111/model/FlowForwardResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FlowForwardResult::FlowForwardResult() :
    m_flowIdHasBeenSet(false),
    m_errorDetailHasBeenSet(false)
{
}

CoreInternalOutcome FlowForwardResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowForwardResult.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorDetail") && !value["ErrorDetail"].IsNull())
    {
        if (!value["ErrorDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowForwardResult.ErrorDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorDetail = string(value["ErrorDetail"].GetString());
        m_errorDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowForwardResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorDetail.c_str(), allocator).Move(), allocator);
    }

}


string FlowForwardResult::GetFlowId() const
{
    return m_flowId;
}

void FlowForwardResult::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool FlowForwardResult::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string FlowForwardResult::GetErrorDetail() const
{
    return m_errorDetail;
}

void FlowForwardResult::SetErrorDetail(const string& _errorDetail)
{
    m_errorDetail = _errorDetail;
    m_errorDetailHasBeenSet = true;
}

bool FlowForwardResult::ErrorDetailHasBeenSet() const
{
    return m_errorDetailHasBeenSet;
}

