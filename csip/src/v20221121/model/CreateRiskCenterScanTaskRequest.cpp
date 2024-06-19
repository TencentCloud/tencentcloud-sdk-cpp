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

#include <tencentcloud/csip/v20221121/model/CreateRiskCenterScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateRiskCenterScanTaskRequest::CreateRiskCenterScanTaskRequest() :
    m_taskNameHasBeenSet(false),
    m_scanAssetTypeHasBeenSet(false),
    m_scanItemHasBeenSet(false),
    m_scanPlanTypeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_assetsHasBeenSet(false),
    m_scanPlanContentHasBeenSet(false),
    m_selfDefiningAssetsHasBeenSet(false),
    m_scanFromHasBeenSet(false),
    m_taskAdvanceCFGHasBeenSet(false),
    m_taskModeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_finishWebHookHasBeenSet(false)
{
}

string CreateRiskCenterScanTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_scanAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanAssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanAssetType, allocator);
    }

    if (m_scanItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanItem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanItem.begin(); itr != m_scanItem.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scanPlanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPlanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanPlanType, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Assets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assets.begin(); itr != m_assets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_scanPlanContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPlanContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanPlanContent.c_str(), allocator).Move(), allocator);
    }

    if (m_selfDefiningAssetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfDefiningAssets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_selfDefiningAssets.begin(); itr != m_selfDefiningAssets.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scanFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_taskAdvanceCFGHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAdvanceCFG";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskAdvanceCFG.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_taskModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskMode, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tags.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_finishWebHookHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishWebHook";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_finishWebHook.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRiskCenterScanTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateRiskCenterScanTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateRiskCenterScanTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t CreateRiskCenterScanTaskRequest::GetScanAssetType() const
{
    return m_scanAssetType;
}

void CreateRiskCenterScanTaskRequest::SetScanAssetType(const int64_t& _scanAssetType)
{
    m_scanAssetType = _scanAssetType;
    m_scanAssetTypeHasBeenSet = true;
}

bool CreateRiskCenterScanTaskRequest::ScanAssetTypeHasBeenSet() const
{
    return m_scanAssetTypeHasBeenSet;
}

vector<string> CreateRiskCenterScanTaskRequest::GetScanItem() const
{
    return m_scanItem;
}

void CreateRiskCenterScanTaskRequest::SetScanItem(const vector<string>& _scanItem)
{
    m_scanItem = _scanItem;
    m_scanItemHasBeenSet = true;
}

bool CreateRiskCenterScanTaskRequest::ScanItemHasBeenSet() const
{
    return m_scanItemHasBeenSet;
}

int64_t CreateRiskCenterScanTaskRequest::GetScanPlanType() const
{
    return m_scanPlanType;
}

void CreateRiskCenterScanTaskRequest::SetScanPlanType(const int64_t& _scanPlanType)
{
    m_scanPlanType = _scanPlanType;
    m_scanPlanTypeHasBeenSet = true;
}

bool CreateRiskCenterScanTaskRequest::ScanPlanTypeHasBeenSet() const
{
    return m_scanPlanTypeHasBeenSet;
}

vector<string> CreateRiskCenterScanTaskRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateRiskCenterScanTaskRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateRiskCenterScanTaskRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<TaskAssetObject> CreateRiskCenterScanTaskRequest::GetAssets() const
{
    return m_assets;
}

void CreateRiskCenterScanTaskRequest::SetAssets(const vector<TaskAssetObject>& _assets)
{
    m_assets = _assets;
    m_assetsHasBeenSet = true;
}

bool CreateRiskCenterScanTaskRequest::AssetsHasBeenSet() const
{
    return m_assetsHasBeenSet;
}

string CreateRiskCenterScanTaskRequest::GetScanPlanContent() const
{
    return m_scanPlanContent;
}

void CreateRiskCenterScanTaskRequest::SetScanPlanContent(const string& _scanPlanContent)
{
    m_scanPlanContent = _scanPlanContent;
    m_scanPlanContentHasBeenSet = true;
}

bool CreateRiskCenterScanTaskRequest::ScanPlanContentHasBeenSet() const
{
    return m_scanPlanContentHasBeenSet;
}

vector<string> CreateRiskCenterScanTaskRequest::GetSelfDefiningAssets() const
{
    return m_selfDefiningAssets;
}

void CreateRiskCenterScanTaskRequest::SetSelfDefiningAssets(const vector<string>& _selfDefiningAssets)
{
    m_selfDefiningAssets = _selfDefiningAssets;
    m_selfDefiningAssetsHasBeenSet = true;
}

bool CreateRiskCenterScanTaskRequest::SelfDefiningAssetsHasBeenSet() const
{
    return m_selfDefiningAssetsHasBeenSet;
}

string CreateRiskCenterScanTaskRequest::GetScanFrom() const
{
    return m_scanFrom;
}

void CreateRiskCenterScanTaskRequest::SetScanFrom(const string& _scanFrom)
{
    m_scanFrom = _scanFrom;
    m_scanFromHasBeenSet = true;
}

bool CreateRiskCenterScanTaskRequest::ScanFromHasBeenSet() const
{
    return m_scanFromHasBeenSet;
}

TaskAdvanceCFG CreateRiskCenterScanTaskRequest::GetTaskAdvanceCFG() const
{
    return m_taskAdvanceCFG;
}

void CreateRiskCenterScanTaskRequest::SetTaskAdvanceCFG(const TaskAdvanceCFG& _taskAdvanceCFG)
{
    m_taskAdvanceCFG = _taskAdvanceCFG;
    m_taskAdvanceCFGHasBeenSet = true;
}

bool CreateRiskCenterScanTaskRequest::TaskAdvanceCFGHasBeenSet() const
{
    return m_taskAdvanceCFGHasBeenSet;
}

int64_t CreateRiskCenterScanTaskRequest::GetTaskMode() const
{
    return m_taskMode;
}

void CreateRiskCenterScanTaskRequest::SetTaskMode(const int64_t& _taskMode)
{
    m_taskMode = _taskMode;
    m_taskModeHasBeenSet = true;
}

bool CreateRiskCenterScanTaskRequest::TaskModeHasBeenSet() const
{
    return m_taskModeHasBeenSet;
}

AssetTag CreateRiskCenterScanTaskRequest::GetTags() const
{
    return m_tags;
}

void CreateRiskCenterScanTaskRequest::SetTags(const AssetTag& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateRiskCenterScanTaskRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateRiskCenterScanTaskRequest::GetFinishWebHook() const
{
    return m_finishWebHook;
}

void CreateRiskCenterScanTaskRequest::SetFinishWebHook(const string& _finishWebHook)
{
    m_finishWebHook = _finishWebHook;
    m_finishWebHookHasBeenSet = true;
}

bool CreateRiskCenterScanTaskRequest::FinishWebHookHasBeenSet() const
{
    return m_finishWebHookHasBeenSet;
}


