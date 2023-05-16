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

#include <tencentcloud/tke/v20180525/model/KubeJarvisStateResultsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

KubeJarvisStateResultsItem::KubeJarvisStateResultsItem() :
    m_levelHasBeenSet(false),
    m_objNameHasBeenSet(false),
    m_objInfoHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descHasBeenSet(false),
    m_proposalHasBeenSet(false),
    m_proposalDocUrlHasBeenSet(false),
    m_proposalDocNameHasBeenSet(false)
{
}

CoreInternalOutcome KubeJarvisStateResultsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateResultsItem.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("ObjName") && !value["ObjName"].IsNull())
    {
        if (!value["ObjName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateResultsItem.ObjName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objName = string(value["ObjName"].GetString());
        m_objNameHasBeenSet = true;
    }

    if (value.HasMember("ObjInfo") && !value["ObjInfo"].IsNull())
    {
        if (!value["ObjInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateResultsItem.ObjInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ObjInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KubeJarvisStateResultObjInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_objInfo.push_back(item);
        }
        m_objInfoHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateResultsItem.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateResultsItem.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Proposal") && !value["Proposal"].IsNull())
    {
        if (!value["Proposal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateResultsItem.Proposal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proposal = string(value["Proposal"].GetString());
        m_proposalHasBeenSet = true;
    }

    if (value.HasMember("ProposalDocUrl") && !value["ProposalDocUrl"].IsNull())
    {
        if (!value["ProposalDocUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateResultsItem.ProposalDocUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proposalDocUrl = string(value["ProposalDocUrl"].GetString());
        m_proposalDocUrlHasBeenSet = true;
    }

    if (value.HasMember("ProposalDocName") && !value["ProposalDocName"].IsNull())
    {
        if (!value["ProposalDocName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateResultsItem.ProposalDocName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proposalDocName = string(value["ProposalDocName"].GetString());
        m_proposalDocNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KubeJarvisStateResultsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_objNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objName.c_str(), allocator).Move(), allocator);
    }

    if (m_objInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_objInfo.begin(); itr != m_objInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_proposalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proposal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proposal.c_str(), allocator).Move(), allocator);
    }

    if (m_proposalDocUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProposalDocUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proposalDocUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_proposalDocNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProposalDocName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proposalDocName.c_str(), allocator).Move(), allocator);
    }

}


string KubeJarvisStateResultsItem::GetLevel() const
{
    return m_level;
}

void KubeJarvisStateResultsItem::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool KubeJarvisStateResultsItem::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string KubeJarvisStateResultsItem::GetObjName() const
{
    return m_objName;
}

void KubeJarvisStateResultsItem::SetObjName(const string& _objName)
{
    m_objName = _objName;
    m_objNameHasBeenSet = true;
}

bool KubeJarvisStateResultsItem::ObjNameHasBeenSet() const
{
    return m_objNameHasBeenSet;
}

vector<KubeJarvisStateResultObjInfo> KubeJarvisStateResultsItem::GetObjInfo() const
{
    return m_objInfo;
}

void KubeJarvisStateResultsItem::SetObjInfo(const vector<KubeJarvisStateResultObjInfo>& _objInfo)
{
    m_objInfo = _objInfo;
    m_objInfoHasBeenSet = true;
}

bool KubeJarvisStateResultsItem::ObjInfoHasBeenSet() const
{
    return m_objInfoHasBeenSet;
}

string KubeJarvisStateResultsItem::GetTitle() const
{
    return m_title;
}

void KubeJarvisStateResultsItem::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool KubeJarvisStateResultsItem::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string KubeJarvisStateResultsItem::GetDesc() const
{
    return m_desc;
}

void KubeJarvisStateResultsItem::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool KubeJarvisStateResultsItem::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string KubeJarvisStateResultsItem::GetProposal() const
{
    return m_proposal;
}

void KubeJarvisStateResultsItem::SetProposal(const string& _proposal)
{
    m_proposal = _proposal;
    m_proposalHasBeenSet = true;
}

bool KubeJarvisStateResultsItem::ProposalHasBeenSet() const
{
    return m_proposalHasBeenSet;
}

string KubeJarvisStateResultsItem::GetProposalDocUrl() const
{
    return m_proposalDocUrl;
}

void KubeJarvisStateResultsItem::SetProposalDocUrl(const string& _proposalDocUrl)
{
    m_proposalDocUrl = _proposalDocUrl;
    m_proposalDocUrlHasBeenSet = true;
}

bool KubeJarvisStateResultsItem::ProposalDocUrlHasBeenSet() const
{
    return m_proposalDocUrlHasBeenSet;
}

string KubeJarvisStateResultsItem::GetProposalDocName() const
{
    return m_proposalDocName;
}

void KubeJarvisStateResultsItem::SetProposalDocName(const string& _proposalDocName)
{
    m_proposalDocName = _proposalDocName;
    m_proposalDocNameHasBeenSet = true;
}

bool KubeJarvisStateResultsItem::ProposalDocNameHasBeenSet() const
{
    return m_proposalDocNameHasBeenSet;
}

