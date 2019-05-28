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

#include <tencentcloud/cr/v20180321/model/SingleRecord.h>

using namespace TencentCloud;
using namespace TencentCloud::Cr::V20180321;
using namespace TencentCloud::Cr::V20180321::Model;
using namespace rapidjson;
using namespace std;

SingleRecord::SingleRecord() :
    m_accountNumHasBeenSet(false),
    m_bizDateHasBeenSet(false),
    m_callStartTimeHasBeenSet(false),
    m_callerPhoneHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_recordCosUrlHasBeenSet(false)
{
}

CoreInternalOutcome SingleRecord::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountNum") && !value["AccountNum"].IsNull())
    {
        if (!value["AccountNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `SingleRecord.AccountNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountNum = string(value["AccountNum"].GetString());
        m_accountNumHasBeenSet = true;
    }

    if (value.HasMember("BizDate") && !value["BizDate"].IsNull())
    {
        if (!value["BizDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `SingleRecord.BizDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizDate = string(value["BizDate"].GetString());
        m_bizDateHasBeenSet = true;
    }

    if (value.HasMember("CallStartTime") && !value["CallStartTime"].IsNull())
    {
        if (!value["CallStartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SingleRecord.CallStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callStartTime = string(value["CallStartTime"].GetString());
        m_callStartTimeHasBeenSet = true;
    }

    if (value.HasMember("CallerPhone") && !value["CallerPhone"].IsNull())
    {
        if (!value["CallerPhone"].IsString())
        {
            return CoreInternalOutcome(Error("response `SingleRecord.CallerPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callerPhone = string(value["CallerPhone"].GetString());
        m_callerPhoneHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsString())
        {
            return CoreInternalOutcome(Error("response `SingleRecord.Direction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_direction = string(value["Direction"].GetString());
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SingleRecord.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SingleRecord.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("RecordCosUrl") && !value["RecordCosUrl"].IsNull())
    {
        if (!value["RecordCosUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `SingleRecord.RecordCosUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordCosUrl = string(value["RecordCosUrl"].GetString());
        m_recordCosUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SingleRecord::ToJsonObject(Value &value, Document::AllocatorType& allocator)
{

    if (m_accountNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccountNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_accountNum.c_str(), allocator).Move(), allocator);
    }

    if (m_bizDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BizDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_bizDate.c_str(), allocator).Move(), allocator);
    }

    if (m_callStartTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CallStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_callStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_callerPhoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CallerPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_callerPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordCosUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordCosUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_recordCosUrl.c_str(), allocator).Move(), allocator);
    }

}


string SingleRecord::GetAccountNum() const
{
    return m_accountNum;
}

void SingleRecord::SetAccountNum(const string& accountNum)
{
    m_accountNum = accountNum;
    m_accountNumHasBeenSet = true;
}

bool SingleRecord::AccountNumHasBeenSet() const
{
    return m_accountNumHasBeenSet;
}

string SingleRecord::GetBizDate() const
{
    return m_bizDate;
}

void SingleRecord::SetBizDate(const string& bizDate)
{
    m_bizDate = bizDate;
    m_bizDateHasBeenSet = true;
}

bool SingleRecord::BizDateHasBeenSet() const
{
    return m_bizDateHasBeenSet;
}

string SingleRecord::GetCallStartTime() const
{
    return m_callStartTime;
}

void SingleRecord::SetCallStartTime(const string& callStartTime)
{
    m_callStartTime = callStartTime;
    m_callStartTimeHasBeenSet = true;
}

bool SingleRecord::CallStartTimeHasBeenSet() const
{
    return m_callStartTimeHasBeenSet;
}

string SingleRecord::GetCallerPhone() const
{
    return m_callerPhone;
}

void SingleRecord::SetCallerPhone(const string& callerPhone)
{
    m_callerPhone = callerPhone;
    m_callerPhoneHasBeenSet = true;
}

bool SingleRecord::CallerPhoneHasBeenSet() const
{
    return m_callerPhoneHasBeenSet;
}

string SingleRecord::GetDirection() const
{
    return m_direction;
}

void SingleRecord::SetDirection(const string& direction)
{
    m_direction = direction;
    m_directionHasBeenSet = true;
}

bool SingleRecord::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

int64_t SingleRecord::GetDuration() const
{
    return m_duration;
}

void SingleRecord::SetDuration(const int64_t& duration)
{
    m_duration = duration;
    m_durationHasBeenSet = true;
}

bool SingleRecord::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string SingleRecord::GetProductId() const
{
    return m_productId;
}

void SingleRecord::SetProductId(const string& productId)
{
    m_productId = productId;
    m_productIdHasBeenSet = true;
}

bool SingleRecord::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string SingleRecord::GetRecordCosUrl() const
{
    return m_recordCosUrl;
}

void SingleRecord::SetRecordCosUrl(const string& recordCosUrl)
{
    m_recordCosUrl = recordCosUrl;
    m_recordCosUrlHasBeenSet = true;
}

bool SingleRecord::RecordCosUrlHasBeenSet() const
{
    return m_recordCosUrlHasBeenSet;
}

