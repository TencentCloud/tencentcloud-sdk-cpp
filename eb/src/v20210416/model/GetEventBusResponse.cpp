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

#include <tencentcloud/eb/v20210416/model/GetEventBusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

GetEventBusResponse::GetEventBusResponse() :
    m_modTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clsTopicIdHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_clsLogsetIdHasBeenSet(false),
    m_eventBusNameHasBeenSet(false),
    m_eventBusIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_saveDaysHasBeenSet(false),
    m_logTopicIdHasBeenSet(false),
    m_enableStoreHasBeenSet(false),
    m_linkModeHasBeenSet(false)
{
}

CoreInternalOutcome GetEventBusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ModTime") && !rsp["ModTime"].IsNull())
    {
        if (!rsp["ModTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTime = string(rsp["ModTime"].GetString());
        m_modTimeHasBeenSet = true;
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

    if (rsp.HasMember("ClsTopicId") && !rsp["ClsTopicId"].IsNull())
    {
        if (!rsp["ClsTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsTopicId = string(rsp["ClsTopicId"].GetString());
        m_clsTopicIdHasBeenSet = true;
    }

    if (rsp.HasMember("AddTime") && !rsp["AddTime"].IsNull())
    {
        if (!rsp["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(rsp["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ClsLogsetId") && !rsp["ClsLogsetId"].IsNull())
    {
        if (!rsp["ClsLogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsLogsetId = string(rsp["ClsLogsetId"].GetString());
        m_clsLogsetIdHasBeenSet = true;
    }

    if (rsp.HasMember("EventBusName") && !rsp["EventBusName"].IsNull())
    {
        if (!rsp["EventBusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventBusName = string(rsp["EventBusName"].GetString());
        m_eventBusNameHasBeenSet = true;
    }

    if (rsp.HasMember("EventBusId") && !rsp["EventBusId"].IsNull())
    {
        if (!rsp["EventBusId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBusId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventBusId = string(rsp["EventBusId"].GetString());
        m_eventBusIdHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(rsp["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (rsp.HasMember("SaveDays") && !rsp["SaveDays"].IsNull())
    {
        if (!rsp["SaveDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SaveDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_saveDays = rsp["SaveDays"].GetInt64();
        m_saveDaysHasBeenSet = true;
    }

    if (rsp.HasMember("LogTopicId") && !rsp["LogTopicId"].IsNull())
    {
        if (!rsp["LogTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicId = string(rsp["LogTopicId"].GetString());
        m_logTopicIdHasBeenSet = true;
    }

    if (rsp.HasMember("EnableStore") && !rsp["EnableStore"].IsNull())
    {
        if (!rsp["EnableStore"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableStore` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableStore = rsp["EnableStore"].GetBool();
        m_enableStoreHasBeenSet = true;
    }

    if (rsp.HasMember("LinkMode") && !rsp["LinkMode"].IsNull())
    {
        if (!rsp["LinkMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkMode = string(rsp["LinkMode"].GetString());
        m_linkModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetEventBusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_modTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_clsTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_clsLogsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsLogsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventBusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventBusName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventBusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventBusId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_saveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_saveDays, allocator);
    }

    if (m_logTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableStoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableStore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableStore, allocator);
    }

    if (m_linkModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkMode.c_str(), allocator).Move(), allocator);
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


string GetEventBusResponse::GetModTime() const
{
    return m_modTime;
}

bool GetEventBusResponse::ModTimeHasBeenSet() const
{
    return m_modTimeHasBeenSet;
}

string GetEventBusResponse::GetDescription() const
{
    return m_description;
}

bool GetEventBusResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GetEventBusResponse::GetClsTopicId() const
{
    return m_clsTopicId;
}

bool GetEventBusResponse::ClsTopicIdHasBeenSet() const
{
    return m_clsTopicIdHasBeenSet;
}

string GetEventBusResponse::GetAddTime() const
{
    return m_addTime;
}

bool GetEventBusResponse::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string GetEventBusResponse::GetClsLogsetId() const
{
    return m_clsLogsetId;
}

bool GetEventBusResponse::ClsLogsetIdHasBeenSet() const
{
    return m_clsLogsetIdHasBeenSet;
}

string GetEventBusResponse::GetEventBusName() const
{
    return m_eventBusName;
}

bool GetEventBusResponse::EventBusNameHasBeenSet() const
{
    return m_eventBusNameHasBeenSet;
}

string GetEventBusResponse::GetEventBusId() const
{
    return m_eventBusId;
}

bool GetEventBusResponse::EventBusIdHasBeenSet() const
{
    return m_eventBusIdHasBeenSet;
}

string GetEventBusResponse::GetType() const
{
    return m_type;
}

bool GetEventBusResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string GetEventBusResponse::GetPayMode() const
{
    return m_payMode;
}

bool GetEventBusResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t GetEventBusResponse::GetSaveDays() const
{
    return m_saveDays;
}

bool GetEventBusResponse::SaveDaysHasBeenSet() const
{
    return m_saveDaysHasBeenSet;
}

string GetEventBusResponse::GetLogTopicId() const
{
    return m_logTopicId;
}

bool GetEventBusResponse::LogTopicIdHasBeenSet() const
{
    return m_logTopicIdHasBeenSet;
}

bool GetEventBusResponse::GetEnableStore() const
{
    return m_enableStore;
}

bool GetEventBusResponse::EnableStoreHasBeenSet() const
{
    return m_enableStoreHasBeenSet;
}

string GetEventBusResponse::GetLinkMode() const
{
    return m_linkMode;
}

bool GetEventBusResponse::LinkModeHasBeenSet() const
{
    return m_linkModeHasBeenSet;
}


