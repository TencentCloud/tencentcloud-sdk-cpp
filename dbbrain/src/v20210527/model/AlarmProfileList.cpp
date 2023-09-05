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

#include <tencentcloud/dbbrain/v20210527/model/AlarmProfileList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

AlarmProfileList::AlarmProfileList() :
    m_isWebHookHasBeenSet(false),
    m_receiveUinCountHasBeenSet(false),
    m_langHasBeenSet(false),
    m_templateTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_receiveGroupCountHasBeenSet(false),
    m_updateUinHasBeenSet(false),
    m_receiveTypeHasBeenSet(false),
    m_receiveInfoHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_sendChannelHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_webHookCountHasBeenSet(false)
{
}

CoreInternalOutcome AlarmProfileList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsWebHook") && !value["IsWebHook"].IsNull())
    {
        if (!value["IsWebHook"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmProfileList.IsWebHook` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isWebHook = value["IsWebHook"].GetInt64();
        m_isWebHookHasBeenSet = true;
    }

    if (value.HasMember("ReceiveUinCount") && !value["ReceiveUinCount"].IsNull())
    {
        if (!value["ReceiveUinCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmProfileList.ReceiveUinCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_receiveUinCount = value["ReceiveUinCount"].GetInt64();
        m_receiveUinCountHasBeenSet = true;
    }

    if (value.HasMember("Lang") && !value["Lang"].IsNull())
    {
        if (!value["Lang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmProfileList.Lang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lang = string(value["Lang"].GetString());
        m_langHasBeenSet = true;
    }

    if (value.HasMember("TemplateType") && !value["TemplateType"].IsNull())
    {
        if (!value["TemplateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmProfileList.TemplateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateType = string(value["TemplateType"].GetString());
        m_templateTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmProfileList.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ReceiveGroupCount") && !value["ReceiveGroupCount"].IsNull())
    {
        if (!value["ReceiveGroupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmProfileList.ReceiveGroupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_receiveGroupCount = value["ReceiveGroupCount"].GetInt64();
        m_receiveGroupCountHasBeenSet = true;
    }

    if (value.HasMember("UpdateUin") && !value["UpdateUin"].IsNull())
    {
        if (!value["UpdateUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmProfileList.UpdateUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateUin = value["UpdateUin"].GetInt64();
        m_updateUinHasBeenSet = true;
    }

    if (value.HasMember("ReceiveType") && !value["ReceiveType"].IsNull())
    {
        if (!value["ReceiveType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmProfileList.ReceiveType` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiveType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiveType.push_back((*itr).GetInt64());
        }
        m_receiveTypeHasBeenSet = true;
    }

    if (value.HasMember("ReceiveInfo") && !value["ReceiveInfo"].IsNull())
    {
        if (!value["ReceiveInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmProfileList.ReceiveInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiveInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReceiveInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_receiveInfo.push_back(item);
        }
        m_receiveInfoHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmProfileList.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmProfileList.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("SendChannel") && !value["SendChannel"].IsNull())
    {
        if (!value["SendChannel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmProfileList.SendChannel` is not array type"));

        const rapidjson::Value &tmpValue = value["SendChannel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sendChannel.push_back((*itr).GetInt64());
        }
        m_sendChannelHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmProfileList.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("WebHookCount") && !value["WebHookCount"].IsNull())
    {
        if (!value["WebHookCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmProfileList.WebHookCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_webHookCount = value["WebHookCount"].GetInt64();
        m_webHookCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmProfileList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isWebHookHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWebHook";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWebHook, allocator);
    }

    if (m_receiveUinCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveUinCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_receiveUinCount, allocator);
    }

    if (m_langHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lang.c_str(), allocator).Move(), allocator);
    }

    if (m_templateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_receiveGroupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveGroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_receiveGroupCount, allocator);
    }

    if (m_updateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateUin, allocator);
    }

    if (m_receiveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiveType.begin(); itr != m_receiveType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_receiveInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_receiveInfo.begin(); itr != m_receiveInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_sendChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sendChannel.begin(); itr != m_sendChannel.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_webHookCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebHookCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webHookCount, allocator);
    }

}


int64_t AlarmProfileList::GetIsWebHook() const
{
    return m_isWebHook;
}

void AlarmProfileList::SetIsWebHook(const int64_t& _isWebHook)
{
    m_isWebHook = _isWebHook;
    m_isWebHookHasBeenSet = true;
}

