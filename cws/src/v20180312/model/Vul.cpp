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

#include <tencentcloud/cws/v20180312/model/Vul.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cws::V20180312::Model;
using namespace std;

Vul::Vul() :
    m_idHasBeenSet(false),
    m_siteIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_htmlHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_harmHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_parameterHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_isReportedHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome Vul::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SiteId") && !value["SiteId"].IsNull())
    {
        if (!value["SiteId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.SiteId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_siteId = value["SiteId"].GetUint64();
        m_siteIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Html") && !value["Html"].IsNull())
    {
        if (!value["Html"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.Html` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_html = string(value["Html"].GetString());
        m_htmlHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("Harm") && !value["Harm"].IsNull())
    {
        if (!value["Harm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.Harm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_harm = string(value["Harm"].GetString());
        m_harmHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(value["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("Parameter") && !value["Parameter"].IsNull())
    {
        if (!value["Parameter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.Parameter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameter = string(value["Parameter"].GetString());
        m_parameterHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("IsReported") && !value["IsReported"].IsNull())
    {
        if (!value["IsReported"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.IsReported` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isReported = value["IsReported"].GetUint64();
        m_isReportedHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vul.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Vul::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_siteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_siteId, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_htmlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Html";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_html.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_harmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Harm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_harm.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameter.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_isReportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReported, allocator);
    }

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Vul::GetId() const
{
    return m_id;
}

void Vul::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Vul::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t Vul::GetSiteId() const
{
    return m_siteId;
}

void Vul::SetSiteId(const uint64_t& _siteId)
{
    m_siteId = _siteId;
    m_siteIdHasBeenSet = true;
}

bool Vul::SiteIdHasBeenSet() const
{
    return m_siteIdHasBeenSet;
}

uint64_t Vul::GetTaskId() const
{
    return m_taskId;
}

void Vul::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool Vul::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string Vul::GetLevel() const
{
    return m_level;
}

void Vul::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool Vul::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string Vul::GetName() const
{
    return m_name;
}

void Vul::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Vul::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Vul::GetUrl() const
{
    return m_url;
}

void Vul::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool Vul::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string Vul::GetHtml() const
{
    return m_html;
}

void Vul::SetHtml(const string& _html)
{
    m_html = _html;
    m_htmlHasBeenSet = true;
}

bool Vul::HtmlHasBeenSet() const
{
    return m_htmlHasBeenSet;
}

string Vul::GetNickname() const
{
    return m_nickname;
}

void Vul::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool Vul::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string Vul::GetHarm() const
{
    return m_harm;
}

void Vul::SetHarm(const string& _harm)
{
    m_harm = _harm;
    m_harmHasBeenSet = true;
}

bool Vul::HarmHasBeenSet() const
{
    return m_harmHasBeenSet;
}

string Vul::GetDescribe() const
{
    return m_describe;
}

void Vul::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool Vul::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

string Vul::GetSolution() const
{
    return m_solution;
}

void Vul::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool Vul::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

string Vul::GetFrom() const
{
    return m_from;
}

void Vul::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool Vul::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string Vul::GetParameter() const
{
    return m_parameter;
}

void Vul::SetParameter(const string& _parameter)
{
    m_parameter = _parameter;
    m_parameterHasBeenSet = true;
}

bool Vul::ParameterHasBeenSet() const
{
    return m_parameterHasBeenSet;
}

string Vul::GetCreatedAt() const
{
    return m_createdAt;
}

void Vul::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Vul::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string Vul::GetUpdatedAt() const
{
    return m_updatedAt;
}

void Vul::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool Vul::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

uint64_t Vul::GetIsReported() const
{
    return m_isReported;
}

void Vul::SetIsReported(const uint64_t& _isReported)
{
    m_isReported = _isReported;
    m_isReportedHasBeenSet = true;
}

bool Vul::IsReportedHasBeenSet() const
{
    return m_isReportedHasBeenSet;
}

uint64_t Vul::GetAppid() const
{
    return m_appid;
}

void Vul::SetAppid(const uint64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool Vul::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

string Vul::GetUin() const
{
    return m_uin;
}

void Vul::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool Vul::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

