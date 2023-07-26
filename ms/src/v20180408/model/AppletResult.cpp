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

#include <tencentcloud/ms/v20180408/model/AppletResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

AppletResult::AppletResult() :
    m_resultIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_opUinHasBeenSet(false),
    m_encryptStateHasBeenSet(false),
    m_encryptStateDescHasBeenSet(false),
    m_encryptErrCodeHasBeenSet(false),
    m_encryptErrDescHasBeenSet(false),
    m_encryptErrRefHasBeenSet(false),
    m_creatTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_costTimeHasBeenSet(false),
    m_encryptPkgUrlHasBeenSet(false),
    m_appletInfoHasBeenSet(false)
{
}

CoreInternalOutcome AppletResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResultId") && !value["ResultId"].IsNull())
    {
        if (!value["ResultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.ResultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultId = string(value["ResultId"].GetString());
        m_resultIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("OpUin") && !value["OpUin"].IsNull())
    {
        if (!value["OpUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.OpUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_opUin = value["OpUin"].GetInt64();
        m_opUinHasBeenSet = true;
    }

    if (value.HasMember("EncryptState") && !value["EncryptState"].IsNull())
    {
        if (!value["EncryptState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.EncryptState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptState = value["EncryptState"].GetInt64();
        m_encryptStateHasBeenSet = true;
    }

    if (value.HasMember("EncryptStateDesc") && !value["EncryptStateDesc"].IsNull())
    {
        if (!value["EncryptStateDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.EncryptStateDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptStateDesc = string(value["EncryptStateDesc"].GetString());
        m_encryptStateDescHasBeenSet = true;
    }

    if (value.HasMember("EncryptErrCode") && !value["EncryptErrCode"].IsNull())
    {
        if (!value["EncryptErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.EncryptErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptErrCode = value["EncryptErrCode"].GetInt64();
        m_encryptErrCodeHasBeenSet = true;
    }

    if (value.HasMember("EncryptErrDesc") && !value["EncryptErrDesc"].IsNull())
    {
        if (!value["EncryptErrDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.EncryptErrDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptErrDesc = string(value["EncryptErrDesc"].GetString());
        m_encryptErrDescHasBeenSet = true;
    }

    if (value.HasMember("EncryptErrRef") && !value["EncryptErrRef"].IsNull())
    {
        if (!value["EncryptErrRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.EncryptErrRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptErrRef = string(value["EncryptErrRef"].GetString());
        m_encryptErrRefHasBeenSet = true;
    }

    if (value.HasMember("CreatTime") && !value["CreatTime"].IsNull())
    {
        if (!value["CreatTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.CreatTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatTime = string(value["CreatTime"].GetString());
        m_creatTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.CostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetInt64();
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("EncryptPkgUrl") && !value["EncryptPkgUrl"].IsNull())
    {
        if (!value["EncryptPkgUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.EncryptPkgUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptPkgUrl = string(value["EncryptPkgUrl"].GetString());
        m_encryptPkgUrlHasBeenSet = true;
    }

    if (value.HasMember("AppletInfo") && !value["AppletInfo"].IsNull())
    {
        if (!value["AppletInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppletResult.AppletInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appletInfo.Deserialize(value["AppletInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appletInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppletResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_opUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_opUin, allocator);
    }

    if (m_encryptStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptState, allocator);
    }

    if (m_encryptStateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptStateDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptStateDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptErrCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptErrCode, allocator);
    }

    if (m_encryptErrDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptErrDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptErrDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptErrRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptErrRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptErrRef.c_str(), allocator).Move(), allocator);
    }

    if (m_creatTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costTime, allocator);
    }

    if (m_encryptPkgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptPkgUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptPkgUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_appletInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppletInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appletInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AppletResult::GetResultId() const
{
    return m_resultId;
}

void AppletResult::SetResultId(const string& _resultId)
{
    m_resultId = _resultId;
    m_resultIdHasBeenSet = true;
}

bool AppletResult::ResultIdHasBeenSet() const
{
    return m_resultIdHasBeenSet;
}

string AppletResult::GetResourceId() const
{
    return m_resourceId;
}

void AppletResult::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool AppletResult::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string AppletResult::GetOrderId() const
{
    return m_orderId;
}

void AppletResult::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool AppletResult::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

int64_t AppletResult::GetOpUin() const
{
    return m_opUin;
}

void AppletResult::SetOpUin(const int64_t& _opUin)
{
    m_opUin = _opUin;
    m_opUinHasBeenSet = true;
}

bool AppletResult::OpUinHasBeenSet() const
{
    return m_opUinHasBeenSet;
}

int64_t AppletResult::GetEncryptState() const
{
    return m_encryptState;
}

void AppletResult::SetEncryptState(const int64_t& _encryptState)
{
    m_encryptState = _encryptState;
    m_encryptStateHasBeenSet = true;
}

bool AppletResult::EncryptStateHasBeenSet() const
{
    return m_encryptStateHasBeenSet;
}

string AppletResult::GetEncryptStateDesc() const
{
    return m_encryptStateDesc;
}

void AppletResult::SetEncryptStateDesc(const string& _encryptStateDesc)
{
    m_encryptStateDesc = _encryptStateDesc;
    m_encryptStateDescHasBeenSet = true;
}

bool AppletResult::EncryptStateDescHasBeenSet() const
{
    return m_encryptStateDescHasBeenSet;
}

int64_t AppletResult::GetEncryptErrCode() const
{
    return m_encryptErrCode;
}

void AppletResult::SetEncryptErrCode(const int64_t& _encryptErrCode)
{
    m_encryptErrCode = _encryptErrCode;
    m_encryptErrCodeHasBeenSet = true;
}

bool AppletResult::EncryptErrCodeHasBeenSet() const
{
    return m_encryptErrCodeHasBeenSet;
}

string AppletResult::GetEncryptErrDesc() const
{
    return m_encryptErrDesc;
}

void AppletResult::SetEncryptErrDesc(const string& _encryptErrDesc)
{
    m_encryptErrDesc = _encryptErrDesc;
    m_encryptErrDescHasBeenSet = true;
}

bool AppletResult::EncryptErrDescHasBeenSet() const
{
    return m_encryptErrDescHasBeenSet;
}

string AppletResult::GetEncryptErrRef() const
{
    return m_encryptErrRef;
}

void AppletResult::SetEncryptErrRef(const string& _encryptErrRef)
{
    m_encryptErrRef = _encryptErrRef;
    m_encryptErrRefHasBeenSet = true;
}

bool AppletResult::EncryptErrRefHasBeenSet() const
{
    return m_encryptErrRefHasBeenSet;
}

string AppletResult::GetCreatTime() const
{
    return m_creatTime;
}

void AppletResult::SetCreatTime(const string& _creatTime)
{
    m_creatTime = _creatTime;
    m_creatTimeHasBeenSet = true;
}

bool AppletResult::CreatTimeHasBeenSet() const
{
    return m_creatTimeHasBeenSet;
}

string AppletResult::GetStartTime() const
{
    return m_startTime;
}

void AppletResult::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AppletResult::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string AppletResult::GetEndTime() const
{
    return m_endTime;
}

void AppletResult::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AppletResult::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t AppletResult::GetCostTime() const
{
    return m_costTime;
}

void AppletResult::SetCostTime(const int64_t& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool AppletResult::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

string AppletResult::GetEncryptPkgUrl() const
{
    return m_encryptPkgUrl;
}

void AppletResult::SetEncryptPkgUrl(const string& _encryptPkgUrl)
{
    m_encryptPkgUrl = _encryptPkgUrl;
    m_encryptPkgUrlHasBeenSet = true;
}

bool AppletResult::EncryptPkgUrlHasBeenSet() const
{
    return m_encryptPkgUrlHasBeenSet;
}

AppletInfo AppletResult::GetAppletInfo() const
{
    return m_appletInfo;
}

void AppletResult::SetAppletInfo(const AppletInfo& _appletInfo)
{
    m_appletInfo = _appletInfo;
    m_appletInfoHasBeenSet = true;
}

bool AppletResult::AppletInfoHasBeenSet() const
{
    return m_appletInfoHasBeenSet;
}

