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

#include <tencentcloud/ccc/v20200210/model/AICallExtractResultElement.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AICallExtractResultElement::AICallExtractResultElement() :
    m_infoTypeHasBeenSet(false),
    m_infoNameHasBeenSet(false),
    m_infoContentHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome AICallExtractResultElement::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InfoType") && !value["InfoType"].IsNull())
    {
        if (!value["InfoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallExtractResultElement.InfoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_infoType = string(value["InfoType"].GetString());
        m_infoTypeHasBeenSet = true;
    }

    if (value.HasMember("InfoName") && !value["InfoName"].IsNull())
    {
        if (!value["InfoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallExtractResultElement.InfoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_infoName = string(value["InfoName"].GetString());
        m_infoNameHasBeenSet = true;
    }

    if (value.HasMember("InfoContent") && !value["InfoContent"].IsNull())
    {
        if (!value["InfoContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallExtractResultElement.InfoContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_infoContent = string(value["InfoContent"].GetString());
        m_infoContentHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AICallExtractResultElement.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AICallExtractResultElement::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_infoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_infoType.c_str(), allocator).Move(), allocator);
    }

    if (m_infoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_infoName.c_str(), allocator).Move(), allocator);
    }

    if (m_infoContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_infoContent.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AICallExtractResultElement::GetInfoType() const
{
    return m_infoType;
}

void AICallExtractResultElement::SetInfoType(const string& _infoType)
{
    m_infoType = _infoType;
    m_infoTypeHasBeenSet = true;
}

bool AICallExtractResultElement::InfoTypeHasBeenSet() const
{
    return m_infoTypeHasBeenSet;
}

string AICallExtractResultElement::GetInfoName() const
{
    return m_infoName;
}

void AICallExtractResultElement::SetInfoName(const string& _infoName)
{
    m_infoName = _infoName;
    m_infoNameHasBeenSet = true;
}

bool AICallExtractResultElement::InfoNameHasBeenSet() const
{
    return m_infoNameHasBeenSet;
}

string AICallExtractResultElement::GetInfoContent() const
{
    return m_infoContent;
}

void AICallExtractResultElement::SetInfoContent(const string& _infoContent)
{
    m_infoContent = _infoContent;
    m_infoContentHasBeenSet = true;
}

bool AICallExtractResultElement::InfoContentHasBeenSet() const
{
    return m_infoContentHasBeenSet;
}

AICallExtractResultInfo AICallExtractResultElement::GetResult() const
{
    return m_result;
}

void AICallExtractResultElement::SetResult(const AICallExtractResultInfo& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool AICallExtractResultElement::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

