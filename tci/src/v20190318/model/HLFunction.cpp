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

#include <tencentcloud/tci/v20190318/model/HLFunction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

HLFunction::HLFunction() :
    m_enableFaceDetectHasBeenSet(false),
    m_enableFaceExpressionHasBeenSet(false),
    m_enableFaceIdentHasBeenSet(false),
    m_enableKeywordWonderfulTimeHasBeenSet(false),
    m_enableSmileWonderfulTimeHasBeenSet(false)
{
}

CoreInternalOutcome HLFunction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableFaceDetect") && !value["EnableFaceDetect"].IsNull())
    {
        if (!value["EnableFaceDetect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HLFunction.EnableFaceDetect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableFaceDetect = value["EnableFaceDetect"].GetBool();
        m_enableFaceDetectHasBeenSet = true;
    }

    if (value.HasMember("EnableFaceExpression") && !value["EnableFaceExpression"].IsNull())
    {
        if (!value["EnableFaceExpression"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HLFunction.EnableFaceExpression` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableFaceExpression = value["EnableFaceExpression"].GetBool();
        m_enableFaceExpressionHasBeenSet = true;
    }

    if (value.HasMember("EnableFaceIdent") && !value["EnableFaceIdent"].IsNull())
    {
        if (!value["EnableFaceIdent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HLFunction.EnableFaceIdent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableFaceIdent = value["EnableFaceIdent"].GetBool();
        m_enableFaceIdentHasBeenSet = true;
    }

    if (value.HasMember("EnableKeywordWonderfulTime") && !value["EnableKeywordWonderfulTime"].IsNull())
    {
        if (!value["EnableKeywordWonderfulTime"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HLFunction.EnableKeywordWonderfulTime` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableKeywordWonderfulTime = value["EnableKeywordWonderfulTime"].GetBool();
        m_enableKeywordWonderfulTimeHasBeenSet = true;
    }

    if (value.HasMember("EnableSmileWonderfulTime") && !value["EnableSmileWonderfulTime"].IsNull())
    {
        if (!value["EnableSmileWonderfulTime"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HLFunction.EnableSmileWonderfulTime` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSmileWonderfulTime = value["EnableSmileWonderfulTime"].GetBool();
        m_enableSmileWonderfulTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HLFunction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableFaceDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFaceDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFaceDetect, allocator);
    }

    if (m_enableFaceExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFaceExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFaceExpression, allocator);
    }

    if (m_enableFaceIdentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFaceIdent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFaceIdent, allocator);
    }

    if (m_enableKeywordWonderfulTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableKeywordWonderfulTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableKeywordWonderfulTime, allocator);
    }

    if (m_enableSmileWonderfulTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSmileWonderfulTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSmileWonderfulTime, allocator);
    }

}


bool HLFunction::GetEnableFaceDetect() const
{
    return m_enableFaceDetect;
}

void HLFunction::SetEnableFaceDetect(const bool& _enableFaceDetect)
{
    m_enableFaceDetect = _enableFaceDetect;
    m_enableFaceDetectHasBeenSet = true;
}

bool HLFunction::EnableFaceDetectHasBeenSet() const
{
    return m_enableFaceDetectHasBeenSet;
}

bool HLFunction::GetEnableFaceExpression() const
{
    return m_enableFaceExpression;
}

void HLFunction::SetEnableFaceExpression(const bool& _enableFaceExpression)
{
    m_enableFaceExpression = _enableFaceExpression;
    m_enableFaceExpressionHasBeenSet = true;
}

bool HLFunction::EnableFaceExpressionHasBeenSet() const
{
    return m_enableFaceExpressionHasBeenSet;
}

bool HLFunction::GetEnableFaceIdent() const
{
    return m_enableFaceIdent;
}

void HLFunction::SetEnableFaceIdent(const bool& _enableFaceIdent)
{
    m_enableFaceIdent = _enableFaceIdent;
    m_enableFaceIdentHasBeenSet = true;
}

bool HLFunction::EnableFaceIdentHasBeenSet() const
{
    return m_enableFaceIdentHasBeenSet;
}

bool HLFunction::GetEnableKeywordWonderfulTime() const
{
    return m_enableKeywordWonderfulTime;
}

void HLFunction::SetEnableKeywordWonderfulTime(const bool& _enableKeywordWonderfulTime)
{
    m_enableKeywordWonderfulTime = _enableKeywordWonderfulTime;
    m_enableKeywordWonderfulTimeHasBeenSet = true;
}

bool HLFunction::EnableKeywordWonderfulTimeHasBeenSet() const
{
    return m_enableKeywordWonderfulTimeHasBeenSet;
}

bool HLFunction::GetEnableSmileWonderfulTime() const
{
    return m_enableSmileWonderfulTime;
}

void HLFunction::SetEnableSmileWonderfulTime(const bool& _enableSmileWonderfulTime)
{
    m_enableSmileWonderfulTime = _enableSmileWonderfulTime;
    m_enableSmileWonderfulTimeHasBeenSet = true;
}

bool HLFunction::EnableSmileWonderfulTimeHasBeenSet() const
{
    return m_enableSmileWonderfulTimeHasBeenSet;
}

