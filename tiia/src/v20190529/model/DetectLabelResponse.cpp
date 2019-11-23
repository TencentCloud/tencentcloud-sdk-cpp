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

#include <tencentcloud/tiia/v20190529/model/DetectLabelResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace rapidjson;
using namespace std;

DetectLabelResponse::DetectLabelResponse() :
    m_labelsHasBeenSet(false),
    m_cameraLabelsHasBeenSet(false),
    m_albumLabelsHasBeenSet(false)
{
}

CoreInternalOutcome DetectLabelResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Labels") && !rsp["Labels"].IsNull())
    {
        if (!rsp["Labels"].IsArray())
            return CoreInternalOutcome(Error("response `Labels` is not array type"));

        const Value &tmpValue = rsp["Labels"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetectLabelItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (rsp.HasMember("CameraLabels") && !rsp["CameraLabels"].IsNull())
    {
        if (!rsp["CameraLabels"].IsArray())
            return CoreInternalOutcome(Error("response `CameraLabels` is not array type"));

        const Value &tmpValue = rsp["CameraLabels"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetectLabelItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cameraLabels.push_back(item);
        }
        m_cameraLabelsHasBeenSet = true;
    }

    if (rsp.HasMember("AlbumLabels") && !rsp["AlbumLabels"].IsNull())
    {
        if (!rsp["AlbumLabels"].IsArray())
            return CoreInternalOutcome(Error("response `AlbumLabels` is not array type"));

        const Value &tmpValue = rsp["AlbumLabels"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetectLabelItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_albumLabels.push_back(item);
        }
        m_albumLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<DetectLabelItem> DetectLabelResponse::GetLabels() const
{
    return m_labels;
}

bool DetectLabelResponse::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<DetectLabelItem> DetectLabelResponse::GetCameraLabels() const
{
    return m_cameraLabels;
}

bool DetectLabelResponse::CameraLabelsHasBeenSet() const
{
    return m_cameraLabelsHasBeenSet;
}

vector<DetectLabelItem> DetectLabelResponse::GetAlbumLabels() const
{
    return m_albumLabels;
}

bool DetectLabelResponse::AlbumLabelsHasBeenSet() const
{
    return m_albumLabelsHasBeenSet;
}


