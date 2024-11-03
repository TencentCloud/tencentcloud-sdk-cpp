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

#include <tencentcloud/cfw/v20190904/model/BanAndAllowRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

BanAndAllowRule::BanAndAllowRule() :
    m_commentHasBeenSet(false),
    m_customRuleHasBeenSet(false),
    m_directionListHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_fwTypeHasBeenSet(false),
    m_iocHasBeenSet(false)
{
}

CoreInternalOutcome BanAndAllowRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BanAndAllowRule.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("CustomRule") && !value["CustomRule"].IsNull())
    {
        if (!value["CustomRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BanAndAllowRule.CustomRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customRule.Deserialize(value["CustomRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customRuleHasBeenSet = true;
    }

    if (value.HasMember("DirectionList") && !value["DirectionList"].IsNull())
    {
        if (!value["DirectionList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BanAndAllowRule.DirectionList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directionList = string(value["DirectionList"].GetString());
        m_directionListHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BanAndAllowRule.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("FwType") && !value["FwType"].IsNull())
    {
        if (!value["FwType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BanAndAllowRule.FwType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fwType = value["FwType"].GetInt64();
        m_fwTypeHasBeenSet = true;
    }

    if (value.HasMember("Ioc") && !value["Ioc"].IsNull())
    {
        if (!value["Ioc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BanAndAllowRule.Ioc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ioc = string(value["Ioc"].GetString());
        m_iocHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BanAndAllowRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_customRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_directionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directionList.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fwType, allocator);
    }

    if (m_iocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ioc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ioc.c_str(), allocator).Move(), allocator);
    }

}


string BanAndAllowRule::GetComment() const
{
    return m_comment;
}

void BanAndAllowRule::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool BanAndAllowRule::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

CustomWhiteRule BanAndAllowRule::GetCustomRule() const
{
    return m_customRule;
}

void BanAndAllowRule::SetCustomRule(const CustomWhiteRule& _customRule)
{
    m_customRule = _customRule;
    m_customRuleHasBeenSet = true;
}

bool BanAndAllowRule::CustomRuleHasBeenSet() const
{
    return m_customRuleHasBeenSet;
}

string BanAndAllowRule::GetDirectionList() const
{
    return m_directionList;
}

void BanAndAllowRule::SetDirectionList(const string& _directionList)
{
    m_directionList = _directionList;
    m_directionListHasBeenSet = true;
}

bool BanAndAllowRule::DirectionListHasBeenSet() const
{
    return m_directionListHasBeenSet;
}

string BanAndAllowRule::GetEndTime() const
{
    return m_endTime;
}

void BanAndAllowRule::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BanAndAllowRule::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t BanAndAllowRule::GetFwType() const
{
    return m_fwType;
}

void BanAndAllowRule::SetFwType(const int64_t& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool BanAndAllowRule::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

string BanAndAllowRule::GetIoc() const
{
    return m_ioc;
}

void BanAndAllowRule::SetIoc(const string& _ioc)
{
    m_ioc = _ioc;
    m_iocHasBeenSet = true;
}

bool BanAndAllowRule::IocHasBeenSet() const
{
    return m_iocHasBeenSet;
}

