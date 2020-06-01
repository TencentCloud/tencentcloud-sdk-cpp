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

#include <tencentcloud/iai/v20200303/model/CreateFaceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace rapidjson;
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
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("SucFaceNum") && !rsp["SucFaceNum"].IsNull())
    {
        if (!rsp["SucFaceNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SucFaceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sucFaceNum = rsp["SucFaceNum"].GetUint64();
        m_sucFaceNumHasBeenSet = true;
    }

    if (rsp.HasMember("SucFaceIds") && !rsp["SucFaceIds"].IsNull())
    {
        if (!rsp["SucFaceIds"].IsArray())
            return CoreInternalOutcome(Error("response `SucFaceIds` is not array type"));

        const Value &tmpValue = rsp["SucFaceIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sucFaceIds.push_back((*itr).GetString());
        }
        m_sucFaceIdsHasBeenSet = true;
    }

    if (rsp.HasMember("RetCode") && !rsp["RetCode"].IsNull())
    {
        if (!rsp["RetCode"].IsArray())
            return CoreInternalOutcome(Error("response `RetCode` is not array type"));

        const Value &tmpValue = rsp["RetCode"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_retCode.push_back((*itr).GetInt64());
        }
        m_retCodeHasBeenSet = true;
    }

    if (rsp.HasMember("SucIndexes") && !rsp["SucIndexes"].IsNull())
    {
        if (!rsp["SucIndexes"].IsArray())
            return CoreInternalOutcome(Error("response `SucIndexes` is not array type"));

        const Value &tmpValue = rsp["SucIndexes"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sucIndexes.push_back((*itr).GetUint64());
        }
        m_sucIndexesHasBeenSet = true;
    }

    if (rsp.HasMember("SucFaceRects") && !rsp["SucFaceRects"].IsNull())
    {
        if (!rsp["SucFaceRects"].IsArray())
            return CoreInternalOutcome(Error("response `SucFaceRects` is not array type"));

        const Value &tmpValue = rsp["SucFaceRects"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `FaceModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceModelVersion = string(rsp["FaceModelVersion"].GetString());
        m_faceModelVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


