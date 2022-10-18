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

#include <tencentcloud/captcha/v20190722/model/InterceptPerTrendObj.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

InterceptPerTrendObj::InterceptPerTrendObj() :
    m_ftimeHasBeenSet(false),
    m_requestInterceptPerHasBeenSet(false),
    m_answerInterceptPerHasBeenSet(false),
    m_policyInterceptPerHasBeenSet(false)
{
}

CoreInternalOutcome InterceptPerTrendObj::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ftime") && !value["Ftime"].IsNull())
    {
        if (!value["Ftime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InterceptPerTrendObj.Ftime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ftime = string(value["Ftime"].GetString());
        m_ftimeHasBeenSet = true;
    }

    if (value.HasMember("RequestInterceptPer") && !value["RequestInterceptPer"].IsNull())
    {
        if (!value["RequestInterceptPer"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InterceptPerTrendObj.RequestInterceptPer` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_requestInterceptPer = value["RequestInterceptPer"].GetDouble();
        m_requestInterceptPerHasBeenSet = true;
    }

    if (value.HasMember("AnswerInterceptPer") && !value["AnswerInterceptPer"].IsNull())
    {
        if (!value["AnswerInterceptPer"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InterceptPerTrendObj.AnswerInterceptPer` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_answerInterceptPer = value["AnswerInterceptPer"].GetDouble();
        m_answerInterceptPerHasBeenSet = true;
    }

    if (value.HasMember("PolicyInterceptPer") && !value["PolicyInterceptPer"].IsNull())
    {
        if (!value["PolicyInterceptPer"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InterceptPerTrendObj.PolicyInterceptPer` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_policyInterceptPer = value["PolicyInterceptPer"].GetDouble();
        m_policyInterceptPerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InterceptPerTrendObj::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ftimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ftime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ftime.c_str(), allocator).Move(), allocator);
    }

    if (m_requestInterceptPerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestInterceptPer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestInterceptPer, allocator);
    }

    if (m_answerInterceptPerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnswerInterceptPer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_answerInterceptPer, allocator);
    }

    if (m_policyInterceptPerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyInterceptPer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyInterceptPer, allocator);
    }

}


string InterceptPerTrendObj::GetFtime() const
{
    return m_ftime;
}

void InterceptPerTrendObj::SetFtime(const string& _ftime)
{
    m_ftime = _ftime;
    m_ftimeHasBeenSet = true;
}

bool InterceptPerTrendObj::FtimeHasBeenSet() const
{
    return m_ftimeHasBeenSet;
}

double InterceptPerTrendObj::GetRequestInterceptPer() const
{
    return m_requestInterceptPer;
}

void InterceptPerTrendObj::SetRequestInterceptPer(const double& _requestInterceptPer)
{
    m_requestInterceptPer = _requestInterceptPer;
    m_requestInterceptPerHasBeenSet = true;
}

bool InterceptPerTrendObj::RequestInterceptPerHasBeenSet() const
{
    return m_requestInterceptPerHasBeenSet;
}

double InterceptPerTrendObj::GetAnswerInterceptPer() const
{
    return m_answerInterceptPer;
}

void InterceptPerTrendObj::SetAnswerInterceptPer(const double& _answerInterceptPer)
{
    m_answerInterceptPer = _answerInterceptPer;
    m_answerInterceptPerHasBeenSet = true;
}

bool InterceptPerTrendObj::AnswerInterceptPerHasBeenSet() const
{
    return m_answerInterceptPerHasBeenSet;
}

double InterceptPerTrendObj::GetPolicyInterceptPer() const
{
    return m_policyInterceptPer;
}

void InterceptPerTrendObj::SetPolicyInterceptPer(const double& _policyInterceptPer)
{
    m_policyInterceptPer = _policyInterceptPer;
    m_policyInterceptPerHasBeenSet = true;
}

bool InterceptPerTrendObj::PolicyInterceptPerHasBeenSet() const
{
    return m_policyInterceptPerHasBeenSet;
}

