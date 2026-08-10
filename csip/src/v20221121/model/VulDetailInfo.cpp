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

#include <tencentcloud/csip/v20221121/model/VulDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulDetailInfo::VulDetailInfo() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cVEIDHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_checkMethodHasBeenSet(false),
    m_defendStatusHasBeenSet(false),
    m_supportFixHasBeenSet(false),
    m_vRPRatingInfoHasBeenSet(false),
    m_cvssScoreHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_defendHostCountHasBeenSet(false),
    m_notDefendHostCountHasBeenSet(false),
    m_latestScanTimeHasBeenSet(false),
    m_cVSSLevelHasBeenSet(false),
    m_vulAffectHasBeenSet(false),
    m_kVERecordHasBeenSet(false),
    m_kVERecordTimeHasBeenSet(false),
    m_ePSSScoreHasBeenSet(false),
    m_affectVendorHasBeenSet(false),
    m_affectProductHasBeenSet(false),
    m_mechanismHasBeenSet(false),
    m_preconditionHasBeenSet(false),
    m_latestTrendHasBeenSet(false),
    m_fixSolutionHasBeenSet(false),
    m_refLinkHasBeenSet(false),
    m_harmDescriptionHasBeenSet(false),
    m_affectVendorProductHasBeenSet(false)
{
}

