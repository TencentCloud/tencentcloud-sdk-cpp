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

#include <tencentcloud/mps/v20190612/model/AigcStoreCosParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AigcStoreCosParam::AigcStoreCosParam() :
    m_cosBucketNameHasBeenSet(false),
    m_cosBucketRegionHasBeenSet(false),
    m_cosBucketPathHasBeenSet(false)
{
}

CoreInternalOutcome AigcStoreCosParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosBucketName") && !value["CosBucketName"].IsNull())
    {
        if (!value["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcStoreCosParam.CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(value["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (value.HasMember("CosBucketRegion") && !value["CosBucketRegion"].IsNull())
    {
        if (!value["CosBucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcStoreCosParam.CosBucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketRegion = string(value["CosBucketRegion"].GetString());
        m_cosBucketRegionHasBeenSet = true;
    }

    if (value.HasMember("CosBucketPath") && !value["CosBucketPath"].IsNull())
    {
        if (!value["CosBucketPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcStoreCosParam.CosBucketPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketPath = string(value["CosBucketPath"].GetString());
        m_cosBucketPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcStoreCosParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketPath.c_str(), allocator).Move(), allocator);
    }

}


string AigcStoreCosParam::GetCosBucketName() const
{
    return m_cosBucketName;
}

void AigcStoreCosParam::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool AigcStoreCosParam::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string AigcStoreCosParam::GetCosBucketRegion() const
{
    return m_cosBucketRegion;
}

void AigcStoreCosParam::SetCosBucketRegion(const string& _cosBucketRegion)
{
    m_cosBucketRegion = _cosBucketRegion;
    m_cosBucketRegionHasBeenSet = true;
}

bool AigcStoreCosParam::CosBucketRegionHasBeenSet() const
{
    return m_cosBucketRegionHasBeenSet;
}

string AigcStoreCosParam::GetCosBucketPath() const
{
    return m_cosBucketPath;
}

void AigcStoreCosParam::SetCosBucketPath(const string& _cosBucketPath)
{
    m_cosBucketPath = _cosBucketPath;
    m_cosBucketPathHasBeenSet = true;
}

bool AigcStoreCosParam::CosBucketPathHasBeenSet() const
{
    return m_cosBucketPathHasBeenSet;
}

