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

#include <tencentcloud/vpc/v20170312/model/CreateBandwidthPackageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateBandwidthPackageResponse::CreateBandwidthPackageResponse() :
    m_bandwidthPackageIdHasBeenSet(false),
    m_bandwidthPackageIdsHasBeenSet(false)
{
}

CoreInternalOutcome CreateBandwidthPackageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BandwidthPackageId") && !rsp["BandwidthPackageId"].IsNull())
    {
        if (!rsp["BandwidthPackageId"].IsString())
        {
            return CoreInternalOutcome(Error("response `BandwidthPackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthPackageId = string(rsp["BandwidthPackageId"].GetString());
        m_bandwidthPackageIdHasBeenSet = true;
    }

    if (rsp.HasMember("BandwidthPackageIds") && !rsp["BandwidthPackageIds"].IsNull())
    {
        if (!rsp["BandwidthPackageIds"].IsArray())
            return CoreInternalOutcome(Error("response `BandwidthPackageIds` is not array type"));

        const Value &tmpValue = rsp["BandwidthPackageIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bandwidthPackageIds.push_back((*itr).GetString());
        }
        m_bandwidthPackageIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateBandwidthPackageResponse::GetBandwidthPackageId() const
{
    return m_bandwidthPackageId;
}

bool CreateBandwidthPackageResponse::BandwidthPackageIdHasBeenSet() const
{
    return m_bandwidthPackageIdHasBeenSet;
}

vector<string> CreateBandwidthPackageResponse::GetBandwidthPackageIds() const
{
    return m_bandwidthPackageIds;
}

bool CreateBandwidthPackageResponse::BandwidthPackageIdsHasBeenSet() const
{
    return m_bandwidthPackageIdsHasBeenSet;
}


