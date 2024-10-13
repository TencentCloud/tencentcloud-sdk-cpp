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

#include <tencentcloud/waf/v20180125/model/ApiAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ApiAsset::ApiAsset() :
    m_domainHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_activeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_countHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_isAuthHasBeenSet(false),
    m_apiRequestRuleIdHasBeenSet(false),
    m_apiLimitRuleIdHasBeenSet(false),
    m_hostListHasBeenSet(false)
{
}

CoreInternalOutcome ApiAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAsset.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAsset.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAsset.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAsset.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiAsset.Label` is not array type"));

        const rapidjson::Value &tmpValue = value["Label"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_label.push_back((*itr).GetString());
        }
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Active") && !value["Active"].IsNull())
    {
        if (!value["Active"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAsset.Active` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_active = value["Active"].GetBool();
        m_activeHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAsset.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAsset.InsertTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = value["InsertTime"].GetUint64();
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAsset.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAsset.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAsset.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAsset.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("IsAuth") && !value["IsAuth"].IsNull())
    {
        if (!value["IsAuth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAsset.IsAuth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuth = value["IsAuth"].GetInt64();
        m_isAuthHasBeenSet = true;
    }

    if (value.HasMember("ApiRequestRuleId") && !value["ApiRequestRuleId"].IsNull())
    {
        if (!value["ApiRequestRuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAsset.ApiRequestRuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiRequestRuleId = value["ApiRequestRuleId"].GetInt64();
        m_apiRequestRuleIdHasBeenSet = true;
    }

    if (value.HasMember("ApiLimitRuleId") && !value["ApiLimitRuleId"].IsNull())
    {
        if (!value["ApiLimitRuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAsset.ApiLimitRuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiLimitRuleId = value["ApiLimitRuleId"].GetInt64();
        m_apiLimitRuleIdHasBeenSet = true;
    }

    if (value.HasMember("HostList") && !value["HostList"].IsNull())
    {
        if (!value["HostList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiAsset.HostList` is not array type"));

        const rapidjson::Value &tmpValue = value["HostList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostList.push_back((*itr).GetString());
        }
        m_hostListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_label.begin(); itr != m_label.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_activeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Active";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_active, allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insertTime, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_isAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuth, allocator);
    }

    if (m_apiRequestRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiRequestRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiRequestRuleId, allocator);
    }

    if (m_apiLimitRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiLimitRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiLimitRuleId, allocator);
    }

    if (m_hostListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostList.begin(); itr != m_hostList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ApiAsset::GetDomain() const
{
    return m_domain;
}

void ApiAsset::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ApiAsset::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ApiAsset::GetMethod() const
{
    return m_method;
}

void ApiAsset::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ApiAsset::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ApiAsset::GetApiName() const
{
    return m_apiName;
}

void ApiAsset::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool ApiAsset::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string ApiAsset::GetScene() const
{
    return m_scene;
}

void ApiAsset::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool ApiAsset::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

vector<string> ApiAsset::GetLabel() const
{
    return m_label;
}

void ApiAsset::SetLabel(const vector<string>& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool ApiAsset::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

bool ApiAsset::GetActive() const
{
    return m_active;
}

void ApiAsset::SetActive(const bool& _active)
{
    m_active = _active;
    m_activeHasBeenSet = true;
}

bool ApiAsset::ActiveHasBeenSet() const
{
    return m_activeHasBeenSet;
}

uint64_t ApiAsset::GetTimestamp() const
{
    return m_timestamp;
}

void ApiAsset::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool ApiAsset::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

uint64_t ApiAsset::GetInsertTime() const
{
    return m_insertTime;
}

void ApiAsset::SetInsertTime(const uint64_t& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool ApiAsset::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string ApiAsset::GetMode() const
{
    return m_mode;
}

void ApiAsset::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ApiAsset::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string ApiAsset::GetLevel() const
{
    return m_level;
}

void ApiAsset::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ApiAsset::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

uint64_t ApiAsset::GetCount() const
{
    return m_count;
}

void ApiAsset::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ApiAsset::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string ApiAsset::GetRemark() const
{
    return m_remark;
}

void ApiAsset::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ApiAsset::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t ApiAsset::GetIsAuth() const
{
    return m_isAuth;
}

void ApiAsset::SetIsAuth(const int64_t& _isAuth)
{
    m_isAuth = _isAuth;
    m_isAuthHasBeenSet = true;
}

bool ApiAsset::IsAuthHasBeenSet() const
{
    return m_isAuthHasBeenSet;
}

int64_t ApiAsset::GetApiRequestRuleId() const
{
    return m_apiRequestRuleId;
}

void ApiAsset::SetApiRequestRuleId(const int64_t& _apiRequestRuleId)
{
    m_apiRequestRuleId = _apiRequestRuleId;
    m_apiRequestRuleIdHasBeenSet = true;
}

bool ApiAsset::ApiRequestRuleIdHasBeenSet() const
{
    return m_apiRequestRuleIdHasBeenSet;
}

int64_t ApiAsset::GetApiLimitRuleId() const
{
    return m_apiLimitRuleId;
}

void ApiAsset::SetApiLimitRuleId(const int64_t& _apiLimitRuleId)
{
    m_apiLimitRuleId = _apiLimitRuleId;
    m_apiLimitRuleIdHasBeenSet = true;
}

bool ApiAsset::ApiLimitRuleIdHasBeenSet() const
{
    return m_apiLimitRuleIdHasBeenSet;
}

vector<string> ApiAsset::GetHostList() const
{
    return m_hostList;
}

void ApiAsset::SetHostList(const vector<string>& _hostList)
{
    m_hostList = _hostList;
    m_hostListHasBeenSet = true;
}

bool ApiAsset::HostListHasBeenSet() const
{
    return m_hostListHasBeenSet;
}

