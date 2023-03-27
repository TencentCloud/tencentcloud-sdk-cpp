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

#include <tencentcloud/tiw/v20190919/model/WhiteboardApplicationConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

WhiteboardApplicationConfig::WhiteboardApplicationConfig() :
    m_taskTypeHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketLocationHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_resultDomainHasBeenSet(false),
    m_callbackHasBeenSet(false),
    m_callbackKeyHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_adminUserIdHasBeenSet(false),
    m_adminUserSigHasBeenSet(false)
{
}

CoreInternalOutcome WhiteboardApplicationConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardApplicationConfig.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardApplicationConfig.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("BucketLocation") && !value["BucketLocation"].IsNull())
    {
        if (!value["BucketLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardApplicationConfig.BucketLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketLocation = string(value["BucketLocation"].GetString());
        m_bucketLocationHasBeenSet = true;
    }

    if (value.HasMember("BucketPrefix") && !value["BucketPrefix"].IsNull())
    {
        if (!value["BucketPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardApplicationConfig.BucketPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketPrefix = string(value["BucketPrefix"].GetString());
        m_bucketPrefixHasBeenSet = true;
    }

    if (value.HasMember("ResultDomain") && !value["ResultDomain"].IsNull())
    {
        if (!value["ResultDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardApplicationConfig.ResultDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultDomain = string(value["ResultDomain"].GetString());
        m_resultDomainHasBeenSet = true;
    }

    if (value.HasMember("Callback") && !value["Callback"].IsNull())
    {
        if (!value["Callback"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardApplicationConfig.Callback` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callback = string(value["Callback"].GetString());
        m_callbackHasBeenSet = true;
    }

    if (value.HasMember("CallbackKey") && !value["CallbackKey"].IsNull())
    {
        if (!value["CallbackKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardApplicationConfig.CallbackKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackKey = string(value["CallbackKey"].GetString());
        m_callbackKeyHasBeenSet = true;
    }

    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardApplicationConfig.SdkAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = value["SdkAppId"].GetInt64();
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("AdminUserId") && !value["AdminUserId"].IsNull())
    {
        if (!value["AdminUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardApplicationConfig.AdminUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUserId = string(value["AdminUserId"].GetString());
        m_adminUserIdHasBeenSet = true;
    }

    if (value.HasMember("AdminUserSig") && !value["AdminUserSig"].IsNull())
    {
        if (!value["AdminUserSig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardApplicationConfig.AdminUserSig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUserSig = string(value["AdminUserSig"].GetString());
        m_adminUserSigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WhiteboardApplicationConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_resultDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callback.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_adminUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_adminUserSigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUserSig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminUserSig.c_str(), allocator).Move(), allocator);
    }

}


string WhiteboardApplicationConfig::GetTaskType() const
{
    return m_taskType;
}

void WhiteboardApplicationConfig::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool WhiteboardApplicationConfig::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string WhiteboardApplicationConfig::GetBucketName() const
{
    return m_bucketName;
}

void WhiteboardApplicationConfig::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool WhiteboardApplicationConfig::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string WhiteboardApplicationConfig::GetBucketLocation() const
{
    return m_bucketLocation;
}

void WhiteboardApplicationConfig::SetBucketLocation(const string& _bucketLocation)
{
    m_bucketLocation = _bucketLocation;
    m_bucketLocationHasBeenSet = true;
}

bool WhiteboardApplicationConfig::BucketLocationHasBeenSet() const
{
    return m_bucketLocationHasBeenSet;
}

string WhiteboardApplicationConfig::GetBucketPrefix() const
{
    return m_bucketPrefix;
}

void WhiteboardApplicationConfig::SetBucketPrefix(const string& _bucketPrefix)
{
    m_bucketPrefix = _bucketPrefix;
    m_bucketPrefixHasBeenSet = true;
}

bool WhiteboardApplicationConfig::BucketPrefixHasBeenSet() const
{
    return m_bucketPrefixHasBeenSet;
}

string WhiteboardApplicationConfig::GetResultDomain() const
{
    return m_resultDomain;
}

void WhiteboardApplicationConfig::SetResultDomain(const string& _resultDomain)
{
    m_resultDomain = _resultDomain;
    m_resultDomainHasBeenSet = true;
}

bool WhiteboardApplicationConfig::ResultDomainHasBeenSet() const
{
    return m_resultDomainHasBeenSet;
}

string WhiteboardApplicationConfig::GetCallback() const
{
    return m_callback;
}

void WhiteboardApplicationConfig::SetCallback(const string& _callback)
{
    m_callback = _callback;
    m_callbackHasBeenSet = true;
}

bool WhiteboardApplicationConfig::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}

string WhiteboardApplicationConfig::GetCallbackKey() const
{
    return m_callbackKey;
}

void WhiteboardApplicationConfig::SetCallbackKey(const string& _callbackKey)
{
    m_callbackKey = _callbackKey;
    m_callbackKeyHasBeenSet = true;
}

bool WhiteboardApplicationConfig::CallbackKeyHasBeenSet() const
{
    return m_callbackKeyHasBeenSet;
}

int64_t WhiteboardApplicationConfig::GetSdkAppId() const
{
    return m_sdkAppId;
}

void WhiteboardApplicationConfig::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool WhiteboardApplicationConfig::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string WhiteboardApplicationConfig::GetAdminUserId() const
{
    return m_adminUserId;
}

void WhiteboardApplicationConfig::SetAdminUserId(const string& _adminUserId)
{
    m_adminUserId = _adminUserId;
    m_adminUserIdHasBeenSet = true;
}

bool WhiteboardApplicationConfig::AdminUserIdHasBeenSet() const
{
    return m_adminUserIdHasBeenSet;
}

string WhiteboardApplicationConfig::GetAdminUserSig() const
{
    return m_adminUserSig;
}

void WhiteboardApplicationConfig::SetAdminUserSig(const string& _adminUserSig)
{
    m_adminUserSig = _adminUserSig;
    m_adminUserSigHasBeenSet = true;
}

bool WhiteboardApplicationConfig::AdminUserSigHasBeenSet() const
{
    return m_adminUserSigHasBeenSet;
}

