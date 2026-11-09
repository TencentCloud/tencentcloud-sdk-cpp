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

#include <tencentcloud/ess/v20201111/model/ContractReviewWebUrlOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ContractReviewWebUrlOption::ContractReviewWebUrlOption() :
    m_disableTemporaryStoreHasBeenSet(false),
    m_disableExportHasBeenSet(false),
    m_disableReviewAgainHasBeenSet(false),
    m_disableWxQrcodeHasBeenSet(false),
    m_disableIgnoreRiskHasBeenSet(false),
    m_disableRevisedRiskHasBeenSet(false)
{
}

CoreInternalOutcome ContractReviewWebUrlOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisableTemporaryStore") && !value["DisableTemporaryStore"].IsNull())
    {
        if (!value["DisableTemporaryStore"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContractReviewWebUrlOption.DisableTemporaryStore` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableTemporaryStore = value["DisableTemporaryStore"].GetBool();
        m_disableTemporaryStoreHasBeenSet = true;
    }

    if (value.HasMember("DisableExport") && !value["DisableExport"].IsNull())
    {
        if (!value["DisableExport"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContractReviewWebUrlOption.DisableExport` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableExport = value["DisableExport"].GetBool();
        m_disableExportHasBeenSet = true;
    }

    if (value.HasMember("DisableReviewAgain") && !value["DisableReviewAgain"].IsNull())
    {
        if (!value["DisableReviewAgain"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContractReviewWebUrlOption.DisableReviewAgain` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableReviewAgain = value["DisableReviewAgain"].GetBool();
        m_disableReviewAgainHasBeenSet = true;
    }

    if (value.HasMember("DisableWxQrcode") && !value["DisableWxQrcode"].IsNull())
    {
        if (!value["DisableWxQrcode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContractReviewWebUrlOption.DisableWxQrcode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableWxQrcode = value["DisableWxQrcode"].GetBool();
        m_disableWxQrcodeHasBeenSet = true;
    }

    if (value.HasMember("DisableIgnoreRisk") && !value["DisableIgnoreRisk"].IsNull())
    {
        if (!value["DisableIgnoreRisk"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContractReviewWebUrlOption.DisableIgnoreRisk` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableIgnoreRisk = value["DisableIgnoreRisk"].GetBool();
        m_disableIgnoreRiskHasBeenSet = true;
    }

    if (value.HasMember("DisableRevisedRisk") && !value["DisableRevisedRisk"].IsNull())
    {
        if (!value["DisableRevisedRisk"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContractReviewWebUrlOption.DisableRevisedRisk` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableRevisedRisk = value["DisableRevisedRisk"].GetBool();
        m_disableRevisedRiskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContractReviewWebUrlOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_disableTemporaryStoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableTemporaryStore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableTemporaryStore, allocator);
    }

    if (m_disableExportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableExport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableExport, allocator);
    }

    if (m_disableReviewAgainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableReviewAgain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableReviewAgain, allocator);
    }

    if (m_disableWxQrcodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableWxQrcode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableWxQrcode, allocator);
    }

    if (m_disableIgnoreRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableIgnoreRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableIgnoreRisk, allocator);
    }

    if (m_disableRevisedRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableRevisedRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableRevisedRisk, allocator);
    }

}


bool ContractReviewWebUrlOption::GetDisableTemporaryStore() const
{
    return m_disableTemporaryStore;
}

void ContractReviewWebUrlOption::SetDisableTemporaryStore(const bool& _disableTemporaryStore)
{
    m_disableTemporaryStore = _disableTemporaryStore;
    m_disableTemporaryStoreHasBeenSet = true;
}

bool ContractReviewWebUrlOption::DisableTemporaryStoreHasBeenSet() const
{
    return m_disableTemporaryStoreHasBeenSet;
}

bool ContractReviewWebUrlOption::GetDisableExport() const
{
    return m_disableExport;
}

void ContractReviewWebUrlOption::SetDisableExport(const bool& _disableExport)
{
    m_disableExport = _disableExport;
    m_disableExportHasBeenSet = true;
}

bool ContractReviewWebUrlOption::DisableExportHasBeenSet() const
{
    return m_disableExportHasBeenSet;
}

bool ContractReviewWebUrlOption::GetDisableReviewAgain() const
{
    return m_disableReviewAgain;
}

void ContractReviewWebUrlOption::SetDisableReviewAgain(const bool& _disableReviewAgain)
{
    m_disableReviewAgain = _disableReviewAgain;
    m_disableReviewAgainHasBeenSet = true;
}

bool ContractReviewWebUrlOption::DisableReviewAgainHasBeenSet() const
{
    return m_disableReviewAgainHasBeenSet;
}

bool ContractReviewWebUrlOption::GetDisableWxQrcode() const
{
    return m_disableWxQrcode;
}

void ContractReviewWebUrlOption::SetDisableWxQrcode(const bool& _disableWxQrcode)
{
    m_disableWxQrcode = _disableWxQrcode;
    m_disableWxQrcodeHasBeenSet = true;
}

bool ContractReviewWebUrlOption::DisableWxQrcodeHasBeenSet() const
{
    return m_disableWxQrcodeHasBeenSet;
}

bool ContractReviewWebUrlOption::GetDisableIgnoreRisk() const
{
    return m_disableIgnoreRisk;
}

void ContractReviewWebUrlOption::SetDisableIgnoreRisk(const bool& _disableIgnoreRisk)
{
    m_disableIgnoreRisk = _disableIgnoreRisk;
    m_disableIgnoreRiskHasBeenSet = true;
}

bool ContractReviewWebUrlOption::DisableIgnoreRiskHasBeenSet() const
{
    return m_disableIgnoreRiskHasBeenSet;
}

bool ContractReviewWebUrlOption::GetDisableRevisedRisk() const
{
    return m_disableRevisedRisk;
}

void ContractReviewWebUrlOption::SetDisableRevisedRisk(const bool& _disableRevisedRisk)
{
    m_disableRevisedRisk = _disableRevisedRisk;
    m_disableRevisedRiskHasBeenSet = true;
}

bool ContractReviewWebUrlOption::DisableRevisedRiskHasBeenSet() const
{
    return m_disableRevisedRiskHasBeenSet;
}

