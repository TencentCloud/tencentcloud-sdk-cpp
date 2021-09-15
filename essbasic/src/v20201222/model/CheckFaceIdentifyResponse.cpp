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

#include <tencentcloud/essbasic/v20201222/model/CheckFaceIdentifyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

CheckFaceIdentifyResponse::CheckFaceIdentifyResponse() :
    m_resultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_verifiedOnHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_verifyServerIpHasBeenSet(false),
    m_photoFileNameHasBeenSet(false),
    m_photoFileDataHasBeenSet(false)
{
}

CoreInternalOutcome CheckFaceIdentifyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Result` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_result = rsp["Result"].GetInt64();
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelName") && !rsp["ChannelName"].IsNull())
    {
        if (!rsp["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(rsp["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (rsp.HasMember("VerifiedOn") && !rsp["VerifiedOn"].IsNull())
    {
        if (!rsp["VerifiedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VerifiedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verifiedOn = rsp["VerifiedOn"].GetInt64();
        m_verifiedOnHasBeenSet = true;
    }

    if (rsp.HasMember("SerialNumber") && !rsp["SerialNumber"].IsNull())
    {
        if (!rsp["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(rsp["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
    }

    if (rsp.HasMember("VerifyServerIp") && !rsp["VerifyServerIp"].IsNull())
    {
        if (!rsp["VerifyServerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyServerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyServerIp = string(rsp["VerifyServerIp"].GetString());
        m_verifyServerIpHasBeenSet = true;
    }

    if (rsp.HasMember("PhotoFileName") && !rsp["PhotoFileName"].IsNull())
    {
        if (!rsp["PhotoFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhotoFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_photoFileName = string(rsp["PhotoFileName"].GetString());
        m_photoFileNameHasBeenSet = true;
    }

    if (rsp.HasMember("PhotoFileData") && !rsp["PhotoFileData"].IsNull())
    {
        if (!rsp["PhotoFileData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhotoFileData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_photoFileData = string(rsp["PhotoFileData"].GetString());
        m_photoFileDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CheckFaceIdentifyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_verifiedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifiedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifiedOn, allocator);
    }

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyServerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyServerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyServerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_photoFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhotoFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_photoFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_photoFileDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhotoFileData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_photoFileData.c_str(), allocator).Move(), allocator);
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


int64_t CheckFaceIdentifyResponse::GetResult() const
{
    return m_result;
}

bool CheckFaceIdentifyResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string CheckFaceIdentifyResponse::GetDescription() const
{
    return m_description;
}

bool CheckFaceIdentifyResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CheckFaceIdentifyResponse::GetChannelName() const
{
    return m_channelName;
}

bool CheckFaceIdentifyResponse::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

int64_t CheckFaceIdentifyResponse::GetVerifiedOn() const
{
    return m_verifiedOn;
}

bool CheckFaceIdentifyResponse::VerifiedOnHasBeenSet() const
{
    return m_verifiedOnHasBeenSet;
}

string CheckFaceIdentifyResponse::GetSerialNumber() const
{
    return m_serialNumber;
}

bool CheckFaceIdentifyResponse::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

string CheckFaceIdentifyResponse::GetVerifyServerIp() const
{
    return m_verifyServerIp;
}

bool CheckFaceIdentifyResponse::VerifyServerIpHasBeenSet() const
{
    return m_verifyServerIpHasBeenSet;
}

string CheckFaceIdentifyResponse::GetPhotoFileName() const
{
    return m_photoFileName;
}

bool CheckFaceIdentifyResponse::PhotoFileNameHasBeenSet() const
{
    return m_photoFileNameHasBeenSet;
}

string CheckFaceIdentifyResponse::GetPhotoFileData() const
{
    return m_photoFileData;
}

bool CheckFaceIdentifyResponse::PhotoFileDataHasBeenSet() const
{
    return m_photoFileDataHasBeenSet;
}


