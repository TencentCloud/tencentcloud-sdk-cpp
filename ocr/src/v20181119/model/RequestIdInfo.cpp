/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ocr/v20181119/model/RequestIdInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RequestIdInfo::RequestIdInfo() :
    m_apiRequestIdHasBeenSet(false),
    m_apiErrorCodeHasBeenSet(false),
    m_warnCodesHasBeenSet(false)
{
}

CoreInternalOutcome RequestIdInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiRequestId") && !value["ApiRequestId"].IsNull())
    {
        if (!value["ApiRequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestIdInfo.ApiRequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiRequestId = string(value["ApiRequestId"].GetString());
        m_apiRequestIdHasBeenSet = true;
    }

    if (value.HasMember("ApiErrorCode") && !value["ApiErrorCode"].IsNull())
    {
        if (!value["ApiErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestIdInfo.ApiErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiErrorCode = string(value["ApiErrorCode"].GetString());
        m_apiErrorCodeHasBeenSet = true;
    }

    if (value.HasMember("WarnCodes") && !value["WarnCodes"].IsNull())
    {
        if (!value["WarnCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RequestIdInfo.WarnCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["WarnCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warnCodes.push_back((*itr).GetInt64());
        }
        m_warnCodesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RequestIdInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiRequestId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiErrorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiErrorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_warnCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_warnCodes.begin(); itr != m_warnCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string RequestIdInfo::GetApiRequestId() const
{
    return m_apiRequestId;
}

void RequestIdInfo::SetApiRequestId(const string& _apiRequestId)
{
    m_apiRequestId = _apiRequestId;
    m_apiRequestIdHasBeenSet = true;
}

bool RequestIdInfo::ApiRequestIdHasBeenSet() const
{
    return m_apiRequestIdHasBeenSet;
}

string RequestIdInfo::GetApiErrorCode() const
{
    return m_apiErrorCode;
}

void RequestIdInfo::SetApiErrorCode(const string& _apiErrorCode)
{
    m_apiErrorCode = _apiErrorCode;
    m_apiErrorCodeHasBeenSet = true;
}

bool RequestIdInfo::ApiErrorCodeHasBeenSet() const
{
    return m_apiErrorCodeHasBeenSet;
}

vector<int64_t> RequestIdInfo::GetWarnCodes() const
{
    return m_warnCodes;
}

void RequestIdInfo::SetWarnCodes(const vector<int64_t>& _warnCodes)
{
    m_warnCodes = _warnCodes;
    m_warnCodesHasBeenSet = true;
}

bool RequestIdInfo::WarnCodesHasBeenSet() const
{
    return m_warnCodesHasBeenSet;
}

