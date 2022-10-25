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

#include <tencentcloud/cdn/v20180606/model/ImageOptimization.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ImageOptimization::ImageOptimization() :
    m_webpAdapterHasBeenSet(false),
    m_tpgAdapterHasBeenSet(false),
    m_guetzliAdapterHasBeenSet(false),
    m_avifAdapterHasBeenSet(false)
{
}

CoreInternalOutcome ImageOptimization::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WebpAdapter") && !value["WebpAdapter"].IsNull())
    {
        if (!value["WebpAdapter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageOptimization.WebpAdapter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webpAdapter.Deserialize(value["WebpAdapter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webpAdapterHasBeenSet = true;
    }

    if (value.HasMember("TpgAdapter") && !value["TpgAdapter"].IsNull())
    {
        if (!value["TpgAdapter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageOptimization.TpgAdapter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tpgAdapter.Deserialize(value["TpgAdapter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tpgAdapterHasBeenSet = true;
    }

    if (value.HasMember("GuetzliAdapter") && !value["GuetzliAdapter"].IsNull())
    {
        if (!value["GuetzliAdapter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageOptimization.GuetzliAdapter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_guetzliAdapter.Deserialize(value["GuetzliAdapter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_guetzliAdapterHasBeenSet = true;
    }

    if (value.HasMember("AvifAdapter") && !value["AvifAdapter"].IsNull())
    {
        if (!value["AvifAdapter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageOptimization.AvifAdapter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_avifAdapter.Deserialize(value["AvifAdapter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_avifAdapterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageOptimization::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_webpAdapterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebpAdapter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webpAdapter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tpgAdapterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TpgAdapter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tpgAdapter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_guetzliAdapterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GuetzliAdapter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_guetzliAdapter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_avifAdapterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvifAdapter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_avifAdapter.ToJsonObject(value[key.c_str()], allocator);
    }

}


WebpAdapter ImageOptimization::GetWebpAdapter() const
{
    return m_webpAdapter;
}

void ImageOptimization::SetWebpAdapter(const WebpAdapter& _webpAdapter)
{
    m_webpAdapter = _webpAdapter;
    m_webpAdapterHasBeenSet = true;
}

bool ImageOptimization::WebpAdapterHasBeenSet() const
{
    return m_webpAdapterHasBeenSet;
}

TpgAdapter ImageOptimization::GetTpgAdapter() const
{
    return m_tpgAdapter;
}

void ImageOptimization::SetTpgAdapter(const TpgAdapter& _tpgAdapter)
{
    m_tpgAdapter = _tpgAdapter;
    m_tpgAdapterHasBeenSet = true;
}

bool ImageOptimization::TpgAdapterHasBeenSet() const
{
    return m_tpgAdapterHasBeenSet;
}

GuetzliAdapter ImageOptimization::GetGuetzliAdapter() const
{
    return m_guetzliAdapter;
}

void ImageOptimization::SetGuetzliAdapter(const GuetzliAdapter& _guetzliAdapter)
{
    m_guetzliAdapter = _guetzliAdapter;
    m_guetzliAdapterHasBeenSet = true;
}

bool ImageOptimization::GuetzliAdapterHasBeenSet() const
{
    return m_guetzliAdapterHasBeenSet;
}

AvifAdapter ImageOptimization::GetAvifAdapter() const
{
    return m_avifAdapter;
}

void ImageOptimization::SetAvifAdapter(const AvifAdapter& _avifAdapter)
{
    m_avifAdapter = _avifAdapter;
    m_avifAdapterHasBeenSet = true;
}

bool ImageOptimization::AvifAdapterHasBeenSet() const
{
    return m_avifAdapterHasBeenSet;
}

