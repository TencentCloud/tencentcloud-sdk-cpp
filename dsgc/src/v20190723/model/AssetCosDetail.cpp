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

#include <tencentcloud/dsgc/v20190723/model/AssetCosDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

AssetCosDetail::AssetCosDetail() :
    m_bucketHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_fileNumsHasBeenSet(false),
    m_sensitiveFileNumsHasBeenSet(false),
    m_distributionDataHasBeenSet(false),
    m_matchedNumHasBeenSet(false)
{
}

CoreInternalOutcome AssetCosDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCosDetail.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCosDetail.DataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = string(value["DataType"].GetString());
        m_dataTypeHasBeenSet = true;
    }

    if (value.HasMember("FileNums") && !value["FileNums"].IsNull())
    {
        if (!value["FileNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCosDetail.FileNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileNums = value["FileNums"].GetInt64();
        m_fileNumsHasBeenSet = true;
    }

    if (value.HasMember("SensitiveFileNums") && !value["SensitiveFileNums"].IsNull())
    {
        if (!value["SensitiveFileNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCosDetail.SensitiveFileNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveFileNums = value["SensitiveFileNums"].GetInt64();
        m_sensitiveFileNumsHasBeenSet = true;
    }

    if (value.HasMember("DistributionData") && !value["DistributionData"].IsNull())
    {
        if (!value["DistributionData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetCosDetail.DistributionData` is not array type"));

        const rapidjson::Value &tmpValue = value["DistributionData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Note item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_distributionData.push_back(item);
        }
        m_distributionDataHasBeenSet = true;
    }

    if (value.HasMember("MatchedNum") && !value["MatchedNum"].IsNull())
    {
        if (!value["MatchedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCosDetail.MatchedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_matchedNum = value["MatchedNum"].GetInt64();
        m_matchedNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetCosDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileNums, allocator);
    }

    if (m_sensitiveFileNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveFileNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveFileNums, allocator);
    }

    if (m_distributionDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistributionData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_distributionData.begin(); itr != m_distributionData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_matchedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_matchedNum, allocator);
    }

}


string AssetCosDetail::GetBucket() const
{
    return m_bucket;
}

void AssetCosDetail::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool AssetCosDetail::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string AssetCosDetail::GetDataType() const
{
    return m_dataType;
}

void AssetCosDetail::SetDataType(const string& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool AssetCosDetail::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

int64_t AssetCosDetail::GetFileNums() const
{
    return m_fileNums;
}

void AssetCosDetail::SetFileNums(const int64_t& _fileNums)
{
    m_fileNums = _fileNums;
    m_fileNumsHasBeenSet = true;
}

bool AssetCosDetail::FileNumsHasBeenSet() const
{
    return m_fileNumsHasBeenSet;
}

int64_t AssetCosDetail::GetSensitiveFileNums() const
{
    return m_sensitiveFileNums;
}

void AssetCosDetail::SetSensitiveFileNums(const int64_t& _sensitiveFileNums)
{
    m_sensitiveFileNums = _sensitiveFileNums;
    m_sensitiveFileNumsHasBeenSet = true;
}

bool AssetCosDetail::SensitiveFileNumsHasBeenSet() const
{
    return m_sensitiveFileNumsHasBeenSet;
}

vector<Note> AssetCosDetail::GetDistributionData() const
{
    return m_distributionData;
}

void AssetCosDetail::SetDistributionData(const vector<Note>& _distributionData)
{
    m_distributionData = _distributionData;
    m_distributionDataHasBeenSet = true;
}

bool AssetCosDetail::DistributionDataHasBeenSet() const
{
    return m_distributionDataHasBeenSet;
}

int64_t AssetCosDetail::GetMatchedNum() const
{
    return m_matchedNum;
}

void AssetCosDetail::SetMatchedNum(const int64_t& _matchedNum)
{
    m_matchedNum = _matchedNum;
    m_matchedNumHasBeenSet = true;
}

bool AssetCosDetail::MatchedNumHasBeenSet() const
{
    return m_matchedNumHasBeenSet;
}

