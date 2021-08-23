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
using namespace std;

DescribeEnvLimitResponse::DescribeEnvLimitResponse() :
    m_maxEnvNumHasBeenSet(false),
    m_currentEnvNumHasBeenSet(false),
    m_maxFreeEnvNumHasBeenSet(false),
    m_currentFreeEnvNumHasBeenSet(false),
    m_maxDeleteTotalHasBeenSet(false),
    m_currentDeleteTotalHasBeenSet(false),
    m_maxDeleteMonthlyHasBeenSet(false),
    m_currentDeleteMonthlyHasBeenSet(false),
    m_maxFreeTrialNumHasBeenSet(false),
    m_currentFreeTrialNumHasBeenSet(false),
    m_changePayTotalHasBeenSet(false),
    m_currentChangePayTotalHasBeenSet(false),
    m_changePayMonthlyHasBeenSet(false),
    m_currentChangePayMonthlyHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEnvLimitResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MaxEnvNum") && !rsp["MaxEnvNum"].IsNull())
    {
        if (!rsp["MaxEnvNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxEnvNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxEnvNum = rsp["MaxEnvNum"].GetInt64();
        m_maxEnvNumHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentEnvNum") && !rsp["CurrentEnvNum"].IsNull())
    {
        if (!rsp["CurrentEnvNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentEnvNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentEnvNum = rsp["CurrentEnvNum"].GetInt64();
        m_currentEnvNumHasBeenSet = true;
    }

    if (rsp.HasMember("MaxFreeEnvNum") && !rsp["MaxFreeEnvNum"].IsNull())
    {
        if (!rsp["MaxFreeEnvNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxFreeEnvNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxFreeEnvNum = rsp["MaxFreeEnvNum"].GetInt64();
        m_maxFreeEnvNumHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentFreeEnvNum") && !rsp["CurrentFreeEnvNum"].IsNull())
    {
        if (!rsp["CurrentFreeEnvNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentFreeEnvNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentFreeEnvNum = rsp["CurrentFreeEnvNum"].GetInt64();
        m_currentFreeEnvNumHasBeenSet = true;
    }

    if (rsp.HasMember("MaxDeleteTotal") && !rsp["MaxDeleteTotal"].IsNull())
    {
        if (!rsp["MaxDeleteTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxDeleteTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDeleteTotal = rsp["MaxDeleteTotal"].GetInt64();
        m_maxDeleteTotalHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentDeleteTotal") && !rsp["CurrentDeleteTotal"].IsNull())
    {
        if (!rsp["CurrentDeleteTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentDeleteTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentDeleteTotal = rsp["CurrentDeleteTotal"].GetInt64();
        m_currentDeleteTotalHasBeenSet = true;
    }

    if (rsp.HasMember("MaxDeleteMonthly") && !rsp["MaxDeleteMonthly"].IsNull())
    {
        if (!rsp["MaxDeleteMonthly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxDeleteMonthly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDeleteMonthly = rsp["MaxDeleteMonthly"].GetInt64();
        m_maxDeleteMonthlyHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentDeleteMonthly") && !rsp["CurrentDeleteMonthly"].IsNull())
    {
        if (!rsp["CurrentDeleteMonthly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentDeleteMonthly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentDeleteMonthly = rsp["CurrentDeleteMonthly"].GetInt64();
        m_currentDeleteMonthlyHasBeenSet = true;
    }

    if (rsp.HasMember("MaxFreeTrialNum") && !rsp["MaxFreeTrialNum"].IsNull())
    {
        if (!rsp["MaxFreeTrialNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxFreeTrialNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxFreeTrialNum = rsp["MaxFreeTrialNum"].GetInt64();
        m_maxFreeTrialNumHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentFreeTrialNum") && !rsp["CurrentFreeTrialNum"].IsNull())
    {
        if (!rsp["CurrentFreeTrialNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentFreeTrialNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentFreeTrialNum = rsp["CurrentFreeTrialNum"].GetInt64();
        m_currentFreeTrialNumHasBeenSet = true;
    }

    if (rsp.HasMember("ChangePayTotal") && !rsp["ChangePayTotal"].IsNull())
    {
        if (!rsp["ChangePayTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePayTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_changePayTotal = rsp["ChangePayTotal"].GetInt64();
        m_changePayTotalHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentChangePayTotal") && !rsp["CurrentChangePayTotal"].IsNull())
    {
        if (!rsp["CurrentChangePayTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentChangePayTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentChangePayTotal = rsp["CurrentChangePayTotal"].GetInt64();
        m_currentChangePayTotalHasBeenSet = true;
    }

    if (rsp.HasMember("ChangePayMonthly") && !rsp["ChangePayMonthly"].IsNull())
    {
        if (!rsp["ChangePayMonthly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChangePayMonthly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_changePayMonthly = rsp["ChangePayMonthly"].GetInt64();
        m_changePayMonthlyHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentChangePayMonthly") && !rsp["CurrentChangePayMonthly"].IsNull())
    {
        if (!rsp["CurrentChangePayMonthly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentChangePayMonthly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentChangePayMonthly = rsp["CurrentChangePayMonthly"].GetInt64();
        m_currentChangePayMonthlyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEnvLimitResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_maxEnvNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxEnvNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxEnvNum, allocator);
    }

    if (m_currentEnvNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentEnvNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentEnvNum, allocator);
    }

    if (m_maxFreeEnvNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFreeEnvNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxFreeEnvNum, allocator);
    }

    if (m_currentFreeEnvNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentFreeEnvNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentFreeEnvNum, allocator);
    }

    if (m_maxDeleteTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDeleteTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDeleteTotal, allocator);
    }

    if (m_currentDeleteTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDeleteTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentDeleteTotal, allocator);
    }

    if (m_maxDeleteMonthlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDeleteMonthly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDeleteMonthly, allocator);
    }

    if (m_currentDeleteMonthlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDeleteMonthly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentDeleteMonthly, allocator);
    }

    if (m_maxFreeTrialNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFreeTrialNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxFreeTrialNum, allocator);
    }

    if (m_currentFreeTrialNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentFreeTrialNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentFreeTrialNum, allocator);
    }

    if (m_changePayTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangePayTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_changePayTotal, allocator);
    }

    if (m_currentChangePayTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentChangePayTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentChangePayTotal, allocator);
    }

    if (m_changePayMonthlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangePayMonthly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_changePayMonthly, allocator);
    }

    if (m_currentChangePayMonthlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentChangePayMonthly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentChangePayMonthly, allocator);
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

int64_t DescribeEnvLimitResponse::GetMaxFreeTrialNum() const
{
    return m_maxFreeTrialNum;
}

bool DescribeEnvLimitResponse::MaxFreeTrialNumHasBeenSet() const
{
    return m_maxFreeTrialNumHasBeenSet;
}

int64_t DescribeEnvLimitResponse::GetCurrentFreeTrialNum() const
{
    return m_currentFreeTrialNum;
}

bool DescribeEnvLimitResponse::CurrentFreeTrialNumHasBeenSet() const
{
    return m_currentFreeTrialNumHasBeenSet;
}

int64_t DescribeEnvLimitResponse::GetChangePayTotal() const
{
    return m_changePayTotal;
}

bool DescribeEnvLimitResponse::ChangePayTotalHasBeenSet() const
{
    return m_changePayTotalHasBeenSet;
}

int64_t DescribeEnvLimitResponse::GetCurrentChangePayTotal() const
{
    return m_currentChangePayTotal;
}

bool DescribeEnvLimitResponse::CurrentChangePayTotalHasBeenSet() const
{
    return m_currentChangePayTotalHasBeenSet;
}

int64_t DescribeEnvLimitResponse::GetChangePayMonthly() const
{
    return m_changePayMonthly;
}

bool DescribeEnvLimitResponse::ChangePayMonthlyHasBeenSet() const
{
    return m_changePayMonthlyHasBeenSet;
}

int64_t DescribeEnvLimitResponse::GetCurrentChangePayMonthly() const
{
    return m_currentChangePayMonthly;
}

bool DescribeEnvLimitResponse::CurrentChangePayMonthlyHasBeenSet() const
{
    return m_currentChangePayMonthlyHasBeenSet;
}


