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

#include <tencentcloud/mrs/v20200910/model/DrugInstructionObjectResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

DrugInstructionObjectResponse::DrugInstructionObjectResponse() :
    m_chemicalProductInfoHasBeenSet(false),
    m_biologicalProductInfoHasBeenSet(false)
{
}

CoreInternalOutcome DrugInstructionObjectResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ChemicalProductInfo") && !rsp["ChemicalProductInfo"].IsNull())
    {
        if (!rsp["ChemicalProductInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_chemicalProductInfo.Deserialize(rsp["ChemicalProductInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_chemicalProductInfoHasBeenSet = true;
    }

    if (rsp.HasMember("BiologicalProductInfo") && !rsp["BiologicalProductInfo"].IsNull())
    {
        if (!rsp["BiologicalProductInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BiologicalProductInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_biologicalProductInfo.Deserialize(rsp["BiologicalProductInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_biologicalProductInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DrugInstructionObjectResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_chemicalProductInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChemicalProductInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chemicalProductInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_biologicalProductInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiologicalProductInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_biologicalProductInfo.ToJsonObject(value[key.c_str()], allocator);
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


ChemicalProductInfo DrugInstructionObjectResponse::GetChemicalProductInfo() const
{
    return m_chemicalProductInfo;
}

bool DrugInstructionObjectResponse::ChemicalProductInfoHasBeenSet() const
{
    return m_chemicalProductInfoHasBeenSet;
}

BiologicalProductInfo DrugInstructionObjectResponse::GetBiologicalProductInfo() const
{
    return m_biologicalProductInfo;
}

bool DrugInstructionObjectResponse::BiologicalProductInfoHasBeenSet() const
{
    return m_biologicalProductInfoHasBeenSet;
}


