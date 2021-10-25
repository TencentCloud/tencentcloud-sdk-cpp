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

#include <tencentcloud/tcb/v20180608/model/OrderInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

OrderInfo::OrderInfo() :
    m_tranIdHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_tranTypeHasBeenSet(false),
    m_tranStatusHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_extensionIdHasBeenSet(false),
    m_resourceReadyHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_reqBodyHasBeenSet(false)
{
}

CoreInternalOutcome OrderInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TranId") && !value["TranId"].IsNull())
    {
        if (!value["TranId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.TranId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranId = string(value["TranId"].GetString());
        m_tranIdHasBeenSet = true;
    }

    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("TranType") && !value["TranType"].IsNull())
    {
        if (!value["TranType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.TranType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranType = string(value["TranType"].GetString());
        m_tranTypeHasBeenSet = true;
    }

    if (value.HasMember("TranStatus") && !value["TranStatus"].IsNull())
    {
        if (!value["TranStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.TranStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranStatus = string(value["TranStatus"].GetString());
        m_tranStatusHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ExtensionId") && !value["ExtensionId"].IsNull())
    {
        if (!value["ExtensionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.ExtensionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionId = string(value["ExtensionId"].GetString());
        m_extensionIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceReady") && !value["ResourceReady"].IsNull())
    {
        if (!value["ResourceReady"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.ResourceReady` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceReady = string(value["ResourceReady"].GetString());
        m_resourceReadyHasBeenSet = true;
    }

    if (value.HasMember("Flag") && !value["Flag"].IsNull())
    {
        if (!value["Flag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.Flag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flag = string(value["Flag"].GetString());
        m_flagHasBeenSet = true;
    }

    if (value.HasMember("ReqBody") && !value["ReqBody"].IsNull())
    {
        if (!value["ReqBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.ReqBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqBody = string(value["ReqBody"].GetString());
        m_reqBodyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrderInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tranIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_tranTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranType.c_str(), allocator).Move(), allocator);
    }

    if (m_tranStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extensionId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceReadyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceReady";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceReady.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flag.c_str(), allocator).Move(), allocator);
    }

    if (m_reqBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqBody.c_str(), allocator).Move(), allocator);
    }

}


string OrderInfo::GetTranId() const
{
    return m_tranId;
}

void OrderInfo::SetTranId(const string& _tranId)
{
    m_tranId = _tranId;
    m_tranIdHasBeenSet = true;
}

bool OrderInfo::TranIdHasBeenSet() const
{
    return m_tranIdHasBeenSet;
}

string OrderInfo::GetPackageId() const
{
    return m_packageId;
}

void OrderInfo::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool OrderInfo::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string OrderInfo::GetTranType() const
{
    return m_tranType;
}

void OrderInfo::SetTranType(const string& _tranType)
{
    m_tranType = _tranType;
    m_tranTypeHasBeenSet = true;
}

bool OrderInfo::TranTypeHasBeenSet() const
{
    return m_tranTypeHasBeenSet;
}

string OrderInfo::GetTranStatus() const
{
    return m_tranStatus;
}

void OrderInfo::SetTranStatus(const string& _tranStatus)
{
    m_tranStatus = _tranStatus;
    m_tranStatusHasBeenSet = true;
}

bool OrderInfo::TranStatusHasBeenSet() const
{
    return m_tranStatusHasBeenSet;
}

string OrderInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void OrderInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool OrderInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string OrderInfo::GetCreateTime() const
{
    return m_createTime;
}

void OrderInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OrderInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OrderInfo::GetPayMode() const
{
    return m_payMode;
}

void OrderInfo::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool OrderInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string OrderInfo::GetExtensionId() const
{
    return m_extensionId;
}

void OrderInfo::SetExtensionId(const string& _extensionId)
{
    m_extensionId = _extensionId;
    m_extensionIdHasBeenSet = true;
}

bool OrderInfo::ExtensionIdHasBeenSet() const
{
    return m_extensionIdHasBeenSet;
}

string OrderInfo::GetResourceReady() const
{
    return m_resourceReady;
}

void OrderInfo::SetResourceReady(const string& _resourceReady)
{
    m_resourceReady = _resourceReady;
    m_resourceReadyHasBeenSet = true;
}

bool OrderInfo::ResourceReadyHasBeenSet() const
{
    return m_resourceReadyHasBeenSet;
}

string OrderInfo::GetFlag() const
{
    return m_flag;
}

void OrderInfo::SetFlag(const string& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool OrderInfo::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string OrderInfo::GetReqBody() const
{
    return m_reqBody;
}

void OrderInfo::SetReqBody(const string& _reqBody)
{
    m_reqBody = _reqBody;
    m_reqBodyHasBeenSet = true;
}

bool OrderInfo::ReqBodyHasBeenSet() const
{
    return m_reqBodyHasBeenSet;
}

