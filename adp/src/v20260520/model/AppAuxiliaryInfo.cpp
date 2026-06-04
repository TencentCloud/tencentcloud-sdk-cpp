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

#include <tencentcloud/adp/v20260520/model/AppAuxiliaryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppAuxiliaryInfo::AppAuxiliaryInfo() :
    m_appealHasBeenSet(false),
    m_searchResourceStatusHasBeenSet(false),
    m_specialStatusInfoHasBeenSet(false),
    m_subStatusHasBeenSet(false),
    m_templatePublishHasBeenSet(false)
{
}

CoreInternalOutcome AppAuxiliaryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Appeal") && !value["Appeal"].IsNull())
    {
        if (!value["Appeal"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppAuxiliaryInfo.Appeal` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appeal.Deserialize(value["Appeal"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appealHasBeenSet = true;
    }

    if (value.HasMember("SearchResourceStatus") && !value["SearchResourceStatus"].IsNull())
    {
        if (!value["SearchResourceStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppAuxiliaryInfo.SearchResourceStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_searchResourceStatus.Deserialize(value["SearchResourceStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_searchResourceStatusHasBeenSet = true;
    }

    if (value.HasMember("SpecialStatusInfo") && !value["SpecialStatusInfo"].IsNull())
    {
        if (!value["SpecialStatusInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppAuxiliaryInfo.SpecialStatusInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_specialStatusInfo.Deserialize(value["SpecialStatusInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_specialStatusInfoHasBeenSet = true;
    }

    if (value.HasMember("SubStatus") && !value["SubStatus"].IsNull())
    {
        if (!value["SubStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppAuxiliaryInfo.SubStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subStatus.Deserialize(value["SubStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subStatusHasBeenSet = true;
    }

    if (value.HasMember("TemplatePublish") && !value["TemplatePublish"].IsNull())
    {
        if (!value["TemplatePublish"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppAuxiliaryInfo.TemplatePublish` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_templatePublish.Deserialize(value["TemplatePublish"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templatePublishHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppAuxiliaryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appeal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appeal.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_searchResourceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchResourceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchResourceStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_specialStatusInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecialStatusInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_specialStatusInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_templatePublishHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplatePublish";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_templatePublish.ToJsonObject(value[key.c_str()], allocator);
    }

}


AppAppeal AppAuxiliaryInfo::GetAppeal() const
{
    return m_appeal;
}

void AppAuxiliaryInfo::SetAppeal(const AppAppeal& _appeal)
{
    m_appeal = _appeal;
    m_appealHasBeenSet = true;
}

bool AppAuxiliaryInfo::AppealHasBeenSet() const
{
    return m_appealHasBeenSet;
}

SearchResourceStatusInfo AppAuxiliaryInfo::GetSearchResourceStatus() const
{
    return m_searchResourceStatus;
}

void AppAuxiliaryInfo::SetSearchResourceStatus(const SearchResourceStatusInfo& _searchResourceStatus)
{
    m_searchResourceStatus = _searchResourceStatus;
    m_searchResourceStatusHasBeenSet = true;
}

bool AppAuxiliaryInfo::SearchResourceStatusHasBeenSet() const
{
    return m_searchResourceStatusHasBeenSet;
}

SpecialStatusInfo AppAuxiliaryInfo::GetSpecialStatusInfo() const
{
    return m_specialStatusInfo;
}

void AppAuxiliaryInfo::SetSpecialStatusInfo(const SpecialStatusInfo& _specialStatusInfo)
{
    m_specialStatusInfo = _specialStatusInfo;
    m_specialStatusInfoHasBeenSet = true;
}

bool AppAuxiliaryInfo::SpecialStatusInfoHasBeenSet() const
{
    return m_specialStatusInfoHasBeenSet;
}

AppSubStatusInfo AppAuxiliaryInfo::GetSubStatus() const
{
    return m_subStatus;
}

void AppAuxiliaryInfo::SetSubStatus(const AppSubStatusInfo& _subStatus)
{
    m_subStatus = _subStatus;
    m_subStatusHasBeenSet = true;
}

bool AppAuxiliaryInfo::SubStatusHasBeenSet() const
{
    return m_subStatusHasBeenSet;
}

TemplatePublishInfo AppAuxiliaryInfo::GetTemplatePublish() const
{
    return m_templatePublish;
}

void AppAuxiliaryInfo::SetTemplatePublish(const TemplatePublishInfo& _templatePublish)
{
    m_templatePublish = _templatePublish;
    m_templatePublishHasBeenSet = true;
}

bool AppAuxiliaryInfo::TemplatePublishHasBeenSet() const
{
    return m_templatePublishHasBeenSet;
}

