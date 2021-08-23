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

#include <tencentcloud/youmall/v20180228/model/DescribeCameraPersonResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DescribeCameraPersonResponse::DescribeCameraPersonResponse() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_cameraIdHasBeenSet(false),
    m_posIdHasBeenSet(false),
    m_infosHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCameraPersonResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CompanyId") && !rsp["CompanyId"].IsNull())
    {
        if (!rsp["CompanyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyId = string(rsp["CompanyId"].GetString());
        m_companyIdHasBeenSet = true;
    }

    if (rsp.HasMember("ShopId") && !rsp["ShopId"].IsNull())
    {
        if (!rsp["ShopId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShopId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = rsp["ShopId"].GetInt64();
        m_shopIdHasBeenSet = true;
    }

    if (rsp.HasMember("CameraId") && !rsp["CameraId"].IsNull())
    {
        if (!rsp["CameraId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cameraId = rsp["CameraId"].GetInt64();
        m_cameraIdHasBeenSet = true;
    }

    if (rsp.HasMember("PosId") && !rsp["PosId"].IsNull())
    {
        if (!rsp["PosId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PosId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_posId = string(rsp["PosId"].GetString());
        m_posIdHasBeenSet = true;
    }

    if (rsp.HasMember("Infos") && !rsp["Infos"].IsNull())
    {
        if (!rsp["Infos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Infos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Infos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CameraPersonInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_infos.push_back(item);
        }
        m_infosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCameraPersonResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyId.c_str(), allocator).Move(), allocator);
    }

    if (m_shopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shopId, allocator);
    }

    if (m_cameraIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cameraId, allocator);
    }

    if (m_posIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_posId.c_str(), allocator).Move(), allocator);
    }

    if (m_infosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Infos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_infos.begin(); itr != m_infos.end(); ++itr, ++i)
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


string DescribeCameraPersonResponse::GetCompanyId() const
{
    return m_companyId;
}

bool DescribeCameraPersonResponse::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t DescribeCameraPersonResponse::GetShopId() const
{
    return m_shopId;
}

bool DescribeCameraPersonResponse::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

int64_t DescribeCameraPersonResponse::GetCameraId() const
{
    return m_cameraId;
}

bool DescribeCameraPersonResponse::CameraIdHasBeenSet() const
{
    return m_cameraIdHasBeenSet;
}

string DescribeCameraPersonResponse::GetPosId() const
{
    return m_posId;
}

bool DescribeCameraPersonResponse::PosIdHasBeenSet() const
{
    return m_posIdHasBeenSet;
}

vector<CameraPersonInfo> DescribeCameraPersonResponse::GetInfos() const
{
    return m_infos;
}

bool DescribeCameraPersonResponse::InfosHasBeenSet() const
{
    return m_infosHasBeenSet;
}


