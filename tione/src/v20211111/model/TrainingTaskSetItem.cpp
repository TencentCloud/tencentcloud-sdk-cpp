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

#include <tencentcloud/tione/v20211111/model/TrainingTaskSetItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

TrainingTaskSetItem::TrainingTaskSetItem() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_frameworkNameHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false),
    m_frameworkEnvironmentHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_chargeStatusHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_resourceConfigInfosHasBeenSet(false),
    m_trainingModeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_runtimeInSecondsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_billingInfoHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_imageInfoHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_subUinNameHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome TrainingTaskSetItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("FrameworkName") && !value["FrameworkName"].IsNull())
    {
        if (!value["FrameworkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.FrameworkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameworkName = string(value["FrameworkName"].GetString());
        m_frameworkNameHasBeenSet = true;
    }

    if (value.HasMember("FrameworkVersion") && !value["FrameworkVersion"].IsNull())
    {
        if (!value["FrameworkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.FrameworkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameworkVersion = string(value["FrameworkVersion"].GetString());
        m_frameworkVersionHasBeenSet = true;
    }

    if (value.HasMember("FrameworkEnvironment") && !value["FrameworkEnvironment"].IsNull())
    {
        if (!value["FrameworkEnvironment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.FrameworkEnvironment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameworkEnvironment = string(value["FrameworkEnvironment"].GetString());
        m_frameworkEnvironmentHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("ChargeStatus") && !value["ChargeStatus"].IsNull())
    {
        if (!value["ChargeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.ChargeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeStatus = string(value["ChargeStatus"].GetString());
        m_chargeStatusHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfigInfos") && !value["ResourceConfigInfos"].IsNull())
    {
        if (!value["ResourceConfigInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.ResourceConfigInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceConfigInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceConfigInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceConfigInfos.push_back(item);
        }
        m_resourceConfigInfosHasBeenSet = true;
    }

    if (value.HasMember("TrainingMode") && !value["TrainingMode"].IsNull())
    {
        if (!value["TrainingMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.TrainingMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingMode = string(value["TrainingMode"].GetString());
        m_trainingModeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RuntimeInSeconds") && !value["RuntimeInSeconds"].IsNull())
    {
        if (!value["RuntimeInSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.RuntimeInSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeInSeconds = value["RuntimeInSeconds"].GetUint64();
        m_runtimeInSecondsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.Output` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_output.Deserialize(value["Output"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputHasBeenSet = true;
    }

    if (value.HasMember("FailureReason") && !value["FailureReason"].IsNull())
    {
        if (!value["FailureReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.FailureReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureReason = string(value["FailureReason"].GetString());
        m_failureReasonHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("BillingInfo") && !value["BillingInfo"].IsNull())
    {
        if (!value["BillingInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.BillingInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingInfo = string(value["BillingInfo"].GetString());
        m_billingInfoHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ImageInfo") && !value["ImageInfo"].IsNull())
    {
        if (!value["ImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.ImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageInfo.Deserialize(value["ImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageInfoHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("SubUinName") && !value["SubUinName"].IsNull())
    {
        if (!value["SubUinName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.SubUinName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUinName = string(value["SubUinName"].GetString());
        m_subUinNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskSetItem.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainingTaskSetItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameworkName.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameworkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkEnvironment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameworkEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceConfigInfos.begin(); itr != m_resourceConfigInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_trainingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runtimeInSeconds, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_output.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_failureReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureReason.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_billingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUinName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUinName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

}


string TrainingTaskSetItem::GetId() const
{
    return m_id;
}

void TrainingTaskSetItem::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TrainingTaskSetItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TrainingTaskSetItem::GetName() const
{
    return m_name;
}

void TrainingTaskSetItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TrainingTaskSetItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TrainingTaskSetItem::GetFrameworkName() const
{
    return m_frameworkName;
}

void TrainingTaskSetItem::SetFrameworkName(const string& _frameworkName)
{
    m_frameworkName = _frameworkName;
    m_frameworkNameHasBeenSet = true;
}

bool TrainingTaskSetItem::FrameworkNameHasBeenSet() const
{
    return m_frameworkNameHasBeenSet;
}

string TrainingTaskSetItem::GetFrameworkVersion() const
{
    return m_frameworkVersion;
}

void TrainingTaskSetItem::SetFrameworkVersion(const string& _frameworkVersion)
{
    m_frameworkVersion = _frameworkVersion;
    m_frameworkVersionHasBeenSet = true;
}

bool TrainingTaskSetItem::FrameworkVersionHasBeenSet() const
{
    return m_frameworkVersionHasBeenSet;
}

string TrainingTaskSetItem::GetFrameworkEnvironment() const
{
    return m_frameworkEnvironment;
}

void TrainingTaskSetItem::SetFrameworkEnvironment(const string& _frameworkEnvironment)
{
    m_frameworkEnvironment = _frameworkEnvironment;
    m_frameworkEnvironmentHasBeenSet = true;
}

bool TrainingTaskSetItem::FrameworkEnvironmentHasBeenSet() const
{
    return m_frameworkEnvironmentHasBeenSet;
}

string TrainingTaskSetItem::GetChargeType() const
{
    return m_chargeType;
}

void TrainingTaskSetItem::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool TrainingTaskSetItem::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string TrainingTaskSetItem::GetChargeStatus() const
{
    return m_chargeStatus;
}

void TrainingTaskSetItem::SetChargeStatus(const string& _chargeStatus)
{
    m_chargeStatus = _chargeStatus;
    m_chargeStatusHasBeenSet = true;
}

bool TrainingTaskSetItem::ChargeStatusHasBeenSet() const
{
    return m_chargeStatusHasBeenSet;
}

string TrainingTaskSetItem::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void TrainingTaskSetItem::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool TrainingTaskSetItem::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

vector<ResourceConfigInfo> TrainingTaskSetItem::GetResourceConfigInfos() const
{
    return m_resourceConfigInfos;
}

void TrainingTaskSetItem::SetResourceConfigInfos(const vector<ResourceConfigInfo>& _resourceConfigInfos)
{
    m_resourceConfigInfos = _resourceConfigInfos;
    m_resourceConfigInfosHasBeenSet = true;
}

bool TrainingTaskSetItem::ResourceConfigInfosHasBeenSet() const
{
    return m_resourceConfigInfosHasBeenSet;
}

string TrainingTaskSetItem::GetTrainingMode() const
{
    return m_trainingMode;
}

void TrainingTaskSetItem::SetTrainingMode(const string& _trainingMode)
{
    m_trainingMode = _trainingMode;
    m_trainingModeHasBeenSet = true;
}

bool TrainingTaskSetItem::TrainingModeHasBeenSet() const
{
    return m_trainingModeHasBeenSet;
}

string TrainingTaskSetItem::GetStatus() const
{
    return m_status;
}

void TrainingTaskSetItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TrainingTaskSetItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t TrainingTaskSetItem::GetRuntimeInSeconds() const
{
    return m_runtimeInSeconds;
}

void TrainingTaskSetItem::SetRuntimeInSeconds(const uint64_t& _runtimeInSeconds)
{
    m_runtimeInSeconds = _runtimeInSeconds;
    m_runtimeInSecondsHasBeenSet = true;
}

bool TrainingTaskSetItem::RuntimeInSecondsHasBeenSet() const
{
    return m_runtimeInSecondsHasBeenSet;
}

string TrainingTaskSetItem::GetCreateTime() const
{
    return m_createTime;
}

void TrainingTaskSetItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TrainingTaskSetItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TrainingTaskSetItem::GetStartTime() const
{
    return m_startTime;
}

void TrainingTaskSetItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TrainingTaskSetItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TrainingTaskSetItem::GetEndTime() const
{
    return m_endTime;
}

void TrainingTaskSetItem::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TrainingTaskSetItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

CosPathInfo TrainingTaskSetItem::GetOutput() const
{
    return m_output;
}

void TrainingTaskSetItem::SetOutput(const CosPathInfo& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool TrainingTaskSetItem::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string TrainingTaskSetItem::GetFailureReason() const
{
    return m_failureReason;
}

void TrainingTaskSetItem::SetFailureReason(const string& _failureReason)
{
    m_failureReason = _failureReason;
    m_failureReasonHasBeenSet = true;
}

bool TrainingTaskSetItem::FailureReasonHasBeenSet() const
{
    return m_failureReasonHasBeenSet;
}

string TrainingTaskSetItem::GetUpdateTime() const
{
    return m_updateTime;
}

void TrainingTaskSetItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TrainingTaskSetItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TrainingTaskSetItem::GetBillingInfo() const
{
    return m_billingInfo;
}

void TrainingTaskSetItem::SetBillingInfo(const string& _billingInfo)
{
    m_billingInfo = _billingInfo;
    m_billingInfoHasBeenSet = true;
}

bool TrainingTaskSetItem::BillingInfoHasBeenSet() const
{
    return m_billingInfoHasBeenSet;
}

string TrainingTaskSetItem::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void TrainingTaskSetItem::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool TrainingTaskSetItem::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

ImageInfo TrainingTaskSetItem::GetImageInfo() const
{
    return m_imageInfo;
}

void TrainingTaskSetItem::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool TrainingTaskSetItem::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

string TrainingTaskSetItem::GetMessage() const
{
    return m_message;
}

void TrainingTaskSetItem::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool TrainingTaskSetItem::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<Tag> TrainingTaskSetItem::GetTags() const
{
    return m_tags;
}

void TrainingTaskSetItem::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TrainingTaskSetItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string TrainingTaskSetItem::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void TrainingTaskSetItem::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool TrainingTaskSetItem::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string TrainingTaskSetItem::GetSubUin() const
{
    return m_subUin;
}

void TrainingTaskSetItem::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool TrainingTaskSetItem::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string TrainingTaskSetItem::GetSubUinName() const
{
    return m_subUinName;
}

void TrainingTaskSetItem::SetSubUinName(const string& _subUinName)
{
    m_subUinName = _subUinName;
    m_subUinNameHasBeenSet = true;
}

bool TrainingTaskSetItem::SubUinNameHasBeenSet() const
{
    return m_subUinNameHasBeenSet;
}

string TrainingTaskSetItem::GetAppId() const
{
    return m_appId;
}

void TrainingTaskSetItem::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TrainingTaskSetItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

