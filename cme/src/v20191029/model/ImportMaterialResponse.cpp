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

#include <tencentcloud/cme/v20191029/model/ImportMaterialResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

ImportMaterialResponse::ImportMaterialResponse() :
    m_materialIdHasBeenSet(false),
    m_preProcessTaskIdHasBeenSet(false)
{
}

CoreInternalOutcome ImportMaterialResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MaterialId") && !rsp["MaterialId"].IsNull())
    {
        if (!rsp["MaterialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialId = string(rsp["MaterialId"].GetString());
        m_materialIdHasBeenSet = true;
    }

    if (rsp.HasMember("PreProcessTaskId") && !rsp["PreProcessTaskId"].IsNull())
    {
        if (!rsp["PreProcessTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreProcessTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preProcessTaskId = string(rsp["PreProcessTaskId"].GetString());
        m_preProcessTaskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ImportMaterialResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_materialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialId.c_str(), allocator).Move(), allocator);
    }

    if (m_preProcessTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreProcessTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preProcessTaskId.c_str(), allocator).Move(), allocator);
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


string ImportMaterialResponse::GetMaterialId() const
{
    return m_materialId;
}

bool ImportMaterialResponse::MaterialIdHasBeenSet() const
{
    return m_materialIdHasBeenSet;
}

string ImportMaterialResponse::GetPreProcessTaskId() const
{
    return m_preProcessTaskId;
}

bool ImportMaterialResponse::PreProcessTaskIdHasBeenSet() const
{
    return m_preProcessTaskIdHasBeenSet;
}


