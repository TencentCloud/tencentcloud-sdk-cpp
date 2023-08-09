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

#include <tencentcloud/iotcloud/v20210408/model/CLSLogItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

CLSLogItem::CLSLogItem() :
    m_contentHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_useridHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome CLSLogItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSLogItem.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSLogItem.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSLogItem.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSLogItem.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSLogItem.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSLogItem.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSLogItem.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Userid") && !value["Userid"].IsNull())
    {
        if (!value["Userid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSLogItem.Userid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userid = string(value["Userid"].GetString());
        m_useridHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSLogItem.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CLSLogItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_useridHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Userid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userid.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

}


string CLSLogItem::GetContent() const
{
    return m_content;
}

void CLSLogItem::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CLSLogItem::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string CLSLogItem::GetDeviceName() const
{
    return m_deviceName;
}

void CLSLogItem::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool CLSLogItem::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string CLSLogItem::GetProductId() const
{
    return m_productId;
}

void CLSLogItem::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CLSLogItem::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CLSLogItem::GetRequestId() const
{
    return m_requestId;
}

void CLSLogItem::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool CLSLogItem::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string CLSLogItem::GetResult() const
{
    return m_result;
}

void CLSLogItem::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool CLSLogItem::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string CLSLogItem::GetScene() const
{
    return m_scene;
}

void CLSLogItem::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool CLSLogItem::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string CLSLogItem::GetTime() const
{
    return m_time;
}

void CLSLogItem::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool CLSLogItem::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string CLSLogItem::GetUserid() const
{
    return m_userid;
}

void CLSLogItem::SetUserid(const string& _userid)
{
    m_userid = _userid;
    m_useridHasBeenSet = true;
}

bool CLSLogItem::UseridHasBeenSet() const
{
    return m_useridHasBeenSet;
}

string CLSLogItem::GetUserId() const
{
    return m_userId;
}

void CLSLogItem::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CLSLogItem::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

