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

#include <tencentcloud/csip/v20221121/model/ImageVulBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageVulBaseInfo::ImageVulBaseInfo() :
    m_affectedComponentsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cVEIDHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_checkMethodHasBeenSet(false),
    m_defendStatusHasBeenSet(false),
    m_supportFixHasBeenSet(false),
    m_cvssScoreHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_cVSSLevelHasBeenSet(false),
    m_vulAffectHasBeenSet(false),
    m_kVERecordHasBeenSet(false),
    m_ePSSScoreHasBeenSet(false),
    m_affectVendorHasBeenSet(false),
    m_affectProductHasBeenSet(false),
    m_mechanismHasBeenSet(false),
    m_preconditionHasBeenSet(false),
    m_fixSolutionHasBeenSet(false),
    m_refLinkHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_pocIdHasBeenSet(false)
{
}

CoreInternalOutcome ImageVulBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AffectedComponents") && !value["AffectedComponents"].IsNull())
    {
        if (!value["AffectedComponents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.AffectedComponents` is not array type"));

        const rapidjson::Value &tmpValue = value["AffectedComponents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulAffectedComponent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_affectedComponents.push_back(item);
        }
        m_affectedComponentsHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CVEID") && !value["CVEID"].IsNull())
    {
        if (!value["CVEID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.CVEID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEID = string(value["CVEID"].GetString());
        m_cVEIDHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("CheckMethod") && !value["CheckMethod"].IsNull())
    {
        if (!value["CheckMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.CheckMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkMethod = string(value["CheckMethod"].GetString());
        m_checkMethodHasBeenSet = true;
    }

    if (value.HasMember("DefendStatus") && !value["DefendStatus"].IsNull())
    {
        if (!value["DefendStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.DefendStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defendStatus = string(value["DefendStatus"].GetString());
        m_defendStatusHasBeenSet = true;
    }

    if (value.HasMember("SupportFix") && !value["SupportFix"].IsNull())
    {
        if (!value["SupportFix"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.SupportFix` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportFix = value["SupportFix"].GetBool();
        m_supportFixHasBeenSet = true;
    }

    if (value.HasMember("CvssScore") && !value["CvssScore"].IsNull())
    {
        if (!value["CvssScore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.CvssScore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvssScore = string(value["CvssScore"].GetString());
        m_cvssScoreHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.Summary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summary = string(value["Summary"].GetString());
        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("CVSSLevel") && !value["CVSSLevel"].IsNull())
    {
        if (!value["CVSSLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.CVSSLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVSSLevel = string(value["CVSSLevel"].GetString());
        m_cVSSLevelHasBeenSet = true;
    }

    if (value.HasMember("VulAffect") && !value["VulAffect"].IsNull())
    {
        if (!value["VulAffect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.VulAffect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulAffect = string(value["VulAffect"].GetString());
        m_vulAffectHasBeenSet = true;
    }

    if (value.HasMember("KVERecord") && !value["KVERecord"].IsNull())
    {
        if (!value["KVERecord"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.KVERecord` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_kVERecord = value["KVERecord"].GetBool();
        m_kVERecordHasBeenSet = true;
    }

    if (value.HasMember("EPSSScore") && !value["EPSSScore"].IsNull())
    {
        if (!value["EPSSScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.EPSSScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ePSSScore = value["EPSSScore"].GetDouble();
        m_ePSSScoreHasBeenSet = true;
    }

    if (value.HasMember("AffectVendor") && !value["AffectVendor"].IsNull())
    {
        if (!value["AffectVendor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.AffectVendor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectVendor = string(value["AffectVendor"].GetString());
        m_affectVendorHasBeenSet = true;
    }

    if (value.HasMember("AffectProduct") && !value["AffectProduct"].IsNull())
    {
        if (!value["AffectProduct"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.AffectProduct` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectProduct = string(value["AffectProduct"].GetString());
        m_affectProductHasBeenSet = true;
    }

    if (value.HasMember("Mechanism") && !value["Mechanism"].IsNull())
    {
        if (!value["Mechanism"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.Mechanism` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mechanism = string(value["Mechanism"].GetString());
        m_mechanismHasBeenSet = true;
    }

    if (value.HasMember("Precondition") && !value["Precondition"].IsNull())
    {
        if (!value["Precondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.Precondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_precondition = string(value["Precondition"].GetString());
        m_preconditionHasBeenSet = true;
    }

    if (value.HasMember("FixSolution") && !value["FixSolution"].IsNull())
    {
        if (!value["FixSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.FixSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixSolution = string(value["FixSolution"].GetString());
        m_fixSolutionHasBeenSet = true;
    }

    if (value.HasMember("RefLink") && !value["RefLink"].IsNull())
    {
        if (!value["RefLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.RefLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refLink = string(value["RefLink"].GetString());
        m_refLinkHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.Label` is not array type"));

        const rapidjson::Value &tmpValue = value["Label"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_label.push_back((*itr).GetString());
        }
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("PocId") && !value["PocId"].IsNull())
    {
        if (!value["PocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulBaseInfo.PocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pocId = string(value["PocId"].GetString());
        m_pocIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageVulBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_affectedComponentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedComponents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_affectedComponents.begin(); itr != m_affectedComponents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_cVEIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVEID.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_checkMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_defendStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defendStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_supportFixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportFix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportFix, allocator);
    }

    if (m_cvssScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvssScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvssScore.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summary.c_str(), allocator).Move(), allocator);
    }

    if (m_cVSSLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSSLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVSSLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_vulAffectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulAffect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulAffect.c_str(), allocator).Move(), allocator);
    }

    if (m_kVERecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KVERecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kVERecord, allocator);
    }

    if (m_ePSSScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EPSSScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ePSSScore, allocator);
    }

    if (m_affectVendorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectVendor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_affectVendor.c_str(), allocator).Move(), allocator);
    }

    if (m_affectProductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectProduct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_affectProduct.c_str(), allocator).Move(), allocator);
    }

    if (m_mechanismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mechanism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mechanism.c_str(), allocator).Move(), allocator);
    }

    if (m_preconditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Precondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_precondition.c_str(), allocator).Move(), allocator);
    }

    if (m_fixSolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixSolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixSolution.c_str(), allocator).Move(), allocator);
    }

    if (m_refLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refLink.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_label.begin(); itr != m_label.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pocIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pocId.c_str(), allocator).Move(), allocator);
    }

}


vector<VulAffectedComponent> ImageVulBaseInfo::GetAffectedComponents() const
{
    return m_affectedComponents;
}

void ImageVulBaseInfo::SetAffectedComponents(const vector<VulAffectedComponent>& _affectedComponents)
{
    m_affectedComponents = _affectedComponents;
    m_affectedComponentsHasBeenSet = true;
}

bool ImageVulBaseInfo::AffectedComponentsHasBeenSet() const
{
    return m_affectedComponentsHasBeenSet;
}

string ImageVulBaseInfo::GetName() const
{
    return m_name;
}

void ImageVulBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageVulBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImageVulBaseInfo::GetCVEID() const
{
    return m_cVEID;
}

void ImageVulBaseInfo::SetCVEID(const string& _cVEID)
{
    m_cVEID = _cVEID;
    m_cVEIDHasBeenSet = true;
}

bool ImageVulBaseInfo::CVEIDHasBeenSet() const
{
    return m_cVEIDHasBeenSet;
}

string ImageVulBaseInfo::GetCategory() const
{
    return m_category;
}

void ImageVulBaseInfo::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool ImageVulBaseInfo::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string ImageVulBaseInfo::GetPublishTime() const
{
    return m_publishTime;
}

void ImageVulBaseInfo::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool ImageVulBaseInfo::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

string ImageVulBaseInfo::GetCheckMethod() const
{
    return m_checkMethod;
}

void ImageVulBaseInfo::SetCheckMethod(const string& _checkMethod)
{
    m_checkMethod = _checkMethod;
    m_checkMethodHasBeenSet = true;
}

bool ImageVulBaseInfo::CheckMethodHasBeenSet() const
{
    return m_checkMethodHasBeenSet;
}

string ImageVulBaseInfo::GetDefendStatus() const
{
    return m_defendStatus;
}

void ImageVulBaseInfo::SetDefendStatus(const string& _defendStatus)
{
    m_defendStatus = _defendStatus;
    m_defendStatusHasBeenSet = true;
}

bool ImageVulBaseInfo::DefendStatusHasBeenSet() const
{
    return m_defendStatusHasBeenSet;
}

bool ImageVulBaseInfo::GetSupportFix() const
{
    return m_supportFix;
}

void ImageVulBaseInfo::SetSupportFix(const bool& _supportFix)
{
    m_supportFix = _supportFix;
    m_supportFixHasBeenSet = true;
}

bool ImageVulBaseInfo::SupportFixHasBeenSet() const
{
    return m_supportFixHasBeenSet;
}

string ImageVulBaseInfo::GetCvssScore() const
{
    return m_cvssScore;
}

void ImageVulBaseInfo::SetCvssScore(const string& _cvssScore)
{
    m_cvssScore = _cvssScore;
    m_cvssScoreHasBeenSet = true;
}

bool ImageVulBaseInfo::CvssScoreHasBeenSet() const
{
    return m_cvssScoreHasBeenSet;
}

string ImageVulBaseInfo::GetRemark() const
{
    return m_remark;
}

void ImageVulBaseInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ImageVulBaseInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ImageVulBaseInfo::GetSummary() const
{
    return m_summary;
}

void ImageVulBaseInfo::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool ImageVulBaseInfo::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

string ImageVulBaseInfo::GetCVSSLevel() const
{
    return m_cVSSLevel;
}

void ImageVulBaseInfo::SetCVSSLevel(const string& _cVSSLevel)
{
    m_cVSSLevel = _cVSSLevel;
    m_cVSSLevelHasBeenSet = true;
}

bool ImageVulBaseInfo::CVSSLevelHasBeenSet() const
{
    return m_cVSSLevelHasBeenSet;
}

string ImageVulBaseInfo::GetVulAffect() const
{
    return m_vulAffect;
}

void ImageVulBaseInfo::SetVulAffect(const string& _vulAffect)
{
    m_vulAffect = _vulAffect;
    m_vulAffectHasBeenSet = true;
}

bool ImageVulBaseInfo::VulAffectHasBeenSet() const
{
    return m_vulAffectHasBeenSet;
}

bool ImageVulBaseInfo::GetKVERecord() const
{
    return m_kVERecord;
}

void ImageVulBaseInfo::SetKVERecord(const bool& _kVERecord)
{
    m_kVERecord = _kVERecord;
    m_kVERecordHasBeenSet = true;
}

bool ImageVulBaseInfo::KVERecordHasBeenSet() const
{
    return m_kVERecordHasBeenSet;
}

double ImageVulBaseInfo::GetEPSSScore() const
{
    return m_ePSSScore;
}

void ImageVulBaseInfo::SetEPSSScore(const double& _ePSSScore)
{
    m_ePSSScore = _ePSSScore;
    m_ePSSScoreHasBeenSet = true;
}

bool ImageVulBaseInfo::EPSSScoreHasBeenSet() const
{
    return m_ePSSScoreHasBeenSet;
}

string ImageVulBaseInfo::GetAffectVendor() const
{
    return m_affectVendor;
}

void ImageVulBaseInfo::SetAffectVendor(const string& _affectVendor)
{
    m_affectVendor = _affectVendor;
    m_affectVendorHasBeenSet = true;
}

bool ImageVulBaseInfo::AffectVendorHasBeenSet() const
{
    return m_affectVendorHasBeenSet;
}

string ImageVulBaseInfo::GetAffectProduct() const
{
    return m_affectProduct;
}

void ImageVulBaseInfo::SetAffectProduct(const string& _affectProduct)
{
    m_affectProduct = _affectProduct;
    m_affectProductHasBeenSet = true;
}

bool ImageVulBaseInfo::AffectProductHasBeenSet() const
{
    return m_affectProductHasBeenSet;
}

string ImageVulBaseInfo::GetMechanism() const
{
    return m_mechanism;
}

void ImageVulBaseInfo::SetMechanism(const string& _mechanism)
{
    m_mechanism = _mechanism;
    m_mechanismHasBeenSet = true;
}

bool ImageVulBaseInfo::MechanismHasBeenSet() const
{
    return m_mechanismHasBeenSet;
}

string ImageVulBaseInfo::GetPrecondition() const
{
    return m_precondition;
}

void ImageVulBaseInfo::SetPrecondition(const string& _precondition)
{
    m_precondition = _precondition;
    m_preconditionHasBeenSet = true;
}

bool ImageVulBaseInfo::PreconditionHasBeenSet() const
{
    return m_preconditionHasBeenSet;
}

string ImageVulBaseInfo::GetFixSolution() const
{
    return m_fixSolution;
}

void ImageVulBaseInfo::SetFixSolution(const string& _fixSolution)
{
    m_fixSolution = _fixSolution;
    m_fixSolutionHasBeenSet = true;
}

bool ImageVulBaseInfo::FixSolutionHasBeenSet() const
{
    return m_fixSolutionHasBeenSet;
}

string ImageVulBaseInfo::GetRefLink() const
{
    return m_refLink;
}

void ImageVulBaseInfo::SetRefLink(const string& _refLink)
{
    m_refLink = _refLink;
    m_refLinkHasBeenSet = true;
}

bool ImageVulBaseInfo::RefLinkHasBeenSet() const
{
    return m_refLinkHasBeenSet;
}

vector<string> ImageVulBaseInfo::GetLabel() const
{
    return m_label;
}

void ImageVulBaseInfo::SetLabel(const vector<string>& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool ImageVulBaseInfo::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string ImageVulBaseInfo::GetPocId() const
{
    return m_pocId;
}

void ImageVulBaseInfo::SetPocId(const string& _pocId)
{
    m_pocId = _pocId;
    m_pocIdHasBeenSet = true;
}

bool ImageVulBaseInfo::PocIdHasBeenSet() const
{
    return m_pocIdHasBeenSet;
}

