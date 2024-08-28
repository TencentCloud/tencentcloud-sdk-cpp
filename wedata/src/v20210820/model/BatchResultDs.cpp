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

#include <tencentcloud/wedata/v20210820/model/BatchResultDs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchResultDs::BatchResultDs() :
    m_successHasBeenSet(false),
    m_failedHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome BatchResultDs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Success") && !value["Success"].IsNull())
    {
        if (!value["Success"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchResultDs.Success` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_success = value["Success"].GetInt64();
        m_successHasBeenSet = true;
    }

    if (value.HasMember("Failed") && !value["Failed"].IsNull())
    {
        if (!value["Failed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchResultDs.Failed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failed = value["Failed"].GetInt64();
        m_failedHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchResultDs.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchResultDs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_success, allocator);
    }

    if (m_failedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Failed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failed, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

}


int64_t BatchResultDs::GetSuccess() const
{
    return m_success;
}

void BatchResultDs::SetSuccess(const int64_t& _success)
{
    m_success = _success;
    m_successHasBeenSet = true;
}

bool BatchResultDs::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

int64_t BatchResultDs::GetFailed() const
{
    return m_failed;
}

void BatchResultDs::SetFailed(const int64_t& _failed)
{
    m_failed = _failed;
    m_failedHasBeenSet = true;
}

bool BatchResultDs::FailedHasBeenSet() const
{
    return m_failedHasBeenSet;
}

int64_t BatchResultDs::GetTotal() const
{
    return m_total;
}

void BatchResultDs::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool BatchResultDs::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

