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

#include <tencentcloud/mps/v20190612/model/VideoDramaCosInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

VideoDramaCosInfo::VideoDramaCosInfo() :
    m_cosBucketRegionHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_cosBucketPathHasBeenSet(false)
{
}

CoreInternalOutcome VideoDramaCosInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosBucketRegion") && !value["CosBucketRegion"].IsNull())
    {
        if (!value["CosBucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDramaCosInfo.CosBucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketRegion = string(value["CosBucketRegion"].GetString());
        m_cosBucketRegionHasBeenSet = true;
    }

    if (value.HasMember("CosBucketName") && !value["CosBucketName"].IsNull())
    {
        if (!value["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDramaCosInfo.CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(value["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (value.HasMember("CosBucketPath") && !value["CosBucketPath"].IsNull())
    {
        if (!value["CosBucketPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDramaCosInfo.CosBucketPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketPath = string(value["CosBucketPath"].GetString());
        m_cosBucketPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoDramaCosInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosBucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketPath.c_str(), allocator).Move(), allocator);
    }

}


string VideoDramaCosInfo::GetCosBucketRegion() const
{
    return m_cosBucketRegion;
}

void VideoDramaCosInfo::SetCosBucketRegion(const string& _cosBucketRegion)
{
    m_cosBucketRegion = _cosBucketRegion;
    m_cosBucketRegionHasBeenSet = true;
}

bool VideoDramaCosInfo::CosBucketRegionHasBeenSet() const
{
    return m_cosBucketRegionHasBeenSet;
}

string VideoDramaCosInfo::GetCosBucketName() const
{
    return m_cosBucketName;
}

void VideoDramaCosInfo::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool VideoDramaCosInfo::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string VideoDramaCosInfo::GetCosBucketPath() const
{
    return m_cosBucketPath;
}

void VideoDramaCosInfo::SetCosBucketPath(const string& _cosBucketPath)
{
    m_cosBucketPath = _cosBucketPath;
    m_cosBucketPathHasBeenSet = true;
}

bool VideoDramaCosInfo::CosBucketPathHasBeenSet() const
{
    return m_cosBucketPathHasBeenSet;
}

