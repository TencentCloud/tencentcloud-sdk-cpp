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

#include <tencentcloud/dts/v20180330/model/ErrorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace std;

ErrorInfo::ErrorInfo() :
    m_errorLogHasBeenSet(false),
    m_helpDocHasBeenSet(false)
{
}

CoreInternalOutcome ErrorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrorLog") && !value["ErrorLog"].IsNull())
    {
        if (!value["ErrorLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfo.ErrorLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorLog = string(value["ErrorLog"].GetString());
        m_errorLogHasBeenSet = true;
    }

    if (value.HasMember("HelpDoc") && !value["HelpDoc"].IsNull())
    {
        if (!value["HelpDoc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfo.HelpDoc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_helpDoc = string(value["HelpDoc"].GetString());
        m_helpDocHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errorLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorLog.c_str(), allocator).Move(), allocator);
    }

    if (m_helpDocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HelpDoc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_helpDoc.c_str(), allocator).Move(), allocator);
    }

}


string ErrorInfo::GetErrorLog() const
{
    return m_errorLog;
}

void ErrorInfo::SetErrorLog(const string& _errorLog)
{
    m_errorLog = _errorLog;
    m_errorLogHasBeenSet = true;
}

bool ErrorInfo::ErrorLogHasBeenSet() const
{
    return m_errorLogHasBeenSet;
}

string ErrorInfo::GetHelpDoc() const
{
    return m_helpDoc;
}

void ErrorInfo::SetHelpDoc(const string& _helpDoc)
{
    m_helpDoc = _helpDoc;
    m_helpDocHasBeenSet = true;
}

bool ErrorInfo::HelpDocHasBeenSet() const
{
    return m_helpDocHasBeenSet;
}

