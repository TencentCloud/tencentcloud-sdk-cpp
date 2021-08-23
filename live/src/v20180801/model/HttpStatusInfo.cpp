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

#include <tencentcloud/live/v20180801/model/HttpStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

HttpStatusInfo::HttpStatusInfo() :
    m_httpStatusHasBeenSet(false),
    m_numHasBeenSet(false)
{
}

CoreInternalOutcome HttpStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HttpStatus") && !value["HttpStatus"].IsNull())
    {
        if (!value["HttpStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpStatusInfo.HttpStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpStatus = string(value["HttpStatus"].GetString());
        m_httpStatusHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HttpStatusInfo.Num` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetUint64();
        m_numHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HttpStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_httpStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

}


string HttpStatusInfo::GetHttpStatus() const
{
    return m_httpStatus;
}

void HttpStatusInfo::SetHttpStatus(const string& _httpStatus)
{
    m_httpStatus = _httpStatus;
    m_httpStatusHasBeenSet = true;
}

bool HttpStatusInfo::HttpStatusHasBeenSet() const
{
    return m_httpStatusHasBeenSet;
}

uint64_t HttpStatusInfo::GetNum() const
{
    return m_num;
}

void HttpStatusInfo::SetNum(const uint64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool HttpStatusInfo::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

