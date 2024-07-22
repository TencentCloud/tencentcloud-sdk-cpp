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

#include <tencentcloud/tcr/v20190924/model/DescribeImageManifestsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DescribeImageManifestsResponse::DescribeImageManifestsResponse() :
    m_manifestHasBeenSet(false),
    m_configHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_sizeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeImageManifestsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Manifest") && !rsp["Manifest"].IsNull())
    {
        if (!rsp["Manifest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Manifest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manifest = string(rsp["Manifest"].GetString());
        m_manifestHasBeenSet = true;
    }

    if (rsp.HasMember("Config") && !rsp["Config"].IsNull())
    {
        if (!rsp["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(rsp["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (rsp.HasMember("Labels") && !rsp["Labels"].IsNull())
    {
        if (!rsp["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Labels` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueString item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (rsp.HasMember("Size") && !rsp["Size"].IsNull())
    {
        if (!rsp["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = rsp["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeImageManifestsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_manifestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manifest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manifest.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
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


string DescribeImageManifestsResponse::GetManifest() const
{
    return m_manifest;
}

bool DescribeImageManifestsResponse::ManifestHasBeenSet() const
{
    return m_manifestHasBeenSet;
}

string DescribeImageManifestsResponse::GetConfig() const
{
    return m_config;
}

bool DescribeImageManifestsResponse::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

vector<KeyValueString> DescribeImageManifestsResponse::GetLabels() const
{
    return m_labels;
}

bool DescribeImageManifestsResponse::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

int64_t DescribeImageManifestsResponse::GetSize() const
{
    return m_size;
}

bool DescribeImageManifestsResponse::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}


