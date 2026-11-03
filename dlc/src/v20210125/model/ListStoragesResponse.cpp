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

#include <tencentcloud/dlc/v20210125/model/ListStoragesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ListStoragesResponse::ListStoragesResponse() :
    m_cFSFileSystemsHasBeenSet(false),
    m_cOSBucketsHasBeenSet(false),
    m_cFSTurboFileSystemsHasBeenSet(false),
    m_gooseFSClustersHasBeenSet(false)
{
}

CoreInternalOutcome ListStoragesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CFSFileSystems") && !rsp["CFSFileSystems"].IsNull())
    {
        if (!rsp["CFSFileSystems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CFSFileSystems` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CFSFileSystems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CFSFileSystemInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cFSFileSystems.push_back(item);
        }
        m_cFSFileSystemsHasBeenSet = true;
    }

    if (rsp.HasMember("COSBuckets") && !rsp["COSBuckets"].IsNull())
    {
        if (!rsp["COSBuckets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `COSBuckets` is not array type"));

        const rapidjson::Value &tmpValue = rsp["COSBuckets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            COSBucketInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cOSBuckets.push_back(item);
        }
        m_cOSBucketsHasBeenSet = true;
    }

    if (rsp.HasMember("CFSTurboFileSystems") && !rsp["CFSTurboFileSystems"].IsNull())
    {
        if (!rsp["CFSTurboFileSystems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CFSTurboFileSystems` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CFSTurboFileSystems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CFSTurboFileSystemInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cFSTurboFileSystems.push_back(item);
        }
        m_cFSTurboFileSystemsHasBeenSet = true;
    }

    if (rsp.HasMember("GooseFSClusters") && !rsp["GooseFSClusters"].IsNull())
    {
        if (!rsp["GooseFSClusters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GooseFSClusters` is not array type"));

        const rapidjson::Value &tmpValue = rsp["GooseFSClusters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GooseFSClustersInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_gooseFSClusters.push_back(item);
        }
        m_gooseFSClustersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ListStoragesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cFSFileSystemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSFileSystems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cFSFileSystems.begin(); itr != m_cFSFileSystems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cOSBucketsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSBuckets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cOSBuckets.begin(); itr != m_cOSBuckets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cFSTurboFileSystemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSTurboFileSystems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cFSTurboFileSystems.begin(); itr != m_cFSTurboFileSystems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_gooseFSClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GooseFSClusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gooseFSClusters.begin(); itr != m_gooseFSClusters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


vector<CFSFileSystemInfo> ListStoragesResponse::GetCFSFileSystems() const
{
    return m_cFSFileSystems;
}

bool ListStoragesResponse::CFSFileSystemsHasBeenSet() const
{
    return m_cFSFileSystemsHasBeenSet;
}

vector<COSBucketInfo> ListStoragesResponse::GetCOSBuckets() const
{
    return m_cOSBuckets;
}

bool ListStoragesResponse::COSBucketsHasBeenSet() const
{
    return m_cOSBucketsHasBeenSet;
}

vector<CFSTurboFileSystemInfo> ListStoragesResponse::GetCFSTurboFileSystems() const
{
    return m_cFSTurboFileSystems;
}

bool ListStoragesResponse::CFSTurboFileSystemsHasBeenSet() const
{
    return m_cFSTurboFileSystemsHasBeenSet;
}

vector<GooseFSClustersInfo> ListStoragesResponse::GetGooseFSClusters() const
{
    return m_gooseFSClusters;
}

bool ListStoragesResponse::GooseFSClustersHasBeenSet() const
{
    return m_gooseFSClustersHasBeenSet;
}


