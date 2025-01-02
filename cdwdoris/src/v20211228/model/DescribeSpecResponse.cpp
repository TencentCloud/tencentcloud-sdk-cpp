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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeSpecResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeSpecResponse::DescribeSpecResponse() :
    m_masterSpecHasBeenSet(false),
    m_coreSpecHasBeenSet(false),
    m_attachCBSSpecHasBeenSet(false),
    m_cNSpecHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSpecResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MasterSpec") && !rsp["MasterSpec"].IsNull())
    {
        if (!rsp["MasterSpec"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MasterSpec` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MasterSpec"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceSpec item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_masterSpec.push_back(item);
        }
        m_masterSpecHasBeenSet = true;
    }

    if (rsp.HasMember("CoreSpec") && !rsp["CoreSpec"].IsNull())
    {
        if (!rsp["CoreSpec"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CoreSpec` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CoreSpec"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceSpec item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_coreSpec.push_back(item);
        }
        m_coreSpecHasBeenSet = true;
    }

    if (rsp.HasMember("AttachCBSSpec") && !rsp["AttachCBSSpec"].IsNull())
    {
        if (!rsp["AttachCBSSpec"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttachCBSSpec` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AttachCBSSpec"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiskSpec item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attachCBSSpec.push_back(item);
        }
        m_attachCBSSpecHasBeenSet = true;
    }

    if (rsp.HasMember("CNSpec") && !rsp["CNSpec"].IsNull())
    {
        if (!rsp["CNSpec"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CNSpec` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CNSpec"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceSpec item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cNSpec.push_back(item);
        }
        m_cNSpecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSpecResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_masterSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_masterSpec.begin(); itr != m_masterSpec.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_coreSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coreSpec.begin(); itr != m_coreSpec.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_attachCBSSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachCBSSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachCBSSpec.begin(); itr != m_attachCBSSpec.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cNSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CNSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cNSpec.begin(); itr != m_cNSpec.end(); ++itr, ++i)
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


vector<ResourceSpec> DescribeSpecResponse::GetMasterSpec() const
{
    return m_masterSpec;
}

bool DescribeSpecResponse::MasterSpecHasBeenSet() const
{
    return m_masterSpecHasBeenSet;
}

vector<ResourceSpec> DescribeSpecResponse::GetCoreSpec() const
{
    return m_coreSpec;
}

bool DescribeSpecResponse::CoreSpecHasBeenSet() const
{
    return m_coreSpecHasBeenSet;
}

vector<DiskSpec> DescribeSpecResponse::GetAttachCBSSpec() const
{
    return m_attachCBSSpec;
}

bool DescribeSpecResponse::AttachCBSSpecHasBeenSet() const
{
    return m_attachCBSSpecHasBeenSet;
}

vector<ResourceSpec> DescribeSpecResponse::GetCNSpec() const
{
    return m_cNSpec;
}

bool DescribeSpecResponse::CNSpecHasBeenSet() const
{
    return m_cNSpecHasBeenSet;
}


