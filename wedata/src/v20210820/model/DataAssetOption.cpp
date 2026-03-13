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

#include <tencentcloud/wedata/v20210820/model/DataAssetOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DataAssetOption::DataAssetOption() :
    m_hasPermissionHasBeenSet(false),
    m_hasFavoriteHasBeenSet(false),
    m_otherOperateHasBeenSet(false),
    m_favoriteCountHasBeenSet(false),
    m_hasBizPermissionHasBeenSet(false),
    m_hasProjectPermissionHasBeenSet(false),
    m_errorTipsHasBeenSet(false)
{
}

CoreInternalOutcome DataAssetOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HasPermission") && !value["HasPermission"].IsNull())
    {
        if (!value["HasPermission"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataAssetOption.HasPermission` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasPermission = value["HasPermission"].GetBool();
        m_hasPermissionHasBeenSet = true;
    }

    if (value.HasMember("HasFavorite") && !value["HasFavorite"].IsNull())
    {
        if (!value["HasFavorite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataAssetOption.HasFavorite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasFavorite = value["HasFavorite"].GetBool();
        m_hasFavoriteHasBeenSet = true;
    }

    if (value.HasMember("OtherOperate") && !value["OtherOperate"].IsNull())
    {
        if (!value["OtherOperate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataAssetOption.OtherOperate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherOperate = string(value["OtherOperate"].GetString());
        m_otherOperateHasBeenSet = true;
    }

    if (value.HasMember("FavoriteCount") && !value["FavoriteCount"].IsNull())
    {
        if (!value["FavoriteCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataAssetOption.FavoriteCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_favoriteCount = value["FavoriteCount"].GetInt64();
        m_favoriteCountHasBeenSet = true;
    }

    if (value.HasMember("HasBizPermission") && !value["HasBizPermission"].IsNull())
    {
        if (!value["HasBizPermission"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataAssetOption.HasBizPermission` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasBizPermission = value["HasBizPermission"].GetBool();
        m_hasBizPermissionHasBeenSet = true;
    }

    if (value.HasMember("HasProjectPermission") && !value["HasProjectPermission"].IsNull())
    {
        if (!value["HasProjectPermission"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataAssetOption.HasProjectPermission` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasProjectPermission = value["HasProjectPermission"].GetBool();
        m_hasProjectPermissionHasBeenSet = true;
    }

    if (value.HasMember("ErrorTips") && !value["ErrorTips"].IsNull())
    {
        if (!value["ErrorTips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataAssetOption.ErrorTips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorTips = string(value["ErrorTips"].GetString());
        m_errorTipsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataAssetOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hasPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasPermission, allocator);
    }

    if (m_hasFavoriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasFavorite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasFavorite, allocator);
    }

    if (m_otherOperateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherOperate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherOperate.c_str(), allocator).Move(), allocator);
    }

    if (m_favoriteCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FavoriteCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_favoriteCount, allocator);
    }

    if (m_hasBizPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasBizPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasBizPermission, allocator);
    }

    if (m_hasProjectPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasProjectPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasProjectPermission, allocator);
    }

    if (m_errorTipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorTips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorTips.c_str(), allocator).Move(), allocator);
    }

}


bool DataAssetOption::GetHasPermission() const
{
    return m_hasPermission;
}

void DataAssetOption::SetHasPermission(const bool& _hasPermission)
{
    m_hasPermission = _hasPermission;
    m_hasPermissionHasBeenSet = true;
}

bool DataAssetOption::HasPermissionHasBeenSet() const
{
    return m_hasPermissionHasBeenSet;
}

bool DataAssetOption::GetHasFavorite() const
{
    return m_hasFavorite;
}

void DataAssetOption::SetHasFavorite(const bool& _hasFavorite)
{
    m_hasFavorite = _hasFavorite;
    m_hasFavoriteHasBeenSet = true;
}

bool DataAssetOption::HasFavoriteHasBeenSet() const
{
    return m_hasFavoriteHasBeenSet;
}

string DataAssetOption::GetOtherOperate() const
{
    return m_otherOperate;
}

void DataAssetOption::SetOtherOperate(const string& _otherOperate)
{
    m_otherOperate = _otherOperate;
    m_otherOperateHasBeenSet = true;
}

bool DataAssetOption::OtherOperateHasBeenSet() const
{
    return m_otherOperateHasBeenSet;
}

int64_t DataAssetOption::GetFavoriteCount() const
{
    return m_favoriteCount;
}

void DataAssetOption::SetFavoriteCount(const int64_t& _favoriteCount)
{
    m_favoriteCount = _favoriteCount;
    m_favoriteCountHasBeenSet = true;
}

bool DataAssetOption::FavoriteCountHasBeenSet() const
{
    return m_favoriteCountHasBeenSet;
}

bool DataAssetOption::GetHasBizPermission() const
{
    return m_hasBizPermission;
}

void DataAssetOption::SetHasBizPermission(const bool& _hasBizPermission)
{
    m_hasBizPermission = _hasBizPermission;
    m_hasBizPermissionHasBeenSet = true;
}

bool DataAssetOption::HasBizPermissionHasBeenSet() const
{
    return m_hasBizPermissionHasBeenSet;
}

bool DataAssetOption::GetHasProjectPermission() const
{
    return m_hasProjectPermission;
}

void DataAssetOption::SetHasProjectPermission(const bool& _hasProjectPermission)
{
    m_hasProjectPermission = _hasProjectPermission;
    m_hasProjectPermissionHasBeenSet = true;
}

bool DataAssetOption::HasProjectPermissionHasBeenSet() const
{
    return m_hasProjectPermissionHasBeenSet;
}

string DataAssetOption::GetErrorTips() const
{
    return m_errorTips;
}

void DataAssetOption::SetErrorTips(const string& _errorTips)
{
    m_errorTips = _errorTips;
    m_errorTipsHasBeenSet = true;
}

bool DataAssetOption::ErrorTipsHasBeenSet() const
{
    return m_errorTipsHasBeenSet;
}

