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

#include <tencentcloud/iai/v20200303/model/GetPersonListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

GetPersonListResponse::GetPersonListResponse() :
    m_personInfosHasBeenSet(false),
    m_personNumHasBeenSet(false),
    m_faceNumHasBeenSet(false),
    m_faceModelVersionHasBeenSet(false)
{
}

CoreInternalOutcome GetPersonListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PersonInfos") && !rsp["PersonInfos"].IsNull())
    {
        if (!rsp["PersonInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PersonInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PersonInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PersonInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_personInfos.push_back(item);
        }
        m_personInfosHasBeenSet = true;
    }

    if (rsp.HasMember("PersonNum") && !rsp["PersonNum"].IsNull())
    {
        if (!rsp["PersonNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_personNum = rsp["PersonNum"].GetUint64();
        m_personNumHasBeenSet = true;
    }

    if (rsp.HasMember("FaceNum") && !rsp["FaceNum"].IsNull())
    {
        if (!rsp["FaceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_faceNum = rsp["FaceNum"].GetUint64();
        m_faceNumHasBeenSet = true;
    }

    if (rsp.HasMember("FaceModelVersion") && !rsp["FaceModelVersion"].IsNull())
    {
        if (!rsp["FaceModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceModelVersion = string(rsp["FaceModelVersion"].GetString());
        m_faceModelVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetPersonListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_personInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_personInfos.begin(); itr != m_personInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_personNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_personNum, allocator);
    }

    if (m_faceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_faceNum, allocator);
    }

    if (m_faceModelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceModelVersion.c_str(), allocator).Move(), allocator);
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


vector<PersonInfo> GetPersonListResponse::GetPersonInfos() const
{
    return m_personInfos;
}

bool GetPersonListResponse::PersonInfosHasBeenSet() const
{
    return m_personInfosHasBeenSet;
}

uint64_t GetPersonListResponse::GetPersonNum() const
{
    return m_personNum;
}

bool GetPersonListResponse::PersonNumHasBeenSet() const
{
    return m_personNumHasBeenSet;
}

uint64_t GetPersonListResponse::GetFaceNum() const
{
    return m_faceNum;
}

bool GetPersonListResponse::FaceNumHasBeenSet() const
{
    return m_faceNumHasBeenSet;
}

string GetPersonListResponse::GetFaceModelVersion() const
{
    return m_faceModelVersion;
}

bool GetPersonListResponse::FaceModelVersionHasBeenSet() const
{
    return m_faceModelVersionHasBeenSet;
}


