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

#include <tencentcloud/iss/v20230517/model/DescribeVideoDownloadUrlData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeVideoDownloadUrlData::DescribeVideoDownloadUrlData() :
    m_urlHasBeenSet(false),
    m_actualBeginTimeHasBeenSet(false),
    m_actualEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVideoDownloadUrlData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVideoDownloadUrlData.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("ActualBeginTime") && !value["ActualBeginTime"].IsNull())
    {
        if (!value["ActualBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVideoDownloadUrlData.ActualBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actualBeginTime = string(value["ActualBeginTime"].GetString());
        m_actualBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("ActualEndTime") && !value["ActualEndTime"].IsNull())
    {
        if (!value["ActualEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVideoDownloadUrlData.ActualEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actualEndTime = string(value["ActualEndTime"].GetString());
        m_actualEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeVideoDownloadUrlData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_actualBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActualBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actualBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actualEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActualEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actualEndTime.c_str(), allocator).Move(), allocator);
    }

}


string DescribeVideoDownloadUrlData::GetUrl() const
{
    return m_url;
}

void DescribeVideoDownloadUrlData::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DescribeVideoDownloadUrlData::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DescribeVideoDownloadUrlData::GetActualBeginTime() const
{
    return m_actualBeginTime;
}

void DescribeVideoDownloadUrlData::SetActualBeginTime(const string& _actualBeginTime)
{
    m_actualBeginTime = _actualBeginTime;
    m_actualBeginTimeHasBeenSet = true;
}

bool DescribeVideoDownloadUrlData::ActualBeginTimeHasBeenSet() const
{
    return m_actualBeginTimeHasBeenSet;
}

string DescribeVideoDownloadUrlData::GetActualEndTime() const
{
    return m_actualEndTime;
}

void DescribeVideoDownloadUrlData::SetActualEndTime(const string& _actualEndTime)
{
    m_actualEndTime = _actualEndTime;
    m_actualEndTimeHasBeenSet = true;
}

bool DescribeVideoDownloadUrlData::ActualEndTimeHasBeenSet() const
{
    return m_actualEndTimeHasBeenSet;
}

