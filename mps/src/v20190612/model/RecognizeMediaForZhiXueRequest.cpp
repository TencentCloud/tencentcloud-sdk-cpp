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

#include <tencentcloud/mps/v20190612/model/RecognizeMediaForZhiXueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

RecognizeMediaForZhiXueRequest::RecognizeMediaForZhiXueRequest() :
    m_inputInfoHasBeenSet(false),
    m_expressionConfigHasBeenSet(false),
    m_actionConfigHasBeenSet(false)
{
}

string RecognizeMediaForZhiXueRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_expressionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpressionConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expressionConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_actionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_actionConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


MediaInputInfo RecognizeMediaForZhiXueRequest::GetInputInfo() const
{
    return m_inputInfo;
}

void RecognizeMediaForZhiXueRequest::SetInputInfo(const MediaInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool RecognizeMediaForZhiXueRequest::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

ExpressionConfigInfo RecognizeMediaForZhiXueRequest::GetExpressionConfig() const
{
    return m_expressionConfig;
}

void RecognizeMediaForZhiXueRequest::SetExpressionConfig(const ExpressionConfigInfo& _expressionConfig)
{
    m_expressionConfig = _expressionConfig;
    m_expressionConfigHasBeenSet = true;
}

bool RecognizeMediaForZhiXueRequest::ExpressionConfigHasBeenSet() const
{
    return m_expressionConfigHasBeenSet;
}

ActionConfigInfo RecognizeMediaForZhiXueRequest::GetActionConfig() const
{
    return m_actionConfig;
}

void RecognizeMediaForZhiXueRequest::SetActionConfig(const ActionConfigInfo& _actionConfig)
{
    m_actionConfig = _actionConfig;
    m_actionConfigHasBeenSet = true;
}

bool RecognizeMediaForZhiXueRequest::ActionConfigHasBeenSet() const
{
    return m_actionConfigHasBeenSet;
}


