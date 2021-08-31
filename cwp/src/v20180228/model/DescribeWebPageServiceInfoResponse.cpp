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

#include <tencentcloud/cwp/v20180228/model/DescribeWebPageServiceInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeWebPageServiceInfoResponse::DescribeWebPageServiceInfoResponse() :
    m_statusHasBeenSet(false),
    m_usedNumHasBeenSet(false),
    m_residueNumHasBeenSet(false),
    m_buyNumHasBeenSet(false),
    m_expireNumHasBeenSet(false),
    m_allAuthorizedMachinesHasBeenSet(false),
    m_expireAuthorizedMachinesHasBeenSet(false),
    m_expiredNumHasBeenSet(false),
    m_protectDirNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWebPageServiceInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("UsedNum") && !rsp["UsedNum"].IsNull())
    {
        if (!rsp["UsedNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNum = rsp["UsedNum"].GetUint64();
        m_usedNumHasBeenSet = true;
    }

    if (rsp.HasMember("ResidueNum") && !rsp["ResidueNum"].IsNull())
    {
        if (!rsp["ResidueNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResidueNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_residueNum = rsp["ResidueNum"].GetUint64();
        m_residueNumHasBeenSet = true;
    }

    if (rsp.HasMember("BuyNum") && !rsp["BuyNum"].IsNull())
    {
        if (!rsp["BuyNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BuyNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_buyNum = rsp["BuyNum"].GetUint64();
        m_buyNumHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireNum") && !rsp["ExpireNum"].IsNull())
    {
        if (!rsp["ExpireNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireNum = rsp["ExpireNum"].GetUint64();
        m_expireNumHasBeenSet = true;
    }

    if (rsp.HasMember("AllAuthorizedMachines") && !rsp["AllAuthorizedMachines"].IsNull())
    {
        if (!rsp["AllAuthorizedMachines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AllAuthorizedMachines` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AllAuthorizedMachines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProtectMachineInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_allAuthorizedMachines.push_back(item);
        }
        m_allAuthorizedMachinesHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireAuthorizedMachines") && !rsp["ExpireAuthorizedMachines"].IsNull())
    {
        if (!rsp["ExpireAuthorizedMachines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExpireAuthorizedMachines` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExpireAuthorizedMachines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProtectMachine item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_expireAuthorizedMachines.push_back(item);
        }
        m_expireAuthorizedMachinesHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiredNum") && !rsp["ExpiredNum"].IsNull())
    {
        if (!rsp["ExpiredNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiredNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredNum = rsp["ExpiredNum"].GetUint64();
        m_expiredNumHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectDirNum") && !rsp["ProtectDirNum"].IsNull())
    {
        if (!rsp["ProtectDirNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectDirNum = rsp["ProtectDirNum"].GetUint64();
        m_protectDirNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeWebPageServiceInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_usedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedNum, allocator);
    }

    if (m_residueNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResidueNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_residueNum, allocator);
    }

    if (m_buyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buyNum, allocator);
    }

    if (m_expireNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireNum, allocator);
    }

    if (m_allAuthorizedMachinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllAuthorizedMachines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_allAuthorizedMachines.begin(); itr != m_allAuthorizedMachines.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_expireAuthorizedMachinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireAuthorizedMachines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_expireAuthorizedMachines.begin(); itr != m_expireAuthorizedMachines.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_expiredNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredNum, allocator);
    }

    if (m_protectDirNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectDirNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectDirNum, allocator);
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


bool DescribeWebPageServiceInfoResponse::GetStatus() const
{
    return m_status;
}

bool DescribeWebPageServiceInfoResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeWebPageServiceInfoResponse::GetUsedNum() const
{
    return m_usedNum;
}

bool DescribeWebPageServiceInfoResponse::UsedNumHasBeenSet() const
{
    return m_usedNumHasBeenSet;
}

uint64_t DescribeWebPageServiceInfoResponse::GetResidueNum() const
{
    return m_residueNum;
}

bool DescribeWebPageServiceInfoResponse::ResidueNumHasBeenSet() const
{
    return m_residueNumHasBeenSet;
}

uint64_t DescribeWebPageServiceInfoResponse::GetBuyNum() const
{
    return m_buyNum;
}

bool DescribeWebPageServiceInfoResponse::BuyNumHasBeenSet() const
{
    return m_buyNumHasBeenSet;
}

uint64_t DescribeWebPageServiceInfoResponse::GetExpireNum() const
{
    return m_expireNum;
}

bool DescribeWebPageServiceInfoResponse::ExpireNumHasBeenSet() const
{
    return m_expireNumHasBeenSet;
}

vector<ProtectMachineInfo> DescribeWebPageServiceInfoResponse::GetAllAuthorizedMachines() const
{
    return m_allAuthorizedMachines;
}

bool DescribeWebPageServiceInfoResponse::AllAuthorizedMachinesHasBeenSet() const
{
    return m_allAuthorizedMachinesHasBeenSet;
}

vector<ProtectMachine> DescribeWebPageServiceInfoResponse::GetExpireAuthorizedMachines() const
{
    return m_expireAuthorizedMachines;
}

bool DescribeWebPageServiceInfoResponse::ExpireAuthorizedMachinesHasBeenSet() const
{
    return m_expireAuthorizedMachinesHasBeenSet;
}

uint64_t DescribeWebPageServiceInfoResponse::GetExpiredNum() const
{
    return m_expiredNum;
}

bool DescribeWebPageServiceInfoResponse::ExpiredNumHasBeenSet() const
{
    return m_expiredNumHasBeenSet;
}

uint64_t DescribeWebPageServiceInfoResponse::GetProtectDirNum() const
{
    return m_protectDirNum;
}

bool DescribeWebPageServiceInfoResponse::ProtectDirNumHasBeenSet() const
{
    return m_protectDirNumHasBeenSet;
}


