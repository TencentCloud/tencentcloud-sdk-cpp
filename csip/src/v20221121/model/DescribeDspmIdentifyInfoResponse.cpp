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

#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmIdentifyInfoResponse::DescribeDspmIdentifyInfoResponse() :
    m_identifyIdHasBeenSet(false),
    m_identifyCountHasBeenSet(false),
    m_applyOrderCountHasBeenSet(false),
    m_approveOrderCountHasBeenSet(false),
    m_approveHistoryCountHasBeenSet(false),
    m_assetCountHasBeenSet(false),
    m_uinAccountCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDspmIdentifyInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IdentifyId") && !rsp["IdentifyId"].IsNull())
    {
        if (!rsp["IdentifyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdentifyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifyId = string(rsp["IdentifyId"].GetString());
        m_identifyIdHasBeenSet = true;
    }

    if (rsp.HasMember("IdentifyCount") && !rsp["IdentifyCount"].IsNull())
    {
        if (!rsp["IdentifyCount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IdentifyCount` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IdentifyCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmIdentifyCount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_identifyCount.push_back(item);
        }
        m_identifyCountHasBeenSet = true;
    }

    if (rsp.HasMember("ApplyOrderCount") && !rsp["ApplyOrderCount"].IsNull())
    {
        if (!rsp["ApplyOrderCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyOrderCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applyOrderCount = rsp["ApplyOrderCount"].GetInt64();
        m_applyOrderCountHasBeenSet = true;
    }

    if (rsp.HasMember("ApproveOrderCount") && !rsp["ApproveOrderCount"].IsNull())
    {
        if (!rsp["ApproveOrderCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveOrderCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approveOrderCount = rsp["ApproveOrderCount"].GetInt64();
        m_approveOrderCountHasBeenSet = true;
    }

    if (rsp.HasMember("ApproveHistoryCount") && !rsp["ApproveHistoryCount"].IsNull())
    {
        if (!rsp["ApproveHistoryCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveHistoryCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approveHistoryCount = rsp["ApproveHistoryCount"].GetInt64();
        m_approveHistoryCountHasBeenSet = true;
    }

    if (rsp.HasMember("AssetCount") && !rsp["AssetCount"].IsNull())
    {
        if (!rsp["AssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCount = rsp["AssetCount"].GetInt64();
        m_assetCountHasBeenSet = true;
    }

    if (rsp.HasMember("UinAccountCount") && !rsp["UinAccountCount"].IsNull())
    {
        if (!rsp["UinAccountCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UinAccountCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uinAccountCount = rsp["UinAccountCount"].GetInt64();
        m_uinAccountCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDspmIdentifyInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_identifyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifyId.c_str(), allocator).Move(), allocator);
    }

    if (m_identifyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_identifyCount.begin(); itr != m_identifyCount.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_applyOrderCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyOrderCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyOrderCount, allocator);
    }

    if (m_approveOrderCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveOrderCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approveOrderCount, allocator);
    }

    if (m_approveHistoryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveHistoryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approveHistoryCount, allocator);
    }

    if (m_assetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetCount, allocator);
    }

    if (m_uinAccountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UinAccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uinAccountCount, allocator);
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


string DescribeDspmIdentifyInfoResponse::GetIdentifyId() const
{
    return m_identifyId;
}

bool DescribeDspmIdentifyInfoResponse::IdentifyIdHasBeenSet() const
{
    return m_identifyIdHasBeenSet;
}

vector<DspmIdentifyCount> DescribeDspmIdentifyInfoResponse::GetIdentifyCount() const
{
    return m_identifyCount;
}

bool DescribeDspmIdentifyInfoResponse::IdentifyCountHasBeenSet() const
{
    return m_identifyCountHasBeenSet;
}

int64_t DescribeDspmIdentifyInfoResponse::GetApplyOrderCount() const
{
    return m_applyOrderCount;
}

bool DescribeDspmIdentifyInfoResponse::ApplyOrderCountHasBeenSet() const
{
    return m_applyOrderCountHasBeenSet;
}

int64_t DescribeDspmIdentifyInfoResponse::GetApproveOrderCount() const
{
    return m_approveOrderCount;
}

bool DescribeDspmIdentifyInfoResponse::ApproveOrderCountHasBeenSet() const
{
    return m_approveOrderCountHasBeenSet;
}

int64_t DescribeDspmIdentifyInfoResponse::GetApproveHistoryCount() const
{
    return m_approveHistoryCount;
}

bool DescribeDspmIdentifyInfoResponse::ApproveHistoryCountHasBeenSet() const
{
    return m_approveHistoryCountHasBeenSet;
}

int64_t DescribeDspmIdentifyInfoResponse::GetAssetCount() const
{
    return m_assetCount;
}

bool DescribeDspmIdentifyInfoResponse::AssetCountHasBeenSet() const
{
    return m_assetCountHasBeenSet;
}

int64_t DescribeDspmIdentifyInfoResponse::GetUinAccountCount() const
{
    return m_uinAccountCount;
}

bool DescribeDspmIdentifyInfoResponse::UinAccountCountHasBeenSet() const
{
    return m_uinAccountCountHasBeenSet;
}


