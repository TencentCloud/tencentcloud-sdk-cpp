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

#include <tencentcloud/batch/v20170312/model/Docker.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

Docker::Docker() :
    m_imageHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_maxRetryCountHasBeenSet(false),
    m_delayOnRetryHasBeenSet(false),
    m_dockerRunOptionHasBeenSet(false)
{
}

CoreInternalOutcome Docker::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Docker.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Docker.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Docker.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Docker.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }

    if (value.HasMember("MaxRetryCount") && !value["MaxRetryCount"].IsNull())
    {
        if (!value["MaxRetryCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Docker.MaxRetryCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetryCount = value["MaxRetryCount"].GetUint64();
        m_maxRetryCountHasBeenSet = true;
    }

    if (value.HasMember("DelayOnRetry") && !value["DelayOnRetry"].IsNull())
    {
        if (!value["DelayOnRetry"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Docker.DelayOnRetry` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayOnRetry = value["DelayOnRetry"].GetUint64();
        m_delayOnRetryHasBeenSet = true;
    }

    if (value.HasMember("DockerRunOption") && !value["DockerRunOption"].IsNull())
    {
        if (!value["DockerRunOption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Docker.DockerRunOption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerRunOption = string(value["DockerRunOption"].GetString());
        m_dockerRunOptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Docker::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_maxRetryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetryCount, allocator);
    }

    if (m_delayOnRetryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayOnRetry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayOnRetry, allocator);
    }

    if (m_dockerRunOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerRunOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerRunOption.c_str(), allocator).Move(), allocator);
    }

}


string Docker::GetImage() const
{
    return m_image;
}

void Docker::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool Docker::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string Docker::GetUser() const
{
    return m_user;
}

void Docker::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool Docker::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string Docker::GetPassword() const
{
    return m_password;
}

void Docker::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool Docker::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string Docker::GetServer() const
{
    return m_server;
}

void Docker::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool Docker::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

uint64_t Docker::GetMaxRetryCount() const
{
    return m_maxRetryCount;
}

void Docker::SetMaxRetryCount(const uint64_t& _maxRetryCount)
{
    m_maxRetryCount = _maxRetryCount;
    m_maxRetryCountHasBeenSet = true;
}

bool Docker::MaxRetryCountHasBeenSet() const
{
    return m_maxRetryCountHasBeenSet;
}

uint64_t Docker::GetDelayOnRetry() const
{
    return m_delayOnRetry;
}

void Docker::SetDelayOnRetry(const uint64_t& _delayOnRetry)
{
    m_delayOnRetry = _delayOnRetry;
    m_delayOnRetryHasBeenSet = true;
}

bool Docker::DelayOnRetryHasBeenSet() const
{
    return m_delayOnRetryHasBeenSet;
}

string Docker::GetDockerRunOption() const
{
    return m_dockerRunOption;
}

void Docker::SetDockerRunOption(const string& _dockerRunOption)
{
    m_dockerRunOption = _dockerRunOption;
    m_dockerRunOptionHasBeenSet = true;
}

bool Docker::DockerRunOptionHasBeenSet() const
{
    return m_dockerRunOptionHasBeenSet;
}

