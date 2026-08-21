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

#include <tencentcloud/csip/v20221121/model/ModifyCSIPLicenseUnBindsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyCSIPLicenseUnBindsResponse::ModifyCSIPLicenseUnBindsResponse() :
    m_totalHasBeenSet(false),
    m_successNumHasBeenSet(false),
    m_failedNumHasBeenSet(false),
    m_failedListHasBeenSet(false)
{
}

CoreInternalOutcome ModifyCSIPLicenseUnBindsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessNum") && !rsp["SuccessNum"].IsNull())
    {
        if (!rsp["SuccessNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successNum = rsp["SuccessNum"].GetInt64();
        m_successNumHasBeenSet = true;
    }

    if (rsp.HasMember("FailedNum") && !rsp["FailedNum"].IsNull())
    {
        if (!rsp["FailedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FailedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedNum = rsp["FailedNum"].GetInt64();
        m_failedNumHasBeenSet = true;
    }

    if (rsp.HasMember("FailedList") && !rsp["FailedList"].IsNull())
    {
        if (!rsp["FailedList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailedList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailedList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LicenseUnbindFailedItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failedList.push_back(item);
        }
        m_failedListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyCSIPLicenseUnBindsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_successNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successNum, allocator);
    }

    if (m_failedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedNum, allocator);
    }

    if (m_failedListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failedList.begin(); itr != m_failedList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyCSIPLicenseUnBindsResponse::GetTotal() const
{
    return m_total;
}

bool ModifyCSIPLicenseUnBindsResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t ModifyCSIPLicenseUnBindsResponse::GetSuccessNum() const
{
    return m_successNum;
}

bool ModifyCSIPLicenseUnBindsResponse::SuccessNumHasBeenSet() const
{
    return m_successNumHasBeenSet;
}

int64_t ModifyCSIPLicenseUnBindsResponse::GetFailedNum() const
{
    return m_failedNum;
}

bool ModifyCSIPLicenseUnBindsResponse::FailedNumHasBeenSet() const
{
    return m_failedNumHasBeenSet;
}

vector<LicenseUnbindFailedItem> ModifyCSIPLicenseUnBindsResponse::GetFailedList() const
{
    return m_failedList;
}

bool ModifyCSIPLicenseUnBindsResponse::FailedListHasBeenSet() const
{
    return m_failedListHasBeenSet;
}


