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

#include <tencentcloud/csip/v20221121/model/DescribeAssetDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAssetDetailResponse::DescribeAssetDetailResponse() :
    m_dynamicTabsHasBeenSet(false),
    m_detailTabsHasBeenSet(false),
    m_assetDetailHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DynamicTabs") && !rsp["DynamicTabs"].IsNull())
    {
        if (!rsp["DynamicTabs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicTabs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DynamicTabs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DynamicTab item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dynamicTabs.push_back(item);
        }
        m_dynamicTabsHasBeenSet = true;
    }

    if (rsp.HasMember("DetailTabs") && !rsp["DetailTabs"].IsNull())
    {
        if (!rsp["DetailTabs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetailTabs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DetailTabs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_detailTabs.push_back((*itr).GetString());
        }
        m_detailTabsHasBeenSet = true;
    }

    if (rsp.HasMember("AssetDetail") && !rsp["AssetDetail"].IsNull())
    {
        if (!rsp["AssetDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_assetDetail.Deserialize(rsp["AssetDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_assetDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dynamicTabsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicTabs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dynamicTabs.begin(); itr != m_dynamicTabs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_detailTabsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailTabs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_detailTabs.begin(); itr != m_detailTabs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_assetDetail.ToJsonObject(value[key.c_str()], allocator);
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


vector<DynamicTab> DescribeAssetDetailResponse::GetDynamicTabs() const
{
    return m_dynamicTabs;
}

bool DescribeAssetDetailResponse::DynamicTabsHasBeenSet() const
{
    return m_dynamicTabsHasBeenSet;
}

vector<string> DescribeAssetDetailResponse::GetDetailTabs() const
{
    return m_detailTabs;
}

bool DescribeAssetDetailResponse::DetailTabsHasBeenSet() const
{
    return m_detailTabsHasBeenSet;
}

AssetDetailItem DescribeAssetDetailResponse::GetAssetDetail() const
{
    return m_assetDetail;
}

bool DescribeAssetDetailResponse::AssetDetailHasBeenSet() const
{
    return m_assetDetailHasBeenSet;
}


