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

#include <tencentcloud/dsgc/v20190723/model/DescribeAssetOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeAssetOverviewResponse::DescribeAssetOverviewResponse() :
    m_dBInstanceNumsHasBeenSet(false),
    m_dBNumsHasBeenSet(false),
    m_tableNumsHasBeenSet(false),
    m_fieldNumsHasBeenSet(false),
    m_dBInstanceDistributionHasBeenSet(false),
    m_dBDistributionHasBeenSet(false),
    m_bucketNumsHasBeenSet(false),
    m_fileNumsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_esInstanceNumsHasBeenSet(false),
    m_esIndexNumsHasBeenSet(false),
    m_esFieldNumsHasBeenSet(false),
    m_mongoInstanceNumsHasBeenSet(false),
    m_mongoDbNumsHasBeenSet(false),
    m_mongoColNumsHasBeenSet(false),
    m_mongoFieldNumsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DBInstanceNums") && !rsp["DBInstanceNums"].IsNull())
    {
        if (!rsp["DBInstanceNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceNums = rsp["DBInstanceNums"].GetInt64();
        m_dBInstanceNumsHasBeenSet = true;
    }

    if (rsp.HasMember("DBNums") && !rsp["DBNums"].IsNull())
    {
        if (!rsp["DBNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dBNums = rsp["DBNums"].GetInt64();
        m_dBNumsHasBeenSet = true;
    }

    if (rsp.HasMember("TableNums") && !rsp["TableNums"].IsNull())
    {
        if (!rsp["TableNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableNums = rsp["TableNums"].GetInt64();
        m_tableNumsHasBeenSet = true;
    }

    if (rsp.HasMember("FieldNums") && !rsp["FieldNums"].IsNull())
    {
        if (!rsp["FieldNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldNums = rsp["FieldNums"].GetInt64();
        m_fieldNumsHasBeenSet = true;
    }

    if (rsp.HasMember("DBInstanceDistribution") && !rsp["DBInstanceDistribution"].IsNull())
    {
        if (!rsp["DBInstanceDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBInstanceDistribution` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DBInstanceDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Note item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dBInstanceDistribution.push_back(item);
        }
        m_dBInstanceDistributionHasBeenSet = true;
    }

    if (rsp.HasMember("DBDistribution") && !rsp["DBDistribution"].IsNull())
    {
        if (!rsp["DBDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBDistribution` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DBDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Note item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dBDistribution.push_back(item);
        }
        m_dBDistributionHasBeenSet = true;
    }

    if (rsp.HasMember("BucketNums") && !rsp["BucketNums"].IsNull())
    {
        if (!rsp["BucketNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BucketNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bucketNums = rsp["BucketNums"].GetInt64();
        m_bucketNumsHasBeenSet = true;
    }

    if (rsp.HasMember("FileNums") && !rsp["FileNums"].IsNull())
    {
        if (!rsp["FileNums"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileNums` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileNums = rsp["FileNums"].GetInt64();
        m_fileNumsHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("EsInstanceNums") && !rsp["EsInstanceNums"].IsNull())
    {
        if (!rsp["EsInstanceNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsInstanceNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_esInstanceNums = rsp["EsInstanceNums"].GetUint64();
        m_esInstanceNumsHasBeenSet = true;
    }

    if (rsp.HasMember("EsIndexNums") && !rsp["EsIndexNums"].IsNull())
    {
        if (!rsp["EsIndexNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsIndexNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_esIndexNums = rsp["EsIndexNums"].GetUint64();
        m_esIndexNumsHasBeenSet = true;
    }

    if (rsp.HasMember("EsFieldNums") && !rsp["EsFieldNums"].IsNull())
    {
        if (!rsp["EsFieldNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsFieldNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_esFieldNums = rsp["EsFieldNums"].GetUint64();
        m_esFieldNumsHasBeenSet = true;
    }

    if (rsp.HasMember("MongoInstanceNums") && !rsp["MongoInstanceNums"].IsNull())
    {
        if (!rsp["MongoInstanceNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoInstanceNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mongoInstanceNums = rsp["MongoInstanceNums"].GetUint64();
        m_mongoInstanceNumsHasBeenSet = true;
    }

    if (rsp.HasMember("MongoDbNums") && !rsp["MongoDbNums"].IsNull())
    {
        if (!rsp["MongoDbNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDbNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mongoDbNums = rsp["MongoDbNums"].GetUint64();
        m_mongoDbNumsHasBeenSet = true;
    }

    if (rsp.HasMember("MongoColNums") && !rsp["MongoColNums"].IsNull())
    {
        if (!rsp["MongoColNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoColNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mongoColNums = rsp["MongoColNums"].GetUint64();
        m_mongoColNumsHasBeenSet = true;
    }

    if (rsp.HasMember("MongoFieldNums") && !rsp["MongoFieldNums"].IsNull())
    {
        if (!rsp["MongoFieldNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoFieldNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mongoFieldNums = rsp["MongoFieldNums"].GetUint64();
        m_mongoFieldNumsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dBInstanceNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dBInstanceNums, allocator);
    }

    if (m_dBNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dBNums, allocator);
    }

    if (m_tableNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableNums, allocator);
    }

    if (m_fieldNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fieldNums, allocator);
    }

    if (m_dBInstanceDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dBInstanceDistribution.begin(); itr != m_dBInstanceDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dBDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dBDistribution.begin(); itr != m_dBDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bucketNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bucketNums, allocator);
    }

    if (m_fileNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileNums, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_esInstanceNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsInstanceNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_esInstanceNums, allocator);
    }

    if (m_esIndexNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsIndexNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_esIndexNums, allocator);
    }

    if (m_esFieldNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsFieldNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_esFieldNums, allocator);
    }

    if (m_mongoInstanceNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoInstanceNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mongoInstanceNums, allocator);
    }

    if (m_mongoDbNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoDbNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mongoDbNums, allocator);
    }

    if (m_mongoColNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoColNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mongoColNums, allocator);
    }

    if (m_mongoFieldNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoFieldNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mongoFieldNums, allocator);
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


int64_t DescribeAssetOverviewResponse::GetDBInstanceNums() const
{
    return m_dBInstanceNums;
}

bool DescribeAssetOverviewResponse::DBInstanceNumsHasBeenSet() const
{
    return m_dBInstanceNumsHasBeenSet;
}

int64_t DescribeAssetOverviewResponse::GetDBNums() const
{
    return m_dBNums;
}

bool DescribeAssetOverviewResponse::DBNumsHasBeenSet() const
{
    return m_dBNumsHasBeenSet;
}

int64_t DescribeAssetOverviewResponse::GetTableNums() const
{
    return m_tableNums;
}

bool DescribeAssetOverviewResponse::TableNumsHasBeenSet() const
{
    return m_tableNumsHasBeenSet;
}

int64_t DescribeAssetOverviewResponse::GetFieldNums() const
{
    return m_fieldNums;
}

bool DescribeAssetOverviewResponse::FieldNumsHasBeenSet() const
{
    return m_fieldNumsHasBeenSet;
}

vector<Note> DescribeAssetOverviewResponse::GetDBInstanceDistribution() const
{
    return m_dBInstanceDistribution;
}

bool DescribeAssetOverviewResponse::DBInstanceDistributionHasBeenSet() const
{
    return m_dBInstanceDistributionHasBeenSet;
}

vector<Note> DescribeAssetOverviewResponse::GetDBDistribution() const
{
    return m_dBDistribution;
}

bool DescribeAssetOverviewResponse::DBDistributionHasBeenSet() const
{
    return m_dBDistributionHasBeenSet;
}

int64_t DescribeAssetOverviewResponse::GetBucketNums() const
{
    return m_bucketNums;
}

bool DescribeAssetOverviewResponse::BucketNumsHasBeenSet() const
{
    return m_bucketNumsHasBeenSet;
}

int64_t DescribeAssetOverviewResponse::GetFileNums() const
{
    return m_fileNums;
}

bool DescribeAssetOverviewResponse::FileNumsHasBeenSet() const
{
    return m_fileNumsHasBeenSet;
}

string DescribeAssetOverviewResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeAssetOverviewResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t DescribeAssetOverviewResponse::GetEsInstanceNums() const
{
    return m_esInstanceNums;
}

bool DescribeAssetOverviewResponse::EsInstanceNumsHasBeenSet() const
{
    return m_esInstanceNumsHasBeenSet;
}

uint64_t DescribeAssetOverviewResponse::GetEsIndexNums() const
{
    return m_esIndexNums;
}

bool DescribeAssetOverviewResponse::EsIndexNumsHasBeenSet() const
{
    return m_esIndexNumsHasBeenSet;
}

uint64_t DescribeAssetOverviewResponse::GetEsFieldNums() const
{
    return m_esFieldNums;
}

bool DescribeAssetOverviewResponse::EsFieldNumsHasBeenSet() const
{
    return m_esFieldNumsHasBeenSet;
}

uint64_t DescribeAssetOverviewResponse::GetMongoInstanceNums() const
{
    return m_mongoInstanceNums;
}

bool DescribeAssetOverviewResponse::MongoInstanceNumsHasBeenSet() const
{
    return m_mongoInstanceNumsHasBeenSet;
}

uint64_t DescribeAssetOverviewResponse::GetMongoDbNums() const
{
    return m_mongoDbNums;
}

bool DescribeAssetOverviewResponse::MongoDbNumsHasBeenSet() const
{
    return m_mongoDbNumsHasBeenSet;
}

uint64_t DescribeAssetOverviewResponse::GetMongoColNums() const
{
    return m_mongoColNums;
}

bool DescribeAssetOverviewResponse::MongoColNumsHasBeenSet() const
{
    return m_mongoColNumsHasBeenSet;
}

uint64_t DescribeAssetOverviewResponse::GetMongoFieldNums() const
{
    return m_mongoFieldNums;
}

bool DescribeAssetOverviewResponse::MongoFieldNumsHasBeenSet() const
{
    return m_mongoFieldNumsHasBeenSet;
}


