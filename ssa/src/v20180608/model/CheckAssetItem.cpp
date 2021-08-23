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

#include <tencentcloud/ssa/v20180608/model/CheckAssetItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

CheckAssetItem::CheckAssetItem() :
    m_idHasBeenSet(false),
    m_instidHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_taskidHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_updatetimeHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_isIgnoreHasBeenSet(false),
    m_isCheckedHasBeenSet(false),
    m_assetInfoHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_remarksHasBeenSet(false)
{
}

CoreInternalOutcome CheckAssetItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckAssetItem.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Instid") && !value["Instid"].IsNull())
    {
        if (!value["Instid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckAssetItem.Instid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instid = string(value["Instid"].GetString());
        m_instidHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckAssetItem.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Taskid") && !value["Taskid"].IsNull())
    {
        if (!value["Taskid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckAssetItem.Taskid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskid = string(value["Taskid"].GetString());
        m_taskidHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckAssetItem.Result` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetInt64();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Updatetime") && !value["Updatetime"].IsNull())
    {
        if (!value["Updatetime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckAssetItem.Updatetime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatetime = string(value["Updatetime"].GetString());
        m_updatetimeHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckAssetItem.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("IsIgnore") && !value["IsIgnore"].IsNull())
    {
        if (!value["IsIgnore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckAssetItem.IsIgnore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isIgnore = value["IsIgnore"].GetInt64();
        m_isIgnoreHasBeenSet = true;
    }

    if (value.HasMember("IsChecked") && !value["IsChecked"].IsNull())
    {
        if (!value["IsChecked"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckAssetItem.IsChecked` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isChecked = value["IsChecked"].GetInt64();
        m_isCheckedHasBeenSet = true;
    }

    if (value.HasMember("AssetInfo") && !value["AssetInfo"].IsNull())
    {
        if (!value["AssetInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckAssetItem.AssetInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetInfo = string(value["AssetInfo"].GetString());
        m_assetInfoHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckAssetItem.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckAssetItem.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Remarks") && !value["Remarks"].IsNull())
    {
        if (!value["Remarks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckAssetItem.Remarks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remarks = string(value["Remarks"].GetString());
        m_remarksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckAssetItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_instidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instid.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_taskidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Taskid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskid.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_updatetimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Updatetime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatetime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_isIgnoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIgnore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIgnore, allocator);
    }

    if (m_isCheckedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsChecked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isChecked, allocator);
    }

    if (m_assetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_remarksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remarks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remarks.c_str(), allocator).Move(), allocator);
    }

}


int64_t CheckAssetItem::GetId() const
{
    return m_id;
}

void CheckAssetItem::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CheckAssetItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CheckAssetItem::GetInstid() const
{
    return m_instid;
}

void CheckAssetItem::SetInstid(const string& _instid)
{
    m_instid = _instid;
    m_instidHasBeenSet = true;
}

bool CheckAssetItem::InstidHasBeenSet() const
{
    return m_instidHasBeenSet;
}

string CheckAssetItem::GetUrl() const
{
    return m_url;
}

void CheckAssetItem::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CheckAssetItem::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string CheckAssetItem::GetTaskid() const
{
    return m_taskid;
}

void CheckAssetItem::SetTaskid(const string& _taskid)
{
    m_taskid = _taskid;
    m_taskidHasBeenSet = true;
}

bool CheckAssetItem::TaskidHasBeenSet() const
{
    return m_taskidHasBeenSet;
}

int64_t CheckAssetItem::GetResult() const
{
    return m_result;
}

void CheckAssetItem::SetResult(const int64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool CheckAssetItem::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string CheckAssetItem::GetUpdatetime() const
{
    return m_updatetime;
}

void CheckAssetItem::SetUpdatetime(const string& _updatetime)
{
    m_updatetime = _updatetime;
    m_updatetimeHasBeenSet = true;
}

bool CheckAssetItem::UpdatetimeHasBeenSet() const
{
    return m_updatetimeHasBeenSet;
}

string CheckAssetItem::GetTag() const
{
    return m_tag;
}

void CheckAssetItem::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool CheckAssetItem::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

int64_t CheckAssetItem::GetIsIgnore() const
{
    return m_isIgnore;
}

void CheckAssetItem::SetIsIgnore(const int64_t& _isIgnore)
{
    m_isIgnore = _isIgnore;
    m_isIgnoreHasBeenSet = true;
}

bool CheckAssetItem::IsIgnoreHasBeenSet() const
{
    return m_isIgnoreHasBeenSet;
}

int64_t CheckAssetItem::GetIsChecked() const
{
    return m_isChecked;
}

void CheckAssetItem::SetIsChecked(const int64_t& _isChecked)
{
    m_isChecked = _isChecked;
    m_isCheckedHasBeenSet = true;
}

bool CheckAssetItem::IsCheckedHasBeenSet() const
{
    return m_isCheckedHasBeenSet;
}

string CheckAssetItem::GetAssetInfo() const
{
    return m_assetInfo;
}

void CheckAssetItem::SetAssetInfo(const string& _assetInfo)
{
    m_assetInfo = _assetInfo;
    m_assetInfoHasBeenSet = true;
}

bool CheckAssetItem::AssetInfoHasBeenSet() const
{
    return m_assetInfoHasBeenSet;
}

string CheckAssetItem::GetAssetId() const
{
    return m_assetId;
}

void CheckAssetItem::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool CheckAssetItem::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string CheckAssetItem::GetDetail() const
{
    return m_detail;
}

void CheckAssetItem::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool CheckAssetItem::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string CheckAssetItem::GetRemarks() const
{
    return m_remarks;
}

void CheckAssetItem::SetRemarks(const string& _remarks)
{
    m_remarks = _remarks;
    m_remarksHasBeenSet = true;
}

bool CheckAssetItem::RemarksHasBeenSet() const
{
    return m_remarksHasBeenSet;
}

