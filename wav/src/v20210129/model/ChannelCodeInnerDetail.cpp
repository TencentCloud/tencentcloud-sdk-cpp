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

#include <tencentcloud/wav/v20210129/model/ChannelCodeInnerDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

ChannelCodeInnerDetail::ChannelCodeInnerDetail() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_useUserIdListHasBeenSet(false),
    m_useUserOpenIdListHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_skipVerifyHasBeenSet(false),
    m_friendsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_msgIdHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_qrCodeUrlHasBeenSet(false),
    m_recStatusHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome ChannelCodeInnerDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("UseUserIdList") && !value["UseUserIdList"].IsNull())
    {
        if (!value["UseUserIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.UseUserIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["UseUserIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_useUserIdList.push_back((*itr).GetInt64());
        }
        m_useUserIdListHasBeenSet = true;
    }

    if (value.HasMember("UseUserOpenIdList") && !value["UseUserOpenIdList"].IsNull())
    {
        if (!value["UseUserOpenIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.UseUserOpenIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["UseUserOpenIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_useUserOpenIdList.push_back((*itr).GetString());
        }
        m_useUserOpenIdListHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WeComTagDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagList.push_back(item);
        }
        m_tagListHasBeenSet = true;
    }

    if (value.HasMember("SkipVerify") && !value["SkipVerify"].IsNull())
    {
        if (!value["SkipVerify"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.SkipVerify` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_skipVerify = value["SkipVerify"].GetInt64();
        m_skipVerifyHasBeenSet = true;
    }

    if (value.HasMember("Friends") && !value["Friends"].IsNull())
    {
        if (!value["Friends"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.Friends` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_friends = value["Friends"].GetInt64();
        m_friendsHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("MsgId") && !value["MsgId"].IsNull())
    {
        if (!value["MsgId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.MsgId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_msgId = value["MsgId"].GetInt64();
        m_msgIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("QrCodeUrl") && !value["QrCodeUrl"].IsNull())
    {
        if (!value["QrCodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.QrCodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qrCodeUrl = string(value["QrCodeUrl"].GetString());
        m_qrCodeUrlHasBeenSet = true;
    }

    if (value.HasMember("RecStatus") && !value["RecStatus"].IsNull())
    {
        if (!value["RecStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.RecStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recStatus = value["RecStatus"].GetInt64();
        m_recStatusHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCodeInnerDetail.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelCodeInnerDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_useUserIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseUserIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_useUserIdList.begin(); itr != m_useUserIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_useUserOpenIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseUserOpenIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_useUserOpenIdList.begin(); itr != m_useUserOpenIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_skipVerifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipVerify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skipVerify, allocator);
    }

    if (m_friendsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Friends";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_friends, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgId, allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_qrCodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrCodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qrCodeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_recStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recStatus, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

}


int64_t ChannelCodeInnerDetail::GetId() const
{
    return m_id;
}

void ChannelCodeInnerDetail::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ChannelCodeInnerDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t ChannelCodeInnerDetail::GetType() const
{
    return m_type;
}

void ChannelCodeInnerDetail::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ChannelCodeInnerDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ChannelCodeInnerDetail::GetSource() const
{
    return m_source;
}

void ChannelCodeInnerDetail::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ChannelCodeInnerDetail::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ChannelCodeInnerDetail::GetSourceName() const
{
    return m_sourceName;
}

void ChannelCodeInnerDetail::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool ChannelCodeInnerDetail::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string ChannelCodeInnerDetail::GetName() const
{
    return m_name;
}

void ChannelCodeInnerDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ChannelCodeInnerDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<int64_t> ChannelCodeInnerDetail::GetUseUserIdList() const
{
    return m_useUserIdList;
}

void ChannelCodeInnerDetail::SetUseUserIdList(const vector<int64_t>& _useUserIdList)
{
    m_useUserIdList = _useUserIdList;
    m_useUserIdListHasBeenSet = true;
}

bool ChannelCodeInnerDetail::UseUserIdListHasBeenSet() const
{
    return m_useUserIdListHasBeenSet;
}

vector<string> ChannelCodeInnerDetail::GetUseUserOpenIdList() const
{
    return m_useUserOpenIdList;
}

void ChannelCodeInnerDetail::SetUseUserOpenIdList(const vector<string>& _useUserOpenIdList)
{
    m_useUserOpenIdList = _useUserOpenIdList;
    m_useUserOpenIdListHasBeenSet = true;
}

bool ChannelCodeInnerDetail::UseUserOpenIdListHasBeenSet() const
{
    return m_useUserOpenIdListHasBeenSet;
}

vector<WeComTagDetail> ChannelCodeInnerDetail::GetTagList() const
{
    return m_tagList;
}

void ChannelCodeInnerDetail::SetTagList(const vector<WeComTagDetail>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool ChannelCodeInnerDetail::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

int64_t ChannelCodeInnerDetail::GetSkipVerify() const
{
    return m_skipVerify;
}

void ChannelCodeInnerDetail::SetSkipVerify(const int64_t& _skipVerify)
{
    m_skipVerify = _skipVerify;
    m_skipVerifyHasBeenSet = true;
}

bool ChannelCodeInnerDetail::SkipVerifyHasBeenSet() const
{
    return m_skipVerifyHasBeenSet;
}

int64_t ChannelCodeInnerDetail::GetFriends() const
{
    return m_friends;
}

void ChannelCodeInnerDetail::SetFriends(const int64_t& _friends)
{
    m_friends = _friends;
    m_friendsHasBeenSet = true;
}

bool ChannelCodeInnerDetail::FriendsHasBeenSet() const
{
    return m_friendsHasBeenSet;
}

string ChannelCodeInnerDetail::GetRemark() const
{
    return m_remark;
}

void ChannelCodeInnerDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ChannelCodeInnerDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t ChannelCodeInnerDetail::GetMsgId() const
{
    return m_msgId;
}

void ChannelCodeInnerDetail::SetMsgId(const int64_t& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool ChannelCodeInnerDetail::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string ChannelCodeInnerDetail::GetConfigId() const
{
    return m_configId;
}

void ChannelCodeInnerDetail::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ChannelCodeInnerDetail::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string ChannelCodeInnerDetail::GetQrCodeUrl() const
{
    return m_qrCodeUrl;
}

void ChannelCodeInnerDetail::SetQrCodeUrl(const string& _qrCodeUrl)
{
    m_qrCodeUrl = _qrCodeUrl;
    m_qrCodeUrlHasBeenSet = true;
}

bool ChannelCodeInnerDetail::QrCodeUrlHasBeenSet() const
{
    return m_qrCodeUrlHasBeenSet;
}

int64_t ChannelCodeInnerDetail::GetRecStatus() const
{
    return m_recStatus;
}

void ChannelCodeInnerDetail::SetRecStatus(const int64_t& _recStatus)
{
    m_recStatus = _recStatus;
    m_recStatusHasBeenSet = true;
}

bool ChannelCodeInnerDetail::RecStatusHasBeenSet() const
{
    return m_recStatusHasBeenSet;
}

string ChannelCodeInnerDetail::GetAppId() const
{
    return m_appId;
}

void ChannelCodeInnerDetail::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ChannelCodeInnerDetail::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

