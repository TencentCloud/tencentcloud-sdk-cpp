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

#include <tencentcloud/cpdp/v20190820/model/TransferDetailResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

TransferDetailResponse::TransferDetailResponse() :
    m_merchantDetailNoHasBeenSet(false),
    m_detailIdHasBeenSet(false),
    m_detailStatusHasBeenSet(false)
{
}

CoreInternalOutcome TransferDetailResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MerchantDetailNo") && !value["MerchantDetailNo"].IsNull())
    {
        if (!value["MerchantDetailNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferDetailResponse.MerchantDetailNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantDetailNo = string(value["MerchantDetailNo"].GetString());
        m_merchantDetailNoHasBeenSet = true;
    }

    if (value.HasMember("DetailId") && !value["DetailId"].IsNull())
    {
        if (!value["DetailId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferDetailResponse.DetailId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detailId = string(value["DetailId"].GetString());
        m_detailIdHasBeenSet = true;
    }

    if (value.HasMember("DetailStatus") && !value["DetailStatus"].IsNull())
    {
        if (!value["DetailStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferDetailResponse.DetailStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detailStatus = string(value["DetailStatus"].GetString());
        m_detailStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransferDetailResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_merchantDetailNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantDetailNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantDetailNo.c_str(), allocator).Move(), allocator);
    }

    if (m_detailIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detailId.c_str(), allocator).Move(), allocator);
    }

    if (m_detailStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detailStatus.c_str(), allocator).Move(), allocator);
    }

}


string TransferDetailResponse::GetMerchantDetailNo() const
{
    return m_merchantDetailNo;
}

void TransferDetailResponse::SetMerchantDetailNo(const string& _merchantDetailNo)
{
    m_merchantDetailNo = _merchantDetailNo;
    m_merchantDetailNoHasBeenSet = true;
}

bool TransferDetailResponse::MerchantDetailNoHasBeenSet() const
{
    return m_merchantDetailNoHasBeenSet;
}

string TransferDetailResponse::GetDetailId() const
{
    return m_detailId;
}

void TransferDetailResponse::SetDetailId(const string& _detailId)
{
    m_detailId = _detailId;
    m_detailIdHasBeenSet = true;
}

bool TransferDetailResponse::DetailIdHasBeenSet() const
{
    return m_detailIdHasBeenSet;
}

string TransferDetailResponse::GetDetailStatus() const
{
    return m_detailStatus;
}

void TransferDetailResponse::SetDetailStatus(const string& _detailStatus)
{
    m_detailStatus = _detailStatus;
    m_detailStatusHasBeenSet = true;
}

bool TransferDetailResponse::DetailStatusHasBeenSet() const
{
    return m_detailStatusHasBeenSet;
}

