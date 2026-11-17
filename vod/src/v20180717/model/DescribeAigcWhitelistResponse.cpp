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

#include <tencentcloud/vod/v20180717/model/DescribeAigcWhitelistResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DescribeAigcWhitelistResponse::DescribeAigcWhitelistResponse() :
    m_aigcTypeHasBeenSet(false),
    m_modelWhitelistSwitchHasBeenSet(false),
    m_modelWhitelistHasBeenSet(false),
    m_ipWhitelistSwitchHasBeenSet(false),
    m_ipWhitelistHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAigcWhitelistResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AigcType") && !rsp["AigcType"].IsNull())
    {
        if (!rsp["AigcType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aigcType = string(rsp["AigcType"].GetString());
        m_aigcTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ModelWhitelistSwitch") && !rsp["ModelWhitelistSwitch"].IsNull())
    {
        if (!rsp["ModelWhitelistSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelWhitelistSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelWhitelistSwitch = string(rsp["ModelWhitelistSwitch"].GetString());
        m_modelWhitelistSwitchHasBeenSet = true;
    }

    if (rsp.HasMember("ModelWhitelist") && !rsp["ModelWhitelist"].IsNull())
    {
        if (!rsp["ModelWhitelist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelWhitelist` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ModelWhitelist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AigcWhitelistModel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modelWhitelist.push_back(item);
        }
        m_modelWhitelistHasBeenSet = true;
    }

    if (rsp.HasMember("IpWhitelistSwitch") && !rsp["IpWhitelistSwitch"].IsNull())
    {
        if (!rsp["IpWhitelistSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpWhitelistSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipWhitelistSwitch = string(rsp["IpWhitelistSwitch"].GetString());
        m_ipWhitelistSwitchHasBeenSet = true;
    }

    if (rsp.HasMember("IpWhitelist") && !rsp["IpWhitelist"].IsNull())
    {
        if (!rsp["IpWhitelist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpWhitelist` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IpWhitelist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipWhitelist.push_back((*itr).GetString());
        }
        m_ipWhitelistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAigcWhitelistResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_aigcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AigcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aigcType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelWhitelistSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelWhitelistSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelWhitelistSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_modelWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelWhitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modelWhitelist.begin(); itr != m_modelWhitelist.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ipWhitelistSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhitelistSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipWhitelistSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_ipWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipWhitelist.begin(); itr != m_ipWhitelist.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


string DescribeAigcWhitelistResponse::GetAigcType() const
{
    return m_aigcType;
}

bool DescribeAigcWhitelistResponse::AigcTypeHasBeenSet() const
{
    return m_aigcTypeHasBeenSet;
}

string DescribeAigcWhitelistResponse::GetModelWhitelistSwitch() const
{
    return m_modelWhitelistSwitch;
}

bool DescribeAigcWhitelistResponse::ModelWhitelistSwitchHasBeenSet() const
{
    return m_modelWhitelistSwitchHasBeenSet;
}

vector<AigcWhitelistModel> DescribeAigcWhitelistResponse::GetModelWhitelist() const
{
    return m_modelWhitelist;
}

bool DescribeAigcWhitelistResponse::ModelWhitelistHasBeenSet() const
{
    return m_modelWhitelistHasBeenSet;
}

string DescribeAigcWhitelistResponse::GetIpWhitelistSwitch() const
{
    return m_ipWhitelistSwitch;
}

bool DescribeAigcWhitelistResponse::IpWhitelistSwitchHasBeenSet() const
{
    return m_ipWhitelistSwitchHasBeenSet;
}

vector<string> DescribeAigcWhitelistResponse::GetIpWhitelist() const
{
    return m_ipWhitelist;
}

bool DescribeAigcWhitelistResponse::IpWhitelistHasBeenSet() const
{
    return m_ipWhitelistHasBeenSet;
}


