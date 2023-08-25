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

#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryTaskCOSCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaDiscoveryTaskCOSCondition::DspaDiscoveryTaskCOSCondition() :
    m_bucketHasBeenSet(false),
    m_fileTypesHasBeenSet(false),
    m_fileSizeLimitHasBeenSet(false)
{
}

CoreInternalOutcome DspaDiscoveryTaskCOSCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskCOSCondition.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("FileTypes") && !value["FileTypes"].IsNull())
    {
        if (!value["FileTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskCOSCondition.FileTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["FileTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileTypes.push_back((*itr).GetString());
        }
        m_fileTypesHasBeenSet = true;
    }

    if (value.HasMember("FileSizeLimit") && !value["FileSizeLimit"].IsNull())
    {
        if (!value["FileSizeLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskCOSCondition.FileSizeLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSizeLimit = value["FileSizeLimit"].GetInt64();
        m_fileSizeLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaDiscoveryTaskCOSCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileTypes.begin(); itr != m_fileTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileSizeLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSizeLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSizeLimit, allocator);
    }

}


string DspaDiscoveryTaskCOSCondition::GetBucket() const
{
    return m_bucket;
}

void DspaDiscoveryTaskCOSCondition::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool DspaDiscoveryTaskCOSCondition::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

vector<string> DspaDiscoveryTaskCOSCondition::GetFileTypes() const
{
    return m_fileTypes;
}

void DspaDiscoveryTaskCOSCondition::SetFileTypes(const vector<string>& _fileTypes)
{
    m_fileTypes = _fileTypes;
    m_fileTypesHasBeenSet = true;
}

bool DspaDiscoveryTaskCOSCondition::FileTypesHasBeenSet() const
{
    return m_fileTypesHasBeenSet;
}

int64_t DspaDiscoveryTaskCOSCondition::GetFileSizeLimit() const
{
    return m_fileSizeLimit;
}

void DspaDiscoveryTaskCOSCondition::SetFileSizeLimit(const int64_t& _fileSizeLimit)
{
    m_fileSizeLimit = _fileSizeLimit;
    m_fileSizeLimitHasBeenSet = true;
}

bool DspaDiscoveryTaskCOSCondition::FileSizeLimitHasBeenSet() const
{
    return m_fileSizeLimitHasBeenSet;
}

