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

#include <tencentcloud/cdwdoris/v20211228/model/BackupCosInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

BackupCosInfo::BackupCosInfo() :
    m_cosBucketHasBeenSet(false),
    m_cosPathHasBeenSet(false),
    m_snapShotPathHasBeenSet(false)
{
}

CoreInternalOutcome BackupCosInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosBucket") && !value["CosBucket"].IsNull())
    {
        if (!value["CosBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupCosInfo.CosBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucket = string(value["CosBucket"].GetString());
        m_cosBucketHasBeenSet = true;
    }

    if (value.HasMember("CosPath") && !value["CosPath"].IsNull())
    {
        if (!value["CosPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupCosInfo.CosPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosPath = string(value["CosPath"].GetString());
        m_cosPathHasBeenSet = true;
    }

    if (value.HasMember("SnapShotPath") && !value["SnapShotPath"].IsNull())
    {
        if (!value["SnapShotPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupCosInfo.SnapShotPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapShotPath = string(value["SnapShotPath"].GetString());
        m_snapShotPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupCosInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_cosPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosPath.c_str(), allocator).Move(), allocator);
    }

    if (m_snapShotPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapShotPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapShotPath.c_str(), allocator).Move(), allocator);
    }

}


string BackupCosInfo::GetCosBucket() const
{
    return m_cosBucket;
}

void BackupCosInfo::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool BackupCosInfo::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string BackupCosInfo::GetCosPath() const
{
    return m_cosPath;
}

void BackupCosInfo::SetCosPath(const string& _cosPath)
{
    m_cosPath = _cosPath;
    m_cosPathHasBeenSet = true;
}

bool BackupCosInfo::CosPathHasBeenSet() const
{
    return m_cosPathHasBeenSet;
}

string BackupCosInfo::GetSnapShotPath() const
{
    return m_snapShotPath;
}

void BackupCosInfo::SetSnapShotPath(const string& _snapShotPath)
{
    m_snapShotPath = _snapShotPath;
    m_snapShotPathHasBeenSet = true;
}

bool BackupCosInfo::SnapShotPathHasBeenSet() const
{
    return m_snapShotPathHasBeenSet;
}

