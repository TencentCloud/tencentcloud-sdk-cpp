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

#include <tencentcloud/dsgc/v20190723/model/CreateDSPAMetaResourcesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CreateDSPAMetaResourcesResponse::CreateDSPAMetaResourcesResponse() :
    m_updateIdHasBeenSet(false),
    m_metaTypeHasBeenSet(false),
    m_dspaIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false)
{
}

CoreInternalOutcome CreateDSPAMetaResourcesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UpdateId") && !rsp["UpdateId"].IsNull())
    {
        if (!rsp["UpdateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateId = string(rsp["UpdateId"].GetString());
        m_updateIdHasBeenSet = true;
    }

    if (rsp.HasMember("MetaType") && !rsp["MetaType"].IsNull())
    {
        if (!rsp["MetaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaType = string(rsp["MetaType"].GetString());
        m_metaTypeHasBeenSet = true;
    }

    if (rsp.HasMember("DspaId") && !rsp["DspaId"].IsNull())
    {
        if (!rsp["DspaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dspaId = string(rsp["DspaId"].GetString());
        m_dspaIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceRegion") && !rsp["ResourceRegion"].IsNull())
    {
        if (!rsp["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(rsp["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateDSPAMetaResourcesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_updateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateId.c_str(), allocator).Move(), allocator);
    }

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
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


string CreateDSPAMetaResourcesResponse::GetUpdateId() const
{
    return m_updateId;
}

bool CreateDSPAMetaResourcesResponse::UpdateIdHasBeenSet() const
{
    return m_updateIdHasBeenSet;
}

string CreateDSPAMetaResourcesResponse::GetMetaType() const
{
    return m_metaType;
}

bool CreateDSPAMetaResourcesResponse::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

string CreateDSPAMetaResourcesResponse::GetDspaId() const
{
    return m_dspaId;
}

bool CreateDSPAMetaResourcesResponse::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string CreateDSPAMetaResourcesResponse::GetResourceRegion() const
{
    return m_resourceRegion;
}

bool CreateDSPAMetaResourcesResponse::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}


