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

#include <tencentcloud/iai/v20180301/model/CreatePersonResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

CreatePersonResponse::CreatePersonResponse() :
    m_faceIdHasBeenSet(false),
    m_faceRectHasBeenSet(false),
    m_similarPersonIdHasBeenSet(false),
    m_faceModelVersionHasBeenSet(false)
{
}

CoreInternalOutcome CreatePersonResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FaceId") && !rsp["FaceId"].IsNull())
    {
        if (!rsp["FaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceId = string(rsp["FaceId"].GetString());
        m_faceIdHasBeenSet = true;
    }

    if (rsp.HasMember("FaceRect") && !rsp["FaceRect"].IsNull())
    {
        if (!rsp["FaceRect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceRect.Deserialize(rsp["FaceRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceRectHasBeenSet = true;
    }

    if (rsp.HasMember("SimilarPersonId") && !rsp["SimilarPersonId"].IsNull())
    {
        if (!rsp["SimilarPersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimilarPersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_similarPersonId = string(rsp["SimilarPersonId"].GetString());
        m_similarPersonIdHasBeenSet = true;
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

string CreatePersonResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_faceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceId.c_str(), allocator).Move(), allocator);
    }

    if (m_faceRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceRect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_similarPersonIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarPersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_similarPersonId.c_str(), allocator).Move(), allocator);
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


string CreatePersonResponse::GetFaceId() const
{
    return m_faceId;
}

bool CreatePersonResponse::FaceIdHasBeenSet() const
{
    return m_faceIdHasBeenSet;
}

FaceRect CreatePersonResponse::GetFaceRect() const
{
    return m_faceRect;
}

bool CreatePersonResponse::FaceRectHasBeenSet() const
{
    return m_faceRectHasBeenSet;
}

string CreatePersonResponse::GetSimilarPersonId() const
{
    return m_similarPersonId;
}

bool CreatePersonResponse::SimilarPersonIdHasBeenSet() const
{
    return m_similarPersonIdHasBeenSet;
}

string CreatePersonResponse::GetFaceModelVersion() const
{
    return m_faceModelVersion;
}

bool CreatePersonResponse::FaceModelVersionHasBeenSet() const
{
    return m_faceModelVersionHasBeenSet;
}


