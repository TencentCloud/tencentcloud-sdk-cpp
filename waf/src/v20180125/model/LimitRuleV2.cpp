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

#include <tencentcloud/waf/v20180125/model/LimitRuleV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LimitRuleV2::LimitRuleV2() :
    m_limitRuleIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tsVersionHasBeenSet(false),
    m_limitObjectHasBeenSet(false),
    m_limitMethodHasBeenSet(false),
    m_limitPathsHasBeenSet(false),
    m_limitHeadersHasBeenSet(false),
    m_limitWindowHasBeenSet(false),
    m_limitStrategyHasBeenSet(false),
    m_limitHeaderNameHasBeenSet(false),
    m_getParamsNameHasBeenSet(false),
    m_getParamsValueHasBeenSet(false),
    m_postParamsNameHasBeenSet(false),
    m_postParamsValueHasBeenSet(false),
    m_ipLocationHasBeenSet(false),
    m_redirectInfoHasBeenSet(false),
    m_blockPageHasBeenSet(false),
    m_objectSrcHasBeenSet(false),
    m_quotaShareHasBeenSet(false),
    m_pathsOptionHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

CoreInternalOutcome LimitRuleV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LimitRuleID") && !value["LimitRuleID"].IsNull())
    {
        if (!value["LimitRuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.LimitRuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limitRuleID = value["LimitRuleID"].GetInt64();
        m_limitRuleIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TsVersion") && !value["TsVersion"].IsNull())
    {
        if (!value["TsVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.TsVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tsVersion = value["TsVersion"].GetInt64();
        m_tsVersionHasBeenSet = true;
    }

    if (value.HasMember("LimitObject") && !value["LimitObject"].IsNull())
    {
        if (!value["LimitObject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.LimitObject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_limitObject = string(value["LimitObject"].GetString());
        m_limitObjectHasBeenSet = true;
    }

    if (value.HasMember("LimitMethod") && !value["LimitMethod"].IsNull())
    {
        if (!value["LimitMethod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.LimitMethod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_limitMethod.Deserialize(value["LimitMethod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_limitMethodHasBeenSet = true;
    }

    if (value.HasMember("LimitPaths") && !value["LimitPaths"].IsNull())
    {
        if (!value["LimitPaths"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.LimitPaths` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_limitPaths.Deserialize(value["LimitPaths"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_limitPathsHasBeenSet = true;
    }

    if (value.HasMember("LimitHeaders") && !value["LimitHeaders"].IsNull())
    {
        if (!value["LimitHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.LimitHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["LimitHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LimitHeader item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_limitHeaders.push_back(item);
        }
        m_limitHeadersHasBeenSet = true;
    }

    if (value.HasMember("LimitWindow") && !value["LimitWindow"].IsNull())
    {
        if (!value["LimitWindow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.LimitWindow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_limitWindow.Deserialize(value["LimitWindow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_limitWindowHasBeenSet = true;
    }

    if (value.HasMember("LimitStrategy") && !value["LimitStrategy"].IsNull())
    {
        if (!value["LimitStrategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.LimitStrategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limitStrategy = value["LimitStrategy"].GetInt64();
        m_limitStrategyHasBeenSet = true;
    }

    if (value.HasMember("LimitHeaderName") && !value["LimitHeaderName"].IsNull())
    {
        if (!value["LimitHeaderName"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.LimitHeaderName` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_limitHeaderName.Deserialize(value["LimitHeaderName"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_limitHeaderNameHasBeenSet = true;
    }

    if (value.HasMember("GetParamsName") && !value["GetParamsName"].IsNull())
    {
        if (!value["GetParamsName"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.GetParamsName` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_getParamsName.Deserialize(value["GetParamsName"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_getParamsNameHasBeenSet = true;
    }

    if (value.HasMember("GetParamsValue") && !value["GetParamsValue"].IsNull())
    {
        if (!value["GetParamsValue"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.GetParamsValue` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_getParamsValue.Deserialize(value["GetParamsValue"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_getParamsValueHasBeenSet = true;
    }

    if (value.HasMember("PostParamsName") && !value["PostParamsName"].IsNull())
    {
        if (!value["PostParamsName"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.PostParamsName` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_postParamsName.Deserialize(value["PostParamsName"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_postParamsNameHasBeenSet = true;
    }

    if (value.HasMember("PostParamsValue") && !value["PostParamsValue"].IsNull())
    {
        if (!value["PostParamsValue"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.PostParamsValue` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_postParamsValue.Deserialize(value["PostParamsValue"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_postParamsValueHasBeenSet = true;
    }

    if (value.HasMember("IpLocation") && !value["IpLocation"].IsNull())
    {
        if (!value["IpLocation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.IpLocation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipLocation.Deserialize(value["IpLocation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipLocationHasBeenSet = true;
    }

    if (value.HasMember("RedirectInfo") && !value["RedirectInfo"].IsNull())
    {
        if (!value["RedirectInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.RedirectInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_redirectInfo.Deserialize(value["RedirectInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_redirectInfoHasBeenSet = true;
    }

    if (value.HasMember("BlockPage") && !value["BlockPage"].IsNull())
    {
        if (!value["BlockPage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.BlockPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockPage = value["BlockPage"].GetInt64();
        m_blockPageHasBeenSet = true;
    }

    if (value.HasMember("ObjectSrc") && !value["ObjectSrc"].IsNull())
    {
        if (!value["ObjectSrc"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.ObjectSrc` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_objectSrc = value["ObjectSrc"].GetInt64();
        m_objectSrcHasBeenSet = true;
    }

    if (value.HasMember("QuotaShare") && !value["QuotaShare"].IsNull())
    {
        if (!value["QuotaShare"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.QuotaShare` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_quotaShare = value["QuotaShare"].GetBool();
        m_quotaShareHasBeenSet = true;
    }

    if (value.HasMember("PathsOption") && !value["PathsOption"].IsNull())
    {
        if (!value["PathsOption"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.PathsOption` is not array type"));

        const rapidjson::Value &tmpValue = value["PathsOption"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PathItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pathsOption.push_back(item);
        }
        m_pathsOptionHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitRuleV2.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LimitRuleV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_limitRuleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitRuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitRuleID, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_tsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tsVersion, allocator);
    }

    if (m_limitObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_limitObject.c_str(), allocator).Move(), allocator);
    }

    if (m_limitMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limitMethod.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_limitPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limitPaths.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_limitHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limitHeaders.begin(); itr != m_limitHeaders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_limitWindowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitWindow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limitWindow.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_limitStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitStrategy, allocator);
    }

    if (m_limitHeaderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitHeaderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limitHeaderName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_getParamsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetParamsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_getParamsName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_getParamsValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetParamsValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_getParamsValue.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_postParamsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostParamsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postParamsName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_postParamsValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostParamsValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postParamsValue.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipLocation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_redirectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redirectInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_blockPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockPage, allocator);
    }

    if (m_objectSrcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectSrc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_objectSrc, allocator);
    }

    if (m_quotaShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaShare, allocator);
    }

    if (m_pathsOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathsOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pathsOption.begin(); itr != m_pathsOption.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

}


int64_t LimitRuleV2::GetLimitRuleID() const
{
    return m_limitRuleID;
}

void LimitRuleV2::SetLimitRuleID(const int64_t& _limitRuleID)
{
    m_limitRuleID = _limitRuleID;
    m_limitRuleIDHasBeenSet = true;
}

bool LimitRuleV2::LimitRuleIDHasBeenSet() const
{
    return m_limitRuleIDHasBeenSet;
}

string LimitRuleV2::GetName() const
{
    return m_name;
}

void LimitRuleV2::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LimitRuleV2::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t LimitRuleV2::GetPriority() const
{
    return m_priority;
}

void LimitRuleV2::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool LimitRuleV2::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t LimitRuleV2::GetStatus() const
{
    return m_status;
}

void LimitRuleV2::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LimitRuleV2::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t LimitRuleV2::GetTsVersion() const
{
    return m_tsVersion;
}

void LimitRuleV2::SetTsVersion(const int64_t& _tsVersion)
{
    m_tsVersion = _tsVersion;
    m_tsVersionHasBeenSet = true;
}

bool LimitRuleV2::TsVersionHasBeenSet() const
{
    return m_tsVersionHasBeenSet;
}

string LimitRuleV2::GetLimitObject() const
{
    return m_limitObject;
}

void LimitRuleV2::SetLimitObject(const string& _limitObject)
{
    m_limitObject = _limitObject;
    m_limitObjectHasBeenSet = true;
}

bool LimitRuleV2::LimitObjectHasBeenSet() const
{
    return m_limitObjectHasBeenSet;
}

LimitMethod LimitRuleV2::GetLimitMethod() const
{
    return m_limitMethod;
}

void LimitRuleV2::SetLimitMethod(const LimitMethod& _limitMethod)
{
    m_limitMethod = _limitMethod;
    m_limitMethodHasBeenSet = true;
}

bool LimitRuleV2::LimitMethodHasBeenSet() const
{
    return m_limitMethodHasBeenSet;
}

LimitPath LimitRuleV2::GetLimitPaths() const
{
    return m_limitPaths;
}

void LimitRuleV2::SetLimitPaths(const LimitPath& _limitPaths)
{
    m_limitPaths = _limitPaths;
    m_limitPathsHasBeenSet = true;
}

bool LimitRuleV2::LimitPathsHasBeenSet() const
{
    return m_limitPathsHasBeenSet;
}

vector<LimitHeader> LimitRuleV2::GetLimitHeaders() const
{
    return m_limitHeaders;
}

void LimitRuleV2::SetLimitHeaders(const vector<LimitHeader>& _limitHeaders)
{
    m_limitHeaders = _limitHeaders;
    m_limitHeadersHasBeenSet = true;
}

bool LimitRuleV2::LimitHeadersHasBeenSet() const
{
    return m_limitHeadersHasBeenSet;
}

LimitWindow LimitRuleV2::GetLimitWindow() const
{
    return m_limitWindow;
}

void LimitRuleV2::SetLimitWindow(const LimitWindow& _limitWindow)
{
    m_limitWindow = _limitWindow;
    m_limitWindowHasBeenSet = true;
}

bool LimitRuleV2::LimitWindowHasBeenSet() const
{
    return m_limitWindowHasBeenSet;
}

int64_t LimitRuleV2::GetLimitStrategy() const
{
    return m_limitStrategy;
}

void LimitRuleV2::SetLimitStrategy(const int64_t& _limitStrategy)
{
    m_limitStrategy = _limitStrategy;
    m_limitStrategyHasBeenSet = true;
}

bool LimitRuleV2::LimitStrategyHasBeenSet() const
{
    return m_limitStrategyHasBeenSet;
}

LimitHeaderName LimitRuleV2::GetLimitHeaderName() const
{
    return m_limitHeaderName;
}

void LimitRuleV2::SetLimitHeaderName(const LimitHeaderName& _limitHeaderName)
{
    m_limitHeaderName = _limitHeaderName;
    m_limitHeaderNameHasBeenSet = true;
}

bool LimitRuleV2::LimitHeaderNameHasBeenSet() const
{
    return m_limitHeaderNameHasBeenSet;
}

MatchOption LimitRuleV2::GetGetParamsName() const
{
    return m_getParamsName;
}

void LimitRuleV2::SetGetParamsName(const MatchOption& _getParamsName)
{
    m_getParamsName = _getParamsName;
    m_getParamsNameHasBeenSet = true;
}

bool LimitRuleV2::GetParamsNameHasBeenSet() const
{
    return m_getParamsNameHasBeenSet;
}

MatchOption LimitRuleV2::GetGetParamsValue() const
{
    return m_getParamsValue;
}

void LimitRuleV2::SetGetParamsValue(const MatchOption& _getParamsValue)
{
    m_getParamsValue = _getParamsValue;
    m_getParamsValueHasBeenSet = true;
}

bool LimitRuleV2::GetParamsValueHasBeenSet() const
{
    return m_getParamsValueHasBeenSet;
}

MatchOption LimitRuleV2::GetPostParamsName() const
{
    return m_postParamsName;
}

void LimitRuleV2::SetPostParamsName(const MatchOption& _postParamsName)
{
    m_postParamsName = _postParamsName;
    m_postParamsNameHasBeenSet = true;
}

bool LimitRuleV2::PostParamsNameHasBeenSet() const
{
    return m_postParamsNameHasBeenSet;
}

MatchOption LimitRuleV2::GetPostParamsValue() const
{
    return m_postParamsValue;
}

void LimitRuleV2::SetPostParamsValue(const MatchOption& _postParamsValue)
{
    m_postParamsValue = _postParamsValue;
    m_postParamsValueHasBeenSet = true;
}

bool LimitRuleV2::PostParamsValueHasBeenSet() const
{
    return m_postParamsValueHasBeenSet;
}

MatchOption LimitRuleV2::GetIpLocation() const
{
    return m_ipLocation;
}

void LimitRuleV2::SetIpLocation(const MatchOption& _ipLocation)
{
    m_ipLocation = _ipLocation;
    m_ipLocationHasBeenSet = true;
}

bool LimitRuleV2::IpLocationHasBeenSet() const
{
    return m_ipLocationHasBeenSet;
}

RedirectInfo LimitRuleV2::GetRedirectInfo() const
{
    return m_redirectInfo;
}

void LimitRuleV2::SetRedirectInfo(const RedirectInfo& _redirectInfo)
{
    m_redirectInfo = _redirectInfo;
    m_redirectInfoHasBeenSet = true;
}

bool LimitRuleV2::RedirectInfoHasBeenSet() const
{
    return m_redirectInfoHasBeenSet;
}

int64_t LimitRuleV2::GetBlockPage() const
{
    return m_blockPage;
}

void LimitRuleV2::SetBlockPage(const int64_t& _blockPage)
{
    m_blockPage = _blockPage;
    m_blockPageHasBeenSet = true;
}

bool LimitRuleV2::BlockPageHasBeenSet() const
{
    return m_blockPageHasBeenSet;
}

int64_t LimitRuleV2::GetObjectSrc() const
{
    return m_objectSrc;
}

void LimitRuleV2::SetObjectSrc(const int64_t& _objectSrc)
{
    m_objectSrc = _objectSrc;
    m_objectSrcHasBeenSet = true;
}

bool LimitRuleV2::ObjectSrcHasBeenSet() const
{
    return m_objectSrcHasBeenSet;
}

bool LimitRuleV2::GetQuotaShare() const
{
    return m_quotaShare;
}

void LimitRuleV2::SetQuotaShare(const bool& _quotaShare)
{
    m_quotaShare = _quotaShare;
    m_quotaShareHasBeenSet = true;
}

bool LimitRuleV2::QuotaShareHasBeenSet() const
{
    return m_quotaShareHasBeenSet;
}

vector<PathItem> LimitRuleV2::GetPathsOption() const
{
    return m_pathsOption;
}

void LimitRuleV2::SetPathsOption(const vector<PathItem>& _pathsOption)
{
    m_pathsOption = _pathsOption;
    m_pathsOptionHasBeenSet = true;
}

bool LimitRuleV2::PathsOptionHasBeenSet() const
{
    return m_pathsOptionHasBeenSet;
}

int64_t LimitRuleV2::GetOrder() const
{
    return m_order;
}

void LimitRuleV2::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool LimitRuleV2::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

