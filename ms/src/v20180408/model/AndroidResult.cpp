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

#include <tencentcloud/ms/v20180408/model/AndroidResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

AndroidResult::AndroidResult() :
    m_resultIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_opUinHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_appPkgNameHasBeenSet(false),
    m_bindAppPkgNameHasBeenSet(false),
    m_encryptStateHasBeenSet(false),
    m_encryptStateDescHasBeenSet(false),
    m_encryptErrCodeHasBeenSet(false),
    m_encryptErrDescHasBeenSet(false),
    m_encryptErrRefHasBeenSet(false),
    m_creatTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_costTimeHasBeenSet(false),
    m_appUrlHasBeenSet(false),
    m_appMd5HasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_appSizeHasBeenSet(false),
    m_onlineToolVersionHasBeenSet(false),
    m_encryptAppMd5HasBeenSet(false),
    m_encryptAppSizeHasBeenSet(false),
    m_encryptPkgUrlHasBeenSet(false),
    m_outputToolVersionHasBeenSet(false),
    m_outputToolSizeHasBeenSet(false),
    m_toolOutputTimeHasBeenSet(false),
    m_toolExpireTimeHasBeenSet(false),
    m_outputToolUrlHasBeenSet(false),
    m_androidPlanHasBeenSet(false)
{
}

