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

#include <tencentcloud/cfw/v20190904/model/DatabaseWhiteListRuleData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DatabaseWhiteListRuleData::DatabaseWhiteListRuleData() :
    m_sourceIpHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_targetIpHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_isRegionRuleHasBeenSet(false),
    m_isCloudRuleHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_firstLevelRegionCodeHasBeenSet(false),
    m_secondLevelRegionCodeHasBeenSet(false),
    m_firstLevelRegionNameHasBeenSet(false),
    m_secondLevelRegionNameHasBeenSet(false),
    m_cloudCodeHasBeenSet(false)
{
}

CoreInternalOutcome DatabaseWhiteListRuleData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceIp") && !value["SourceIp"].IsNull())
    {
        if (!value["SourceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseWhiteListRuleData.SourceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIp = string(value["SourceIp"].GetString());
        m_sourceIpHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseWhiteListRuleData.SourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetInt64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetIp") && !value["TargetIp"].IsNull())
    {
        if (!value["TargetIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseWhiteListRuleData.TargetIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetIp = string(value["TargetIp"].GetString());
        m_targetIpHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseWhiteListRuleData.TargetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = value["TargetType"].GetInt64();
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseWhiteListRuleData.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("IsRegionRule") && !value["IsRegionRule"].IsNull())
    {
        if (!value["IsRegionRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseWhiteListRuleData.IsRegionRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRegionRule = value["IsRegionRule"].GetInt64();
        m_isRegionRuleHasBeenSet = true;
    }

    if (value.HasMember("IsCloudRule") && !value["IsCloudRule"].IsNull())
    {
        if (!value["IsCloudRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseWhiteListRuleData.IsCloudRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isCloudRule = value["IsCloudRule"].GetInt64();
        m_isCloudRuleHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseWhiteListRuleData.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("FirstLevelRegionCode") && !value["FirstLevelRegionCode"].IsNull())
    {
        if (!value["FirstLevelRegionCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseWhiteListRuleData.FirstLevelRegionCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firstLevelRegionCode = value["FirstLevelRegionCode"].GetInt64();
        m_firstLevelRegionCodeHasBeenSet = true;
    }

    if (value.HasMember("SecondLevelRegionCode") && !value["SecondLevelRegionCode"].IsNull())
    {
        if (!value["SecondLevelRegionCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseWhiteListRuleData.SecondLevelRegionCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secondLevelRegionCode = value["SecondLevelRegionCode"].GetInt64();
        m_secondLevelRegionCodeHasBeenSet = true;
    }

    if (value.HasMember("FirstLevelRegionName") && !value["FirstLevelRegionName"].IsNull())
    {
        if (!value["FirstLevelRegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseWhiteListRuleData.FirstLevelRegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstLevelRegionName = string(value["FirstLevelRegionName"].GetString());
        m_firstLevelRegionNameHasBeenSet = true;
    }

    if (value.HasMember("SecondLevelRegionName") && !value["SecondLevelRegionName"].IsNull())
    {
        if (!value["SecondLevelRegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseWhiteListRuleData.SecondLevelRegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondLevelRegionName = string(value["SecondLevelRegionName"].GetString());
        m_secondLevelRegionNameHasBeenSet = true;
    }

    if (value.HasMember("CloudCode") && !value["CloudCode"].IsNull())
    {
        if (!value["CloudCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseWhiteListRuleData.CloudCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudCode = string(value["CloudCode"].GetString());
        m_cloudCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabaseWhiteListRuleData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_targetIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetIp.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetType, allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_isRegionRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRegionRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRegionRule, allocator);
    }

    if (m_isCloudRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCloudRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCloudRule, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_firstLevelRegionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstLevelRegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstLevelRegionCode, allocator);
    }

    if (m_secondLevelRegionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondLevelRegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secondLevelRegionCode, allocator);
    }

    if (m_firstLevelRegionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstLevelRegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstLevelRegionName.c_str(), allocator).Move(), allocator);
    }

    if (m_secondLevelRegionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondLevelRegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondLevelRegionName.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudCode.c_str(), allocator).Move(), allocator);
    }

}


string DatabaseWhiteListRuleData::GetSourceIp() const
{
    return m_sourceIp;
}

void DatabaseWhiteListRuleData::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool DatabaseWhiteListRuleData::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

int64_t DatabaseWhiteListRuleData::GetSourceType() const
{
    return m_sourceType;
}

void DatabaseWhiteListRuleData::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool DatabaseWhiteListRuleData::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string DatabaseWhiteListRuleData::GetTargetIp() const
{
    return m_targetIp;
}

void DatabaseWhiteListRuleData::SetTargetIp(const string& _targetIp)
{
    m_targetIp = _targetIp;
    m_targetIpHasBeenSet = true;
}

bool DatabaseWhiteListRuleData::TargetIpHasBeenSet() const
{
    return m_targetIpHasBeenSet;
}

int64_t DatabaseWhiteListRuleData::GetTargetType() const
{
    return m_targetType;
}

void DatabaseWhiteListRuleData::SetTargetType(const int64_t& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool DatabaseWhiteListRuleData::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string DatabaseWhiteListRuleData::GetDetail() const
{
    return m_detail;
}

void DatabaseWhiteListRuleData::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool DatabaseWhiteListRuleData::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

int64_t DatabaseWhiteListRuleData::GetIsRegionRule() const
{
    return m_isRegionRule;
}

void DatabaseWhiteListRuleData::SetIsRegionRule(const int64_t& _isRegionRule)
{
    m_isRegionRule = _isRegionRule;
    m_isRegionRuleHasBeenSet = true;
}

bool DatabaseWhiteListRuleData::IsRegionRuleHasBeenSet() const
{
    return m_isRegionRuleHasBeenSet;
}

int64_t DatabaseWhiteListRuleData::GetIsCloudRule() const
{
    return m_isCloudRule;
}

void DatabaseWhiteListRuleData::SetIsCloudRule(const int64_t& _isCloudRule)
{
    m_isCloudRule = _isCloudRule;
    m_isCloudRuleHasBeenSet = true;
}

bool DatabaseWhiteListRuleData::IsCloudRuleHasBeenSet() const
{
    return m_isCloudRuleHasBeenSet;
}

int64_t DatabaseWhiteListRuleData::GetEnable() const
{
    return m_enable;
}

void DatabaseWhiteListRuleData::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool DatabaseWhiteListRuleData::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t DatabaseWhiteListRuleData::GetFirstLevelRegionCode() const
{
    return m_firstLevelRegionCode;
}

void DatabaseWhiteListRuleData::SetFirstLevelRegionCode(const int64_t& _firstLevelRegionCode)
{
    m_firstLevelRegionCode = _firstLevelRegionCode;
    m_firstLevelRegionCodeHasBeenSet = true;
}

bool DatabaseWhiteListRuleData::FirstLevelRegionCodeHasBeenSet() const
{
    return m_firstLevelRegionCodeHasBeenSet;
}

int64_t DatabaseWhiteListRuleData::GetSecondLevelRegionCode() const
{
    return m_secondLevelRegionCode;
}

void DatabaseWhiteListRuleData::SetSecondLevelRegionCode(const int64_t& _secondLevelRegionCode)
{
    m_secondLevelRegionCode = _secondLevelRegionCode;
    m_secondLevelRegionCodeHasBeenSet = true;
}

bool DatabaseWhiteListRuleData::SecondLevelRegionCodeHasBeenSet() const
{
    return m_secondLevelRegionCodeHasBeenSet;
}

string DatabaseWhiteListRuleData::GetFirstLevelRegionName() const
{
    return m_firstLevelRegionName;
}

void DatabaseWhiteListRuleData::SetFirstLevelRegionName(const string& _firstLevelRegionName)
{
    m_firstLevelRegionName = _firstLevelRegionName;
    m_firstLevelRegionNameHasBeenSet = true;
}

bool DatabaseWhiteListRuleData::FirstLevelRegionNameHasBeenSet() const
{
    return m_firstLevelRegionNameHasBeenSet;
}

string DatabaseWhiteListRuleData::GetSecondLevelRegionName() const
{
    return m_secondLevelRegionName;
}

void DatabaseWhiteListRuleData::SetSecondLevelRegionName(const string& _secondLevelRegionName)
{
    m_secondLevelRegionName = _secondLevelRegionName;
    m_secondLevelRegionNameHasBeenSet = true;
}

bool DatabaseWhiteListRuleData::SecondLevelRegionNameHasBeenSet() const
{
    return m_secondLevelRegionNameHasBeenSet;
}

string DatabaseWhiteListRuleData::GetCloudCode() const
{
    return m_cloudCode;
}

void DatabaseWhiteListRuleData::SetCloudCode(const string& _cloudCode)
{
    m_cloudCode = _cloudCode;
    m_cloudCodeHasBeenSet = true;
}

bool DatabaseWhiteListRuleData::CloudCodeHasBeenSet() const
{
    return m_cloudCodeHasBeenSet;
}

