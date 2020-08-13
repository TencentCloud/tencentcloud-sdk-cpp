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

#include <tencentcloud/iai/v20180301/model/AnalyzeDenseLandmarksResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace rapidjson;
using namespace std;

AnalyzeDenseLandmarksResponse::AnalyzeDenseLandmarksResponse() :
    m_imageWidthHasBeenSet(false),
    m_imageHeightHasBeenSet(false),
    m_denseFaceShapeSetHasBeenSet(false),
    m_faceModelVersionHasBeenSet(false)
{
}

CoreInternalOutcome AnalyzeDenseLandmarksResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ImageWidth") && !rsp["ImageWidth"].IsNull())
    {
        if (!rsp["ImageWidth"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ImageWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageWidth = rsp["ImageWidth"].GetInt64();
        m_imageWidthHasBeenSet = true;
    }

    if (rsp.HasMember("ImageHeight") && !rsp["ImageHeight"].IsNull())
    {
        if (!rsp["ImageHeight"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ImageHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageHeight = rsp["ImageHeight"].GetInt64();
        m_imageHeightHasBeenSet = true;
    }

    if (rsp.HasMember("DenseFaceShapeSet") && !rsp["DenseFaceShapeSet"].IsNull())
    {
        if (!rsp["DenseFaceShapeSet"].IsArray())
            return CoreInternalOutcome(Error("response `DenseFaceShapeSet` is not array type"));

        const Value &tmpValue = rsp["DenseFaceShapeSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DenseFaceShape item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_denseFaceShapeSet.push_back(item);
        }
        m_denseFaceShapeSetHasBeenSet = true;
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


int64_t AnalyzeDenseLandmarksResponse::GetImageWidth() const
{
    return m_imageWidth;
}

bool AnalyzeDenseLandmarksResponse::ImageWidthHasBeenSet() const
{
    return m_imageWidthHasBeenSet;
}

int64_t AnalyzeDenseLandmarksResponse::GetImageHeight() const
{
    return m_imageHeight;
}

bool AnalyzeDenseLandmarksResponse::ImageHeightHasBeenSet() const
{
    return m_imageHeightHasBeenSet;
}

vector<DenseFaceShape> AnalyzeDenseLandmarksResponse::GetDenseFaceShapeSet() const
{
    return m_denseFaceShapeSet;
}

bool AnalyzeDenseLandmarksResponse::DenseFaceShapeSetHasBeenSet() const
{
    return m_denseFaceShapeSetHasBeenSet;
}

string AnalyzeDenseLandmarksResponse::GetFaceModelVersion() const
{
    return m_faceModelVersion;
}

bool AnalyzeDenseLandmarksResponse::FaceModelVersionHasBeenSet() const
{
    return m_faceModelVersionHasBeenSet;
}


