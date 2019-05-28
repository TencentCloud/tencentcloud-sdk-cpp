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
using namespace rapidjson;
using namespace std;

Docker::Docker() :
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_serverHasBeenSet(false)
{
}

CoreInternalOutcome Docker::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Error("response `Docker.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Error("response `Docker.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Error("response `Docker.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Error("response `Docker.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Docker::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_userHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_serverHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_server.c_str(), allocator).Move(), allocator);
    }

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