CoreInternalOutcome AndroidResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResultId") && !value["ResultId"].IsNull())
    {
        if (!value["ResultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.ResultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultId = string(value["ResultId"].GetString());
        m_resultIdHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("OpUin") && !value["OpUin"].IsNull())
    {
        if (!value["OpUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.OpUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_opUin = value["OpUin"].GetInt64();
        m_opUinHasBeenSet = true;
    }

    if (value.HasMember("AppType") && !value["AppType"].IsNull())
    {
        if (!value["AppType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.AppType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appType = string(value["AppType"].GetString());
        m_appTypeHasBeenSet = true;
    }

    if (value.HasMember("AppPkgName") && !value["AppPkgName"].IsNull())
    {
        if (!value["AppPkgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.AppPkgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPkgName = string(value["AppPkgName"].GetString());
        m_appPkgNameHasBeenSet = true;
    }

    if (value.HasMember("BindAppPkgName") && !value["BindAppPkgName"].IsNull())
    {
        if (!value["BindAppPkgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.BindAppPkgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindAppPkgName = string(value["BindAppPkgName"].GetString());
        m_bindAppPkgNameHasBeenSet = true;
    }

    if (value.HasMember("EncryptState") && !value["EncryptState"].IsNull())
    {
        if (!value["EncryptState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.EncryptState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptState = value["EncryptState"].GetInt64();
        m_encryptStateHasBeenSet = true;
    }

    if (value.HasMember("EncryptStateDesc") && !value["EncryptStateDesc"].IsNull())
    {
        if (!value["EncryptStateDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.EncryptStateDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptStateDesc = string(value["EncryptStateDesc"].GetString());
        m_encryptStateDescHasBeenSet = true;
    }

    if (value.HasMember("EncryptErrCode") && !value["EncryptErrCode"].IsNull())
    {
        if (!value["EncryptErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.EncryptErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptErrCode = value["EncryptErrCode"].GetInt64();
        m_encryptErrCodeHasBeenSet = true;
    }

    if (value.HasMember("EncryptErrDesc") && !value["EncryptErrDesc"].IsNull())
    {
        if (!value["EncryptErrDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.EncryptErrDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptErrDesc = string(value["EncryptErrDesc"].GetString());
        m_encryptErrDescHasBeenSet = true;
    }

    if (value.HasMember("EncryptErrRef") && !value["EncryptErrRef"].IsNull())
    {
        if (!value["EncryptErrRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.EncryptErrRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptErrRef = string(value["EncryptErrRef"].GetString());
        m_encryptErrRefHasBeenSet = true;
    }

    if (value.HasMember("CreatTime") && !value["CreatTime"].IsNull())
    {
        if (!value["CreatTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.CreatTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatTime = string(value["CreatTime"].GetString());
        m_creatTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.CostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetInt64();
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("AppUrl") && !value["AppUrl"].IsNull())
    {
        if (!value["AppUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.AppUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUrl = string(value["AppUrl"].GetString());
        m_appUrlHasBeenSet = true;
    }

    if (value.HasMember("AppMd5") && !value["AppMd5"].IsNull())
    {
        if (!value["AppMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.AppMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appMd5 = string(value["AppMd5"].GetString());
        m_appMd5HasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("AppSize") && !value["AppSize"].IsNull())
    {
        if (!value["AppSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.AppSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appSize = value["AppSize"].GetInt64();
        m_appSizeHasBeenSet = true;
    }

    if (value.HasMember("OnlineToolVersion") && !value["OnlineToolVersion"].IsNull())
    {
        if (!value["OnlineToolVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.OnlineToolVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_onlineToolVersion = string(value["OnlineToolVersion"].GetString());
        m_onlineToolVersionHasBeenSet = true;
    }

    if (value.HasMember("EncryptAppMd5") && !value["EncryptAppMd5"].IsNull())
    {
        if (!value["EncryptAppMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.EncryptAppMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptAppMd5 = string(value["EncryptAppMd5"].GetString());
        m_encryptAppMd5HasBeenSet = true;
    }

    if (value.HasMember("EncryptAppSize") && !value["EncryptAppSize"].IsNull())
    {
        if (!value["EncryptAppSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.EncryptAppSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptAppSize = value["EncryptAppSize"].GetInt64();
        m_encryptAppSizeHasBeenSet = true;
    }

    if (value.HasMember("EncryptPkgUrl") && !value["EncryptPkgUrl"].IsNull())
    {
        if (!value["EncryptPkgUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.EncryptPkgUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptPkgUrl = string(value["EncryptPkgUrl"].GetString());
        m_encryptPkgUrlHasBeenSet = true;
    }

    if (value.HasMember("OutputToolVersion") && !value["OutputToolVersion"].IsNull())
    {
        if (!value["OutputToolVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.OutputToolVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputToolVersion = string(value["OutputToolVersion"].GetString());
        m_outputToolVersionHasBeenSet = true;
    }

    if (value.HasMember("OutputToolSize") && !value["OutputToolSize"].IsNull())
    {
        if (!value["OutputToolSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.OutputToolSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputToolSize = value["OutputToolSize"].GetInt64();
        m_outputToolSizeHasBeenSet = true;
    }

    if (value.HasMember("ToolOutputTime") && !value["ToolOutputTime"].IsNull())
    {
        if (!value["ToolOutputTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.ToolOutputTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolOutputTime = string(value["ToolOutputTime"].GetString());
        m_toolOutputTimeHasBeenSet = true;
    }

    if (value.HasMember("ToolExpireTime") && !value["ToolExpireTime"].IsNull())
    {
        if (!value["ToolExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.ToolExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolExpireTime = string(value["ToolExpireTime"].GetString());
        m_toolExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("OutputToolUrl") && !value["OutputToolUrl"].IsNull())
    {
        if (!value["OutputToolUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.OutputToolUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputToolUrl = string(value["OutputToolUrl"].GetString());
        m_outputToolUrlHasBeenSet = true;
    }

    if (value.HasMember("AndroidPlan") && !value["AndroidPlan"].IsNull())
    {
        if (!value["AndroidPlan"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidResult.AndroidPlan` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_androidPlan.Deserialize(value["AndroidPlan"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_androidPlanHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_opUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_opUin, allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

    if (m_appPkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPkgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appPkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_bindAppPkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindAppPkgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindAppPkgName.c_str(), allocator).Move(), allocator);
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

    if (m_appUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_appMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_appSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appSize, allocator);
    }

    if (m_onlineToolVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineToolVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_onlineToolVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptAppMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptAppMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptAppMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptAppSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptAppSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptAppSize, allocator);
    }

    if (m_encryptPkgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptPkgUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptPkgUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_outputToolVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputToolVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputToolVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_outputToolSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputToolSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputToolSize, allocator);
    }

    if (m_toolOutputTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolOutputTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolOutputTime.c_str(), allocator).Move(), allocator);
    }

    if (m_toolExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_outputToolUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputToolUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputToolUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_androidPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidPlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_androidPlan.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AndroidResult::GetResultId() const
{
    return m_resultId;
}

void AndroidResult::SetResultId(const string& _resultId)
{
    m_resultId = _resultId;
    m_resultIdHasBeenSet = true;
}

bool AndroidResult::ResultIdHasBeenSet() const
{
    return m_resultIdHasBeenSet;
}

string AndroidResult::GetOrderId() const
{
    return m_orderId;
}

void AndroidResult::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool AndroidResult::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string AndroidResult::GetResourceId() const
{
    return m_resourceId;
}

void AndroidResult::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool AndroidResult::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t AndroidResult::GetOpUin() const
{
    return m_opUin;
}

void AndroidResult::SetOpUin(const int64_t& _opUin)
{
    m_opUin = _opUin;
    m_opUinHasBeenSet = true;
}

bool AndroidResult::OpUinHasBeenSet() const
{
    return m_opUinHasBeenSet;
}

string AndroidResult::GetAppType() const
{
    return m_appType;
}

void AndroidResult::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool AndroidResult::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

string AndroidResult::GetAppPkgName() const
{
    return m_appPkgName;
}

void AndroidResult::SetAppPkgName(const string& _appPkgName)
{
    m_appPkgName = _appPkgName;
    m_appPkgNameHasBeenSet = true;
}

bool AndroidResult::AppPkgNameHasBeenSet() const
{
    return m_appPkgNameHasBeenSet;
}

string AndroidResult::GetBindAppPkgName() const
{
    return m_bindAppPkgName;
}

void AndroidResult::SetBindAppPkgName(const string& _bindAppPkgName)
{
    m_bindAppPkgName = _bindAppPkgName;
    m_bindAppPkgNameHasBeenSet = true;
}

bool AndroidResult::BindAppPkgNameHasBeenSet() const
{
    return m_bindAppPkgNameHasBeenSet;
}

int64_t AndroidResult::GetEncryptState() const
{
    return m_encryptState;
}

void AndroidResult::SetEncryptState(const int64_t& _encryptState)
{
    m_encryptState = _encryptState;
    m_encryptStateHasBeenSet = true;
}

bool AndroidResult::EncryptStateHasBeenSet() const
{
    return m_encryptStateHasBeenSet;
}

string AndroidResult::GetEncryptStateDesc() const
{
    return m_encryptStateDesc;
}

void AndroidResult::SetEncryptStateDesc(const string& _encryptStateDesc)
{
    m_encryptStateDesc = _encryptStateDesc;
    m_encryptStateDescHasBeenSet = true;
}

bool AndroidResult::EncryptStateDescHasBeenSet() const
{
    return m_encryptStateDescHasBeenSet;
}

int64_t AndroidResult::GetEncryptErrCode() const
{
    return m_encryptErrCode;
}

void AndroidResult::SetEncryptErrCode(const int64_t& _encryptErrCode)
{
    m_encryptErrCode = _encryptErrCode;
    m_encryptErrCodeHasBeenSet = true;
}

bool AndroidResult::EncryptErrCodeHasBeenSet() const
{
    return m_encryptErrCodeHasBeenSet;
}

string AndroidResult::GetEncryptErrDesc() const
{
    return m_encryptErrDesc;
}

void AndroidResult::SetEncryptErrDesc(const string& _encryptErrDesc)
{
    m_encryptErrDesc = _encryptErrDesc;
    m_encryptErrDescHasBeenSet = true;
}

bool AndroidResult::EncryptErrDescHasBeenSet() const
{
    return m_encryptErrDescHasBeenSet;
}

string AndroidResult::GetEncryptErrRef() const
{
    return m_encryptErrRef;
}

void AndroidResult::SetEncryptErrRef(const string& _encryptErrRef)
{
    m_encryptErrRef = _encryptErrRef;
    m_encryptErrRefHasBeenSet = true;
}

bool AndroidResult::EncryptErrRefHasBeenSet() const
{
    return m_encryptErrRefHasBeenSet;
}

string AndroidResult::GetCreatTime() const
{
    return m_creatTime;
}

void AndroidResult::SetCreatTime(const string& _creatTime)
{
    m_creatTime = _creatTime;
    m_creatTimeHasBeenSet = true;
}

bool AndroidResult::CreatTimeHasBeenSet() const
{
    return m_creatTimeHasBeenSet;
}

string AndroidResult::GetStartTime() const
{
    return m_startTime;
}

void AndroidResult::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AndroidResult::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string AndroidResult::GetEndTime() const
{
    return m_endTime;
}

void AndroidResult::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AndroidResult::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t AndroidResult::GetCostTime() const
{
    return m_costTime;
}

void AndroidResult::SetCostTime(const int64_t& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool AndroidResult::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

string AndroidResult::GetAppUrl() const
{
    return m_appUrl;
}

void AndroidResult::SetAppUrl(const string& _appUrl)
{
    m_appUrl = _appUrl;
    m_appUrlHasBeenSet = true;
}

bool AndroidResult::AppUrlHasBeenSet() const
{
    return m_appUrlHasBeenSet;
}

string AndroidResult::GetAppMd5() const
{
    return m_appMd5;
}

void AndroidResult::SetAppMd5(const string& _appMd5)
{
    m_appMd5 = _appMd5;
    m_appMd5HasBeenSet = true;
}

bool AndroidResult::AppMd5HasBeenSet() const
{
    return m_appMd5HasBeenSet;
}

string AndroidResult::GetAppName() const
{
    return m_appName;
}

void AndroidResult::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AndroidResult::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string AndroidResult::GetAppVersion() const
{
    return m_appVersion;
}

void AndroidResult::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool AndroidResult::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

int64_t AndroidResult::GetAppSize() const
{
    return m_appSize;
}

void AndroidResult::SetAppSize(const int64_t& _appSize)
{
    m_appSize = _appSize;
    m_appSizeHasBeenSet = true;
}

bool AndroidResult::AppSizeHasBeenSet() const
{
    return m_appSizeHasBeenSet;
}

string AndroidResult::GetOnlineToolVersion() const
{
    return m_onlineToolVersion;
}

void AndroidResult::SetOnlineToolVersion(const string& _onlineToolVersion)
{
    m_onlineToolVersion = _onlineToolVersion;
    m_onlineToolVersionHasBeenSet = true;
}

bool AndroidResult::OnlineToolVersionHasBeenSet() const
{
    return m_onlineToolVersionHasBeenSet;
}

string AndroidResult::GetEncryptAppMd5() const
{
    return m_encryptAppMd5;
}

void AndroidResult::SetEncryptAppMd5(const string& _encryptAppMd5)
{
    m_encryptAppMd5 = _encryptAppMd5;
    m_encryptAppMd5HasBeenSet = true;
}

bool AndroidResult::EncryptAppMd5HasBeenSet() const
{
    return m_encryptAppMd5HasBeenSet;
}

int64_t AndroidResult::GetEncryptAppSize() const
{
    return m_encryptAppSize;
}

void AndroidResult::SetEncryptAppSize(const int64_t& _encryptAppSize)
{
    m_encryptAppSize = _encryptAppSize;
    m_encryptAppSizeHasBeenSet = true;
}

bool AndroidResult::EncryptAppSizeHasBeenSet() const
{
    return m_encryptAppSizeHasBeenSet;
}

string AndroidResult::GetEncryptPkgUrl() const
{
    return m_encryptPkgUrl;
}

void AndroidResult::SetEncryptPkgUrl(const string& _encryptPkgUrl)
{
    m_encryptPkgUrl = _encryptPkgUrl;
    m_encryptPkgUrlHasBeenSet = true;
}

bool AndroidResult::EncryptPkgUrlHasBeenSet() const
{
    return m_encryptPkgUrlHasBeenSet;
}

string AndroidResult::GetOutputToolVersion() const
{
    return m_outputToolVersion;
}

void AndroidResult::SetOutputToolVersion(const string& _outputToolVersion)
{
    m_outputToolVersion = _outputToolVersion;
    m_outputToolVersionHasBeenSet = true;
}

bool AndroidResult::OutputToolVersionHasBeenSet() const
{
    return m_outputToolVersionHasBeenSet;
}

int64_t AndroidResult::GetOutputToolSize() const
{
    return m_outputToolSize;
}

void AndroidResult::SetOutputToolSize(const int64_t& _outputToolSize)
{
    m_outputToolSize = _outputToolSize;
    m_outputToolSizeHasBeenSet = true;
}

bool AndroidResult::OutputToolSizeHasBeenSet() const
{
    return m_outputToolSizeHasBeenSet;
}

string AndroidResult::GetToolOutputTime() const
{
    return m_toolOutputTime;
}

void AndroidResult::SetToolOutputTime(const string& _toolOutputTime)
{
    m_toolOutputTime = _toolOutputTime;
    m_toolOutputTimeHasBeenSet = true;
}

bool AndroidResult::ToolOutputTimeHasBeenSet() const
{
    return m_toolOutputTimeHasBeenSet;
}

string AndroidResult::GetToolExpireTime() const
{
    return m_toolExpireTime;
}

void AndroidResult::SetToolExpireTime(const string& _toolExpireTime)
{
    m_toolExpireTime = _toolExpireTime;
    m_toolExpireTimeHasBeenSet = true;
}

bool AndroidResult::ToolExpireTimeHasBeenSet() const
{
    return m_toolExpireTimeHasBeenSet;
}

string AndroidResult::GetOutputToolUrl() const
{
    return m_outputToolUrl;
}

void AndroidResult::SetOutputToolUrl(const string& _outputToolUrl)
{
    m_outputToolUrl = _outputToolUrl;
    m_outputToolUrlHasBeenSet = true;
}

bool AndroidResult::OutputToolUrlHasBeenSet() const
{
    return m_outputToolUrlHasBeenSet;
}

AndroidPlan AndroidResult::GetAndroidPlan() const
{
    return m_androidPlan;
}

void AndroidResult::SetAndroidPlan(const AndroidPlan& _androidPlan)
{
    m_androidPlan = _androidPlan;
    m_androidPlanHasBeenSet = true;
}

bool AndroidResult::AndroidPlanHasBeenSet() const
{
    return m_androidPlanHasBeenSet;
}

