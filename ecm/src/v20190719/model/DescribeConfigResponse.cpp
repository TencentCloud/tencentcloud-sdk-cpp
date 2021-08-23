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

#include <tencentcloud/ecm/v20190719/model/DescribeConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

DescribeConfigResponse::DescribeConfigResponse() :
    m_networkStorageRangeHasBeenSet(false),
    m_imageWhiteSetHasBeenSet(false),
    m_instanceNetworkLimitConfigsHasBeenSet(false),
    m_imageLimitsHasBeenSet(false),
    m_defaultIPDirectHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NetworkStorageRange") && !rsp["NetworkStorageRange"].IsNull())
    {
        if (!rsp["NetworkStorageRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_networkStorageRange.Deserialize(rsp["NetworkStorageRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_networkStorageRangeHasBeenSet = true;
    }

    if (rsp.HasMember("ImageWhiteSet") && !rsp["ImageWhiteSet"].IsNull())
    {
        if (!rsp["ImageWhiteSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageWhiteSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ImageWhiteSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageWhiteSet.push_back((*itr).GetString());
        }
        m_imageWhiteSetHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceNetworkLimitConfigs") && !rsp["InstanceNetworkLimitConfigs"].IsNull())
    {
        if (!rsp["InstanceNetworkLimitConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceNetworkLimitConfigs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceNetworkLimitConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceNetworkLimitConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceNetworkLimitConfigs.push_back(item);
        }
        m_instanceNetworkLimitConfigsHasBeenSet = true;
    }

    if (rsp.HasMember("ImageLimits") && !rsp["ImageLimits"].IsNull())
    {
        if (!rsp["ImageLimits"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLimits` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageLimits.Deserialize(rsp["ImageLimits"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageLimitsHasBeenSet = true;
    }

    if (rsp.HasMember("DefaultIPDirect") && !rsp["DefaultIPDirect"].IsNull())
    {
        if (!rsp["DefaultIPDirect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultIPDirect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_defaultIPDirect = rsp["DefaultIPDirect"].GetBool();
        m_defaultIPDirectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_networkStorageRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkStorageRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_networkStorageRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageWhiteSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageWhiteSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageWhiteSet.begin(); itr != m_imageWhiteSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceNetworkLimitConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNetworkLimitConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceNetworkLimitConfigs.begin(); itr != m_instanceNetworkLimitConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imageLimitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageLimits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageLimits.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_defaultIPDirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultIPDirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultIPDirect, allocator);
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


NetworkStorageRange DescribeConfigResponse::GetNetworkStorageRange() const
{
    return m_networkStorageRange;
}

bool DescribeConfigResponse::NetworkStorageRangeHasBeenSet() const
{
    return m_networkStorageRangeHasBeenSet;
}

vector<string> DescribeConfigResponse::GetImageWhiteSet() const
{
    return m_imageWhiteSet;
}

bool DescribeConfigResponse::ImageWhiteSetHasBeenSet() const
{
    return m_imageWhiteSetHasBeenSet;
}

vector<InstanceNetworkLimitConfig> DescribeConfigResponse::GetInstanceNetworkLimitConfigs() const
{
    return m_instanceNetworkLimitConfigs;
}

bool DescribeConfigResponse::InstanceNetworkLimitConfigsHasBeenSet() const
{
    return m_instanceNetworkLimitConfigsHasBeenSet;
}

ImageLimitConfig DescribeConfigResponse::GetImageLimits() const
{
    return m_imageLimits;
}

bool DescribeConfigResponse::ImageLimitsHasBeenSet() const
{
    return m_imageLimitsHasBeenSet;
}

bool DescribeConfigResponse::GetDefaultIPDirect() const
{
    return m_defaultIPDirect;
}

bool DescribeConfigResponse::DefaultIPDirectHasBeenSet() const
{
    return m_defaultIPDirectHasBeenSet;
}


