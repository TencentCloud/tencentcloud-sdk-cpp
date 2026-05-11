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

#include <tencentcloud/live/v20180801/model/SceneStoreCosParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

SceneStoreCosParam::SceneStoreCosParam() :
    m_cosBucketNameHasBeenSet(false),
    m_cosBucketRegionHasBeenSet(false),
    m_cosBucketPathHasBeenSet(false)
{
}

CoreInternalOutcome SceneStoreCosParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosBucketName") && !value["CosBucketName"].IsNull())
    {
        if (!value["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneStoreCosParam.CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(value["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (value.HasMember("CosBucketRegion") && !value["CosBucketRegion"].IsNull())
    {
        if (!value["CosBucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneStoreCosParam.CosBucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketRegion = string(value["CosBucketRegion"].GetString());
        m_cosBucketRegionHasBeenSet = true;
    }

    if (value.HasMember("CosBucketPath") && !value["CosBucketPath"].IsNull())
    {
        if (!value["CosBucketPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneStoreCosParam.CosBucketPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketPath = string(value["CosBucketPath"].GetString());
        m_cosBucketPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SceneStoreCosParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string SceneStoreCosParam::GetCosBucketName() const
{
    return m_cosBucketName;
}

void SceneStoreCosParam::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool SceneStoreCosParam::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string SceneStoreCosParam::GetCosBucketRegion() const
{
    return m_cosBucketRegion;
}

void SceneStoreCosParam::SetCosBucketRegion(const string& _cosBucketRegion)
{
    m_cosBucketRegion = _cosBucketRegion;
    m_cosBucketRegionHasBeenSet = true;
}

bool SceneStoreCosParam::CosBucketRegionHasBeenSet() const
{
    return m_cosBucketRegionHasBeenSet;
}

string SceneStoreCosParam::GetCosBucketPath() const
{
    return m_cosBucketPath;
}

void SceneStoreCosParam::SetCosBucketPath(const string& _cosBucketPath)
{
    m_cosBucketPath = _cosBucketPath;
    m_cosBucketPathHasBeenSet = true;
}

bool SceneStoreCosParam::CosBucketPathHasBeenSet() const
{
    return m_cosBucketPathHasBeenSet;
}

