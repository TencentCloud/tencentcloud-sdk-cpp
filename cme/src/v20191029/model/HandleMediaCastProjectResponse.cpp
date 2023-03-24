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

#include <tencentcloud/cme/v20191029/model/HandleMediaCastProjectResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

HandleMediaCastProjectResponse::HandleMediaCastProjectResponse() :
    m_playInfoHasBeenSet(false),
    m_sourceInfoSetHasBeenSet(false),
    m_destinationInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome HandleMediaCastProjectResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PlayInfo") && !rsp["PlayInfo"].IsNull())
    {
        if (!rsp["PlayInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PlayInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_playInfo.Deserialize(rsp["PlayInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_playInfoHasBeenSet = true;
    }

    if (rsp.HasMember("SourceInfoSet") && !rsp["SourceInfoSet"].IsNull())
    {
        if (!rsp["SourceInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SourceInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SourceInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaCastSourceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceInfoSet.push_back(item);
        }
        m_sourceInfoSetHasBeenSet = true;
    }

    if (rsp.HasMember("DestinationInfoSet") && !rsp["DestinationInfoSet"].IsNull())
    {
        if (!rsp["DestinationInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DestinationInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DestinationInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaCastDestinationInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destinationInfoSet.push_back(item);
        }
        m_destinationInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string HandleMediaCastProjectResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_playInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_playInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sourceInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceInfoSet.begin(); itr != m_sourceInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_destinationInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinationInfoSet.begin(); itr != m_destinationInfoSet.end(); ++itr, ++i)
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


MediaCastPlayInfo HandleMediaCastProjectResponse::GetPlayInfo() const
{
    return m_playInfo;
}

bool HandleMediaCastProjectResponse::PlayInfoHasBeenSet() const
{
    return m_playInfoHasBeenSet;
}

vector<MediaCastSourceInfo> HandleMediaCastProjectResponse::GetSourceInfoSet() const
{
    return m_sourceInfoSet;
}

bool HandleMediaCastProjectResponse::SourceInfoSetHasBeenSet() const
{
    return m_sourceInfoSetHasBeenSet;
}

vector<MediaCastDestinationInfo> HandleMediaCastProjectResponse::GetDestinationInfoSet() const
{
    return m_destinationInfoSet;
}

bool HandleMediaCastProjectResponse::DestinationInfoSetHasBeenSet() const
{
    return m_destinationInfoSetHasBeenSet;
}


