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

#include <tencentcloud/iottid/v20190411/model/UploadDeviceUniqueCodeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iottid::V20190411::Model;
using namespace std;

UploadDeviceUniqueCodeResponse::UploadDeviceUniqueCodeResponse() :
    m_countHasBeenSet(false),
    m_existedCodeSetHasBeenSet(false),
    m_leftQuantityHasBeenSet(false),
    m_illegalCodeSetHasBeenSet(false)
{
}

CoreInternalOutcome UploadDeviceUniqueCodeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Count") && !rsp["Count"].IsNull())
    {
        if (!rsp["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = rsp["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (rsp.HasMember("ExistedCodeSet") && !rsp["ExistedCodeSet"].IsNull())
    {
        if (!rsp["ExistedCodeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExistedCodeSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExistedCodeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_existedCodeSet.push_back((*itr).GetString());
        }
        m_existedCodeSetHasBeenSet = true;
    }

    if (rsp.HasMember("LeftQuantity") && !rsp["LeftQuantity"].IsNull())
    {
        if (!rsp["LeftQuantity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LeftQuantity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leftQuantity = rsp["LeftQuantity"].GetUint64();
        m_leftQuantityHasBeenSet = true;
    }

    if (rsp.HasMember("IllegalCodeSet") && !rsp["IllegalCodeSet"].IsNull())
    {
        if (!rsp["IllegalCodeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IllegalCodeSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IllegalCodeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_illegalCodeSet.push_back((*itr).GetString());
        }
        m_illegalCodeSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string UploadDeviceUniqueCodeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_existedCodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExistedCodeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_existedCodeSet.begin(); itr != m_existedCodeSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_leftQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftQuantity, allocator);
    }

    if (m_illegalCodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IllegalCodeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_illegalCodeSet.begin(); itr != m_illegalCodeSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


uint64_t UploadDeviceUniqueCodeResponse::GetCount() const
{
    return m_count;
}

bool UploadDeviceUniqueCodeResponse::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

vector<string> UploadDeviceUniqueCodeResponse::GetExistedCodeSet() const
{
    return m_existedCodeSet;
}

bool UploadDeviceUniqueCodeResponse::ExistedCodeSetHasBeenSet() const
{
    return m_existedCodeSetHasBeenSet;
}

uint64_t UploadDeviceUniqueCodeResponse::GetLeftQuantity() const
{
    return m_leftQuantity;
}

bool UploadDeviceUniqueCodeResponse::LeftQuantityHasBeenSet() const
{
    return m_leftQuantityHasBeenSet;
}

vector<string> UploadDeviceUniqueCodeResponse::GetIllegalCodeSet() const
{
    return m_illegalCodeSet;
}

bool UploadDeviceUniqueCodeResponse::IllegalCodeSetHasBeenSet() const
{
    return m_illegalCodeSetHasBeenSet;
}


