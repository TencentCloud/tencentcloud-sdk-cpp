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

#include <tencentcloud/cat/v20180409/model/CatReturnSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

CatReturnSummary::CatReturnSummary() :
    m_resultCountHasBeenSet(false),
    m_resultCodeHasBeenSet(false),
    m_errorReasonHasBeenSet(false)
{
}

CoreInternalOutcome CatReturnSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResultCount") && !value["ResultCount"].IsNull())
    {
        if (!value["ResultCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CatReturnSummary.ResultCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCount = value["ResultCount"].GetUint64();
        m_resultCountHasBeenSet = true;
    }

    if (value.HasMember("ResultCode") && !value["ResultCode"].IsNull())
    {
        if (!value["ResultCode"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CatReturnSummary.ResultCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = value["ResultCode"].GetUint64();
        m_resultCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorReason") && !value["ErrorReason"].IsNull())
    {
        if (!value["ErrorReason"].IsString())
        {
            return CoreInternalOutcome(Error("response `CatReturnSummary.ErrorReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorReason = string(value["ErrorReason"].GetString());
        m_errorReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CatReturnSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultCount, allocator);
    }

    if (m_resultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultCode, allocator);
    }

    if (m_errorReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorReason.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CatReturnSummary::GetResultCount() const
{
    return m_resultCount;
}

void CatReturnSummary::SetResultCount(const uint64_t& _resultCount)
{
    m_resultCount = _resultCount;
    m_resultCountHasBeenSet = true;
}

bool CatReturnSummary::ResultCountHasBeenSet() const
{
    return m_resultCountHasBeenSet;
}

uint64_t CatReturnSummary::GetResultCode() const
{
    return m_resultCode;
}

void CatReturnSummary::SetResultCode(const uint64_t& _resultCode)
{
    m_resultCode = _resultCode;
    m_resultCodeHasBeenSet = true;
}

bool CatReturnSummary::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

string CatReturnSummary::GetErrorReason() const
{
    return m_errorReason;
}

void CatReturnSummary::SetErrorReason(const string& _errorReason)
{
    m_errorReason = _errorReason;
    m_errorReasonHasBeenSet = true;
}

bool CatReturnSummary::ErrorReasonHasBeenSet() const
{
    return m_errorReasonHasBeenSet;
}

