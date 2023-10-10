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

#include <tencentcloud/cwp/v20180228/model/DescribeAssetTypeTopResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeAssetTypeTopResponse::DescribeAssetTypeTopResponse() :
    m_userHasBeenSet(false),
    m_portHasBeenSet(false),
    m_processHasBeenSet(false),
    m_softwareHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_webAppHasBeenSet(false),
    m_webLocationHasBeenSet(false),
    m_webFrameHasBeenSet(false),
    m_webServiceHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetTypeTopResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("User") && !rsp["User"].IsNull())
    {
        if (!rsp["User"].IsArray())
            return CoreInternalOutcome(Core::Error("response `User` is not array type"));

        const rapidjson::Value &tmpValue = rsp["User"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetKeyVal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_user.push_back(item);
        }
        m_userHasBeenSet = true;
    }

    if (rsp.HasMember("Port") && !rsp["Port"].IsNull())
    {
        if (!rsp["Port"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Port` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Port"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetKeyVal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_port.push_back(item);
        }
        m_portHasBeenSet = true;
    }

    if (rsp.HasMember("Process") && !rsp["Process"].IsNull())
    {
        if (!rsp["Process"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Process` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Process"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetKeyVal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_process.push_back(item);
        }
        m_processHasBeenSet = true;
    }

    if (rsp.HasMember("Software") && !rsp["Software"].IsNull())
    {
        if (!rsp["Software"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Software` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Software"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetKeyVal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_software.push_back(item);
        }
        m_softwareHasBeenSet = true;
    }

    if (rsp.HasMember("Database") && !rsp["Database"].IsNull())
    {
        if (!rsp["Database"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Database` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Database"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetKeyVal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_database.push_back(item);
        }
        m_databaseHasBeenSet = true;
    }

    if (rsp.HasMember("WebApp") && !rsp["WebApp"].IsNull())
    {
        if (!rsp["WebApp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebApp` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WebApp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetKeyVal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_webApp.push_back(item);
        }
        m_webAppHasBeenSet = true;
    }

    if (rsp.HasMember("WebLocation") && !rsp["WebLocation"].IsNull())
    {
        if (!rsp["WebLocation"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebLocation` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WebLocation"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetKeyVal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_webLocation.push_back(item);
        }
        m_webLocationHasBeenSet = true;
    }

    if (rsp.HasMember("WebFrame") && !rsp["WebFrame"].IsNull())
    {
        if (!rsp["WebFrame"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebFrame` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WebFrame"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetKeyVal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_webFrame.push_back(item);
        }
        m_webFrameHasBeenSet = true;
    }

    if (rsp.HasMember("WebService") && !rsp["WebService"].IsNull())
    {
        if (!rsp["WebService"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebService` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WebService"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetKeyVal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_webService.push_back(item);
        }
        m_webServiceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetTypeTopResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_user.begin(); itr != m_user.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_port.begin(); itr != m_port.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_processHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Process";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_process.begin(); itr != m_process.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_softwareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Software";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_software.begin(); itr != m_software.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_database.begin(); itr != m_database.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_webAppHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebApp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_webApp.begin(); itr != m_webApp.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_webLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_webLocation.begin(); itr != m_webLocation.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_webFrameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebFrame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_webFrame.begin(); itr != m_webFrame.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_webServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_webService.begin(); itr != m_webService.end(); ++itr, ++i)
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


vector<AssetKeyVal> DescribeAssetTypeTopResponse::GetUser() const
{
    return m_user;
}

bool DescribeAssetTypeTopResponse::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

vector<AssetKeyVal> DescribeAssetTypeTopResponse::GetPort() const
{
    return m_port;
}

bool DescribeAssetTypeTopResponse::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

vector<AssetKeyVal> DescribeAssetTypeTopResponse::GetProcess() const
{
    return m_process;
}

bool DescribeAssetTypeTopResponse::ProcessHasBeenSet() const
{
    return m_processHasBeenSet;
}

vector<AssetKeyVal> DescribeAssetTypeTopResponse::GetSoftware() const
{
    return m_software;
}

bool DescribeAssetTypeTopResponse::SoftwareHasBeenSet() const
{
    return m_softwareHasBeenSet;
}

vector<AssetKeyVal> DescribeAssetTypeTopResponse::GetDatabase() const
{
    return m_database;
}

bool DescribeAssetTypeTopResponse::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

vector<AssetKeyVal> DescribeAssetTypeTopResponse::GetWebApp() const
{
    return m_webApp;
}

bool DescribeAssetTypeTopResponse::WebAppHasBeenSet() const
{
    return m_webAppHasBeenSet;
}

vector<AssetKeyVal> DescribeAssetTypeTopResponse::GetWebLocation() const
{
    return m_webLocation;
}

bool DescribeAssetTypeTopResponse::WebLocationHasBeenSet() const
{
    return m_webLocationHasBeenSet;
}

vector<AssetKeyVal> DescribeAssetTypeTopResponse::GetWebFrame() const
{
    return m_webFrame;
}

bool DescribeAssetTypeTopResponse::WebFrameHasBeenSet() const
{
    return m_webFrameHasBeenSet;
}

vector<AssetKeyVal> DescribeAssetTypeTopResponse::GetWebService() const
{
    return m_webService;
}

bool DescribeAssetTypeTopResponse::WebServiceHasBeenSet() const
{
    return m_webServiceHasBeenSet;
}


