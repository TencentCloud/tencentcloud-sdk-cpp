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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceLocationSolveResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeDeviceLocationSolveResponse::DescribeDeviceLocationSolveResponse() :
    m_longitudeHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_locationTypeHasBeenSet(false),
    m_accuracyHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceLocationSolveResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Longitude") && !rsp["Longitude"].IsNull())
    {
        if (!rsp["Longitude"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Longitude` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_longitude = rsp["Longitude"].GetDouble();
        m_longitudeHasBeenSet = true;
    }

    if (rsp.HasMember("Latitude") && !rsp["Latitude"].IsNull())
    {
        if (!rsp["Latitude"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Latitude` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_latitude = rsp["Latitude"].GetDouble();
        m_latitudeHasBeenSet = true;
    }

    if (rsp.HasMember("LocationType") && !rsp["LocationType"].IsNull())
    {
        if (!rsp["LocationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locationType = string(rsp["LocationType"].GetString());
        m_locationTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Accuracy") && !rsp["Accuracy"].IsNull())
    {
        if (!rsp["Accuracy"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Accuracy` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_accuracy = rsp["Accuracy"].GetDouble();
        m_accuracyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDeviceLocationSolveResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_longitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Longitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longitude, allocator);
    }

    if (m_latitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latitude, allocator);
    }

    if (m_locationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locationType.c_str(), allocator).Move(), allocator);
    }

    if (m_accuracyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Accuracy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accuracy, allocator);
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


double DescribeDeviceLocationSolveResponse::GetLongitude() const
{
    return m_longitude;
}

bool DescribeDeviceLocationSolveResponse::LongitudeHasBeenSet() const
{
    return m_longitudeHasBeenSet;
}

double DescribeDeviceLocationSolveResponse::GetLatitude() const
{
    return m_latitude;
}

bool DescribeDeviceLocationSolveResponse::LatitudeHasBeenSet() const
{
    return m_latitudeHasBeenSet;
}

string DescribeDeviceLocationSolveResponse::GetLocationType() const
{
    return m_locationType;
}

bool DescribeDeviceLocationSolveResponse::LocationTypeHasBeenSet() const
{
    return m_locationTypeHasBeenSet;
}

double DescribeDeviceLocationSolveResponse::GetAccuracy() const
{
    return m_accuracy;
}

bool DescribeDeviceLocationSolveResponse::AccuracyHasBeenSet() const
{
    return m_accuracyHasBeenSet;
}


