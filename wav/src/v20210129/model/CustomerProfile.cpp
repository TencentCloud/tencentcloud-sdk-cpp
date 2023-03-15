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

#include <tencentcloud/wav/v20210129/model/CustomerProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

CustomerProfile::CustomerProfile() :
    m_customerIdHasBeenSet(false),
    m_dealerCodeHasBeenSet(false),
    m_unionIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_ageRangeNameHasBeenSet(false),
    m_jobTypeNameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_leadsProcessStatusHasBeenSet(false),
    m_leadTypeHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_leadsLevelCodeHasBeenSet(false),
    m_vehicleBrandCodeHasBeenSet(false),
    m_vehicleSeriesCodeHasBeenSet(false),
    m_vehicleTypeCodeHasBeenSet(false),
    m_vehiclePurposeHasBeenSet(false),
    m_purchaseConcernHasBeenSet(false),
    m_salesNameHasBeenSet(false),
    m_salesPhoneHasBeenSet(false),
    m_realArrivalTimeHasBeenSet(false),
    m_completeTestDriveTimeHasBeenSet(false),
    m_orderTimeHasBeenSet(false),
    m_deliveryTimeHasBeenSet(false),
    m_invoiceTimeHasBeenSet(false),
    m_loseTimeHasBeenSet(false),
    m_createdAtTimeHasBeenSet(false),
    m_importAtTimeHasBeenSet(false),
    m_distributeTimeHasBeenSet(false),
    m_leadCreateTimeHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_orgIdListHasBeenSet(false),
    m_introducerHasBeenSet(false),
    m_introducerPhoneHasBeenSet(false),
    m_followTimeHasBeenSet(false),
    m_nextFollowTimeHasBeenSet(false),
    m_enterpriseTagsHasBeenSet(false),
    m_channelTagsHasBeenSet(false)
{
}

