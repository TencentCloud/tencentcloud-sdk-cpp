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

#include <tencentcloud/mariadb/v20170312/model/DescribeDBLogFilesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DescribeDBLogFilesResponse::DescribeDBLogFilesResponse() :
    m_instanceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_filesHasBeenSet(false),
    m_vpcPrefixHasBeenSet(false),
    m_normalPrefixHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBLogFilesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = rsp["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("Files") && !rsp["Files"].IsNull())
    {
        if (!rsp["Files"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Files` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Files"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogFileInfo item;
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

    if (rsp.HasMember("VpcPrefix") && !rsp["VpcPrefix"].IsNull())
    {
        if (!rsp["VpcPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcPrefix = string(rsp["VpcPrefix"].GetString());
        m_vpcPrefixHasBeenSet = true;
    }

    if (rsp.HasMember("NormalPrefix") && !rsp["NormalPrefix"].IsNull())
    {
        if (!rsp["NormalPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_normalPrefix = string(rsp["NormalPrefix"].GetString());
        m_normalPrefixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBLogFilesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_filesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Files";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_files.begin(); itr != m_files.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vpcPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_normalPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_normalPrefix.c_str(), allocator).Move(), allocator);
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


string DescribeDBLogFilesResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeDBLogFilesResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DescribeDBLogFilesResponse::GetType() const
{
    return m_type;
}

bool DescribeDBLogFilesResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t DescribeDBLogFilesResponse::GetTotal() const
{
    return m_total;
}

bool DescribeDBLogFilesResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<LogFileInfo> DescribeDBLogFilesResponse::GetFiles() const
{
    return m_files;
}

bool DescribeDBLogFilesResponse::FilesHasBeenSet() const
{
    return m_filesHasBeenSet;
}

string DescribeDBLogFilesResponse::GetVpcPrefix() const
{
    return m_vpcPrefix;
}

bool DescribeDBLogFilesResponse::VpcPrefixHasBeenSet() const
{
    return m_vpcPrefixHasBeenSet;
}

string DescribeDBLogFilesResponse::GetNormalPrefix() const
{
    return m_normalPrefix;
}

bool DescribeDBLogFilesResponse::NormalPrefixHasBeenSet() const
{
    return m_normalPrefixHasBeenSet;
}


