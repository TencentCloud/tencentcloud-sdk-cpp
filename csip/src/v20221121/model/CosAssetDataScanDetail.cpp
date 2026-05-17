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

#include <tencentcloud/csip/v20221121/model/CosAssetDataScanDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosAssetDataScanDetail::CosAssetDataScanDetail() :
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_latestScanTimeHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_categoryDetailsHasBeenSet(false)
{
}

CoreInternalOutcome CosAssetDataScanDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetDataScanDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetDataScanDetail.Progress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetDouble();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("LatestScanTime") && !value["LatestScanTime"].IsNull())
    {
        if (!value["LatestScanTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetDataScanDetail.LatestScanTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_latestScanTime = value["LatestScanTime"].GetUint64();
        m_latestScanTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetDataScanDetail.ErrorInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorInfo = string(value["ErrorInfo"].GetString());
        m_errorInfoHasBeenSet = true;
    }

    if (value.HasMember("CategoryDetails") && !value["CategoryDetails"].IsNull())
    {
        if (!value["CategoryDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAssetDataScanDetail.CategoryDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosIdentifyCategoryDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryDetails.push_back(item);
        }
        m_categoryDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosAssetDataScanDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_latestScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestScanTime, allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryDetails.begin(); itr != m_categoryDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t CosAssetDataScanDetail::GetStatus() const
{
    return m_status;
}

void CosAssetDataScanDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CosAssetDataScanDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

double CosAssetDataScanDetail::GetProgress() const
{
    return m_progress;
}

void CosAssetDataScanDetail::SetProgress(const double& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool CosAssetDataScanDetail::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t CosAssetDataScanDetail::GetLatestScanTime() const
{
    return m_latestScanTime;
}

void CosAssetDataScanDetail::SetLatestScanTime(const uint64_t& _latestScanTime)
{
    m_latestScanTime = _latestScanTime;
    m_latestScanTimeHasBeenSet = true;
}

bool CosAssetDataScanDetail::LatestScanTimeHasBeenSet() const
{
    return m_latestScanTimeHasBeenSet;
}

string CosAssetDataScanDetail::GetErrorInfo() const
{
    return m_errorInfo;
}

void CosAssetDataScanDetail::SetErrorInfo(const string& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool CosAssetDataScanDetail::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

vector<CosIdentifyCategoryDetail> CosAssetDataScanDetail::GetCategoryDetails() const
{
    return m_categoryDetails;
}

void CosAssetDataScanDetail::SetCategoryDetails(const vector<CosIdentifyCategoryDetail>& _categoryDetails)
{
    m_categoryDetails = _categoryDetails;
    m_categoryDetailsHasBeenSet = true;
}

bool CosAssetDataScanDetail::CategoryDetailsHasBeenSet() const
{
    return m_categoryDetailsHasBeenSet;
}

