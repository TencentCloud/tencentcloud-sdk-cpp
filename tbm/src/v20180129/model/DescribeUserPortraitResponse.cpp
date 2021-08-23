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

#include <tencentcloud/tbm/v20180129/model/DescribeUserPortraitResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbm::V20180129::Model;
using namespace std;

DescribeUserPortraitResponse::DescribeUserPortraitResponse() :
    m_ageHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_movieHasBeenSet(false),
    m_starHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserPortraitResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Age") && !rsp["Age"].IsNull())
    {
        if (!rsp["Age"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Age` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_age.Deserialize(rsp["Age"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ageHasBeenSet = true;
    }

    if (rsp.HasMember("Gender") && !rsp["Gender"].IsNull())
    {
        if (!rsp["Gender"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Gender` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gender.Deserialize(rsp["Gender"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_genderHasBeenSet = true;
    }

    if (rsp.HasMember("Province") && !rsp["Province"].IsNull())
    {
        if (!rsp["Province"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Province` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_province.Deserialize(rsp["Province"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_provinceHasBeenSet = true;
    }

    if (rsp.HasMember("Movie") && !rsp["Movie"].IsNull())
    {
        if (!rsp["Movie"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Movie` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_movie.Deserialize(rsp["Movie"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_movieHasBeenSet = true;
    }

    if (rsp.HasMember("Star") && !rsp["Star"].IsNull())
    {
        if (!rsp["Star"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Star` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_star.Deserialize(rsp["Star"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_starHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUserPortraitResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_age.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gender.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_province.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_movieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Movie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_movie.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_starHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Star";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_star.ToJsonObject(value[key.c_str()], allocator);
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


AgePortraitInfo DescribeUserPortraitResponse::GetAge() const
{
    return m_age;
}

bool DescribeUserPortraitResponse::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

GenderPortraitInfo DescribeUserPortraitResponse::GetGender() const
{
    return m_gender;
}

bool DescribeUserPortraitResponse::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

ProvincePortraitInfo DescribeUserPortraitResponse::GetProvince() const
{
    return m_province;
}

bool DescribeUserPortraitResponse::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

MoviePortraitInfo DescribeUserPortraitResponse::GetMovie() const
{
    return m_movie;
}

bool DescribeUserPortraitResponse::MovieHasBeenSet() const
{
    return m_movieHasBeenSet;
}

StarPortraitInfo DescribeUserPortraitResponse::GetStar() const
{
    return m_star;
}

bool DescribeUserPortraitResponse::StarHasBeenSet() const
{
    return m_starHasBeenSet;
}


