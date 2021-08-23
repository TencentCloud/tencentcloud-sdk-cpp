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

#include <tencentcloud/antiddos/v20200309/model/DescribeListListenerResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeListListenerResponse::DescribeListListenerResponse() :
    m_layer4ListenersHasBeenSet(false),
    m_layer7ListenersHasBeenSet(false)
{
}

CoreInternalOutcome DescribeListListenerResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Layer4Listeners") && !rsp["Layer4Listeners"].IsNull())
    {
        if (!rsp["Layer4Listeners"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Layer4Listeners` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Layer4Listeners"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Layer4Rule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_layer4Listeners.push_back(item);
        }
        m_layer4ListenersHasBeenSet = true;
    }

    if (rsp.HasMember("Layer7Listeners") && !rsp["Layer7Listeners"].IsNull())
    {
        if (!rsp["Layer7Listeners"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Layer7Listeners` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Layer7Listeners"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Layer7Rule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_layer7Listeners.push_back(item);
        }
        m_layer7ListenersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeListListenerResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_layer4ListenersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Layer4Listeners";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_layer4Listeners.begin(); itr != m_layer4Listeners.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_layer7ListenersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Layer7Listeners";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_layer7Listeners.begin(); itr != m_layer7Listeners.end(); ++itr, ++i)
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


vector<Layer4Rule> DescribeListListenerResponse::GetLayer4Listeners() const
{
    return m_layer4Listeners;
}

bool DescribeListListenerResponse::Layer4ListenersHasBeenSet() const
{
    return m_layer4ListenersHasBeenSet;
}

vector<Layer7Rule> DescribeListListenerResponse::GetLayer7Listeners() const
{
    return m_layer7Listeners;
}

bool DescribeListListenerResponse::Layer7ListenersHasBeenSet() const
{
    return m_layer7ListenersHasBeenSet;
}


