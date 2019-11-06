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

#include <tencentcloud/mongodb/v20190725/model/DescribeBackupAccessResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace rapidjson;
using namespace std;

DescribeBackupAccessResponse::DescribeBackupAccessResponse() :
    m_regionHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_filesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupAccessResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("Bucket") && !rsp["Bucket"].IsNull())
    {
        if (!rsp["Bucket"].IsString())
        {
            return CoreInternalOutcome(Error("response `Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(rsp["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (rsp.HasMember("Files") && !rsp["Files"].IsNull())
    {
        if (!rsp["Files"].IsArray())
            return CoreInternalOutcome(Error("response `Files` is not array type"));

        const Value &tmpValue = rsp["Files"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupFile item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_files.push_back(item);
        }
        m_filesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeBackupAccessResponse::GetRegion() const
{
    return m_region;
}

bool DescribeBackupAccessResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeBackupAccessResponse::GetBucket() const
{
    return m_bucket;
}

bool DescribeBackupAccessResponse::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

vector<BackupFile> DescribeBackupAccessResponse::GetFiles() const
{
    return m_files;
}

bool DescribeBackupAccessResponse::FilesHasBeenSet() const
{
    return m_filesHasBeenSet;
}


