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

#include <tencentcloud/wedata/v20210820/model/BooleanResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BooleanResponse::BooleanResponse() :
    m_successHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_baselineIdHasBeenSet(false),
    m_codeHasBeenSet(false)
{
}

CoreInternalOutcome BooleanResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Success") && !value["Success"].IsNull())
    {
        if (!value["Success"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BooleanResponse.Success` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_success = value["Success"].GetBool();
        m_successHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BooleanResponse.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("BaselineId") && !value["BaselineId"].IsNull())
    {
        if (!value["BaselineId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BooleanResponse.BaselineId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineId = value["BaselineId"].GetInt64();
        m_baselineIdHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BooleanResponse.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BooleanResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_success, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineId, allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

}


bool BooleanResponse::GetSuccess() const
{
    return m_success;
}

void BooleanResponse::SetSuccess(const bool& _success)
{
    m_success = _success;
    m_successHasBeenSet = true;
}

bool BooleanResponse::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

string BooleanResponse::GetMessage() const
{
    return m_message;
}

void BooleanResponse::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool BooleanResponse::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t BooleanResponse::GetBaselineId() const
{
    return m_baselineId;
}

void BooleanResponse::SetBaselineId(const int64_t& _baselineId)
{
    m_baselineId = _baselineId;
    m_baselineIdHasBeenSet = true;
}

bool BooleanResponse::BaselineIdHasBeenSet() const
{
    return m_baselineIdHasBeenSet;
}

string BooleanResponse::GetCode() const
{
    return m_code;
}

void BooleanResponse::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool BooleanResponse::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

