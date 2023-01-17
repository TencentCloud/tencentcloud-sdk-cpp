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

#include <tencentcloud/bma/v20210624/model/CreateCRWorkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

CreateCRWorkRequest::CreateCRWorkRequest() :
    m_workNameHasBeenSet(false),
    m_workCategoryHasBeenSet(false),
    m_workTypeHasBeenSet(false),
    m_workSignHasBeenSet(false),
    m_workPicHasBeenSet(false),
    m_workDescHasBeenSet(false),
    m_isOriginalHasBeenSet(false),
    m_isReleaseHasBeenSet(false),
    m_producerIDHasBeenSet(false),
    m_produceTimeHasBeenSet(false),
    m_sampleContentURLHasBeenSet(false),
    m_sampleDownloadURLHasBeenSet(false),
    m_samplePublicURLHasBeenSet(false),
    m_grantTypeHasBeenSet(false),
    m_isMonitorHasBeenSet(false),
    m_isCertHasBeenSet(false),
    m_certUrlHasBeenSet(false),
    m_monitorUrlHasBeenSet(false),
    m_produceTypeHasBeenSet(false),
    m_whiteListsHasBeenSet(false),
    m_workIdHasBeenSet(false),
    m_producerNameHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_authorizationHasBeenSet(false),
    m_authorizationStartTimeHasBeenSet(false),
    m_authorizationEndTimeHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_monitorEndTimeHasBeenSet(false),
    m_applierIdHasBeenSet(false),
    m_applierNameHasBeenSet(false),
    m_isAutoRenewHasBeenSet(false)
{
}

string CreateCRWorkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workName.c_str(), allocator).Move(), allocator);
    }

    if (m_workCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_workTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workType.c_str(), allocator).Move(), allocator);
    }

    if (m_workSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSign";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSign.c_str(), allocator).Move(), allocator);
    }

    if (m_workPicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkPic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workPic.c_str(), allocator).Move(), allocator);
    }

    if (m_workDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_isOriginalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOriginal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isOriginal.c_str(), allocator).Move(), allocator);
    }

    if (m_isReleaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRelease";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isRelease.c_str(), allocator).Move(), allocator);
    }

    if (m_producerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_producerID, allocator);
    }

    if (m_produceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProduceTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_produceTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleContentURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleContentURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sampleContentURL.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleDownloadURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleDownloadURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sampleDownloadURL.c_str(), allocator).Move(), allocator);
    }

    if (m_samplePublicURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SamplePublicURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_samplePublicURL.c_str(), allocator).Move(), allocator);
    }

    if (m_grantTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrantType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_grantType.c_str(), allocator).Move(), allocator);
    }

    if (m_isMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMonitor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isMonitor.c_str(), allocator).Move(), allocator);
    }

    if (m_isCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCert";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isCert.c_str(), allocator).Move(), allocator);
    }

    if (m_certUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_produceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProduceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_produceType.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteLists";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_whiteLists.begin(); itr != m_whiteLists.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workId, allocator);
    }

    if (m_producerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_producerName.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authorization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authorization.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authorizationStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authorizationEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applierIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplierId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applierId.c_str(), allocator).Move(), allocator);
    }

    if (m_applierNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplierName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applierName.c_str(), allocator).Move(), allocator);
    }

    if (m_isAutoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isAutoRenew.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCRWorkRequest::GetWorkName() const
{
    return m_workName;
}

void CreateCRWorkRequest::SetWorkName(const string& _workName)
{
    m_workName = _workName;
    m_workNameHasBeenSet = true;
}

bool CreateCRWorkRequest::WorkNameHasBeenSet() const
{
    return m_workNameHasBeenSet;
}

string CreateCRWorkRequest::GetWorkCategory() const
{
    return m_workCategory;
}

void CreateCRWorkRequest::SetWorkCategory(const string& _workCategory)
{
    m_workCategory = _workCategory;
    m_workCategoryHasBeenSet = true;
}

bool CreateCRWorkRequest::WorkCategoryHasBeenSet() const
{
    return m_workCategoryHasBeenSet;
}

string CreateCRWorkRequest::GetWorkType() const
{
    return m_workType;
}

void CreateCRWorkRequest::SetWorkType(const string& _workType)
{
    m_workType = _workType;
    m_workTypeHasBeenSet = true;
}

bool CreateCRWorkRequest::WorkTypeHasBeenSet() const
{
    return m_workTypeHasBeenSet;
}

string CreateCRWorkRequest::GetWorkSign() const
{
    return m_workSign;
}

void CreateCRWorkRequest::SetWorkSign(const string& _workSign)
{
    m_workSign = _workSign;
    m_workSignHasBeenSet = true;
}

bool CreateCRWorkRequest::WorkSignHasBeenSet() const
{
    return m_workSignHasBeenSet;
}

string CreateCRWorkRequest::GetWorkPic() const
{
    return m_workPic;
}

void CreateCRWorkRequest::SetWorkPic(const string& _workPic)
{
    m_workPic = _workPic;
    m_workPicHasBeenSet = true;
}

bool CreateCRWorkRequest::WorkPicHasBeenSet() const
{
    return m_workPicHasBeenSet;
}

string CreateCRWorkRequest::GetWorkDesc() const
{
    return m_workDesc;
}

void CreateCRWorkRequest::SetWorkDesc(const string& _workDesc)
{
    m_workDesc = _workDesc;
    m_workDescHasBeenSet = true;
}

bool CreateCRWorkRequest::WorkDescHasBeenSet() const
{
    return m_workDescHasBeenSet;
}

string CreateCRWorkRequest::GetIsOriginal() const
{
    return m_isOriginal;
}

void CreateCRWorkRequest::SetIsOriginal(const string& _isOriginal)
{
    m_isOriginal = _isOriginal;
    m_isOriginalHasBeenSet = true;
}

bool CreateCRWorkRequest::IsOriginalHasBeenSet() const
{
    return m_isOriginalHasBeenSet;
}

string CreateCRWorkRequest::GetIsRelease() const
{
    return m_isRelease;
}

void CreateCRWorkRequest::SetIsRelease(const string& _isRelease)
{
    m_isRelease = _isRelease;
    m_isReleaseHasBeenSet = true;
}

bool CreateCRWorkRequest::IsReleaseHasBeenSet() const
{
    return m_isReleaseHasBeenSet;
}

int64_t CreateCRWorkRequest::GetProducerID() const
{
    return m_producerID;
}

void CreateCRWorkRequest::SetProducerID(const int64_t& _producerID)
{
    m_producerID = _producerID;
    m_producerIDHasBeenSet = true;
}

bool CreateCRWorkRequest::ProducerIDHasBeenSet() const
{
    return m_producerIDHasBeenSet;
}

string CreateCRWorkRequest::GetProduceTime() const
{
    return m_produceTime;
}

void CreateCRWorkRequest::SetProduceTime(const string& _produceTime)
{
    m_produceTime = _produceTime;
    m_produceTimeHasBeenSet = true;
}

bool CreateCRWorkRequest::ProduceTimeHasBeenSet() const
{
    return m_produceTimeHasBeenSet;
}

string CreateCRWorkRequest::GetSampleContentURL() const
{
    return m_sampleContentURL;
}

void CreateCRWorkRequest::SetSampleContentURL(const string& _sampleContentURL)
{
    m_sampleContentURL = _sampleContentURL;
    m_sampleContentURLHasBeenSet = true;
}

bool CreateCRWorkRequest::SampleContentURLHasBeenSet() const
{
    return m_sampleContentURLHasBeenSet;
}

string CreateCRWorkRequest::GetSampleDownloadURL() const
{
    return m_sampleDownloadURL;
}

void CreateCRWorkRequest::SetSampleDownloadURL(const string& _sampleDownloadURL)
{
    m_sampleDownloadURL = _sampleDownloadURL;
    m_sampleDownloadURLHasBeenSet = true;
}

bool CreateCRWorkRequest::SampleDownloadURLHasBeenSet() const
{
    return m_sampleDownloadURLHasBeenSet;
}

string CreateCRWorkRequest::GetSamplePublicURL() const
{
    return m_samplePublicURL;
}

void CreateCRWorkRequest::SetSamplePublicURL(const string& _samplePublicURL)
{
    m_samplePublicURL = _samplePublicURL;
    m_samplePublicURLHasBeenSet = true;
}

bool CreateCRWorkRequest::SamplePublicURLHasBeenSet() const
{
    return m_samplePublicURLHasBeenSet;
}

string CreateCRWorkRequest::GetGrantType() const
{
    return m_grantType;
}

void CreateCRWorkRequest::SetGrantType(const string& _grantType)
{
    m_grantType = _grantType;
    m_grantTypeHasBeenSet = true;
}

bool CreateCRWorkRequest::GrantTypeHasBeenSet() const
{
    return m_grantTypeHasBeenSet;
}

string CreateCRWorkRequest::GetIsMonitor() const
{
    return m_isMonitor;
}

void CreateCRWorkRequest::SetIsMonitor(const string& _isMonitor)
{
    m_isMonitor = _isMonitor;
    m_isMonitorHasBeenSet = true;
}

bool CreateCRWorkRequest::IsMonitorHasBeenSet() const
{
    return m_isMonitorHasBeenSet;
}

string CreateCRWorkRequest::GetIsCert() const
{
    return m_isCert;
}

void CreateCRWorkRequest::SetIsCert(const string& _isCert)
{
    m_isCert = _isCert;
    m_isCertHasBeenSet = true;
}

bool CreateCRWorkRequest::IsCertHasBeenSet() const
{
    return m_isCertHasBeenSet;
}

string CreateCRWorkRequest::GetCertUrl() const
{
    return m_certUrl;
}

void CreateCRWorkRequest::SetCertUrl(const string& _certUrl)
{
    m_certUrl = _certUrl;
    m_certUrlHasBeenSet = true;
}

bool CreateCRWorkRequest::CertUrlHasBeenSet() const
{
    return m_certUrlHasBeenSet;
}

string CreateCRWorkRequest::GetMonitorUrl() const
{
    return m_monitorUrl;
}

void CreateCRWorkRequest::SetMonitorUrl(const string& _monitorUrl)
{
    m_monitorUrl = _monitorUrl;
    m_monitorUrlHasBeenSet = true;
}

bool CreateCRWorkRequest::MonitorUrlHasBeenSet() const
{
    return m_monitorUrlHasBeenSet;
}

string CreateCRWorkRequest::GetProduceType() const
{
    return m_produceType;
}

void CreateCRWorkRequest::SetProduceType(const string& _produceType)
{
    m_produceType = _produceType;
    m_produceTypeHasBeenSet = true;
}

bool CreateCRWorkRequest::ProduceTypeHasBeenSet() const
{
    return m_produceTypeHasBeenSet;
}

vector<string> CreateCRWorkRequest::GetWhiteLists() const
{
    return m_whiteLists;
}

void CreateCRWorkRequest::SetWhiteLists(const vector<string>& _whiteLists)
{
    m_whiteLists = _whiteLists;
    m_whiteListsHasBeenSet = true;
}

bool CreateCRWorkRequest::WhiteListsHasBeenSet() const
{
    return m_whiteListsHasBeenSet;
}

int64_t CreateCRWorkRequest::GetWorkId() const
{
    return m_workId;
}

void CreateCRWorkRequest::SetWorkId(const int64_t& _workId)
{
    m_workId = _workId;
    m_workIdHasBeenSet = true;
}

bool CreateCRWorkRequest::WorkIdHasBeenSet() const
{
    return m_workIdHasBeenSet;
}

string CreateCRWorkRequest::GetProducerName() const
{
    return m_producerName;
}

void CreateCRWorkRequest::SetProducerName(const string& _producerName)
{
    m_producerName = _producerName;
    m_producerNameHasBeenSet = true;
}

bool CreateCRWorkRequest::ProducerNameHasBeenSet() const
{
    return m_producerNameHasBeenSet;
}

string CreateCRWorkRequest::GetNickname() const
{
    return m_nickname;
}

void CreateCRWorkRequest::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool CreateCRWorkRequest::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string CreateCRWorkRequest::GetAuthorization() const
{
    return m_authorization;
}

void CreateCRWorkRequest::SetAuthorization(const string& _authorization)
{
    m_authorization = _authorization;
    m_authorizationHasBeenSet = true;
}

bool CreateCRWorkRequest::AuthorizationHasBeenSet() const
{
    return m_authorizationHasBeenSet;
}

string CreateCRWorkRequest::GetAuthorizationStartTime() const
{
    return m_authorizationStartTime;
}

void CreateCRWorkRequest::SetAuthorizationStartTime(const string& _authorizationStartTime)
{
    m_authorizationStartTime = _authorizationStartTime;
    m_authorizationStartTimeHasBeenSet = true;
}

bool CreateCRWorkRequest::AuthorizationStartTimeHasBeenSet() const
{
    return m_authorizationStartTimeHasBeenSet;
}

string CreateCRWorkRequest::GetAuthorizationEndTime() const
{
    return m_authorizationEndTime;
}

void CreateCRWorkRequest::SetAuthorizationEndTime(const string& _authorizationEndTime)
{
    m_authorizationEndTime = _authorizationEndTime;
    m_authorizationEndTimeHasBeenSet = true;
}

bool CreateCRWorkRequest::AuthorizationEndTimeHasBeenSet() const
{
    return m_authorizationEndTimeHasBeenSet;
}

string CreateCRWorkRequest::GetContentType() const
{
    return m_contentType;
}

void CreateCRWorkRequest::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool CreateCRWorkRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string CreateCRWorkRequest::GetContent() const
{
    return m_content;
}

void CreateCRWorkRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CreateCRWorkRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string CreateCRWorkRequest::GetMonitorEndTime() const
{
    return m_monitorEndTime;
}

void CreateCRWorkRequest::SetMonitorEndTime(const string& _monitorEndTime)
{
    m_monitorEndTime = _monitorEndTime;
    m_monitorEndTimeHasBeenSet = true;
}

bool CreateCRWorkRequest::MonitorEndTimeHasBeenSet() const
{
    return m_monitorEndTimeHasBeenSet;
}

string CreateCRWorkRequest::GetApplierId() const
{
    return m_applierId;
}

void CreateCRWorkRequest::SetApplierId(const string& _applierId)
{
    m_applierId = _applierId;
    m_applierIdHasBeenSet = true;
}

bool CreateCRWorkRequest::ApplierIdHasBeenSet() const
{
    return m_applierIdHasBeenSet;
}

string CreateCRWorkRequest::GetApplierName() const
{
    return m_applierName;
}

void CreateCRWorkRequest::SetApplierName(const string& _applierName)
{
    m_applierName = _applierName;
    m_applierNameHasBeenSet = true;
}

bool CreateCRWorkRequest::ApplierNameHasBeenSet() const
{
    return m_applierNameHasBeenSet;
}

string CreateCRWorkRequest::GetIsAutoRenew() const
{
    return m_isAutoRenew;
}

void CreateCRWorkRequest::SetIsAutoRenew(const string& _isAutoRenew)
{
    m_isAutoRenew = _isAutoRenew;
    m_isAutoRenewHasBeenSet = true;
}

bool CreateCRWorkRequest::IsAutoRenewHasBeenSet() const
{
    return m_isAutoRenewHasBeenSet;
}


