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

#include <tencentcloud/iai/v20180301/model/CreateFaceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

CreateFaceResponse::CreateFaceResponse() :
    m_sucFaceNumHasBeenSet(false),
    m_sucFaceIdsHasBeenSet(false),
    m_retCodeHasBeenSet(false),
    m_sucIndexesHasBeenSet(false),
    m_sucFaceRectsHasBeenSet(false),
    m_faceModelVersionHasBeenSet(false)
{
}

CoreInternalOutcome CreateFaceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SucFaceNum") && !rsp["SucFaceNum"].IsNull())
    {
        if (!rsp["SucFaceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SucFaceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sucFaceNum = rsp["SucFaceNum"].GetUint64();
        m_sucFaceNumHasBeenSet = true;
    }

    if (rsp.HasMember("SucFaceIds") && !rsp["SucFaceIds"].IsNull())
    {
        if (!rsp["SucFaceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SucFaceIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SucFaceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sucFaceIds.push_back((*itr).GetString());
        }
        m_sucFaceIdsHasBeenSet = true;
    }

    if (rsp.HasMember("RetCode") && !rsp["RetCode"].IsNull())
    {
        if (!rsp["RetCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RetCode` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RetCode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_retCode.push_back((*itr).GetInt64());
        }
        m_retCodeHasBeenSet = true;
    }

    if (rsp.HasMember("SucIndexes") && !rsp["SucIndexes"].IsNull())
    {
        if (!rsp["SucIndexes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SucIndexes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SucIndexes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sucIndexes.push_back((*itr).GetUint64());
        }
        m_sucIndexesHasBeenSet = true;
    }

    if (rsp.HasMember("SucFaceRects") && !rsp["SucFaceRects"].IsNull())
    {
        if (!rsp["SucFaceRects"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SucFaceRects` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SucFaceRects"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FaceRect item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sucFaceRects.push_back(item);
        }
        m_sucFaceRectsHasBeenSet = true;
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

string CreateFaceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sucFaceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SucFaceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sucFaceNum, allocator);
    }

    if (m_sucFaceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SucFaceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sucFaceIds.begin(); itr != m_sucFaceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_retCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_retCode.begin(); itr != m_retCode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_sucIndexesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SucIndexes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sucIndexes.begin(); itr != m_sucIndexes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_sucFaceRectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SucFaceRects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sucFaceRects.begin(); itr != m_sucFaceRects.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


uint64_t CreateFaceResponse::GetSucFaceNum() const
{
    return m_sucFaceNum;
}

bool CreateFaceResponse::SucFaceNumHasBeenSet() const
{
    return m_sucFaceNumHasBeenSet;
}

vector<string> CreateFaceResponse::GetSucFaceIds() const
{
    return m_sucFaceIds;
}

bool CreateFaceResponse::SucFaceIdsHasBeenSet() const
{
    return m_sucFaceIdsHasBeenSet;
}

vector<int64_t> CreateFaceResponse::GetRetCode() const
{
    return m_retCode;
}

bool CreateFaceResponse::RetCodeHasBeenSet() const
{
    return m_retCodeHasBeenSet;
}

vector<uint64_t> CreateFaceResponse::GetSucIndexes() const
{
    return m_sucIndexes;
}

bool CreateFaceResponse::SucIndexesHasBeenSet() const
{
    return m_sucIndexesHasBeenSet;
}

vector<FaceRect> CreateFaceResponse::GetSucFaceRects() const
{
    return m_sucFaceRects;
}

bool CreateFaceResponse::SucFaceRectsHasBeenSet() const
{
    return m_sucFaceRectsHasBeenSet;
}

string CreateFaceResponse::GetFaceModelVersion() const
{
    return m_faceModelVersion;
}

bool CreateFaceResponse::FaceModelVersionHasBeenSet() const
{
    return m_faceModelVersionHasBeenSet;
}


