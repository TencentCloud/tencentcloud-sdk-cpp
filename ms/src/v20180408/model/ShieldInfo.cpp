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

#include <tencentcloud/ms/v20180408/model/ShieldInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

ShieldInfo::ShieldInfo() :
    m_shieldCodeHasBeenSet(false),
    m_shieldSizeHasBeenSet(false),
    m_shieldMd5HasBeenSet(false),
    m_appUrlHasBeenSet(false),
    m_taskTimeHasBeenSet(false),
    m_itemIdHasBeenSet(false),
    m_serviceEditionHasBeenSet(false)
{
}

CoreInternalOutcome ShieldInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShieldCode") && !value["ShieldCode"].IsNull())
    {
        if (!value["ShieldCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldInfo.ShieldCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shieldCode = value["ShieldCode"].GetUint64();
        m_shieldCodeHasBeenSet = true;
    }

    if (value.HasMember("ShieldSize") && !value["ShieldSize"].IsNull())
    {
        if (!value["ShieldSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldInfo.ShieldSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shieldSize = value["ShieldSize"].GetUint64();
        m_shieldSizeHasBeenSet = true;
    }

    if (value.HasMember("ShieldMd5") && !value["ShieldMd5"].IsNull())
    {
        if (!value["ShieldMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldInfo.ShieldMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shieldMd5 = string(value["ShieldMd5"].GetString());
        m_shieldMd5HasBeenSet = true;
    }

    if (value.HasMember("AppUrl") && !value["AppUrl"].IsNull())
    {
        if (!value["AppUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldInfo.AppUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUrl = string(value["AppUrl"].GetString());
        m_appUrlHasBeenSet = true;
    }

    if (value.HasMember("TaskTime") && !value["TaskTime"].IsNull())
    {
        if (!value["TaskTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldInfo.TaskTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTime = value["TaskTime"].GetUint64();
        m_taskTimeHasBeenSet = true;
    }

    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldInfo.ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(value["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceEdition") && !value["ServiceEdition"].IsNull())
    {
        if (!value["ServiceEdition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldInfo.ServiceEdition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceEdition = string(value["ServiceEdition"].GetString());
        m_serviceEditionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShieldInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shieldCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shieldCode, allocator);
    }

    if (m_shieldSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shieldSize, allocator);
    }

    if (m_shieldMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shieldMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_appUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTime, allocator);
    }

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceEditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceEdition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceEdition.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ShieldInfo::GetShieldCode() const
{
    return m_shieldCode;
}

void ShieldInfo::SetShieldCode(const uint64_t& _shieldCode)
{
    m_shieldCode = _shieldCode;
    m_shieldCodeHasBeenSet = true;
}

bool ShieldInfo::ShieldCodeHasBeenSet() const
{
    return m_shieldCodeHasBeenSet;
}

uint64_t ShieldInfo::GetShieldSize() const
{
    return m_shieldSize;
}

void ShieldInfo::SetShieldSize(const uint64_t& _shieldSize)
{
    m_shieldSize = _shieldSize;
    m_shieldSizeHasBeenSet = true;
}

bool ShieldInfo::ShieldSizeHasBeenSet() const
{
    return m_shieldSizeHasBeenSet;
}

string ShieldInfo::GetShieldMd5() const
{
    return m_shieldMd5;
}

void ShieldInfo::SetShieldMd5(const string& _shieldMd5)
{
    m_shieldMd5 = _shieldMd5;
    m_shieldMd5HasBeenSet = true;
}

bool ShieldInfo::ShieldMd5HasBeenSet() const
{
    return m_shieldMd5HasBeenSet;
}

string ShieldInfo::GetAppUrl() const
{
    return m_appUrl;
}

void ShieldInfo::SetAppUrl(const string& _appUrl)
{
    m_appUrl = _appUrl;
    m_appUrlHasBeenSet = true;
}

bool ShieldInfo::AppUrlHasBeenSet() const
{
    return m_appUrlHasBeenSet;
}

uint64_t ShieldInfo::GetTaskTime() const
{
    return m_taskTime;
}

void ShieldInfo::SetTaskTime(const uint64_t& _taskTime)
{
    m_taskTime = _taskTime;
    m_taskTimeHasBeenSet = true;
}

bool ShieldInfo::TaskTimeHasBeenSet() const
{
    return m_taskTimeHasBeenSet;
}

string ShieldInfo::GetItemId() const
{
    return m_itemId;
}

void ShieldInfo::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool ShieldInfo::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string ShieldInfo::GetServiceEdition() const
{
    return m_serviceEdition;
}

void ShieldInfo::SetServiceEdition(const string& _serviceEdition)
{
    m_serviceEdition = _serviceEdition;
    m_serviceEditionHasBeenSet = true;
}

bool ShieldInfo::ServiceEditionHasBeenSet() const
{
    return m_serviceEditionHasBeenSet;
}

