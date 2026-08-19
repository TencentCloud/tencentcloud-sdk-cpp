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

#include <tencentcloud/csip/v20221121/model/DescribeAssetOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAssetOverviewResponse::DescribeAssetOverviewResponse() :
    m_assetOverviewHasBeenSet(false),
    m_assetProviderDistributeHasBeenSet(false),
    m_assetTypeOverviewHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AssetOverview") && !rsp["AssetOverview"].IsNull())
    {
        if (!rsp["AssetOverview"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetOverview` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_assetOverview.Deserialize(rsp["AssetOverview"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_assetOverviewHasBeenSet = true;
    }

    if (rsp.HasMember("AssetProviderDistribute") && !rsp["AssetProviderDistribute"].IsNull())
    {
        if (!rsp["AssetProviderDistribute"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProviderDistribute` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_assetProviderDistribute.Deserialize(rsp["AssetProviderDistribute"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_assetProviderDistributeHasBeenSet = true;
    }

    if (rsp.HasMember("AssetTypeOverview") && !rsp["AssetTypeOverview"].IsNull())
    {
        if (!rsp["AssetTypeOverview"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTypeOverview` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_assetTypeOverview.Deserialize(rsp["AssetTypeOverview"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_assetTypeOverviewHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_assetOverviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetOverview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_assetOverview.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_assetProviderDistributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetProviderDistribute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_assetProviderDistribute.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_assetTypeOverviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeOverview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_assetTypeOverview.ToJsonObject(value[key.c_str()], allocator);
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


AssetStatisticsInfo DescribeAssetOverviewResponse::GetAssetOverview() const
{
    return m_assetOverview;
}

bool DescribeAssetOverviewResponse::AssetOverviewHasBeenSet() const
{
    return m_assetOverviewHasBeenSet;
}

AssetProviderDistributeInfo DescribeAssetOverviewResponse::GetAssetProviderDistribute() const
{
    return m_assetProviderDistribute;
}

bool DescribeAssetOverviewResponse::AssetProviderDistributeHasBeenSet() const
{
    return m_assetProviderDistributeHasBeenSet;
}

AssetTypeStatisticsInfo DescribeAssetOverviewResponse::GetAssetTypeOverview() const
{
    return m_assetTypeOverview;
}

bool DescribeAssetOverviewResponse::AssetTypeOverviewHasBeenSet() const
{
    return m_assetTypeOverviewHasBeenSet;
}


