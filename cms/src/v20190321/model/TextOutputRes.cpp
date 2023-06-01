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

#include <tencentcloud/cms/v20190321/model/TextOutputRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

TextOutputRes::TextOutputRes() :
    m_operatorHasBeenSet(false),
    m_resultTypeHasBeenSet(false),
    m_resultCodeHasBeenSet(false),
    m_resultMsgHasBeenSet(false)
{
}

CoreInternalOutcome TextOutputRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextOutputRes.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("ResultType") && !value["ResultType"].IsNull())
    {
        if (!value["ResultType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextOutputRes.ResultType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultType = value["ResultType"].GetInt64();
        m_resultTypeHasBeenSet = true;
    }

    if (value.HasMember("ResultCode") && !value["ResultCode"].IsNull())
    {
        if (!value["ResultCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextOutputRes.ResultCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = value["ResultCode"].GetInt64();
        m_resultCodeHasBeenSet = true;
    }

    if (value.HasMember("ResultMsg") && !value["ResultMsg"].IsNull())
    {
        if (!value["ResultMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextOutputRes.ResultMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultMsg = string(value["ResultMsg"].GetString());
        m_resultMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextOutputRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_resultTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultType, allocator);
    }

    if (m_resultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultCode, allocator);
    }

    if (m_resultMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultMsg.c_str(), allocator).Move(), allocator);
    }

}


string TextOutputRes::GetOperator() const
{
    return m_operator;
}

void TextOutputRes::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool TextOutputRes::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

int64_t TextOutputRes::GetResultType() const
{
    return m_resultType;
}

void TextOutputRes::SetResultType(const int64_t& _resultType)
{
    m_resultType = _resultType;
    m_resultTypeHasBeenSet = true;
}

bool TextOutputRes::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

int64_t TextOutputRes::GetResultCode() const
{
    return m_resultCode;
}

void TextOutputRes::SetResultCode(const int64_t& _resultCode)
{
    m_resultCode = _resultCode;
    m_resultCodeHasBeenSet = true;
}

bool TextOutputRes::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

string TextOutputRes::GetResultMsg() const
{
    return m_resultMsg;
}

void TextOutputRes::SetResultMsg(const string& _resultMsg)
{
    m_resultMsg = _resultMsg;
    m_resultMsgHasBeenSet = true;
}

bool TextOutputRes::ResultMsgHasBeenSet() const
{
    return m_resultMsgHasBeenSet;
}

