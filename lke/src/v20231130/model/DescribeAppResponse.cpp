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

#include <tencentcloud/lke/v20231130/model/DescribeAppResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DescribeAppResponse::DescribeAppResponse() :
    m_appBizIdHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_appTypeDescHasBeenSet(false),
    m_baseConfigHasBeenSet(false),
    m_appConfigHasBeenSet(false),
    m_avatarInAppealHasBeenSet(false),
    m_roleInAppealHasBeenSet(false),
    m_nameInAppealHasBeenSet(false),
    m_greetingInAppealHasBeenSet(false),
    m_bareAnswerInAppealHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_appStatusHasBeenSet(false),
    m_appStatusDescHasBeenSet(false),
    m_isCopyingHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAppResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppBizId") && !rsp["AppBizId"].IsNull())
    {
        if (!rsp["AppBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appBizId = string(rsp["AppBizId"].GetString());
        m_appBizIdHasBeenSet = true;
    }

    if (rsp.HasMember("AppType") && !rsp["AppType"].IsNull())
    {
        if (!rsp["AppType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appType = string(rsp["AppType"].GetString());
        m_appTypeHasBeenSet = true;
    }

    if (rsp.HasMember("AppTypeDesc") && !rsp["AppTypeDesc"].IsNull())
    {
        if (!rsp["AppTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appTypeDesc = string(rsp["AppTypeDesc"].GetString());
        m_appTypeDescHasBeenSet = true;
    }

    if (rsp.HasMember("BaseConfig") && !rsp["BaseConfig"].IsNull())
    {
        if (!rsp["BaseConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaseConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baseConfig.Deserialize(rsp["BaseConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baseConfigHasBeenSet = true;
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

    if (rsp.HasMember("AvatarInAppeal") && !rsp["AvatarInAppeal"].IsNull())
    {
        if (!rsp["AvatarInAppeal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarInAppeal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_avatarInAppeal = rsp["AvatarInAppeal"].GetBool();
        m_avatarInAppealHasBeenSet = true;
    }

    if (rsp.HasMember("RoleInAppeal") && !rsp["RoleInAppeal"].IsNull())
    {
        if (!rsp["RoleInAppeal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInAppeal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_roleInAppeal = rsp["RoleInAppeal"].GetBool();
        m_roleInAppealHasBeenSet = true;
    }

    if (rsp.HasMember("NameInAppeal") && !rsp["NameInAppeal"].IsNull())
    {
        if (!rsp["NameInAppeal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NameInAppeal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_nameInAppeal = rsp["NameInAppeal"].GetBool();
        m_nameInAppealHasBeenSet = true;
    }

    if (rsp.HasMember("GreetingInAppeal") && !rsp["GreetingInAppeal"].IsNull())
    {
        if (!rsp["GreetingInAppeal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GreetingInAppeal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_greetingInAppeal = rsp["GreetingInAppeal"].GetBool();
        m_greetingInAppealHasBeenSet = true;
    }

    if (rsp.HasMember("BareAnswerInAppeal") && !rsp["BareAnswerInAppeal"].IsNull())
    {
        if (!rsp["BareAnswerInAppeal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BareAnswerInAppeal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_bareAnswerInAppeal = rsp["BareAnswerInAppeal"].GetBool();
        m_bareAnswerInAppealHasBeenSet = true;
    }

    if (rsp.HasMember("AppKey") && !rsp["AppKey"].IsNull())
    {
        if (!rsp["AppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appKey = string(rsp["AppKey"].GetString());
        m_appKeyHasBeenSet = true;
    }

    if (rsp.HasMember("AppStatus") && !rsp["AppStatus"].IsNull())
    {
        if (!rsp["AppStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appStatus = rsp["AppStatus"].GetUint64();
        m_appStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AppStatusDesc") && !rsp["AppStatusDesc"].IsNull())
    {
        if (!rsp["AppStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appStatusDesc = string(rsp["AppStatusDesc"].GetString());
        m_appStatusDescHasBeenSet = true;
    }

    if (rsp.HasMember("IsCopying") && !rsp["IsCopying"].IsNull())
    {
        if (!rsp["IsCopying"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsCopying` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCopying = rsp["IsCopying"].GetBool();
        m_isCopyingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAppResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_baseConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_avatarInAppealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvatarInAppeal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avatarInAppeal, allocator);
    }

    if (m_roleInAppealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleInAppeal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleInAppeal, allocator);
    }

    if (m_nameInAppealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameInAppeal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nameInAppeal, allocator);
    }

    if (m_greetingInAppealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GreetingInAppeal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_greetingInAppeal, allocator);
    }

    if (m_bareAnswerInAppealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BareAnswerInAppeal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bareAnswerInAppeal, allocator);
    }

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_appStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appStatus, allocator);
    }

    if (m_appStatusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppStatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appStatusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_isCopyingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCopying";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCopying, allocator);
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


string DescribeAppResponse::GetAppBizId() const
{
    return m_appBizId;
}

bool DescribeAppResponse::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
}

string DescribeAppResponse::GetAppType() const
{
    return m_appType;
}

bool DescribeAppResponse::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

string DescribeAppResponse::GetAppTypeDesc() const
{
    return m_appTypeDesc;
}

bool DescribeAppResponse::AppTypeDescHasBeenSet() const
{
    return m_appTypeDescHasBeenSet;
}

BaseConfig DescribeAppResponse::GetBaseConfig() const
{
    return m_baseConfig;
}

bool DescribeAppResponse::BaseConfigHasBeenSet() const
{
    return m_baseConfigHasBeenSet;
}

AppConfig DescribeAppResponse::GetAppConfig() const
{
    return m_appConfig;
}

bool DescribeAppResponse::AppConfigHasBeenSet() const
{
    return m_appConfigHasBeenSet;
}

bool DescribeAppResponse::GetAvatarInAppeal() const
{
    return m_avatarInAppeal;
}

bool DescribeAppResponse::AvatarInAppealHasBeenSet() const
{
    return m_avatarInAppealHasBeenSet;
}

bool DescribeAppResponse::GetRoleInAppeal() const
{
    return m_roleInAppeal;
}

bool DescribeAppResponse::RoleInAppealHasBeenSet() const
{
    return m_roleInAppealHasBeenSet;
}

bool DescribeAppResponse::GetNameInAppeal() const
{
    return m_nameInAppeal;
}

bool DescribeAppResponse::NameInAppealHasBeenSet() const
{
    return m_nameInAppealHasBeenSet;
}

bool DescribeAppResponse::GetGreetingInAppeal() const
{
    return m_greetingInAppeal;
}

bool DescribeAppResponse::GreetingInAppealHasBeenSet() const
{
    return m_greetingInAppealHasBeenSet;
}

bool DescribeAppResponse::GetBareAnswerInAppeal() const
{
    return m_bareAnswerInAppeal;
}

bool DescribeAppResponse::BareAnswerInAppealHasBeenSet() const
{
    return m_bareAnswerInAppealHasBeenSet;
}

string DescribeAppResponse::GetAppKey() const
{
    return m_appKey;
}

bool DescribeAppResponse::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

uint64_t DescribeAppResponse::GetAppStatus() const
{
    return m_appStatus;
}

bool DescribeAppResponse::AppStatusHasBeenSet() const
{
    return m_appStatusHasBeenSet;
}

string DescribeAppResponse::GetAppStatusDesc() const
{
    return m_appStatusDesc;
}

bool DescribeAppResponse::AppStatusDescHasBeenSet() const
{
    return m_appStatusDescHasBeenSet;
}

bool DescribeAppResponse::GetIsCopying() const
{
    return m_isCopying;
}

bool DescribeAppResponse::IsCopyingHasBeenSet() const
{
    return m_isCopyingHasBeenSet;
}


