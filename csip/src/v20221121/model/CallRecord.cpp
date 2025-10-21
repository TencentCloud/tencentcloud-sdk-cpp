/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/CallRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CallRecord::CallRecord() :
    m_callIDHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_accessKeyRemarkHasBeenSet(false),
    m_accessKeyIDHasBeenSet(false),
    m_sourceIPHasBeenSet(false),
    m_sourceIPRemarkHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_iPTypeHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_policySetHasBeenSet(false),
    m_callCountHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_firstCallTimeHasBeenSet(false),
    m_lastCallTimeHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_showStatusHasBeenSet(false),
    m_iSPHasBeenSet(false),
    m_vpcInfoHasBeenSet(false),
    m_reqClientHasBeenSet(false)
{
}

CoreInternalOutcome CallRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallID") && !value["CallID"].IsNull())
    {
        if (!value["CallID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.CallID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callID = string(value["CallID"].GetString());
        m_callIDHasBeenSet = true;
    }

    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("AccessKeyRemark") && !value["AccessKeyRemark"].IsNull())
    {
        if (!value["AccessKeyRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.AccessKeyRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeyRemark = string(value["AccessKeyRemark"].GetString());
        m_accessKeyRemarkHasBeenSet = true;
    }

    if (value.HasMember("AccessKeyID") && !value["AccessKeyID"].IsNull())
    {
        if (!value["AccessKeyID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.AccessKeyID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeyID = value["AccessKeyID"].GetUint64();
        m_accessKeyIDHasBeenSet = true;
    }

    if (value.HasMember("SourceIP") && !value["SourceIP"].IsNull())
    {
        if (!value["SourceIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.SourceIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIP = string(value["SourceIP"].GetString());
        m_sourceIPHasBeenSet = true;
    }

    if (value.HasMember("SourceIPRemark") && !value["SourceIPRemark"].IsNull())
    {
        if (!value["SourceIPRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.SourceIPRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIPRemark = string(value["SourceIPRemark"].GetString());
        m_sourceIPRemarkHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("IPType") && !value["IPType"].IsNull())
    {
        if (!value["IPType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.IPType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iPType = value["IPType"].GetInt64();
        m_iPTypeHasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.EventType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetInt64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.UserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userType = string(value["UserType"].GetString());
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("PolicySet") && !value["PolicySet"].IsNull())
    {
        if (!value["PolicySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CallRecord.PolicySet` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_policySet.push_back((*itr).GetString());
        }
        m_policySetHasBeenSet = true;
    }

    if (value.HasMember("CallCount") && !value["CallCount"].IsNull())
    {
        if (!value["CallCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.CallCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_callCount = value["CallCount"].GetInt64();
        m_callCountHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("FirstCallTime") && !value["FirstCallTime"].IsNull())
    {
        if (!value["FirstCallTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.FirstCallTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstCallTime = string(value["FirstCallTime"].GetString());
        m_firstCallTimeHasBeenSet = true;
    }

    if (value.HasMember("LastCallTime") && !value["LastCallTime"].IsNull())
    {
        if (!value["LastCallTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.LastCallTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCallTime = string(value["LastCallTime"].GetString());
        m_lastCallTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("ShowStatus") && !value["ShowStatus"].IsNull())
    {
        if (!value["ShowStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.ShowStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showStatus = value["ShowStatus"].GetBool();
        m_showStatusHasBeenSet = true;
    }

    if (value.HasMember("ISP") && !value["ISP"].IsNull())
    {
        if (!value["ISP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallRecord.ISP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSP = string(value["ISP"].GetString());
        m_iSPHasBeenSet = true;
    }

    if (value.HasMember("VpcInfo") && !value["VpcInfo"].IsNull())
    {
        if (!value["VpcInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CallRecord.VpcInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SourceIPVpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcInfo.push_back(item);
        }
        m_vpcInfoHasBeenSet = true;
    }

    if (value.HasMember("ReqClient") && !value["ReqClient"].IsNull())
    {
        if (!value["ReqClient"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CallRecord.ReqClient` is not array type"));

        const rapidjson::Value &tmpValue = value["ReqClient"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reqClient.push_back((*itr).GetString());
        }
        m_reqClientHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callID.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKeyRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessKeyID, allocator);
    }

    if (m_sourceIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIP.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIPRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIPRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIPRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_iPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPType, allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_policySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policySet.begin(); itr != m_policySet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_callCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callCount, allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_firstCallTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstCallTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstCallTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastCallTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCallTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCallTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_showStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showStatus, allocator);
    }

    if (m_iSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSP.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcInfo.begin(); itr != m_vpcInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_reqClientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqClient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reqClient.begin(); itr != m_reqClient.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CallRecord::GetCallID() const
{
    return m_callID;
}

void CallRecord::SetCallID(const string& _callID)
{
    m_callID = _callID;
    m_callIDHasBeenSet = true;
}

bool CallRecord::CallIDHasBeenSet() const
{
    return m_callIDHasBeenSet;
}

string CallRecord::GetAccessKey() const
{
    return m_accessKey;
}

void CallRecord::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool CallRecord::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string CallRecord::GetAccessKeyRemark() const
{
    return m_accessKeyRemark;
}

void CallRecord::SetAccessKeyRemark(const string& _accessKeyRemark)
{
    m_accessKeyRemark = _accessKeyRemark;
    m_accessKeyRemarkHasBeenSet = true;
}

bool CallRecord::AccessKeyRemarkHasBeenSet() const
{
    return m_accessKeyRemarkHasBeenSet;
}

uint64_t CallRecord::GetAccessKeyID() const
{
    return m_accessKeyID;
}

void CallRecord::SetAccessKeyID(const uint64_t& _accessKeyID)
{
    m_accessKeyID = _accessKeyID;
    m_accessKeyIDHasBeenSet = true;
}

bool CallRecord::AccessKeyIDHasBeenSet() const
{
    return m_accessKeyIDHasBeenSet;
}

string CallRecord::GetSourceIP() const
{
    return m_sourceIP;
}

void CallRecord::SetSourceIP(const string& _sourceIP)
{
    m_sourceIP = _sourceIP;
    m_sourceIPHasBeenSet = true;
}

bool CallRecord::SourceIPHasBeenSet() const
{
    return m_sourceIPHasBeenSet;
}

string CallRecord::GetSourceIPRemark() const
{
    return m_sourceIPRemark;
}

void CallRecord::SetSourceIPRemark(const string& _sourceIPRemark)
{
    m_sourceIPRemark = _sourceIPRemark;
    m_sourceIPRemarkHasBeenSet = true;
}

bool CallRecord::SourceIPRemarkHasBeenSet() const
{
    return m_sourceIPRemarkHasBeenSet;
}

string CallRecord::GetRegion() const
{
    return m_region;
}

void CallRecord::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CallRecord::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t CallRecord::GetIPType() const
{
    return m_iPType;
}

void CallRecord::SetIPType(const int64_t& _iPType)
{
    m_iPType = _iPType;
    m_iPTypeHasBeenSet = true;
}

bool CallRecord::IPTypeHasBeenSet() const
{
    return m_iPTypeHasBeenSet;
}

string CallRecord::GetEventName() const
{
    return m_eventName;
}

void CallRecord::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool CallRecord::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string CallRecord::GetProductName() const
{
    return m_productName;
}

void CallRecord::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool CallRecord::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

int64_t CallRecord::GetEventType() const
{
    return m_eventType;
}

void CallRecord::SetEventType(const int64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool CallRecord::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string CallRecord::GetUserType() const
{
    return m_userType;
}

void CallRecord::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool CallRecord::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string CallRecord::GetUserName() const
{
    return m_userName;
}

void CallRecord::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CallRecord::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

vector<string> CallRecord::GetPolicySet() const
{
    return m_policySet;
}

void CallRecord::SetPolicySet(const vector<string>& _policySet)
{
    m_policySet = _policySet;
    m_policySetHasBeenSet = true;
}

bool CallRecord::PolicySetHasBeenSet() const
{
    return m_policySetHasBeenSet;
}

int64_t CallRecord::GetCallCount() const
{
    return m_callCount;
}

void CallRecord::SetCallCount(const int64_t& _callCount)
{
    m_callCount = _callCount;
    m_callCountHasBeenSet = true;
}

bool CallRecord::CallCountHasBeenSet() const
{
    return m_callCountHasBeenSet;
}

int64_t CallRecord::GetCode() const
{
    return m_code;
}

void CallRecord::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool CallRecord::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string CallRecord::GetFirstCallTime() const
{
    return m_firstCallTime;
}

void CallRecord::SetFirstCallTime(const string& _firstCallTime)
{
    m_firstCallTime = _firstCallTime;
    m_firstCallTimeHasBeenSet = true;
}

bool CallRecord::FirstCallTimeHasBeenSet() const
{
    return m_firstCallTimeHasBeenSet;
}

string CallRecord::GetLastCallTime() const
{
    return m_lastCallTime;
}

void CallRecord::SetLastCallTime(const string& _lastCallTime)
{
    m_lastCallTime = _lastCallTime;
    m_lastCallTimeHasBeenSet = true;
}

bool CallRecord::LastCallTimeHasBeenSet() const
{
    return m_lastCallTimeHasBeenSet;
}

string CallRecord::GetInstanceID() const
{
    return m_instanceID;
}

void CallRecord::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool CallRecord::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string CallRecord::GetInstanceName() const
{
    return m_instanceName;
}

void CallRecord::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CallRecord::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CallRecord::GetDate() const
{
    return m_date;
}

void CallRecord::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool CallRecord::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

int64_t CallRecord::GetAppID() const
{
    return m_appID;
}

void CallRecord::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool CallRecord::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

bool CallRecord::GetShowStatus() const
{
    return m_showStatus;
}

void CallRecord::SetShowStatus(const bool& _showStatus)
{
    m_showStatus = _showStatus;
    m_showStatusHasBeenSet = true;
}

bool CallRecord::ShowStatusHasBeenSet() const
{
    return m_showStatusHasBeenSet;
}

string CallRecord::GetISP() const
{
    return m_iSP;
}

void CallRecord::SetISP(const string& _iSP)
{
    m_iSP = _iSP;
    m_iSPHasBeenSet = true;
}

bool CallRecord::ISPHasBeenSet() const
{
    return m_iSPHasBeenSet;
}

vector<SourceIPVpcInfo> CallRecord::GetVpcInfo() const
{
    return m_vpcInfo;
}

void CallRecord::SetVpcInfo(const vector<SourceIPVpcInfo>& _vpcInfo)
{
    m_vpcInfo = _vpcInfo;
    m_vpcInfoHasBeenSet = true;
}

bool CallRecord::VpcInfoHasBeenSet() const
{
    return m_vpcInfoHasBeenSet;
}

vector<string> CallRecord::GetReqClient() const
{
    return m_reqClient;
}

void CallRecord::SetReqClient(const vector<string>& _reqClient)
{
    m_reqClient = _reqClient;
    m_reqClientHasBeenSet = true;
}

bool CallRecord::ReqClientHasBeenSet() const
{
    return m_reqClientHasBeenSet;
}