bool AlarmProfileList::IsWebHookHasBeenSet() const
{
    return m_isWebHookHasBeenSet;
}

int64_t AlarmProfileList::GetReceiveUinCount() const
{
    return m_receiveUinCount;
}

void AlarmProfileList::SetReceiveUinCount(const int64_t& _receiveUinCount)
{
    m_receiveUinCount = _receiveUinCount;
    m_receiveUinCountHasBeenSet = true;
}

bool AlarmProfileList::ReceiveUinCountHasBeenSet() const
{
    return m_receiveUinCountHasBeenSet;
}

string AlarmProfileList::GetLang() const
{
    return m_lang;
}

void AlarmProfileList::SetLang(const string& _lang)
{
    m_lang = _lang;
    m_langHasBeenSet = true;
}

bool AlarmProfileList::LangHasBeenSet() const
{
    return m_langHasBeenSet;
}

string AlarmProfileList::GetTemplateType() const
{
    return m_templateType;
}

void AlarmProfileList::SetTemplateType(const string& _templateType)
{
    m_templateType = _templateType;
    m_templateTypeHasBeenSet = true;
}

bool AlarmProfileList::TemplateTypeHasBeenSet() const
{
    return m_templateTypeHasBeenSet;
}

string AlarmProfileList::GetRemark() const
{
    return m_remark;
}

void AlarmProfileList::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AlarmProfileList::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t AlarmProfileList::GetReceiveGroupCount() const
{
    return m_receiveGroupCount;
}

void AlarmProfileList::SetReceiveGroupCount(const int64_t& _receiveGroupCount)
{
    m_receiveGroupCount = _receiveGroupCount;
    m_receiveGroupCountHasBeenSet = true;
}

bool AlarmProfileList::ReceiveGroupCountHasBeenSet() const
{
    return m_receiveGroupCountHasBeenSet;
}

int64_t AlarmProfileList::GetUpdateUin() const
{
    return m_updateUin;
}

void AlarmProfileList::SetUpdateUin(const int64_t& _updateUin)
{
    m_updateUin = _updateUin;
    m_updateUinHasBeenSet = true;
}

bool AlarmProfileList::UpdateUinHasBeenSet() const
{
    return m_updateUinHasBeenSet;
}

vector<int64_t> AlarmProfileList::GetReceiveType() const
{
    return m_receiveType;
}

void AlarmProfileList::SetReceiveType(const vector<int64_t>& _receiveType)
{
    m_receiveType = _receiveType;
    m_receiveTypeHasBeenSet = true;
}

bool AlarmProfileList::ReceiveTypeHasBeenSet() const
{
    return m_receiveTypeHasBeenSet;
}

vector<ReceiveInfo> AlarmProfileList::GetReceiveInfo() const
{
    return m_receiveInfo;
}

void AlarmProfileList::SetReceiveInfo(const vector<ReceiveInfo>& _receiveInfo)
{
    m_receiveInfo = _receiveInfo;
    m_receiveInfoHasBeenSet = true;
}

bool AlarmProfileList::ReceiveInfoHasBeenSet() const
{
    return m_receiveInfoHasBeenSet;
}

string AlarmProfileList::GetUpdateTime() const
{
    return m_updateTime;
}

void AlarmProfileList::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AlarmProfileList::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AlarmProfileList::GetTemplateName() const
{
    return m_templateName;
}

void AlarmProfileList::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool AlarmProfileList::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

vector<int64_t> AlarmProfileList::GetSendChannel() const
{
    return m_sendChannel;
}

void AlarmProfileList::SetSendChannel(const vector<int64_t>& _sendChannel)
{
    m_sendChannel = _sendChannel;
    m_sendChannelHasBeenSet = true;
}

bool AlarmProfileList::SendChannelHasBeenSet() const
{
    return m_sendChannelHasBeenSet;
}

int64_t AlarmProfileList::GetTemplateId() const
{
    return m_templateId;
}

void AlarmProfileList::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool AlarmProfileList::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t AlarmProfileList::GetWebHookCount() const
{
    return m_webHookCount;
}

void AlarmProfileList::SetWebHookCount(const int64_t& _webHookCount)
{
    m_webHookCount = _webHookCount;
    m_webHookCountHasBeenSet = true;
}

bool AlarmProfileList::WebHookCountHasBeenSet() const
{
    return m_webHookCountHasBeenSet;
}

