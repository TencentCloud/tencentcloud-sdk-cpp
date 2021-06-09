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

#include <tencentcloud/youmall/v20180228/model/DescribePersonInfoByFacePictureResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DescribePersonInfoByFacePictureResponse::DescribePersonInfoByFacePictureResponse() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_pictureUrlHasBeenSet(false),
    m_personTypeHasBeenSet(false),
    m_firstVisitTimeHasBeenSet(false),
    m_visitTimesHasBeenSet(false)
{
}

CoreInternalOutcome DescribePersonInfoByFacePictureResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("CompanyId") && !rsp["CompanyId"].IsNull())
    {
        if (!rsp["CompanyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CompanyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyId = string(rsp["CompanyId"].GetString());
        m_companyIdHasBeenSet = true;
    }

    if (rsp.HasMember("ShopId") && !rsp["ShopId"].IsNull())
    {
        if (!rsp["ShopId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ShopId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = rsp["ShopId"].GetInt64();
        m_shopIdHasBeenSet = true;
    }

    if (rsp.HasMember("PersonId") && !rsp["PersonId"].IsNull())
    {
        if (!rsp["PersonId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PersonId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_personId = rsp["PersonId"].GetInt64();
        m_personIdHasBeenSet = true;
    }

    if (rsp.HasMember("PictureUrl") && !rsp["PictureUrl"].IsNull())
    {
        if (!rsp["PictureUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `PictureUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pictureUrl = string(rsp["PictureUrl"].GetString());
        m_pictureUrlHasBeenSet = true;
    }

    if (rsp.HasMember("PersonType") && !rsp["PersonType"].IsNull())
    {
        if (!rsp["PersonType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PersonType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_personType = rsp["PersonType"].GetInt64();
        m_personTypeHasBeenSet = true;
    }

    if (rsp.HasMember("FirstVisitTime") && !rsp["FirstVisitTime"].IsNull())
    {
        if (!rsp["FirstVisitTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `FirstVisitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstVisitTime = string(rsp["FirstVisitTime"].GetString());
        m_firstVisitTimeHasBeenSet = true;
    }

    if (rsp.HasMember("VisitTimes") && !rsp["VisitTimes"].IsNull())
    {
        if (!rsp["VisitTimes"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VisitTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_visitTimes = rsp["VisitTimes"].GetInt64();
        m_visitTimesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribePersonInfoByFacePictureResponse::GetCompanyId() const
{
    return m_companyId;
}

bool DescribePersonInfoByFacePictureResponse::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t DescribePersonInfoByFacePictureResponse::GetShopId() const
{
    return m_shopId;
}

bool DescribePersonInfoByFacePictureResponse::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

int64_t DescribePersonInfoByFacePictureResponse::GetPersonId() const
{
    return m_personId;
}

bool DescribePersonInfoByFacePictureResponse::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string DescribePersonInfoByFacePictureResponse::GetPictureUrl() const
{
    return m_pictureUrl;
}

bool DescribePersonInfoByFacePictureResponse::PictureUrlHasBeenSet() const
{
    return m_pictureUrlHasBeenSet;
}

int64_t DescribePersonInfoByFacePictureResponse::GetPersonType() const
{
    return m_personType;
}

bool DescribePersonInfoByFacePictureResponse::PersonTypeHasBeenSet() const
{
    return m_personTypeHasBeenSet;
}

string DescribePersonInfoByFacePictureResponse::GetFirstVisitTime() const
{
    return m_firstVisitTime;
}

bool DescribePersonInfoByFacePictureResponse::FirstVisitTimeHasBeenSet() const
{
    return m_firstVisitTimeHasBeenSet;
}

int64_t DescribePersonInfoByFacePictureResponse::GetVisitTimes() const
{
    return m_visitTimes;
}

bool DescribePersonInfoByFacePictureResponse::VisitTimesHasBeenSet() const
{
    return m_visitTimesHasBeenSet;
}


