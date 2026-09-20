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

#include <tencentcloud/mongodb/v20190725/model/CheckDBInstanceElasticCpuScalableResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

CheckDBInstanceElasticCpuScalableResponse::CheckDBInstanceElasticCpuScalableResponse() :
    m_scalableHasBeenSet(false),
    m_isScaledHasBeenSet(false),
    m_isLockedHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_maxExtraCpuHasBeenSet(false),
    m_extraCpuHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_scaleUpTimeHasBeenSet(false)
{
}

CoreInternalOutcome CheckDBInstanceElasticCpuScalableResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Scalable") && !rsp["Scalable"].IsNull())
    {
        if (!rsp["Scalable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Scalable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scalable = rsp["Scalable"].GetBool();
        m_scalableHasBeenSet = true;
    }

    if (rsp.HasMember("IsScaled") && !rsp["IsScaled"].IsNull())
    {
        if (!rsp["IsScaled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsScaled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isScaled = rsp["IsScaled"].GetBool();
        m_isScaledHasBeenSet = true;
    }

    if (rsp.HasMember("IsLocked") && !rsp["IsLocked"].IsNull())
    {
        if (!rsp["IsLocked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsLocked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLocked = rsp["IsLocked"].GetBool();
        m_isLockedHasBeenSet = true;
    }

    if (rsp.HasMember("Reason") && !rsp["Reason"].IsNull())
    {
        if (!rsp["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(rsp["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (rsp.HasMember("MaxExtraCpu") && !rsp["MaxExtraCpu"].IsNull())
    {
        if (!rsp["MaxExtraCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxExtraCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxExtraCpu = rsp["MaxExtraCpu"].GetInt64();
        m_maxExtraCpuHasBeenSet = true;
    }

    if (rsp.HasMember("ExtraCpu") && !rsp["ExtraCpu"].IsNull())
    {
        if (!rsp["ExtraCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_extraCpu = rsp["ExtraCpu"].GetInt64();
        m_extraCpuHasBeenSet = true;
    }

    if (rsp.HasMember("TriggerType") && !rsp["TriggerType"].IsNull())
    {
        if (!rsp["TriggerType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = rsp["TriggerType"].GetInt64();
        m_triggerTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ScaleUpTime") && !rsp["ScaleUpTime"].IsNull())
    {
        if (!rsp["ScaleUpTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScaleUpTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scaleUpTime = string(rsp["ScaleUpTime"].GetString());
        m_scaleUpTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CheckDBInstanceElasticCpuScalableResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_scalableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scalable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scalable, allocator);
    }

    if (m_isScaledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsScaled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isScaled, allocator);
    }

    if (m_isLockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLocked, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_maxExtraCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxExtraCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxExtraCpu, allocator);
    }

    if (m_extraCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_extraCpu, allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerType, allocator);
    }

    if (m_scaleUpTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleUpTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scaleUpTime.c_str(), allocator).Move(), allocator);
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


bool CheckDBInstanceElasticCpuScalableResponse::GetScalable() const
{
    return m_scalable;
}

bool CheckDBInstanceElasticCpuScalableResponse::ScalableHasBeenSet() const
{
    return m_scalableHasBeenSet;
}

bool CheckDBInstanceElasticCpuScalableResponse::GetIsScaled() const
{
    return m_isScaled;
}

bool CheckDBInstanceElasticCpuScalableResponse::IsScaledHasBeenSet() const
{
    return m_isScaledHasBeenSet;
}

bool CheckDBInstanceElasticCpuScalableResponse::GetIsLocked() const
{
    return m_isLocked;
}

bool CheckDBInstanceElasticCpuScalableResponse::IsLockedHasBeenSet() const
{
    return m_isLockedHasBeenSet;
}

string CheckDBInstanceElasticCpuScalableResponse::GetReason() const
{
    return m_reason;
}

bool CheckDBInstanceElasticCpuScalableResponse::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

int64_t CheckDBInstanceElasticCpuScalableResponse::GetMaxExtraCpu() const
{
    return m_maxExtraCpu;
}

bool CheckDBInstanceElasticCpuScalableResponse::MaxExtraCpuHasBeenSet() const
{
    return m_maxExtraCpuHasBeenSet;
}

int64_t CheckDBInstanceElasticCpuScalableResponse::GetExtraCpu() const
{
    return m_extraCpu;
}

bool CheckDBInstanceElasticCpuScalableResponse::ExtraCpuHasBeenSet() const
{
    return m_extraCpuHasBeenSet;
}

int64_t CheckDBInstanceElasticCpuScalableResponse::GetTriggerType() const
{
    return m_triggerType;
}

bool CheckDBInstanceElasticCpuScalableResponse::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string CheckDBInstanceElasticCpuScalableResponse::GetScaleUpTime() const
{
    return m_scaleUpTime;
}

bool CheckDBInstanceElasticCpuScalableResponse::ScaleUpTimeHasBeenSet() const
{
    return m_scaleUpTimeHasBeenSet;
}


