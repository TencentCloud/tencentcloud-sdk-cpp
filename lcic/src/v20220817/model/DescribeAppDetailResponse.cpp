/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/lcic/v20220817/model/DescribeAppDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

DescribeAppDetailResponse::DescribeAppDetailResponse() :
    m_sdkAppIdHasBeenSet(false),
    m_appConfigHasBeenSet(false),
    m_sceneConfigHasBeenSet(false),
    m_transferConfigHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAppDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SdkAppId") && !rsp["SdkAppId"].IsNull())
    {
        if (!rsp["SdkAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = string(rsp["SdkAppId"].GetString());
        m_sdkAppIdHasBeenSet = true;
    }

    if (rsp.HasMember("AppConfig") && !rsp["AppConfig"].IsNull())
    {
        if (!rsp["AppConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appConfig.Deserialize(rsp["AppConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appConfigHasBeenSet = true;
    }

    if (rsp.HasMember("SceneConfig") && !rsp["SceneConfig"].IsNull())
    {
        if (!rsp["SceneConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SceneConfig` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SceneConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SceneItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sceneConfig.push_back(item);
        }
        m_sceneConfigHasBeenSet = true;
    }

    if (rsp.HasMember("TransferConfig") && !rsp["TransferConfig"].IsNull())
    {
        if (!rsp["TransferConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransferConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transferConfig.Deserialize(rsp["TransferConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transferConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAppDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_appConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sceneConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sceneConfig.begin(); itr != m_sceneConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_transferConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transferConfig.ToJsonObject(value[key.c_str()], allocator);
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


string DescribeAppDetailResponse::GetSdkAppId() const
{
    return m_sdkAppId;
}

bool DescribeAppDetailResponse::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

AppConfig DescribeAppDetailResponse::GetAppConfig() const
{
    return m_appConfig;
}

bool DescribeAppDetailResponse::AppConfigHasBeenSet() const
{
    return m_appConfigHasBeenSet;
}

vector<SceneItem> DescribeAppDetailResponse::GetSceneConfig() const
{
    return m_sceneConfig;
}

bool DescribeAppDetailResponse::SceneConfigHasBeenSet() const
{
    return m_sceneConfigHasBeenSet;
}

TransferItem DescribeAppDetailResponse::GetTransferConfig() const
{
    return m_transferConfig;
}

bool DescribeAppDetailResponse::TransferConfigHasBeenSet() const
{
    return m_transferConfigHasBeenSet;
}


