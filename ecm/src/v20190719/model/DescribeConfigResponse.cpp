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
using namespace rapidjson;
using namespace std;

DescribeConfigResponse::DescribeConfigResponse() :
    m_networkStorageRangeHasBeenSet(false),
    m_imageWhiteSetHasBeenSet(false),
    m_instanceNetworkLimitConfigsHasBeenSet(false),
    m_imageLimitsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NetworkStorageRange") && !rsp["NetworkStorageRange"].IsNull())
    {
        if (!rsp["NetworkStorageRange"].IsObject())
        {
            return CoreInternalOutcome(Error("response `NetworkStorageRange` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `ImageWhiteSet` is not array type"));

        const Value &tmpValue = rsp["ImageWhiteSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageWhiteSet.push_back((*itr).GetString());
        }
        m_imageWhiteSetHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceNetworkLimitConfigs") && !rsp["InstanceNetworkLimitConfigs"].IsNull())
    {
        if (!rsp["InstanceNetworkLimitConfigs"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceNetworkLimitConfigs` is not array type"));

        const Value &tmpValue = rsp["InstanceNetworkLimitConfigs"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `ImageLimits` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageLimits.Deserialize(rsp["ImageLimits"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageLimitsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


