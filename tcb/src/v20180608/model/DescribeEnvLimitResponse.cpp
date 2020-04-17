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

#include <tencentcloud/tcb/v20180608/model/DescribeEnvLimitResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

DescribeEnvLimitResponse::DescribeEnvLimitResponse() :
    m_maxEnvNumHasBeenSet(false),
    m_currentEnvNumHasBeenSet(false),
    m_maxFreeEnvNumHasBeenSet(false),
    m_currentFreeEnvNumHasBeenSet(false),
    m_maxDeleteTotalHasBeenSet(false),
    m_currentDeleteTotalHasBeenSet(false),
    m_maxDeleteMonthlyHasBeenSet(false),
    m_currentDeleteMonthlyHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEnvLimitResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("MaxEnvNum") && !rsp["MaxEnvNum"].IsNull())
    {
        if (!rsp["MaxEnvNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MaxEnvNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxEnvNum = rsp["MaxEnvNum"].GetInt64();
        m_maxEnvNumHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentEnvNum") && !rsp["CurrentEnvNum"].IsNull())
    {
        if (!rsp["CurrentEnvNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CurrentEnvNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentEnvNum = rsp["CurrentEnvNum"].GetInt64();
        m_currentEnvNumHasBeenSet = true;
    }

    if (rsp.HasMember("MaxFreeEnvNum") && !rsp["MaxFreeEnvNum"].IsNull())
    {
        if (!rsp["MaxFreeEnvNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MaxFreeEnvNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxFreeEnvNum = rsp["MaxFreeEnvNum"].GetInt64();
        m_maxFreeEnvNumHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentFreeEnvNum") && !rsp["CurrentFreeEnvNum"].IsNull())
    {
        if (!rsp["CurrentFreeEnvNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CurrentFreeEnvNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentFreeEnvNum = rsp["CurrentFreeEnvNum"].GetInt64();
        m_currentFreeEnvNumHasBeenSet = true;
    }

    if (rsp.HasMember("MaxDeleteTotal") && !rsp["MaxDeleteTotal"].IsNull())
    {
        if (!rsp["MaxDeleteTotal"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MaxDeleteTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDeleteTotal = rsp["MaxDeleteTotal"].GetInt64();
        m_maxDeleteTotalHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentDeleteTotal") && !rsp["CurrentDeleteTotal"].IsNull())
    {
        if (!rsp["CurrentDeleteTotal"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CurrentDeleteTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentDeleteTotal = rsp["CurrentDeleteTotal"].GetInt64();
        m_currentDeleteTotalHasBeenSet = true;
    }

    if (rsp.HasMember("MaxDeleteMonthly") && !rsp["MaxDeleteMonthly"].IsNull())
    {
        if (!rsp["MaxDeleteMonthly"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MaxDeleteMonthly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDeleteMonthly = rsp["MaxDeleteMonthly"].GetInt64();
        m_maxDeleteMonthlyHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentDeleteMonthly") && !rsp["CurrentDeleteMonthly"].IsNull())
    {
        if (!rsp["CurrentDeleteMonthly"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CurrentDeleteMonthly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentDeleteMonthly = rsp["CurrentDeleteMonthly"].GetInt64();
        m_currentDeleteMonthlyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeEnvLimitResponse::GetMaxEnvNum() const
{
    return m_maxEnvNum;
}

bool DescribeEnvLimitResponse::MaxEnvNumHasBeenSet() const
{
    return m_maxEnvNumHasBeenSet;
}

int64_t DescribeEnvLimitResponse::GetCurrentEnvNum() const
{
    return m_currentEnvNum;
}

bool DescribeEnvLimitResponse::CurrentEnvNumHasBeenSet() const
{
    return m_currentEnvNumHasBeenSet;
}

int64_t DescribeEnvLimitResponse::GetMaxFreeEnvNum() const
{
    return m_maxFreeEnvNum;
}

bool DescribeEnvLimitResponse::MaxFreeEnvNumHasBeenSet() const
{
    return m_maxFreeEnvNumHasBeenSet;
}

int64_t DescribeEnvLimitResponse::GetCurrentFreeEnvNum() const
{
    return m_currentFreeEnvNum;
}

bool DescribeEnvLimitResponse::CurrentFreeEnvNumHasBeenSet() const
{
    return m_currentFreeEnvNumHasBeenSet;
}

int64_t DescribeEnvLimitResponse::GetMaxDeleteTotal() const
{
    return m_maxDeleteTotal;
}

bool DescribeEnvLimitResponse::MaxDeleteTotalHasBeenSet() const
{
    return m_maxDeleteTotalHasBeenSet;
}

int64_t DescribeEnvLimitResponse::GetCurrentDeleteTotal() const
{
    return m_currentDeleteTotal;
}

bool DescribeEnvLimitResponse::CurrentDeleteTotalHasBeenSet() const
{
    return m_currentDeleteTotalHasBeenSet;
}

int64_t DescribeEnvLimitResponse::GetMaxDeleteMonthly() const
{
    return m_maxDeleteMonthly;
}

bool DescribeEnvLimitResponse::MaxDeleteMonthlyHasBeenSet() const
{
    return m_maxDeleteMonthlyHasBeenSet;
}

int64_t DescribeEnvLimitResponse::GetCurrentDeleteMonthly() const
{
    return m_currentDeleteMonthly;
}

bool DescribeEnvLimitResponse::CurrentDeleteMonthlyHasBeenSet() const
{
    return m_currentDeleteMonthlyHasBeenSet;
}


