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

#include <tencentcloud/youmall/v20180228/model/DescribeTrajectoryDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DescribeTrajectoryDataResponse::DescribeTrajectoryDataResponse() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_totalPersonHasBeenSet(false),
    m_totalTrajectoryHasBeenSet(false),
    m_personHasBeenSet(false),
    m_trajectoryHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTrajectoryDataResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("TotalPerson") && !rsp["TotalPerson"].IsNull())
    {
        if (!rsp["TotalPerson"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TotalPerson` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPerson = rsp["TotalPerson"].GetInt64();
        m_totalPersonHasBeenSet = true;
    }

    if (rsp.HasMember("TotalTrajectory") && !rsp["TotalTrajectory"].IsNull())
    {
        if (!rsp["TotalTrajectory"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TotalTrajectory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTrajectory = rsp["TotalTrajectory"].GetInt64();
        m_totalTrajectoryHasBeenSet = true;
    }

    if (rsp.HasMember("Person") && !rsp["Person"].IsNull())
    {
        if (!rsp["Person"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Person` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_person = rsp["Person"].GetInt64();
        m_personHasBeenSet = true;
    }

    if (rsp.HasMember("Trajectory") && !rsp["Trajectory"].IsNull())
    {
        if (!rsp["Trajectory"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Trajectory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trajectory = rsp["Trajectory"].GetInt64();
        m_trajectoryHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrajectorySunData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeTrajectoryDataResponse::GetCompanyId() const
{
    return m_companyId;
}

bool DescribeTrajectoryDataResponse::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t DescribeTrajectoryDataResponse::GetShopId() const
{
    return m_shopId;
}

bool DescribeTrajectoryDataResponse::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

int64_t DescribeTrajectoryDataResponse::GetTotalPerson() const
{
    return m_totalPerson;
}

bool DescribeTrajectoryDataResponse::TotalPersonHasBeenSet() const
{
    return m_totalPersonHasBeenSet;
}

int64_t DescribeTrajectoryDataResponse::GetTotalTrajectory() const
{
    return m_totalTrajectory;
}

bool DescribeTrajectoryDataResponse::TotalTrajectoryHasBeenSet() const
{
    return m_totalTrajectoryHasBeenSet;
}

int64_t DescribeTrajectoryDataResponse::GetPerson() const
{
    return m_person;
}

bool DescribeTrajectoryDataResponse::PersonHasBeenSet() const
{
    return m_personHasBeenSet;
}

int64_t DescribeTrajectoryDataResponse::GetTrajectory() const
{
    return m_trajectory;
}

bool DescribeTrajectoryDataResponse::TrajectoryHasBeenSet() const
{
    return m_trajectoryHasBeenSet;
}

vector<TrajectorySunData> DescribeTrajectoryDataResponse::GetData() const
{
    return m_data;
}

bool DescribeTrajectoryDataResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


