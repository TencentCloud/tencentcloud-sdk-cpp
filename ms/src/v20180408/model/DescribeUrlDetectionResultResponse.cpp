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

#include <tencentcloud/ms/v20180408/model/DescribeUrlDetectionResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

DescribeUrlDetectionResultResponse::DescribeUrlDetectionResultResponse() :
    m_resultCodeHasBeenSet(false),
    m_respVerHasBeenSet(false),
    m_urlTypeHasBeenSet(false),
    m_evilClassHasBeenSet(false),
    m_evilTypeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_detectTimeHasBeenSet(false),
    m_wordingHasBeenSet(false),
    m_wordingTitleHasBeenSet(false),
    m_urlTypeDescHasBeenSet(false),
    m_evilClassDescHasBeenSet(false),
    m_evilTypeDescHasBeenSet(false),
    m_levelDescHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUrlDetectionResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ResultCode") && !rsp["ResultCode"].IsNull())
    {
        if (!rsp["ResultCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResultCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = rsp["ResultCode"].GetInt64();
        m_resultCodeHasBeenSet = true;
    }

    if (rsp.HasMember("RespVer") && !rsp["RespVer"].IsNull())
    {
        if (!rsp["RespVer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RespVer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_respVer = rsp["RespVer"].GetInt64();
        m_respVerHasBeenSet = true;
    }

    if (rsp.HasMember("UrlType") && !rsp["UrlType"].IsNull())
    {
        if (!rsp["UrlType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UrlType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_urlType = rsp["UrlType"].GetInt64();
        m_urlTypeHasBeenSet = true;
    }

    if (rsp.HasMember("EvilClass") && !rsp["EvilClass"].IsNull())
    {
        if (!rsp["EvilClass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EvilClass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilClass = rsp["EvilClass"].GetInt64();
        m_evilClassHasBeenSet = true;
    }

    if (rsp.HasMember("EvilType") && !rsp["EvilType"].IsNull())
    {
        if (!rsp["EvilType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EvilType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = rsp["EvilType"].GetInt64();
        m_evilTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = rsp["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (rsp.HasMember("DetectTime") && !rsp["DetectTime"].IsNull())
    {
        if (!rsp["DetectTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detectTime = rsp["DetectTime"].GetInt64();
        m_detectTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Wording") && !rsp["Wording"].IsNull())
    {
        if (!rsp["Wording"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Wording` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wording = string(rsp["Wording"].GetString());
        m_wordingHasBeenSet = true;
    }

    if (rsp.HasMember("WordingTitle") && !rsp["WordingTitle"].IsNull())
    {
        if (!rsp["WordingTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WordingTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wordingTitle = string(rsp["WordingTitle"].GetString());
        m_wordingTitleHasBeenSet = true;
    }

    if (rsp.HasMember("UrlTypeDesc") && !rsp["UrlTypeDesc"].IsNull())
    {
        if (!rsp["UrlTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UrlTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_urlTypeDesc = string(rsp["UrlTypeDesc"].GetString());
        m_urlTypeDescHasBeenSet = true;
    }

    if (rsp.HasMember("EvilClassDesc") && !rsp["EvilClassDesc"].IsNull())
    {
        if (!rsp["EvilClassDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvilClassDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evilClassDesc = string(rsp["EvilClassDesc"].GetString());
        m_evilClassDescHasBeenSet = true;
    }

    if (rsp.HasMember("EvilTypeDesc") && !rsp["EvilTypeDesc"].IsNull())
    {
        if (!rsp["EvilTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvilTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evilTypeDesc = string(rsp["EvilTypeDesc"].GetString());
        m_evilTypeDescHasBeenSet = true;
    }

    if (rsp.HasMember("LevelDesc") && !rsp["LevelDesc"].IsNull())
    {
        if (!rsp["LevelDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LevelDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelDesc = string(rsp["LevelDesc"].GetString());
        m_levelDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUrlDetectionResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultCode, allocator);
    }

    if (m_respVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RespVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_respVer, allocator);
    }

    if (m_urlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_urlType, allocator);
    }

    if (m_evilClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilClass, allocator);
    }

    if (m_evilTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_detectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectTime, allocator);
    }

    if (m_wordingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wording";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wording.c_str(), allocator).Move(), allocator);
    }

    if (m_wordingTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordingTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wordingTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_urlTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_urlTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_evilClassDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilClassDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evilClassDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_evilTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evilTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_levelDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelDesc.c_str(), allocator).Move(), allocator);
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


int64_t DescribeUrlDetectionResultResponse::GetResultCode() const
{
    return m_resultCode;
}

bool DescribeUrlDetectionResultResponse::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

int64_t DescribeUrlDetectionResultResponse::GetRespVer() const
{
    return m_respVer;
}

bool DescribeUrlDetectionResultResponse::RespVerHasBeenSet() const
{
    return m_respVerHasBeenSet;
}

int64_t DescribeUrlDetectionResultResponse::GetUrlType() const
{
    return m_urlType;
}

bool DescribeUrlDetectionResultResponse::UrlTypeHasBeenSet() const
{
    return m_urlTypeHasBeenSet;
}

int64_t DescribeUrlDetectionResultResponse::GetEvilClass() const
{
    return m_evilClass;
}

bool DescribeUrlDetectionResultResponse::EvilClassHasBeenSet() const
{
    return m_evilClassHasBeenSet;
}

int64_t DescribeUrlDetectionResultResponse::GetEvilType() const
{
    return m_evilType;
}

bool DescribeUrlDetectionResultResponse::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

int64_t DescribeUrlDetectionResultResponse::GetLevel() const
{
    return m_level;
}

bool DescribeUrlDetectionResultResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t DescribeUrlDetectionResultResponse::GetDetectTime() const
{
    return m_detectTime;
}

bool DescribeUrlDetectionResultResponse::DetectTimeHasBeenSet() const
{
    return m_detectTimeHasBeenSet;
}

string DescribeUrlDetectionResultResponse::GetWording() const
{
    return m_wording;
}

bool DescribeUrlDetectionResultResponse::WordingHasBeenSet() const
{
    return m_wordingHasBeenSet;
}

string DescribeUrlDetectionResultResponse::GetWordingTitle() const
{
    return m_wordingTitle;
}

bool DescribeUrlDetectionResultResponse::WordingTitleHasBeenSet() const
{
    return m_wordingTitleHasBeenSet;
}

string DescribeUrlDetectionResultResponse::GetUrlTypeDesc() const
{
    return m_urlTypeDesc;
}

bool DescribeUrlDetectionResultResponse::UrlTypeDescHasBeenSet() const
{
    return m_urlTypeDescHasBeenSet;
}

string DescribeUrlDetectionResultResponse::GetEvilClassDesc() const
{
    return m_evilClassDesc;
}

bool DescribeUrlDetectionResultResponse::EvilClassDescHasBeenSet() const
{
    return m_evilClassDescHasBeenSet;
}

string DescribeUrlDetectionResultResponse::GetEvilTypeDesc() const
{
    return m_evilTypeDesc;
}

bool DescribeUrlDetectionResultResponse::EvilTypeDescHasBeenSet() const
{
    return m_evilTypeDescHasBeenSet;
}

string DescribeUrlDetectionResultResponse::GetLevelDesc() const
{
    return m_levelDesc;
}

bool DescribeUrlDetectionResultResponse::LevelDescHasBeenSet() const
{
    return m_levelDescHasBeenSet;
}