CoreInternalOutcome VulDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CVEID") && !value["CVEID"].IsNull())
    {
        if (!value["CVEID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.CVEID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEID = string(value["CVEID"].GetString());
        m_cVEIDHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("CheckMethod") && !value["CheckMethod"].IsNull())
    {
        if (!value["CheckMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.CheckMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkMethod = string(value["CheckMethod"].GetString());
        m_checkMethodHasBeenSet = true;
    }

    if (value.HasMember("DefendStatus") && !value["DefendStatus"].IsNull())
    {
        if (!value["DefendStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.DefendStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defendStatus = string(value["DefendStatus"].GetString());
        m_defendStatusHasBeenSet = true;
    }

    if (value.HasMember("SupportFix") && !value["SupportFix"].IsNull())
    {
        if (!value["SupportFix"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.SupportFix` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportFix = value["SupportFix"].GetBool();
        m_supportFixHasBeenSet = true;
    }

    if (value.HasMember("VRPRatingInfo") && !value["VRPRatingInfo"].IsNull())
    {
        if (!value["VRPRatingInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.VRPRatingInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vRPRatingInfo.Deserialize(value["VRPRatingInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vRPRatingInfoHasBeenSet = true;
    }

    if (value.HasMember("CvssScore") && !value["CvssScore"].IsNull())
    {
        if (!value["CvssScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.CvssScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cvssScore = value["CvssScore"].GetDouble();
        m_cvssScoreHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Label` is not array type"));

        const rapidjson::Value &tmpValue = value["Label"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VPRLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_label.push_back(item);
        }
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Summary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summary = string(value["Summary"].GetString());
        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("DefendHostCount") && !value["DefendHostCount"].IsNull())
    {
        if (!value["DefendHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.DefendHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defendHostCount = value["DefendHostCount"].GetUint64();
        m_defendHostCountHasBeenSet = true;
    }

    if (value.HasMember("NotDefendHostCount") && !value["NotDefendHostCount"].IsNull())
    {
        if (!value["NotDefendHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.NotDefendHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notDefendHostCount = value["NotDefendHostCount"].GetUint64();
        m_notDefendHostCountHasBeenSet = true;
    }

    if (value.HasMember("LatestScanTime") && !value["LatestScanTime"].IsNull())
    {
        if (!value["LatestScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.LatestScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestScanTime = string(value["LatestScanTime"].GetString());
        m_latestScanTimeHasBeenSet = true;
    }

    if (value.HasMember("CVSSLevel") && !value["CVSSLevel"].IsNull())
    {
        if (!value["CVSSLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.CVSSLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVSSLevel = string(value["CVSSLevel"].GetString());
        m_cVSSLevelHasBeenSet = true;
    }

    if (value.HasMember("VulAffect") && !value["VulAffect"].IsNull())
    {
        if (!value["VulAffect"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.VulAffect` is not array type"));

        const rapidjson::Value &tmpValue = value["VulAffect"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulAffect.push_back((*itr).GetString());
        }
        m_vulAffectHasBeenSet = true;
    }

    if (value.HasMember("KVERecord") && !value["KVERecord"].IsNull())
    {
        if (!value["KVERecord"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.KVERecord` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_kVERecord = value["KVERecord"].GetBool();
        m_kVERecordHasBeenSet = true;
    }

    if (value.HasMember("KVERecordTime") && !value["KVERecordTime"].IsNull())
    {
        if (!value["KVERecordTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.KVERecordTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kVERecordTime = string(value["KVERecordTime"].GetString());
        m_kVERecordTimeHasBeenSet = true;
    }

    if (value.HasMember("EPSSScore") && !value["EPSSScore"].IsNull())
    {
        if (!value["EPSSScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.EPSSScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ePSSScore = value["EPSSScore"].GetDouble();
        m_ePSSScoreHasBeenSet = true;
    }

    if (value.HasMember("AffectVendor") && !value["AffectVendor"].IsNull())
    {
        if (!value["AffectVendor"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.AffectVendor` is not array type"));

        const rapidjson::Value &tmpValue = value["AffectVendor"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_affectVendor.push_back((*itr).GetString());
        }
        m_affectVendorHasBeenSet = true;
    }

    if (value.HasMember("AffectProduct") && !value["AffectProduct"].IsNull())
    {
        if (!value["AffectProduct"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.AffectProduct` is not array type"));

        const rapidjson::Value &tmpValue = value["AffectProduct"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_affectProduct.push_back((*itr).GetString());
        }
        m_affectProductHasBeenSet = true;
    }

    if (value.HasMember("Mechanism") && !value["Mechanism"].IsNull())
    {
        if (!value["Mechanism"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Mechanism` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mechanism = string(value["Mechanism"].GetString());
        m_mechanismHasBeenSet = true;
    }

    if (value.HasMember("Precondition") && !value["Precondition"].IsNull())
    {
        if (!value["Precondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Precondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_precondition = string(value["Precondition"].GetString());
        m_preconditionHasBeenSet = true;
    }

    if (value.HasMember("LatestTrend") && !value["LatestTrend"].IsNull())
    {
        if (!value["LatestTrend"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.LatestTrend` is not array type"));

        const rapidjson::Value &tmpValue = value["LatestTrend"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulSpreadTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_latestTrend.push_back(item);
        }
        m_latestTrendHasBeenSet = true;
    }

    if (value.HasMember("FixSolution") && !value["FixSolution"].IsNull())
    {
        if (!value["FixSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.FixSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixSolution = string(value["FixSolution"].GetString());
        m_fixSolutionHasBeenSet = true;
    }

    if (value.HasMember("RefLink") && !value["RefLink"].IsNull())
    {
        if (!value["RefLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.RefLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refLink = string(value["RefLink"].GetString());
        m_refLinkHasBeenSet = true;
    }

    if (value.HasMember("HarmDescription") && !value["HarmDescription"].IsNull())
    {
        if (!value["HarmDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.HarmDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_harmDescription = string(value["HarmDescription"].GetString());
        m_harmDescriptionHasBeenSet = true;
    }

    if (value.HasMember("AffectVendorProduct") && !value["AffectVendorProduct"].IsNull())
    {
        if (!value["AffectVendorProduct"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.AffectVendorProduct` is not array type"));

        const rapidjson::Value &tmpValue = value["AffectVendorProduct"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulVendorProduct item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_affectVendorProduct.push_back(item);
        }
        m_affectVendorProductHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
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

    if (m_vRPRatingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VRPRatingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vRPRatingInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cvssScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvssScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvssScore, allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_label.begin(); itr != m_label.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_defendHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defendHostCount, allocator);
    }

    if (m_notDefendHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotDefendHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notDefendHostCount, allocator);
    }

    if (m_latestScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestScanTime.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulAffect.begin(); itr != m_vulAffect.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_kVERecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KVERecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kVERecord, allocator);
    }

    if (m_kVERecordTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KVERecordTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kVERecordTime.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_affectVendor.begin(); itr != m_affectVendor.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_affectProductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectProduct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_affectProduct.begin(); itr != m_affectProduct.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_latestTrendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestTrend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_latestTrend.begin(); itr != m_latestTrend.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_harmDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HarmDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_harmDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_affectVendorProductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectVendorProduct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_affectVendorProduct.begin(); itr != m_affectVendorProduct.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t VulDetailInfo::GetID() const
{
    return m_iD;
}

void VulDetailInfo::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool VulDetailInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string VulDetailInfo::GetName() const
{
    return m_name;
}

void VulDetailInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VulDetailInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VulDetailInfo::GetCVEID() const
{
    return m_cVEID;
}

void VulDetailInfo::SetCVEID(const string& _cVEID)
{
    m_cVEID = _cVEID;
    m_cVEIDHasBeenSet = true;
}

bool VulDetailInfo::CVEIDHasBeenSet() const
{
    return m_cVEIDHasBeenSet;
}

string VulDetailInfo::GetCategory() const
{
    return m_category;
}

void VulDetailInfo::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool VulDetailInfo::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string VulDetailInfo::GetPublishTime() const
{
    return m_publishTime;
}

void VulDetailInfo::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool VulDetailInfo::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

string VulDetailInfo::GetCheckMethod() const
{
    return m_checkMethod;
}

void VulDetailInfo::SetCheckMethod(const string& _checkMethod)
{
    m_checkMethod = _checkMethod;
    m_checkMethodHasBeenSet = true;
}

bool VulDetailInfo::CheckMethodHasBeenSet() const
{
    return m_checkMethodHasBeenSet;
}

string VulDetailInfo::GetDefendStatus() const
{
    return m_defendStatus;
}

void VulDetailInfo::SetDefendStatus(const string& _defendStatus)
{
    m_defendStatus = _defendStatus;
    m_defendStatusHasBeenSet = true;
}

bool VulDetailInfo::DefendStatusHasBeenSet() const
{
    return m_defendStatusHasBeenSet;
}

bool VulDetailInfo::GetSupportFix() const
{
    return m_supportFix;
}

void VulDetailInfo::SetSupportFix(const bool& _supportFix)
{
    m_supportFix = _supportFix;
    m_supportFixHasBeenSet = true;
}

bool VulDetailInfo::SupportFixHasBeenSet() const
{
    return m_supportFixHasBeenSet;
}

VPRRatingInfo VulDetailInfo::GetVRPRatingInfo() const
{
    return m_vRPRatingInfo;
}

void VulDetailInfo::SetVRPRatingInfo(const VPRRatingInfo& _vRPRatingInfo)
{
    m_vRPRatingInfo = _vRPRatingInfo;
    m_vRPRatingInfoHasBeenSet = true;
}

bool VulDetailInfo::VRPRatingInfoHasBeenSet() const
{
    return m_vRPRatingInfoHasBeenSet;
}

double VulDetailInfo::GetCvssScore() const
{
    return m_cvssScore;
}

void VulDetailInfo::SetCvssScore(const double& _cvssScore)
{
    m_cvssScore = _cvssScore;
    m_cvssScoreHasBeenSet = true;
}

bool VulDetailInfo::CvssScoreHasBeenSet() const
{
    return m_cvssScoreHasBeenSet;
}

vector<VPRLabel> VulDetailInfo::GetLabel() const
{
    return m_label;
}

void VulDetailInfo::SetLabel(const vector<VPRLabel>& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool VulDetailInfo::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string VulDetailInfo::GetRemark() const
{
    return m_remark;
}

void VulDetailInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool VulDetailInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string VulDetailInfo::GetSummary() const
{
    return m_summary;
}

void VulDetailInfo::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool VulDetailInfo::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

uint64_t VulDetailInfo::GetDefendHostCount() const
{
    return m_defendHostCount;
}

void VulDetailInfo::SetDefendHostCount(const uint64_t& _defendHostCount)
{
    m_defendHostCount = _defendHostCount;
    m_defendHostCountHasBeenSet = true;
}

bool VulDetailInfo::DefendHostCountHasBeenSet() const
{
    return m_defendHostCountHasBeenSet;
}

uint64_t VulDetailInfo::GetNotDefendHostCount() const
{
    return m_notDefendHostCount;
}

void VulDetailInfo::SetNotDefendHostCount(const uint64_t& _notDefendHostCount)
{
    m_notDefendHostCount = _notDefendHostCount;
    m_notDefendHostCountHasBeenSet = true;
}

bool VulDetailInfo::NotDefendHostCountHasBeenSet() const
{
    return m_notDefendHostCountHasBeenSet;
}

string VulDetailInfo::GetLatestScanTime() const
{
    return m_latestScanTime;
}

void VulDetailInfo::SetLatestScanTime(const string& _latestScanTime)
{
    m_latestScanTime = _latestScanTime;
    m_latestScanTimeHasBeenSet = true;
}

bool VulDetailInfo::LatestScanTimeHasBeenSet() const
{
    return m_latestScanTimeHasBeenSet;
}

string VulDetailInfo::GetCVSSLevel() const
{
    return m_cVSSLevel;
}

void VulDetailInfo::SetCVSSLevel(const string& _cVSSLevel)
{
    m_cVSSLevel = _cVSSLevel;
    m_cVSSLevelHasBeenSet = true;
}

bool VulDetailInfo::CVSSLevelHasBeenSet() const
{
    return m_cVSSLevelHasBeenSet;
}

vector<string> VulDetailInfo::GetVulAffect() const
{
    return m_vulAffect;
}

void VulDetailInfo::SetVulAffect(const vector<string>& _vulAffect)
{
    m_vulAffect = _vulAffect;
    m_vulAffectHasBeenSet = true;
}

bool VulDetailInfo::VulAffectHasBeenSet() const
{
    return m_vulAffectHasBeenSet;
}

bool VulDetailInfo::GetKVERecord() const
{
    return m_kVERecord;
}

void VulDetailInfo::SetKVERecord(const bool& _kVERecord)
{
    m_kVERecord = _kVERecord;
    m_kVERecordHasBeenSet = true;
}

bool VulDetailInfo::KVERecordHasBeenSet() const
{
    return m_kVERecordHasBeenSet;
}

string VulDetailInfo::GetKVERecordTime() const
{
    return m_kVERecordTime;
}

void VulDetailInfo::SetKVERecordTime(const string& _kVERecordTime)
{
    m_kVERecordTime = _kVERecordTime;
    m_kVERecordTimeHasBeenSet = true;
}

bool VulDetailInfo::KVERecordTimeHasBeenSet() const
{
    return m_kVERecordTimeHasBeenSet;
}

double VulDetailInfo::GetEPSSScore() const
{
    return m_ePSSScore;
}

void VulDetailInfo::SetEPSSScore(const double& _ePSSScore)
{
    m_ePSSScore = _ePSSScore;
    m_ePSSScoreHasBeenSet = true;
}

bool VulDetailInfo::EPSSScoreHasBeenSet() const
{
    return m_ePSSScoreHasBeenSet;
}

vector<string> VulDetailInfo::GetAffectVendor() const
{
    return m_affectVendor;
}

void VulDetailInfo::SetAffectVendor(const vector<string>& _affectVendor)
{
    m_affectVendor = _affectVendor;
    m_affectVendorHasBeenSet = true;
}

bool VulDetailInfo::AffectVendorHasBeenSet() const
{
    return m_affectVendorHasBeenSet;
}

vector<string> VulDetailInfo::GetAffectProduct() const
{
    return m_affectProduct;
}

void VulDetailInfo::SetAffectProduct(const vector<string>& _affectProduct)
{
    m_affectProduct = _affectProduct;
    m_affectProductHasBeenSet = true;
}

bool VulDetailInfo::AffectProductHasBeenSet() const
{
    return m_affectProductHasBeenSet;
}

string VulDetailInfo::GetMechanism() const
{
    return m_mechanism;
}

void VulDetailInfo::SetMechanism(const string& _mechanism)
{
    m_mechanism = _mechanism;
    m_mechanismHasBeenSet = true;
}

bool VulDetailInfo::MechanismHasBeenSet() const
{
    return m_mechanismHasBeenSet;
}

string VulDetailInfo::GetPrecondition() const
{
    return m_precondition;
}

void VulDetailInfo::SetPrecondition(const string& _precondition)
{
    m_precondition = _precondition;
    m_preconditionHasBeenSet = true;
}

bool VulDetailInfo::PreconditionHasBeenSet() const
{
    return m_preconditionHasBeenSet;
}

vector<VulSpreadTrend> VulDetailInfo::GetLatestTrend() const
{
    return m_latestTrend;
}

void VulDetailInfo::SetLatestTrend(const vector<VulSpreadTrend>& _latestTrend)
{
    m_latestTrend = _latestTrend;
    m_latestTrendHasBeenSet = true;
}

bool VulDetailInfo::LatestTrendHasBeenSet() const
{
    return m_latestTrendHasBeenSet;
}

string VulDetailInfo::GetFixSolution() const
{
    return m_fixSolution;
}

void VulDetailInfo::SetFixSolution(const string& _fixSolution)
{
    m_fixSolution = _fixSolution;
    m_fixSolutionHasBeenSet = true;
}

bool VulDetailInfo::FixSolutionHasBeenSet() const
{
    return m_fixSolutionHasBeenSet;
}

string VulDetailInfo::GetRefLink() const
{
    return m_refLink;
}

void VulDetailInfo::SetRefLink(const string& _refLink)
{
    m_refLink = _refLink;
    m_refLinkHasBeenSet = true;
}

bool VulDetailInfo::RefLinkHasBeenSet() const
{
    return m_refLinkHasBeenSet;
}

string VulDetailInfo::GetHarmDescription() const
{
    return m_harmDescription;
}

void VulDetailInfo::SetHarmDescription(const string& _harmDescription)
{
    m_harmDescription = _harmDescription;
    m_harmDescriptionHasBeenSet = true;
}

bool VulDetailInfo::HarmDescriptionHasBeenSet() const
{
    return m_harmDescriptionHasBeenSet;
}

vector<VulVendorProduct> VulDetailInfo::GetAffectVendorProduct() const
{
    return m_affectVendorProduct;
}

void VulDetailInfo::SetAffectVendorProduct(const vector<VulVendorProduct>& _affectVendorProduct)
{
    m_affectVendorProduct = _affectVendorProduct;
    m_affectVendorProductHasBeenSet = true;
}

bool VulDetailInfo::AffectVendorProductHasBeenSet() const
{
    return m_affectVendorProductHasBeenSet;
}

