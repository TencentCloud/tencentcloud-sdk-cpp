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

#include <tencentcloud/teo/v20220901/model/ReturnCustomPageActionParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ReturnCustomPageActionParameters::ReturnCustomPageActionParameters() :
    m_responseCodeHasBeenSet(false),
    m_errorPageIdHasBeenSet(false)
{
}

CoreInternalOutcome ReturnCustomPageActionParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResponseCode") && !value["ResponseCode"].IsNull())
    {
        if (!value["ResponseCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReturnCustomPageActionParameters.ResponseCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseCode = string(value["ResponseCode"].GetString());
        m_responseCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorPageId") && !value["ErrorPageId"].IsNull())
    {
        if (!value["ErrorPageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReturnCustomPageActionParameters.ErrorPageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorPageId = string(value["ErrorPageId"].GetString());
        m_errorPageIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReturnCustomPageActionParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_responseCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorPageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorPageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorPageId.c_str(), allocator).Move(), allocator);
    }

}


string ReturnCustomPageActionParameters::GetResponseCode() const
{
    return m_responseCode;
}

void ReturnCustomPageActionParameters::SetResponseCode(const string& _responseCode)
{
    m_responseCode = _responseCode;
    m_responseCodeHasBeenSet = true;
}

bool ReturnCustomPageActionParameters::ResponseCodeHasBeenSet() const
{
    return m_responseCodeHasBeenSet;
}

string ReturnCustomPageActionParameters::GetErrorPageId() const
{
    return m_errorPageId;
}

void ReturnCustomPageActionParameters::SetErrorPageId(const string& _errorPageId)
{
    m_errorPageId = _errorPageId;
    m_errorPageIdHasBeenSet = true;
}

bool ReturnCustomPageActionParameters::ErrorPageIdHasBeenSet() const
{
    return m_errorPageIdHasBeenSet;
}

