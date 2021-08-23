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

#include <tencentcloud/tiia/v20190529/model/DetectProductBetaResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

DetectProductBetaResponse::DetectProductBetaResponse() :
    m_regionDetectedHasBeenSet(false),
    m_productInfoHasBeenSet(false),
    m_productInfoListHasBeenSet(false)
{
}

CoreInternalOutcome DetectProductBetaResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RegionDetected") && !rsp["RegionDetected"].IsNull())
    {
        if (!rsp["RegionDetected"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegionDetected` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RegionDetected"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionDetected item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regionDetected.push_back(item);
        }
        m_regionDetectedHasBeenSet = true;
    }

    if (rsp.HasMember("ProductInfo") && !rsp["ProductInfo"].IsNull())
    {
        if (!rsp["ProductInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_productInfo.Deserialize(rsp["ProductInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_productInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ProductInfoList") && !rsp["ProductInfoList"].IsNull())
    {
        if (!rsp["ProductInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ProductInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProductInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_productInfoList.push_back(item);
        }
        m_productInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DetectProductBetaResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_regionDetectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionDetected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regionDetected.begin(); itr != m_regionDetected.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_productInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_productInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_productInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_productInfoList.begin(); itr != m_productInfoList.end(); ++itr, ++i)
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


vector<RegionDetected> DetectProductBetaResponse::GetRegionDetected() const
{
    return m_regionDetected;
}

bool DetectProductBetaResponse::RegionDetectedHasBeenSet() const
{
    return m_regionDetectedHasBeenSet;
}

ProductInfo DetectProductBetaResponse::GetProductInfo() const
{
    return m_productInfo;
}

bool DetectProductBetaResponse::ProductInfoHasBeenSet() const
{
    return m_productInfoHasBeenSet;
}

vector<ProductInfo> DetectProductBetaResponse::GetProductInfoList() const
{
    return m_productInfoList;
}

bool DetectProductBetaResponse::ProductInfoListHasBeenSet() const
{
    return m_productInfoListHasBeenSet;
}


