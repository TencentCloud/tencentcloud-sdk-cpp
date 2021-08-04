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

#include <tencentcloud/tiia/v20190529/model/DetectLabelBetaResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

DetectLabelBetaResponse::DetectLabelBetaResponse() :
    m_labelsHasBeenSet(false),
    m_cameraLabelsHasBeenSet(false),
    m_albumLabelsHasBeenSet(false),
    m_newsLabelsHasBeenSet(false),
    m_noneCamLabelsHasBeenSet(false),
    m_locationLabelsHasBeenSet(false)
{
}

CoreInternalOutcome DetectLabelBetaResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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

        const rapidjson::Value &tmpValue = rsp["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

        const rapidjson::Value &tmpValue = rsp["CameraLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

        const rapidjson::Value &tmpValue = rsp["AlbumLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (rsp.HasMember("NewsLabels") && !rsp["NewsLabels"].IsNull())
    {
        if (!rsp["NewsLabels"].IsArray())
            return CoreInternalOutcome(Error("response `NewsLabels` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NewsLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetectLabelItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_newsLabels.push_back(item);
        }
        m_newsLabelsHasBeenSet = true;
    }

    if (rsp.HasMember("NoneCamLabels") && !rsp["NoneCamLabels"].IsNull())
    {
        if (!rsp["NoneCamLabels"].IsArray())
            return CoreInternalOutcome(Error("response `NoneCamLabels` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NoneCamLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetectLabelItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_noneCamLabels.push_back(item);
        }
        m_noneCamLabelsHasBeenSet = true;
    }

    if (rsp.HasMember("LocationLabels") && !rsp["LocationLabels"].IsNull())
    {
        if (!rsp["LocationLabels"].IsArray())
            return CoreInternalOutcome(Error("response `LocationLabels` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LocationLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Product item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_locationLabels.push_back(item);
        }
        m_locationLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DetectLabelBetaResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cameraLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cameraLabels.begin(); itr != m_cameraLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_albumLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlbumLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_albumLabels.begin(); itr != m_albumLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_newsLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewsLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_newsLabels.begin(); itr != m_newsLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_noneCamLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoneCamLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noneCamLabels.begin(); itr != m_noneCamLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_locationLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_locationLabels.begin(); itr != m_locationLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
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


vector<DetectLabelItem> DetectLabelBetaResponse::GetLabels() const
{
    return m_labels;
}

bool DetectLabelBetaResponse::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<DetectLabelItem> DetectLabelBetaResponse::GetCameraLabels() const
{
    return m_cameraLabels;
}

bool DetectLabelBetaResponse::CameraLabelsHasBeenSet() const
{
    return m_cameraLabelsHasBeenSet;
}

vector<DetectLabelItem> DetectLabelBetaResponse::GetAlbumLabels() const
{
    return m_albumLabels;
}

bool DetectLabelBetaResponse::AlbumLabelsHasBeenSet() const
{
    return m_albumLabelsHasBeenSet;
}

vector<DetectLabelItem> DetectLabelBetaResponse::GetNewsLabels() const
{
    return m_newsLabels;
}

bool DetectLabelBetaResponse::NewsLabelsHasBeenSet() const
{
    return m_newsLabelsHasBeenSet;
}

vector<DetectLabelItem> DetectLabelBetaResponse::GetNoneCamLabels() const
{
    return m_noneCamLabels;
}

bool DetectLabelBetaResponse::NoneCamLabelsHasBeenSet() const
{
    return m_noneCamLabelsHasBeenSet;
}

vector<Product> DetectLabelBetaResponse::GetLocationLabels() const
{
    return m_locationLabels;
}

bool DetectLabelBetaResponse::LocationLabelsHasBeenSet() const
{
    return m_locationLabelsHasBeenSet;
}


