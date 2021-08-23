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

#include <tencentcloud/tione/v20191022/model/CosDataSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

CosDataSource::CosDataSource() :
    m_bucketHasBeenSet(false),
    m_keyPrefixHasBeenSet(false),
    m_dataDistributionTypeHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
}

CoreInternalOutcome CosDataSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosDataSource.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("KeyPrefix") && !value["KeyPrefix"].IsNull())
    {
        if (!value["KeyPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosDataSource.KeyPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyPrefix = string(value["KeyPrefix"].GetString());
        m_keyPrefixHasBeenSet = true;
    }

    if (value.HasMember("DataDistributionType") && !value["DataDistributionType"].IsNull())
    {
        if (!value["DataDistributionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosDataSource.DataDistributionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataDistributionType = string(value["DataDistributionType"].GetString());
        m_dataDistributionTypeHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosDataSource.DataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = string(value["DataType"].GetString());
        m_dataTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosDataSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_keyPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_dataDistributionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDistributionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataDistributionType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataType.c_str(), allocator).Move(), allocator);
    }

}


string CosDataSource::GetBucket() const
{
    return m_bucket;
}

void CosDataSource::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CosDataSource::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string CosDataSource::GetKeyPrefix() const
{
    return m_keyPrefix;
}

void CosDataSource::SetKeyPrefix(const string& _keyPrefix)
{
    m_keyPrefix = _keyPrefix;
    m_keyPrefixHasBeenSet = true;
}

bool CosDataSource::KeyPrefixHasBeenSet() const
{
    return m_keyPrefixHasBeenSet;
}

string CosDataSource::GetDataDistributionType() const
{
    return m_dataDistributionType;
}

void CosDataSource::SetDataDistributionType(const string& _dataDistributionType)
{
    m_dataDistributionType = _dataDistributionType;
    m_dataDistributionTypeHasBeenSet = true;
}

bool CosDataSource::DataDistributionTypeHasBeenSet() const
{
    return m_dataDistributionTypeHasBeenSet;
}

string CosDataSource::GetDataType() const
{
    return m_dataType;
}

void CosDataSource::SetDataType(const string& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool CosDataSource::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