CoreInternalOutcome CustomerProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerId") && !value["CustomerId"].IsNull())
    {
        if (!value["CustomerId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.CustomerId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customerId = value["CustomerId"].GetUint64();
        m_customerIdHasBeenSet = true;
    }

    if (value.HasMember("DealerCode") && !value["DealerCode"].IsNull())
    {
        if (!value["DealerCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.DealerCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealerCode = string(value["DealerCode"].GetString());
        m_dealerCodeHasBeenSet = true;
    }

    if (value.HasMember("UnionId") && !value["UnionId"].IsNull())
    {
        if (!value["UnionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.UnionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unionId = string(value["UnionId"].GetString());
        m_unionIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.Gender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetInt64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("AgeRangeName") && !value["AgeRangeName"].IsNull())
    {
        if (!value["AgeRangeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.AgeRangeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ageRangeName = string(value["AgeRangeName"].GetString());
        m_ageRangeNameHasBeenSet = true;
    }

    if (value.HasMember("JobTypeName") && !value["JobTypeName"].IsNull())
    {
        if (!value["JobTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.JobTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobTypeName = string(value["JobTypeName"].GetString());
        m_jobTypeNameHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("LeadsProcessStatus") && !value["LeadsProcessStatus"].IsNull())
    {
        if (!value["LeadsProcessStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.LeadsProcessStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_leadsProcessStatus = value["LeadsProcessStatus"].GetInt64();
        m_leadsProcessStatusHasBeenSet = true;
    }

    if (value.HasMember("LeadType") && !value["LeadType"].IsNull())
    {
        if (!value["LeadType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.LeadType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_leadType = value["LeadType"].GetInt64();
        m_leadTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("LeadsLevelCode") && !value["LeadsLevelCode"].IsNull())
    {
        if (!value["LeadsLevelCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.LeadsLevelCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_leadsLevelCode = string(value["LeadsLevelCode"].GetString());
        m_leadsLevelCodeHasBeenSet = true;
    }

    if (value.HasMember("VehicleBrandCode") && !value["VehicleBrandCode"].IsNull())
    {
        if (!value["VehicleBrandCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.VehicleBrandCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleBrandCode = string(value["VehicleBrandCode"].GetString());
        m_vehicleBrandCodeHasBeenSet = true;
    }

    if (value.HasMember("VehicleSeriesCode") && !value["VehicleSeriesCode"].IsNull())
    {
        if (!value["VehicleSeriesCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.VehicleSeriesCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleSeriesCode = string(value["VehicleSeriesCode"].GetString());
        m_vehicleSeriesCodeHasBeenSet = true;
    }

    if (value.HasMember("VehicleTypeCode") && !value["VehicleTypeCode"].IsNull())
    {
        if (!value["VehicleTypeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.VehicleTypeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleTypeCode = string(value["VehicleTypeCode"].GetString());
        m_vehicleTypeCodeHasBeenSet = true;
    }

    if (value.HasMember("VehiclePurpose") && !value["VehiclePurpose"].IsNull())
    {
        if (!value["VehiclePurpose"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.VehiclePurpose` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vehiclePurpose.Deserialize(value["VehiclePurpose"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vehiclePurposeHasBeenSet = true;
    }

    if (value.HasMember("PurchaseConcern") && !value["PurchaseConcern"].IsNull())
    {
        if (!value["PurchaseConcern"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.PurchaseConcern` is not array type"));

        const rapidjson::Value &tmpValue = value["PurchaseConcern"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PurchaseConcern item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_purchaseConcern.push_back(item);
        }
        m_purchaseConcernHasBeenSet = true;
    }

    if (value.HasMember("SalesName") && !value["SalesName"].IsNull())
    {
        if (!value["SalesName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.SalesName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesName = string(value["SalesName"].GetString());
        m_salesNameHasBeenSet = true;
    }

    if (value.HasMember("SalesPhone") && !value["SalesPhone"].IsNull())
    {
        if (!value["SalesPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.SalesPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesPhone = string(value["SalesPhone"].GetString());
        m_salesPhoneHasBeenSet = true;
    }

    if (value.HasMember("RealArrivalTime") && !value["RealArrivalTime"].IsNull())
    {
        if (!value["RealArrivalTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.RealArrivalTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_realArrivalTime = value["RealArrivalTime"].GetUint64();
        m_realArrivalTimeHasBeenSet = true;
    }

    if (value.HasMember("CompleteTestDriveTime") && !value["CompleteTestDriveTime"].IsNull())
    {
        if (!value["CompleteTestDriveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.CompleteTestDriveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_completeTestDriveTime = string(value["CompleteTestDriveTime"].GetString());
        m_completeTestDriveTimeHasBeenSet = true;
    }

    if (value.HasMember("OrderTime") && !value["OrderTime"].IsNull())
    {
        if (!value["OrderTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.OrderTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderTime = value["OrderTime"].GetUint64();
        m_orderTimeHasBeenSet = true;
    }

    if (value.HasMember("DeliveryTime") && !value["DeliveryTime"].IsNull())
    {
        if (!value["DeliveryTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.DeliveryTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryTime = value["DeliveryTime"].GetUint64();
        m_deliveryTimeHasBeenSet = true;
    }

    if (value.HasMember("InvoiceTime") && !value["InvoiceTime"].IsNull())
    {
        if (!value["InvoiceTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.InvoiceTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceTime = value["InvoiceTime"].GetUint64();
        m_invoiceTimeHasBeenSet = true;
    }

    if (value.HasMember("LoseTime") && !value["LoseTime"].IsNull())
    {
        if (!value["LoseTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.LoseTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loseTime = value["LoseTime"].GetUint64();
        m_loseTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedAtTime") && !value["CreatedAtTime"].IsNull())
    {
        if (!value["CreatedAtTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.CreatedAtTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAtTime = value["CreatedAtTime"].GetUint64();
        m_createdAtTimeHasBeenSet = true;
    }

    if (value.HasMember("ImportAtTime") && !value["ImportAtTime"].IsNull())
    {
        if (!value["ImportAtTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.ImportAtTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_importAtTime = value["ImportAtTime"].GetUint64();
        m_importAtTimeHasBeenSet = true;
    }

    if (value.HasMember("DistributeTime") && !value["DistributeTime"].IsNull())
    {
        if (!value["DistributeTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.DistributeTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_distributeTime = value["DistributeTime"].GetUint64();
        m_distributeTimeHasBeenSet = true;
    }

    if (value.HasMember("LeadCreateTime") && !value["LeadCreateTime"].IsNull())
    {
        if (!value["LeadCreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.LeadCreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leadCreateTime = value["LeadCreateTime"].GetUint64();
        m_leadCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("OrgIdList") && !value["OrgIdList"].IsNull())
    {
        if (!value["OrgIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.OrgIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["OrgIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_orgIdList.push_back((*itr).GetString());
        }
        m_orgIdListHasBeenSet = true;
    }

    if (value.HasMember("Introducer") && !value["Introducer"].IsNull())
    {
        if (!value["Introducer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.Introducer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_introducer = string(value["Introducer"].GetString());
        m_introducerHasBeenSet = true;
    }

    if (value.HasMember("IntroducerPhone") && !value["IntroducerPhone"].IsNull())
    {
        if (!value["IntroducerPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.IntroducerPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_introducerPhone = string(value["IntroducerPhone"].GetString());
        m_introducerPhoneHasBeenSet = true;
    }

    if (value.HasMember("FollowTime") && !value["FollowTime"].IsNull())
    {
        if (!value["FollowTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.FollowTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_followTime = value["FollowTime"].GetUint64();
        m_followTimeHasBeenSet = true;
    }

    if (value.HasMember("NextFollowTime") && !value["NextFollowTime"].IsNull())
    {
        if (!value["NextFollowTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.NextFollowTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nextFollowTime = value["NextFollowTime"].GetUint64();
        m_nextFollowTimeHasBeenSet = true;
    }

    if (value.HasMember("EnterpriseTags") && !value["EnterpriseTags"].IsNull())
    {
        if (!value["EnterpriseTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.EnterpriseTags` is not array type"));

        const rapidjson::Value &tmpValue = value["EnterpriseTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EnterpriseTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_enterpriseTags.push_back(item);
        }
        m_enterpriseTagsHasBeenSet = true;
    }

    if (value.HasMember("ChannelTags") && !value["ChannelTags"].IsNull())
    {
        if (!value["ChannelTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomerProfile.ChannelTags` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChannelTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_channelTags.push_back(item);
        }
        m_channelTagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomerProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerId, allocator);
    }

    if (m_dealerCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealerCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealerCode.c_str(), allocator).Move(), allocator);
    }

    if (m_unionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unionId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gender, allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_ageRangeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgeRangeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ageRangeName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_leadsProcessStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeadsProcessStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leadsProcessStatus, allocator);
    }

    if (m_leadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leadType, allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_leadsLevelCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeadsLevelCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_leadsLevelCode.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleBrandCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleBrandCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleBrandCode.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleSeriesCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleSeriesCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleSeriesCode.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleTypeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleTypeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleTypeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_vehiclePurposeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehiclePurpose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vehiclePurpose.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_purchaseConcernHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurchaseConcern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_purchaseConcern.begin(); itr != m_purchaseConcern.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_salesNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesName.c_str(), allocator).Move(), allocator);
    }

    if (m_salesPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_realArrivalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealArrivalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realArrivalTime, allocator);
    }

    if (m_completeTestDriveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompleteTestDriveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_completeTestDriveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderTime, allocator);
    }

    if (m_deliveryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliveryTime, allocator);
    }

    if (m_invoiceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invoiceTime, allocator);
    }

    if (m_loseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loseTime, allocator);
    }

    if (m_createdAtTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAtTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAtTime, allocator);
    }

    if (m_importAtTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportAtTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_importAtTime, allocator);
    }

    if (m_distributeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistributeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_distributeTime, allocator);
    }

    if (m_leadCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeadCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leadCreateTime, allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_orgIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_orgIdList.begin(); itr != m_orgIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_introducerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Introducer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_introducer.c_str(), allocator).Move(), allocator);
    }

    if (m_introducerPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntroducerPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_introducerPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_followTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_followTime, allocator);
    }

    if (m_nextFollowTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextFollowTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nextFollowTime, allocator);
    }

    if (m_enterpriseTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_enterpriseTags.begin(); itr != m_enterpriseTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_channelTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_channelTags.begin(); itr != m_channelTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t CustomerProfile::GetCustomerId() const
{
    return m_customerId;
}

void CustomerProfile::SetCustomerId(const uint64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool CustomerProfile::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string CustomerProfile::GetDealerCode() const
{
    return m_dealerCode;
}

void CustomerProfile::SetDealerCode(const string& _dealerCode)
{
    m_dealerCode = _dealerCode;
    m_dealerCodeHasBeenSet = true;
}

bool CustomerProfile::DealerCodeHasBeenSet() const
{
    return m_dealerCodeHasBeenSet;
}

string CustomerProfile::GetUnionId() const
{
    return m_unionId;
}

void CustomerProfile::SetUnionId(const string& _unionId)
{
    m_unionId = _unionId;
    m_unionIdHasBeenSet = true;
}

bool CustomerProfile::UnionIdHasBeenSet() const
{
    return m_unionIdHasBeenSet;
}

string CustomerProfile::GetCreateTime() const
{
    return m_createTime;
}

void CustomerProfile::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CustomerProfile::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CustomerProfile::GetUserName() const
{
    return m_userName;
}

void CustomerProfile::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CustomerProfile::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

int64_t CustomerProfile::GetGender() const
{
    return m_gender;
}

void CustomerProfile::SetGender(const int64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool CustomerProfile::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string CustomerProfile::GetPhone() const
{
    return m_phone;
}

void CustomerProfile::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool CustomerProfile::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string CustomerProfile::GetAgeRangeName() const
{
    return m_ageRangeName;
}

void CustomerProfile::SetAgeRangeName(const string& _ageRangeName)
{
    m_ageRangeName = _ageRangeName;
    m_ageRangeNameHasBeenSet = true;
}

bool CustomerProfile::AgeRangeNameHasBeenSet() const
{
    return m_ageRangeNameHasBeenSet;
}

string CustomerProfile::GetJobTypeName() const
{
    return m_jobTypeName;
}

void CustomerProfile::SetJobTypeName(const string& _jobTypeName)
{
    m_jobTypeName = _jobTypeName;
    m_jobTypeNameHasBeenSet = true;
}

bool CustomerProfile::JobTypeNameHasBeenSet() const
{
    return m_jobTypeNameHasBeenSet;
}

string CustomerProfile::GetAddress() const
{
    return m_address;
}

void CustomerProfile::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool CustomerProfile::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

int64_t CustomerProfile::GetLeadsProcessStatus() const
{
    return m_leadsProcessStatus;
}

void CustomerProfile::SetLeadsProcessStatus(const int64_t& _leadsProcessStatus)
{
    m_leadsProcessStatus = _leadsProcessStatus;
    m_leadsProcessStatusHasBeenSet = true;
}

bool CustomerProfile::LeadsProcessStatusHasBeenSet() const
{
    return m_leadsProcessStatusHasBeenSet;
}

int64_t CustomerProfile::GetLeadType() const
{
    return m_leadType;
}

void CustomerProfile::SetLeadType(const int64_t& _leadType)
{
    m_leadType = _leadType;
    m_leadTypeHasBeenSet = true;
}

bool CustomerProfile::LeadTypeHasBeenSet() const
{
    return m_leadTypeHasBeenSet;
}

string CustomerProfile::GetSourceName() const
{
    return m_sourceName;
}

void CustomerProfile::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool CustomerProfile::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string CustomerProfile::GetLeadsLevelCode() const
{
    return m_leadsLevelCode;
}

void CustomerProfile::SetLeadsLevelCode(const string& _leadsLevelCode)
{
    m_leadsLevelCode = _leadsLevelCode;
    m_leadsLevelCodeHasBeenSet = true;
}

bool CustomerProfile::LeadsLevelCodeHasBeenSet() const
{
    return m_leadsLevelCodeHasBeenSet;
}

string CustomerProfile::GetVehicleBrandCode() const
{
    return m_vehicleBrandCode;
}

void CustomerProfile::SetVehicleBrandCode(const string& _vehicleBrandCode)
{
    m_vehicleBrandCode = _vehicleBrandCode;
    m_vehicleBrandCodeHasBeenSet = true;
}

bool CustomerProfile::VehicleBrandCodeHasBeenSet() const
{
    return m_vehicleBrandCodeHasBeenSet;
}

string CustomerProfile::GetVehicleSeriesCode() const
{
    return m_vehicleSeriesCode;
}

void CustomerProfile::SetVehicleSeriesCode(const string& _vehicleSeriesCode)
{
    m_vehicleSeriesCode = _vehicleSeriesCode;
    m_vehicleSeriesCodeHasBeenSet = true;
}

bool CustomerProfile::VehicleSeriesCodeHasBeenSet() const
{
    return m_vehicleSeriesCodeHasBeenSet;
}

string CustomerProfile::GetVehicleTypeCode() const
{
    return m_vehicleTypeCode;
}

void CustomerProfile::SetVehicleTypeCode(const string& _vehicleTypeCode)
{
    m_vehicleTypeCode = _vehicleTypeCode;
    m_vehicleTypeCodeHasBeenSet = true;
}

bool CustomerProfile::VehicleTypeCodeHasBeenSet() const
{
    return m_vehicleTypeCodeHasBeenSet;
}

VehiclePurpose CustomerProfile::GetVehiclePurpose() const
{
    return m_vehiclePurpose;
}

void CustomerProfile::SetVehiclePurpose(const VehiclePurpose& _vehiclePurpose)
{
    m_vehiclePurpose = _vehiclePurpose;
    m_vehiclePurposeHasBeenSet = true;
}

bool CustomerProfile::VehiclePurposeHasBeenSet() const
{
    return m_vehiclePurposeHasBeenSet;
}

vector<PurchaseConcern> CustomerProfile::GetPurchaseConcern() const
{
    return m_purchaseConcern;
}

void CustomerProfile::SetPurchaseConcern(const vector<PurchaseConcern>& _purchaseConcern)
{
    m_purchaseConcern = _purchaseConcern;
    m_purchaseConcernHasBeenSet = true;
}

bool CustomerProfile::PurchaseConcernHasBeenSet() const
{
    return m_purchaseConcernHasBeenSet;
}

string CustomerProfile::GetSalesName() const
{
    return m_salesName;
}

void CustomerProfile::SetSalesName(const string& _salesName)
{
    m_salesName = _salesName;
    m_salesNameHasBeenSet = true;
}

bool CustomerProfile::SalesNameHasBeenSet() const
{
    return m_salesNameHasBeenSet;
}

string CustomerProfile::GetSalesPhone() const
{
    return m_salesPhone;
}

void CustomerProfile::SetSalesPhone(const string& _salesPhone)
{
    m_salesPhone = _salesPhone;
    m_salesPhoneHasBeenSet = true;
}

bool CustomerProfile::SalesPhoneHasBeenSet() const
{
    return m_salesPhoneHasBeenSet;
}

uint64_t CustomerProfile::GetRealArrivalTime() const
{
    return m_realArrivalTime;
}

void CustomerProfile::SetRealArrivalTime(const uint64_t& _realArrivalTime)
{
    m_realArrivalTime = _realArrivalTime;
    m_realArrivalTimeHasBeenSet = true;
}

bool CustomerProfile::RealArrivalTimeHasBeenSet() const
{
    return m_realArrivalTimeHasBeenSet;
}

string CustomerProfile::GetCompleteTestDriveTime() const
{
    return m_completeTestDriveTime;
}

void CustomerProfile::SetCompleteTestDriveTime(const string& _completeTestDriveTime)
{
    m_completeTestDriveTime = _completeTestDriveTime;
    m_completeTestDriveTimeHasBeenSet = true;
}

bool CustomerProfile::CompleteTestDriveTimeHasBeenSet() const
{
    return m_completeTestDriveTimeHasBeenSet;
}

uint64_t CustomerProfile::GetOrderTime() const
{
    return m_orderTime;
}

void CustomerProfile::SetOrderTime(const uint64_t& _orderTime)
{
    m_orderTime = _orderTime;
    m_orderTimeHasBeenSet = true;
}

bool CustomerProfile::OrderTimeHasBeenSet() const
{
    return m_orderTimeHasBeenSet;
}

uint64_t CustomerProfile::GetDeliveryTime() const
{
    return m_deliveryTime;
}

void CustomerProfile::SetDeliveryTime(const uint64_t& _deliveryTime)
{
    m_deliveryTime = _deliveryTime;
    m_deliveryTimeHasBeenSet = true;
}

bool CustomerProfile::DeliveryTimeHasBeenSet() const
{
    return m_deliveryTimeHasBeenSet;
}

uint64_t CustomerProfile::GetInvoiceTime() const
{
    return m_invoiceTime;
}

void CustomerProfile::SetInvoiceTime(const uint64_t& _invoiceTime)
{
    m_invoiceTime = _invoiceTime;
    m_invoiceTimeHasBeenSet = true;
}

bool CustomerProfile::InvoiceTimeHasBeenSet() const
{
    return m_invoiceTimeHasBeenSet;
}

uint64_t CustomerProfile::GetLoseTime() const
{
    return m_loseTime;
}

void CustomerProfile::SetLoseTime(const uint64_t& _loseTime)
{
    m_loseTime = _loseTime;
    m_loseTimeHasBeenSet = true;
}

bool CustomerProfile::LoseTimeHasBeenSet() const
{
    return m_loseTimeHasBeenSet;
}

uint64_t CustomerProfile::GetCreatedAtTime() const
{
    return m_createdAtTime;
}

void CustomerProfile::SetCreatedAtTime(const uint64_t& _createdAtTime)
{
    m_createdAtTime = _createdAtTime;
    m_createdAtTimeHasBeenSet = true;
}

bool CustomerProfile::CreatedAtTimeHasBeenSet() const
{
    return m_createdAtTimeHasBeenSet;
}

uint64_t CustomerProfile::GetImportAtTime() const
{
    return m_importAtTime;
}

void CustomerProfile::SetImportAtTime(const uint64_t& _importAtTime)
{
    m_importAtTime = _importAtTime;
    m_importAtTimeHasBeenSet = true;
}

bool CustomerProfile::ImportAtTimeHasBeenSet() const
{
    return m_importAtTimeHasBeenSet;
}

uint64_t CustomerProfile::GetDistributeTime() const
{
    return m_distributeTime;
}

void CustomerProfile::SetDistributeTime(const uint64_t& _distributeTime)
{
    m_distributeTime = _distributeTime;
    m_distributeTimeHasBeenSet = true;
}

bool CustomerProfile::DistributeTimeHasBeenSet() const
{
    return m_distributeTimeHasBeenSet;
}

uint64_t CustomerProfile::GetLeadCreateTime() const
{
    return m_leadCreateTime;
}

void CustomerProfile::SetLeadCreateTime(const uint64_t& _leadCreateTime)
{
    m_leadCreateTime = _leadCreateTime;
    m_leadCreateTimeHasBeenSet = true;
}

bool CustomerProfile::LeadCreateTimeHasBeenSet() const
{
    return m_leadCreateTimeHasBeenSet;
}

string CustomerProfile::GetNickname() const
{
    return m_nickname;
}

void CustomerProfile::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool CustomerProfile::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

vector<string> CustomerProfile::GetOrgIdList() const
{
    return m_orgIdList;
}

void CustomerProfile::SetOrgIdList(const vector<string>& _orgIdList)
{
    m_orgIdList = _orgIdList;
    m_orgIdListHasBeenSet = true;
}

bool CustomerProfile::OrgIdListHasBeenSet() const
{
    return m_orgIdListHasBeenSet;
}

string CustomerProfile::GetIntroducer() const
{
    return m_introducer;
}

void CustomerProfile::SetIntroducer(const string& _introducer)
{
    m_introducer = _introducer;
    m_introducerHasBeenSet = true;
}

bool CustomerProfile::IntroducerHasBeenSet() const
{
    return m_introducerHasBeenSet;
}

string CustomerProfile::GetIntroducerPhone() const
{
    return m_introducerPhone;
}

void CustomerProfile::SetIntroducerPhone(const string& _introducerPhone)
{
    m_introducerPhone = _introducerPhone;
    m_introducerPhoneHasBeenSet = true;
}

bool CustomerProfile::IntroducerPhoneHasBeenSet() const
{
    return m_introducerPhoneHasBeenSet;
}

uint64_t CustomerProfile::GetFollowTime() const
{
    return m_followTime;
}

void CustomerProfile::SetFollowTime(const uint64_t& _followTime)
{
    m_followTime = _followTime;
    m_followTimeHasBeenSet = true;
}

bool CustomerProfile::FollowTimeHasBeenSet() const
{
    return m_followTimeHasBeenSet;
}

uint64_t CustomerProfile::GetNextFollowTime() const
{
    return m_nextFollowTime;
}

void CustomerProfile::SetNextFollowTime(const uint64_t& _nextFollowTime)
{
    m_nextFollowTime = _nextFollowTime;
    m_nextFollowTimeHasBeenSet = true;
}

bool CustomerProfile::NextFollowTimeHasBeenSet() const
{
    return m_nextFollowTimeHasBeenSet;
}

vector<EnterpriseTag> CustomerProfile::GetEnterpriseTags() const
{
    return m_enterpriseTags;
}

void CustomerProfile::SetEnterpriseTags(const vector<EnterpriseTag>& _enterpriseTags)
{
    m_enterpriseTags = _enterpriseTags;
    m_enterpriseTagsHasBeenSet = true;
}

bool CustomerProfile::EnterpriseTagsHasBeenSet() const
{
    return m_enterpriseTagsHasBeenSet;
}

vector<ChannelTag> CustomerProfile::GetChannelTags() const
{
    return m_channelTags;
}

void CustomerProfile::SetChannelTags(const vector<ChannelTag>& _channelTags)
{
    m_channelTags = _channelTags;
    m_channelTagsHasBeenSet = true;
}

bool CustomerProfile::ChannelTagsHasBeenSet() const
{
    return m_channelTagsHasBeenSet;
}

