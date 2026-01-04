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

#include <tencentcloud/cfw/v20190904/model/DescribeCcnVpcFwPolicyLimitResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeCcnVpcFwPolicyLimitResponse::DescribeCcnVpcFwPolicyLimitResponse() :
    m_ccnPolicyInterconnectPairLenLimitHasBeenSet(false),
    m_ccnPolicyGroupLenLimitHasBeenSet(false),
    m_ccnPolicyCidrLenLimitHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCcnVpcFwPolicyLimitResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CcnPolicyInterconnectPairLenLimit") && !rsp["CcnPolicyInterconnectPairLenLimit"].IsNull())
    {
        if (!rsp["CcnPolicyInterconnectPairLenLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyInterconnectPairLenLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ccnPolicyInterconnectPairLenLimit = rsp["CcnPolicyInterconnectPairLenLimit"].GetUint64();
        m_ccnPolicyInterconnectPairLenLimitHasBeenSet = true;
    }

    if (rsp.HasMember("CcnPolicyGroupLenLimit") && !rsp["CcnPolicyGroupLenLimit"].IsNull())
    {
        if (!rsp["CcnPolicyGroupLenLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyGroupLenLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ccnPolicyGroupLenLimit = rsp["CcnPolicyGroupLenLimit"].GetUint64();
        m_ccnPolicyGroupLenLimitHasBeenSet = true;
    }

    if (rsp.HasMember("CcnPolicyCidrLenLimit") && !rsp["CcnPolicyCidrLenLimit"].IsNull())
    {
        if (!rsp["CcnPolicyCidrLenLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyCidrLenLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ccnPolicyCidrLenLimit = rsp["CcnPolicyCidrLenLimit"].GetUint64();
        m_ccnPolicyCidrLenLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCcnVpcFwPolicyLimitResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_ccnPolicyInterconnectPairLenLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnPolicyInterconnectPairLenLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ccnPolicyInterconnectPairLenLimit, allocator);
    }

    if (m_ccnPolicyGroupLenLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnPolicyGroupLenLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ccnPolicyGroupLenLimit, allocator);
    }

    if (m_ccnPolicyCidrLenLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnPolicyCidrLenLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ccnPolicyCidrLenLimit, allocator);
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


uint64_t DescribeCcnVpcFwPolicyLimitResponse::GetCcnPolicyInterconnectPairLenLimit() const
{
    return m_ccnPolicyInterconnectPairLenLimit;
}

bool DescribeCcnVpcFwPolicyLimitResponse::CcnPolicyInterconnectPairLenLimitHasBeenSet() const
{
    return m_ccnPolicyInterconnectPairLenLimitHasBeenSet;
}

uint64_t DescribeCcnVpcFwPolicyLimitResponse::GetCcnPolicyGroupLenLimit() const
{
    return m_ccnPolicyGroupLenLimit;
}

bool DescribeCcnVpcFwPolicyLimitResponse::CcnPolicyGroupLenLimitHasBeenSet() const
{
    return m_ccnPolicyGroupLenLimitHasBeenSet;
}

uint64_t DescribeCcnVpcFwPolicyLimitResponse::GetCcnPolicyCidrLenLimit() const
{
    return m_ccnPolicyCidrLenLimit;
}

bool DescribeCcnVpcFwPolicyLimitResponse::CcnPolicyCidrLenLimitHasBeenSet() const
{
    return m_ccnPolicyCidrLenLimitHasBeenSet;
}


