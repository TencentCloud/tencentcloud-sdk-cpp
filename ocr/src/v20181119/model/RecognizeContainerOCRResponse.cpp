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

#include <tencentcloud/ocr/v20181119/model/RecognizeContainerOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeContainerOCRResponse::RecognizeContainerOCRResponse() :
    m_containerIdHasBeenSet(false),
    m_containerTypeHasBeenSet(false),
    m_grossKGHasBeenSet(false),
    m_grossLBHasBeenSet(false),
    m_payloadKGHasBeenSet(false),
    m_payloadLBHasBeenSet(false),
    m_capacityM3HasBeenSet(false),
    m_capacityFT3HasBeenSet(false),
    m_warnHasBeenSet(false),
    m_tareKGHasBeenSet(false),
    m_tareLBHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeContainerOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ContainerId") && !rsp["ContainerId"].IsNull())
    {
        if (!rsp["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(rsp["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerType") && !rsp["ContainerType"].IsNull())
    {
        if (!rsp["ContainerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerType = string(rsp["ContainerType"].GetString());
        m_containerTypeHasBeenSet = true;
    }

    if (rsp.HasMember("GrossKG") && !rsp["GrossKG"].IsNull())
    {
        if (!rsp["GrossKG"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrossKG` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grossKG = string(rsp["GrossKG"].GetString());
        m_grossKGHasBeenSet = true;
    }

    if (rsp.HasMember("GrossLB") && !rsp["GrossLB"].IsNull())
    {
        if (!rsp["GrossLB"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrossLB` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grossLB = string(rsp["GrossLB"].GetString());
        m_grossLBHasBeenSet = true;
    }

    if (rsp.HasMember("PayloadKG") && !rsp["PayloadKG"].IsNull())
    {
        if (!rsp["PayloadKG"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayloadKG` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payloadKG = string(rsp["PayloadKG"].GetString());
        m_payloadKGHasBeenSet = true;
    }

    if (rsp.HasMember("PayloadLB") && !rsp["PayloadLB"].IsNull())
    {
        if (!rsp["PayloadLB"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayloadLB` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payloadLB = string(rsp["PayloadLB"].GetString());
        m_payloadLBHasBeenSet = true;
    }

    if (rsp.HasMember("CapacityM3") && !rsp["CapacityM3"].IsNull())
    {
        if (!rsp["CapacityM3"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CapacityM3` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capacityM3 = string(rsp["CapacityM3"].GetString());
        m_capacityM3HasBeenSet = true;
    }

    if (rsp.HasMember("CapacityFT3") && !rsp["CapacityFT3"].IsNull())
    {
        if (!rsp["CapacityFT3"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CapacityFT3` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capacityFT3 = string(rsp["CapacityFT3"].GetString());
        m_capacityFT3HasBeenSet = true;
    }

    if (rsp.HasMember("Warn") && !rsp["Warn"].IsNull())
    {
        if (!rsp["Warn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Warn` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Warn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warn.push_back((*itr).GetInt64());
        }
        m_warnHasBeenSet = true;
    }

    if (rsp.HasMember("TareKG") && !rsp["TareKG"].IsNull())
    {
        if (!rsp["TareKG"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TareKG` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tareKG = string(rsp["TareKG"].GetString());
        m_tareKGHasBeenSet = true;
    }

    if (rsp.HasMember("TareLB") && !rsp["TareLB"].IsNull())
    {
        if (!rsp["TareLB"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TareLB` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tareLB = string(rsp["TareLB"].GetString());
        m_tareLBHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeContainerOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerType.c_str(), allocator).Move(), allocator);
    }

    if (m_grossKGHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrossKG";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grossKG.c_str(), allocator).Move(), allocator);
    }

    if (m_grossLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrossLB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grossLB.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadKGHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayloadKG";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payloadKG.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayloadLB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payloadLB.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityM3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityM3";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_capacityM3.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityFT3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityFT3";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_capacityFT3.c_str(), allocator).Move(), allocator);
    }

    if (m_warnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Warn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_warn.begin(); itr != m_warn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_tareKGHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TareKG";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tareKG.c_str(), allocator).Move(), allocator);
    }

    if (m_tareLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TareLB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tareLB.c_str(), allocator).Move(), allocator);
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


string RecognizeContainerOCRResponse::GetContainerId() const
{
    return m_containerId;
}

bool RecognizeContainerOCRResponse::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string RecognizeContainerOCRResponse::GetContainerType() const
{
    return m_containerType;
}

bool RecognizeContainerOCRResponse::ContainerTypeHasBeenSet() const
{
    return m_containerTypeHasBeenSet;
}

string RecognizeContainerOCRResponse::GetGrossKG() const
{
    return m_grossKG;
}

bool RecognizeContainerOCRResponse::GrossKGHasBeenSet() const
{
    return m_grossKGHasBeenSet;
}

string RecognizeContainerOCRResponse::GetGrossLB() const
{
    return m_grossLB;
}

bool RecognizeContainerOCRResponse::GrossLBHasBeenSet() const
{
    return m_grossLBHasBeenSet;
}

string RecognizeContainerOCRResponse::GetPayloadKG() const
{
    return m_payloadKG;
}

bool RecognizeContainerOCRResponse::PayloadKGHasBeenSet() const
{
    return m_payloadKGHasBeenSet;
}

string RecognizeContainerOCRResponse::GetPayloadLB() const
{
    return m_payloadLB;
}

bool RecognizeContainerOCRResponse::PayloadLBHasBeenSet() const
{
    return m_payloadLBHasBeenSet;
}

string RecognizeContainerOCRResponse::GetCapacityM3() const
{
    return m_capacityM3;
}

bool RecognizeContainerOCRResponse::CapacityM3HasBeenSet() const
{
    return m_capacityM3HasBeenSet;
}

string RecognizeContainerOCRResponse::GetCapacityFT3() const
{
    return m_capacityFT3;
}

bool RecognizeContainerOCRResponse::CapacityFT3HasBeenSet() const
{
    return m_capacityFT3HasBeenSet;
}

vector<int64_t> RecognizeContainerOCRResponse::GetWarn() const
{
    return m_warn;
}

bool RecognizeContainerOCRResponse::WarnHasBeenSet() const
{
    return m_warnHasBeenSet;
}

string RecognizeContainerOCRResponse::GetTareKG() const
{
    return m_tareKG;
}

bool RecognizeContainerOCRResponse::TareKGHasBeenSet() const
{
    return m_tareKGHasBeenSet;
}

string RecognizeContainerOCRResponse::GetTareLB() const
{
    return m_tareLB;
}

bool RecognizeContainerOCRResponse::TareLBHasBeenSet() const
{
    return m_tareLBHasBeenSet;
}


