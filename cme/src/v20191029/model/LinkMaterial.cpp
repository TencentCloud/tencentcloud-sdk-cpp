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

#include <tencentcloud/cme/v20191029/model/LinkMaterial.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

LinkMaterial::LinkMaterial() :
    m_linkTypeHasBeenSet(false),
    m_linkStatusHasBeenSet(false),
    m_linkMaterialInfoHasBeenSet(false),
    m_linkClassInfoHasBeenSet(false)
{
}

CoreInternalOutcome LinkMaterial::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LinkType") && !value["LinkType"].IsNull())
    {
        if (!value["LinkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkMaterial.LinkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkType = string(value["LinkType"].GetString());
        m_linkTypeHasBeenSet = true;
    }

    if (value.HasMember("LinkStatus") && !value["LinkStatus"].IsNull())
    {
        if (!value["LinkStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkMaterial.LinkStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkStatus = string(value["LinkStatus"].GetString());
        m_linkStatusHasBeenSet = true;
    }

    if (value.HasMember("LinkMaterialInfo") && !value["LinkMaterialInfo"].IsNull())
    {
        if (!value["LinkMaterialInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LinkMaterial.LinkMaterialInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_linkMaterialInfo.Deserialize(value["LinkMaterialInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_linkMaterialInfoHasBeenSet = true;
    }

    if (value.HasMember("LinkClassInfo") && !value["LinkClassInfo"].IsNull())
    {
        if (!value["LinkClassInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LinkMaterial.LinkClassInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_linkClassInfo.Deserialize(value["LinkClassInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_linkClassInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LinkMaterial::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_linkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkType.c_str(), allocator).Move(), allocator);
    }

    if (m_linkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_linkMaterialInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkMaterialInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_linkMaterialInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_linkClassInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkClassInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_linkClassInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string LinkMaterial::GetLinkType() const
{
    return m_linkType;
}

void LinkMaterial::SetLinkType(const string& _linkType)
{
    m_linkType = _linkType;
    m_linkTypeHasBeenSet = true;
}

bool LinkMaterial::LinkTypeHasBeenSet() const
{
    return m_linkTypeHasBeenSet;
}

string LinkMaterial::GetLinkStatus() const
{
    return m_linkStatus;
}

void LinkMaterial::SetLinkStatus(const string& _linkStatus)
{
    m_linkStatus = _linkStatus;
    m_linkStatusHasBeenSet = true;
}

bool LinkMaterial::LinkStatusHasBeenSet() const
{
    return m_linkStatusHasBeenSet;
}

LinkMaterialInfo LinkMaterial::GetLinkMaterialInfo() const
{
    return m_linkMaterialInfo;
}

void LinkMaterial::SetLinkMaterialInfo(const LinkMaterialInfo& _linkMaterialInfo)
{
    m_linkMaterialInfo = _linkMaterialInfo;
    m_linkMaterialInfoHasBeenSet = true;
}

bool LinkMaterial::LinkMaterialInfoHasBeenSet() const
{
    return m_linkMaterialInfoHasBeenSet;
}

ClassInfo LinkMaterial::GetLinkClassInfo() const
{
    return m_linkClassInfo;
}

void LinkMaterial::SetLinkClassInfo(const ClassInfo& _linkClassInfo)
{
    m_linkClassInfo = _linkClassInfo;
    m_linkClassInfoHasBeenSet = true;
}

bool LinkMaterial::LinkClassInfoHasBeenSet() const
{
    return m_linkClassInfoHasBeenSet;
}

