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

#include <tencentcloud/cpdp/v20190820/model/QueryCloudChannelDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryCloudChannelDataResponse::QueryCloudChannelDataResponse() :
    m_outOrderNoHasBeenSet(false),
    m_channelOrderIdHasBeenSet(false),
    m_externalChannelDataTypeHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_externalChannelDataListHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome QueryCloudChannelDataResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OutOrderNo") && !rsp["OutOrderNo"].IsNull())
    {
        if (!rsp["OutOrderNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutOrderNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outOrderNo = string(rsp["OutOrderNo"].GetString());
        m_outOrderNoHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelOrderId") && !rsp["ChannelOrderId"].IsNull())
    {
        if (!rsp["ChannelOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelOrderId = string(rsp["ChannelOrderId"].GetString());
        m_channelOrderIdHasBeenSet = true;
    }

    if (rsp.HasMember("ExternalChannelDataType") && !rsp["ExternalChannelDataType"].IsNull())
    {
        if (!rsp["ExternalChannelDataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalChannelDataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalChannelDataType = string(rsp["ExternalChannelDataType"].GetString());
        m_externalChannelDataTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Channel") && !rsp["Channel"].IsNull())
    {
        if (!rsp["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(rsp["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (rsp.HasMember("ExternalChannelDataList") && !rsp["ExternalChannelDataList"].IsNull())
    {
        if (!rsp["ExternalChannelDataList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExternalChannelDataList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExternalChannelDataList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudExternalChannelData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_externalChannelDataList.push_back(item);
        }
        m_externalChannelDataListHasBeenSet = true;
    }

    if (rsp.HasMember("SubAppId") && !rsp["SubAppId"].IsNull())
    {
        if (!rsp["SubAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = string(rsp["SubAppId"].GetString());
        m_subAppIdHasBeenSet = true;
    }

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(rsp["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryCloudChannelDataResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_outOrderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutOrderNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outOrderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_channelOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_externalChannelDataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalChannelDataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalChannelDataType.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_externalChannelDataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalChannelDataList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_externalChannelDataList.begin(); itr != m_externalChannelDataList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
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


string QueryCloudChannelDataResponse::GetOutOrderNo() const
{
    return m_outOrderNo;
}

bool QueryCloudChannelDataResponse::OutOrderNoHasBeenSet() const
{
    return m_outOrderNoHasBeenSet;
}

string QueryCloudChannelDataResponse::GetChannelOrderId() const
{
    return m_channelOrderId;
}

bool QueryCloudChannelDataResponse::ChannelOrderIdHasBeenSet() const
{
    return m_channelOrderIdHasBeenSet;
}

string QueryCloudChannelDataResponse::GetExternalChannelDataType() const
{
    return m_externalChannelDataType;
}

bool QueryCloudChannelDataResponse::ExternalChannelDataTypeHasBeenSet() const
{
    return m_externalChannelDataTypeHasBeenSet;
}

string QueryCloudChannelDataResponse::GetChannel() const
{
    return m_channel;
}

bool QueryCloudChannelDataResponse::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

vector<CloudExternalChannelData> QueryCloudChannelDataResponse::GetExternalChannelDataList() const
{
    return m_externalChannelDataList;
}

bool QueryCloudChannelDataResponse::ExternalChannelDataListHasBeenSet() const
{
    return m_externalChannelDataListHasBeenSet;
}

string QueryCloudChannelDataResponse::GetSubAppId() const
{
    return m_subAppId;
}

bool QueryCloudChannelDataResponse::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string QueryCloudChannelDataResponse::GetAppId() const
{
    return m_appId;
}

bool QueryCloudChannelDataResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}


