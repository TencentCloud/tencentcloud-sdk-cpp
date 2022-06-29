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

#include <tencentcloud/iotcloud/v20180614/model/CLSLogItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

CLSLogItem::CLSLogItem() :
    m_contentHasBeenSet(false),
    m_devicenameHasBeenSet(false),
    m_productidHasBeenSet(false),
    m_requestidHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_useridHasBeenSet(false)
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

    if (value.HasMember("Devicename") && !value["Devicename"].IsNull())
    {
        if (!value["Devicename"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSLogItem.Devicename` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devicename = string(value["Devicename"].GetString());
        m_devicenameHasBeenSet = true;
    }

    if (value.HasMember("Productid") && !value["Productid"].IsNull())
    {
        if (!value["Productid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSLogItem.Productid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productid = string(value["Productid"].GetString());
        m_productidHasBeenSet = true;
    }

    if (value.HasMember("Requestid") && !value["Requestid"].IsNull())
    {
        if (!value["Requestid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSLogItem.Requestid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestid = string(value["Requestid"].GetString());
        m_requestidHasBeenSet = true;
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

    if (m_devicenameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Devicename";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devicename.c_str(), allocator).Move(), allocator);
    }

    if (m_productidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Productid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productid.c_str(), allocator).Move(), allocator);
    }

    if (m_requestidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Requestid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestid.c_str(), allocator).Move(), allocator);
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

string CLSLogItem::GetDevicename() const
{
    return m_devicename;
}

void CLSLogItem::SetDevicename(const string& _devicename)
{
    m_devicename = _devicename;
    m_devicenameHasBeenSet = true;
}

bool CLSLogItem::DevicenameHasBeenSet() const
{
    return m_devicenameHasBeenSet;
}

string CLSLogItem::GetProductid() const
{
    return m_productid;
}

void CLSLogItem::SetProductid(const string& _productid)
{
    m_productid = _productid;
    m_productidHasBeenSet = true;
}

bool CLSLogItem::ProductidHasBeenSet() const
{
    return m_productidHasBeenSet;
}

string CLSLogItem::GetRequestid() const
{
    return m_requestid;
}

void CLSLogItem::SetRequestid(const string& _requestid)
{
    m_requestid = _requestid;
    m_requestidHasBeenSet = true;
}

bool CLSLogItem::RequestidHasBeenSet() const
{
    return m_requestidHasBeenSet;
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

