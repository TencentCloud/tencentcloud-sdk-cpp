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

#include <tencentcloud/cwp/v20180228/model/DescribeMachineGeneralResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeMachineGeneralResponse::DescribeMachineGeneralResponse() :
    m_machineCntHasBeenSet(false),
    m_tencentCloudMachineCntHasBeenSet(false),
    m_aliCloudMachineCntHasBeenSet(false),
    m_baiduCloudMachineCntHasBeenSet(false),
    m_iDCMachineCntHasBeenSet(false),
    m_otherCloudMachineCntHasBeenSet(false),
    m_protectMachineCntHasBeenSet(false),
    m_baseMachineCntHasBeenSet(false),
    m_specialtyMachineCntHasBeenSet(false),
    m_flagshipMachineCntHasBeenSet(false),
    m_riskMachineCntHasBeenSet(false),
    m_compareYesterdayRiskMachineCntHasBeenSet(false),
    m_compareYesterdayNotProtectMachineCntHasBeenSet(false),
    m_compareYesterdayDeadlineMachineCntHasBeenSet(false),
    m_deadlineMachineCntHasBeenSet(false),
    m_notProtectMachineCntHasBeenSet(false),
    m_lHGeneralDiscountCntHasBeenSet(false),
    m_compareYesterdayMachineCntHasBeenSet(false),
    m_machineDestroyAfterOfflineHoursHasBeenSet(false),
    m_cloudFromHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMachineGeneralResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MachineCnt") && !rsp["MachineCnt"].IsNull())
    {
        if (!rsp["MachineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineCnt = rsp["MachineCnt"].GetUint64();
        m_machineCntHasBeenSet = true;
    }

    if (rsp.HasMember("TencentCloudMachineCnt") && !rsp["TencentCloudMachineCnt"].IsNull())
    {
        if (!rsp["TencentCloudMachineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TencentCloudMachineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tencentCloudMachineCnt = rsp["TencentCloudMachineCnt"].GetUint64();
        m_tencentCloudMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("AliCloudMachineCnt") && !rsp["AliCloudMachineCnt"].IsNull())
    {
        if (!rsp["AliCloudMachineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AliCloudMachineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aliCloudMachineCnt = rsp["AliCloudMachineCnt"].GetUint64();
        m_aliCloudMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("BaiduCloudMachineCnt") && !rsp["BaiduCloudMachineCnt"].IsNull())
    {
        if (!rsp["BaiduCloudMachineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaiduCloudMachineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_baiduCloudMachineCnt = rsp["BaiduCloudMachineCnt"].GetUint64();
        m_baiduCloudMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("IDCMachineCnt") && !rsp["IDCMachineCnt"].IsNull())
    {
        if (!rsp["IDCMachineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IDCMachineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iDCMachineCnt = rsp["IDCMachineCnt"].GetUint64();
        m_iDCMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("OtherCloudMachineCnt") && !rsp["OtherCloudMachineCnt"].IsNull())
    {
        if (!rsp["OtherCloudMachineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OtherCloudMachineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_otherCloudMachineCnt = rsp["OtherCloudMachineCnt"].GetUint64();
        m_otherCloudMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectMachineCnt") && !rsp["ProtectMachineCnt"].IsNull())
    {
        if (!rsp["ProtectMachineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectMachineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectMachineCnt = rsp["ProtectMachineCnt"].GetUint64();
        m_protectMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("BaseMachineCnt") && !rsp["BaseMachineCnt"].IsNull())
    {
        if (!rsp["BaseMachineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaseMachineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_baseMachineCnt = rsp["BaseMachineCnt"].GetUint64();
        m_baseMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("SpecialtyMachineCnt") && !rsp["SpecialtyMachineCnt"].IsNull())
    {
        if (!rsp["SpecialtyMachineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecialtyMachineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_specialtyMachineCnt = rsp["SpecialtyMachineCnt"].GetUint64();
        m_specialtyMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("FlagshipMachineCnt") && !rsp["FlagshipMachineCnt"].IsNull())
    {
        if (!rsp["FlagshipMachineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FlagshipMachineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flagshipMachineCnt = rsp["FlagshipMachineCnt"].GetUint64();
        m_flagshipMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("RiskMachineCnt") && !rsp["RiskMachineCnt"].IsNull())
    {
        if (!rsp["RiskMachineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskMachineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskMachineCnt = rsp["RiskMachineCnt"].GetUint64();
        m_riskMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("CompareYesterdayRiskMachineCnt") && !rsp["CompareYesterdayRiskMachineCnt"].IsNull())
    {
        if (!rsp["CompareYesterdayRiskMachineCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareYesterdayRiskMachineCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_compareYesterdayRiskMachineCnt = rsp["CompareYesterdayRiskMachineCnt"].GetInt64();
        m_compareYesterdayRiskMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("CompareYesterdayNotProtectMachineCnt") && !rsp["CompareYesterdayNotProtectMachineCnt"].IsNull())
    {
        if (!rsp["CompareYesterdayNotProtectMachineCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareYesterdayNotProtectMachineCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_compareYesterdayNotProtectMachineCnt = rsp["CompareYesterdayNotProtectMachineCnt"].GetInt64();
        m_compareYesterdayNotProtectMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("CompareYesterdayDeadlineMachineCnt") && !rsp["CompareYesterdayDeadlineMachineCnt"].IsNull())
    {
        if (!rsp["CompareYesterdayDeadlineMachineCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareYesterdayDeadlineMachineCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_compareYesterdayDeadlineMachineCnt = rsp["CompareYesterdayDeadlineMachineCnt"].GetInt64();
        m_compareYesterdayDeadlineMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("DeadlineMachineCnt") && !rsp["DeadlineMachineCnt"].IsNull())
    {
        if (!rsp["DeadlineMachineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadlineMachineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineMachineCnt = rsp["DeadlineMachineCnt"].GetUint64();
        m_deadlineMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("NotProtectMachineCnt") && !rsp["NotProtectMachineCnt"].IsNull())
    {
        if (!rsp["NotProtectMachineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotProtectMachineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notProtectMachineCnt = rsp["NotProtectMachineCnt"].GetUint64();
        m_notProtectMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("LHGeneralDiscountCnt") && !rsp["LHGeneralDiscountCnt"].IsNull())
    {
        if (!rsp["LHGeneralDiscountCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LHGeneralDiscountCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lHGeneralDiscountCnt = rsp["LHGeneralDiscountCnt"].GetUint64();
        m_lHGeneralDiscountCntHasBeenSet = true;
    }

    if (rsp.HasMember("CompareYesterdayMachineCnt") && !rsp["CompareYesterdayMachineCnt"].IsNull())
    {
        if (!rsp["CompareYesterdayMachineCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareYesterdayMachineCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_compareYesterdayMachineCnt = rsp["CompareYesterdayMachineCnt"].GetInt64();
        m_compareYesterdayMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("MachineDestroyAfterOfflineHours") && !rsp["MachineDestroyAfterOfflineHours"].IsNull())
    {
        if (!rsp["MachineDestroyAfterOfflineHours"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDestroyAfterOfflineHours` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineDestroyAfterOfflineHours = rsp["MachineDestroyAfterOfflineHours"].GetUint64();
        m_machineDestroyAfterOfflineHoursHasBeenSet = true;
    }

    if (rsp.HasMember("CloudFrom") && !rsp["CloudFrom"].IsNull())
    {
        if (!rsp["CloudFrom"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudFrom` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CloudFrom"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudFromCnt item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cloudFrom.push_back(item);
        }
        m_cloudFromHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMachineGeneralResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_machineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineCnt, allocator);
    }

    if (m_tencentCloudMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentCloudMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tencentCloudMachineCnt, allocator);
    }

    if (m_aliCloudMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliCloudMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aliCloudMachineCnt, allocator);
    }

    if (m_baiduCloudMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaiduCloudMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baiduCloudMachineCnt, allocator);
    }

    if (m_iDCMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDCMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iDCMachineCnt, allocator);
    }

    if (m_otherCloudMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherCloudMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_otherCloudMachineCnt, allocator);
    }

    if (m_protectMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectMachineCnt, allocator);
    }

    if (m_baseMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baseMachineCnt, allocator);
    }

    if (m_specialtyMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecialtyMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_specialtyMachineCnt, allocator);
    }

    if (m_flagshipMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlagshipMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flagshipMachineCnt, allocator);
    }

    if (m_riskMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskMachineCnt, allocator);
    }

    if (m_compareYesterdayRiskMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareYesterdayRiskMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compareYesterdayRiskMachineCnt, allocator);
    }

    if (m_compareYesterdayNotProtectMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareYesterdayNotProtectMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compareYesterdayNotProtectMachineCnt, allocator);
    }

    if (m_compareYesterdayDeadlineMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareYesterdayDeadlineMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compareYesterdayDeadlineMachineCnt, allocator);
    }

    if (m_deadlineMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadlineMachineCnt, allocator);
    }

    if (m_notProtectMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotProtectMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notProtectMachineCnt, allocator);
    }

    if (m_lHGeneralDiscountCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LHGeneralDiscountCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lHGeneralDiscountCnt, allocator);
    }

    if (m_compareYesterdayMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareYesterdayMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compareYesterdayMachineCnt, allocator);
    }

    if (m_machineDestroyAfterOfflineHoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineDestroyAfterOfflineHours";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineDestroyAfterOfflineHours, allocator);
    }

    if (m_cloudFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloudFrom.begin(); itr != m_cloudFrom.end(); ++itr, ++i)
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


uint64_t DescribeMachineGeneralResponse::GetMachineCnt() const
{
    return m_machineCnt;
}

bool DescribeMachineGeneralResponse::MachineCntHasBeenSet() const
{
    return m_machineCntHasBeenSet;
}

uint64_t DescribeMachineGeneralResponse::GetTencentCloudMachineCnt() const
{
    return m_tencentCloudMachineCnt;
}

bool DescribeMachineGeneralResponse::TencentCloudMachineCntHasBeenSet() const
{
    return m_tencentCloudMachineCntHasBeenSet;
}

uint64_t DescribeMachineGeneralResponse::GetAliCloudMachineCnt() const
{
    return m_aliCloudMachineCnt;
}

bool DescribeMachineGeneralResponse::AliCloudMachineCntHasBeenSet() const
{
    return m_aliCloudMachineCntHasBeenSet;
}

uint64_t DescribeMachineGeneralResponse::GetBaiduCloudMachineCnt() const
{
    return m_baiduCloudMachineCnt;
}

bool DescribeMachineGeneralResponse::BaiduCloudMachineCntHasBeenSet() const
{
    return m_baiduCloudMachineCntHasBeenSet;
}

uint64_t DescribeMachineGeneralResponse::GetIDCMachineCnt() const
{
    return m_iDCMachineCnt;
}

bool DescribeMachineGeneralResponse::IDCMachineCntHasBeenSet() const
{
    return m_iDCMachineCntHasBeenSet;
}

uint64_t DescribeMachineGeneralResponse::GetOtherCloudMachineCnt() const
{
    return m_otherCloudMachineCnt;
}

bool DescribeMachineGeneralResponse::OtherCloudMachineCntHasBeenSet() const
{
    return m_otherCloudMachineCntHasBeenSet;
}

uint64_t DescribeMachineGeneralResponse::GetProtectMachineCnt() const
{
    return m_protectMachineCnt;
}

bool DescribeMachineGeneralResponse::ProtectMachineCntHasBeenSet() const
{
    return m_protectMachineCntHasBeenSet;
}

uint64_t DescribeMachineGeneralResponse::GetBaseMachineCnt() const
{
    return m_baseMachineCnt;
}

bool DescribeMachineGeneralResponse::BaseMachineCntHasBeenSet() const
{
    return m_baseMachineCntHasBeenSet;
}

uint64_t DescribeMachineGeneralResponse::GetSpecialtyMachineCnt() const
{
    return m_specialtyMachineCnt;
}

bool DescribeMachineGeneralResponse::SpecialtyMachineCntHasBeenSet() const
{
    return m_specialtyMachineCntHasBeenSet;
}

uint64_t DescribeMachineGeneralResponse::GetFlagshipMachineCnt() const
{
    return m_flagshipMachineCnt;
}

bool DescribeMachineGeneralResponse::FlagshipMachineCntHasBeenSet() const
{
    return m_flagshipMachineCntHasBeenSet;
}

uint64_t DescribeMachineGeneralResponse::GetRiskMachineCnt() const
{
    return m_riskMachineCnt;
}

bool DescribeMachineGeneralResponse::RiskMachineCntHasBeenSet() const
{
    return m_riskMachineCntHasBeenSet;
}

int64_t DescribeMachineGeneralResponse::GetCompareYesterdayRiskMachineCnt() const
{
    return m_compareYesterdayRiskMachineCnt;
}

bool DescribeMachineGeneralResponse::CompareYesterdayRiskMachineCntHasBeenSet() const
{
    return m_compareYesterdayRiskMachineCntHasBeenSet;
}

int64_t DescribeMachineGeneralResponse::GetCompareYesterdayNotProtectMachineCnt() const
{
    return m_compareYesterdayNotProtectMachineCnt;
}

bool DescribeMachineGeneralResponse::CompareYesterdayNotProtectMachineCntHasBeenSet() const
{
    return m_compareYesterdayNotProtectMachineCntHasBeenSet;
}

int64_t DescribeMachineGeneralResponse::GetCompareYesterdayDeadlineMachineCnt() const
{
    return m_compareYesterdayDeadlineMachineCnt;
}

bool DescribeMachineGeneralResponse::CompareYesterdayDeadlineMachineCntHasBeenSet() const
{
    return m_compareYesterdayDeadlineMachineCntHasBeenSet;
}

uint64_t DescribeMachineGeneralResponse::GetDeadlineMachineCnt() const
{
    return m_deadlineMachineCnt;
}

bool DescribeMachineGeneralResponse::DeadlineMachineCntHasBeenSet() const
{
    return m_deadlineMachineCntHasBeenSet;
}

uint64_t DescribeMachineGeneralResponse::GetNotProtectMachineCnt() const
{
    return m_notProtectMachineCnt;
}

bool DescribeMachineGeneralResponse::NotProtectMachineCntHasBeenSet() const
{
    return m_notProtectMachineCntHasBeenSet;
}

uint64_t DescribeMachineGeneralResponse::GetLHGeneralDiscountCnt() const
{
    return m_lHGeneralDiscountCnt;
}

bool DescribeMachineGeneralResponse::LHGeneralDiscountCntHasBeenSet() const
{
    return m_lHGeneralDiscountCntHasBeenSet;
}

int64_t DescribeMachineGeneralResponse::GetCompareYesterdayMachineCnt() const
{
    return m_compareYesterdayMachineCnt;
}

bool DescribeMachineGeneralResponse::CompareYesterdayMachineCntHasBeenSet() const
{
    return m_compareYesterdayMachineCntHasBeenSet;
}

uint64_t DescribeMachineGeneralResponse::GetMachineDestroyAfterOfflineHours() const
{
    return m_machineDestroyAfterOfflineHours;
}

bool DescribeMachineGeneralResponse::MachineDestroyAfterOfflineHoursHasBeenSet() const
{
    return m_machineDestroyAfterOfflineHoursHasBeenSet;
}

vector<CloudFromCnt> DescribeMachineGeneralResponse::GetCloudFrom() const
{
    return m_cloudFrom;
}

bool DescribeMachineGeneralResponse::CloudFromHasBeenSet() const
{
    return m_cloudFromHasBeenSet;
}


