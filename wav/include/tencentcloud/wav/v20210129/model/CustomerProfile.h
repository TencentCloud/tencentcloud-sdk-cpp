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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_CUSTOMERPROFILE_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_CUSTOMERPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wav/v20210129/model/VehiclePurpose.h>
#include <tencentcloud/wav/v20210129/model/PurchaseConcern.h>
#include <tencentcloud/wav/v20210129/model/EnterpriseTag.h>
#include <tencentcloud/wav/v20210129/model/ChannelTag.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 潜客客户档案信息
                */
                class CustomerProfile : public AbstractModel
                {
                public:
                    CustomerProfile();
                    ~CustomerProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户档案id，客户唯一识别编码
                     * @return CustomerId 客户档案id，客户唯一识别编码
                     * 
                     */
                    uint64_t GetCustomerId() const;

                    /**
                     * 设置客户档案id，客户唯一识别编码
                     * @param _customerId 客户档案id，客户唯一识别编码
                     * 
                     */
                    void SetCustomerId(const uint64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取所属经销商id
                     * @return DealerCode 所属经销商id
                     * 
                     */
                    std::string GetDealerCode() const;

                    /**
                     * 设置所属经销商id
                     * @param _dealerCode 所属经销商id
                     * 
                     */
                    void SetDealerCode(const std::string& _dealerCode);

                    /**
                     * 判断参数 DealerCode 是否已赋值
                     * @return DealerCode 是否已赋值
                     * 
                     */
                    bool DealerCodeHasBeenSet() const;

                    /**
                     * 获取客户在微信生态中唯一识别码
                     * @return UnionId 客户在微信生态中唯一识别码
                     * 
                     */
                    std::string GetUnionId() const;

                    /**
                     * 设置客户在微信生态中唯一识别码
                     * @param _unionId 客户在微信生态中唯一识别码
                     * 
                     */
                    void SetUnionId(const std::string& _unionId);

                    /**
                     * 判断参数 UnionId 是否已赋值
                     * @return UnionId 是否已赋值
                     * 
                     */
                    bool UnionIdHasBeenSet() const;

                    /**
                     * 获取档案创建时间戳，单位：秒
                     * @return CreateTime 档案创建时间戳，单位：秒
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置档案创建时间戳，单位：秒
                     * @param _createTime 档案创建时间戳，单位：秒
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取客户姓名
                     * @return UserName 客户姓名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置客户姓名
                     * @param _userName 客户姓名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取0未知，1：男，2：女
                     * @return Gender 0未知，1：男，2：女
                     * 
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置0未知，1：男，2：女
                     * @param _gender 0未知，1：男，2：女
                     * 
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取客户联系手机号
                     * @return Phone 客户联系手机号
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置客户联系手机号
                     * @param _phone 客户联系手机号
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取客户年龄段名称
                     * @return AgeRangeName 客户年龄段名称
                     * 
                     */
                    std::string GetAgeRangeName() const;

                    /**
                     * 设置客户年龄段名称
                     * @param _ageRangeName 客户年龄段名称
                     * 
                     */
                    void SetAgeRangeName(const std::string& _ageRangeName);

                    /**
                     * 判断参数 AgeRangeName 是否已赋值
                     * @return AgeRangeName 是否已赋值
                     * 
                     */
                    bool AgeRangeNameHasBeenSet() const;

                    /**
                     * 获取客户行业类型名称信息，如教师、医生
                     * @return JobTypeName 客户行业类型名称信息，如教师、医生
                     * 
                     */
                    std::string GetJobTypeName() const;

                    /**
                     * 设置客户行业类型名称信息，如教师、医生
                     * @param _jobTypeName 客户行业类型名称信息，如教师、医生
                     * 
                     */
                    void SetJobTypeName(const std::string& _jobTypeName);

                    /**
                     * 判断参数 JobTypeName 是否已赋值
                     * @return JobTypeName 是否已赋值
                     * 
                     */
                    bool JobTypeNameHasBeenSet() const;

                    /**
                     * 获取客户居住地址
                     * @return Address 客户居住地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置客户居住地址
                     * @param _address 客户居住地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取客户所处状态
 0:已分配 1:未分配 1 待建档, 2 已建档， 3 已到店 4 已经试驾 5 战败申请中 6 已战败 7 已成交 
                     * @return LeadsProcessStatus 客户所处状态
 0:已分配 1:未分配 1 待建档, 2 已建档， 3 已到店 4 已经试驾 5 战败申请中 6 已战败 7 已成交 
                     * 
                     */
                    int64_t GetLeadsProcessStatus() const;

                    /**
                     * 设置客户所处状态
 0:已分配 1:未分配 1 待建档, 2 已建档， 3 已到店 4 已经试驾 5 战败申请中 6 已战败 7 已成交 
                     * @param _leadsProcessStatus 客户所处状态
 0:已分配 1:未分配 1 待建档, 2 已建档， 3 已到店 4 已经试驾 5 战败申请中 6 已战败 7 已成交 
                     * 
                     */
                    void SetLeadsProcessStatus(const int64_t& _leadsProcessStatus);

                    /**
                     * 判断参数 LeadsProcessStatus 是否已赋值
                     * @return LeadsProcessStatus 是否已赋值
                     * 
                     */
                    bool LeadsProcessStatusHasBeenSet() const;

                    /**
                     * 获取客户来源类型，1：线上，2：线下
                     * @return LeadType 客户来源类型，1：线上，2：线下
                     * 
                     */
                    int64_t GetLeadType() const;

                    /**
                     * 设置客户来源类型，1：线上，2：线下
                     * @param _leadType 客户来源类型，1：线上，2：线下
                     * 
                     */
                    void SetLeadType(const int64_t& _leadType);

                    /**
                     * 判断参数 LeadType 是否已赋值
                     * @return LeadType 是否已赋值
                     * 
                     */
                    bool LeadTypeHasBeenSet() const;

                    /**
                     * 获取与客户来源类型对应的渠道名称
                     * @return SourceName 与客户来源类型对应的渠道名称
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置与客户来源类型对应的渠道名称
                     * @param _sourceName 与客户来源类型对应的渠道名称
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取客户购车的意向等级
                     * @return LeadsLevelCode 客户购车的意向等级
                     * 
                     */
                    std::string GetLeadsLevelCode() const;

                    /**
                     * 设置客户购车的意向等级
                     * @param _leadsLevelCode 客户购车的意向等级
                     * 
                     */
                    void SetLeadsLevelCode(const std::string& _leadsLevelCode);

                    /**
                     * 判断参数 LeadsLevelCode 是否已赋值
                     * @return LeadsLevelCode 是否已赋值
                     * 
                     */
                    bool LeadsLevelCodeHasBeenSet() const;

                    /**
                     * 获取客户意向品牌编号
                     * @return VehicleBrandCode 客户意向品牌编号
                     * 
                     */
                    std::string GetVehicleBrandCode() const;

                    /**
                     * 设置客户意向品牌编号
                     * @param _vehicleBrandCode 客户意向品牌编号
                     * 
                     */
                    void SetVehicleBrandCode(const std::string& _vehicleBrandCode);

                    /**
                     * 判断参数 VehicleBrandCode 是否已赋值
                     * @return VehicleBrandCode 是否已赋值
                     * 
                     */
                    bool VehicleBrandCodeHasBeenSet() const;

                    /**
                     * 获取客户意向车系编号
                     * @return VehicleSeriesCode 客户意向车系编号
                     * 
                     */
                    std::string GetVehicleSeriesCode() const;

                    /**
                     * 设置客户意向车系编号
                     * @param _vehicleSeriesCode 客户意向车系编号
                     * 
                     */
                    void SetVehicleSeriesCode(const std::string& _vehicleSeriesCode);

                    /**
                     * 判断参数 VehicleSeriesCode 是否已赋值
                     * @return VehicleSeriesCode 是否已赋值
                     * 
                     */
                    bool VehicleSeriesCodeHasBeenSet() const;

                    /**
                     * 获取客户意向车型编号
                     * @return VehicleTypeCode 客户意向车型编号
                     * 
                     */
                    std::string GetVehicleTypeCode() const;

                    /**
                     * 设置客户意向车型编号
                     * @param _vehicleTypeCode 客户意向车型编号
                     * 
                     */
                    void SetVehicleTypeCode(const std::string& _vehicleTypeCode);

                    /**
                     * 判断参数 VehicleTypeCode 是否已赋值
                     * @return VehicleTypeCode 是否已赋值
                     * 
                     */
                    bool VehicleTypeCodeHasBeenSet() const;

                    /**
                     * 获取购车用途信息
                     * @return VehiclePurpose 购车用途信息
                     * 
                     */
                    VehiclePurpose GetVehiclePurpose() const;

                    /**
                     * 设置购车用途信息
                     * @param _vehiclePurpose 购车用途信息
                     * 
                     */
                    void SetVehiclePurpose(const VehiclePurpose& _vehiclePurpose);

                    /**
                     * 判断参数 VehiclePurpose 是否已赋值
                     * @return VehiclePurpose 是否已赋值
                     * 
                     */
                    bool VehiclePurposeHasBeenSet() const;

                    /**
                     * 获取购车关注点信息
                     * @return PurchaseConcern 购车关注点信息
                     * 
                     */
                    std::vector<PurchaseConcern> GetPurchaseConcern() const;

                    /**
                     * 设置购车关注点信息
                     * @param _purchaseConcern 购车关注点信息
                     * 
                     */
                    void SetPurchaseConcern(const std::vector<PurchaseConcern>& _purchaseConcern);

                    /**
                     * 判断参数 PurchaseConcern 是否已赋值
                     * @return PurchaseConcern 是否已赋值
                     * 
                     */
                    bool PurchaseConcernHasBeenSet() const;

                    /**
                     * 获取客户所属顾问姓名
                     * @return SalesName 客户所属顾问姓名
                     * 
                     */
                    std::string GetSalesName() const;

                    /**
                     * 设置客户所属顾问姓名
                     * @param _salesName 客户所属顾问姓名
                     * 
                     */
                    void SetSalesName(const std::string& _salesName);

                    /**
                     * 判断参数 SalesName 是否已赋值
                     * @return SalesName 是否已赋值
                     * 
                     */
                    bool SalesNameHasBeenSet() const;

                    /**
                     * 获取客户所属顾问手机号
                     * @return SalesPhone 客户所属顾问手机号
                     * 
                     */
                    std::string GetSalesPhone() const;

                    /**
                     * 设置客户所属顾问手机号
                     * @param _salesPhone 客户所属顾问手机号
                     * 
                     */
                    void SetSalesPhone(const std::string& _salesPhone);

                    /**
                     * 判断参数 SalesPhone 是否已赋值
                     * @return SalesPhone 是否已赋值
                     * 
                     */
                    bool SalesPhoneHasBeenSet() const;

                    /**
                     * 获取客户实际到店时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealArrivalTime 客户实际到店时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRealArrivalTime() const;

                    /**
                     * 设置客户实际到店时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realArrivalTime 客户实际到店时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealArrivalTime(const uint64_t& _realArrivalTime);

                    /**
                     * 判断参数 RealArrivalTime 是否已赋值
                     * @return RealArrivalTime 是否已赋值
                     * 
                     */
                    bool RealArrivalTimeHasBeenSet() const;

                    /**
                     * 获取客户到店完成试乘试驾时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompleteTestDriveTime 客户到店完成试乘试驾时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompleteTestDriveTime() const;

                    /**
                     * 设置客户到店完成试乘试驾时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _completeTestDriveTime 客户到店完成试乘试驾时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompleteTestDriveTime(const std::string& _completeTestDriveTime);

                    /**
                     * 判断参数 CompleteTestDriveTime 是否已赋值
                     * @return CompleteTestDriveTime 是否已赋值
                     * 
                     */
                    bool CompleteTestDriveTimeHasBeenSet() const;

                    /**
                     * 获取客户完成下订的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderTime 客户完成下订的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOrderTime() const;

                    /**
                     * 设置客户完成下订的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderTime 客户完成下订的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderTime(const uint64_t& _orderTime);

                    /**
                     * 判断参数 OrderTime 是否已赋值
                     * @return OrderTime 是否已赋值
                     * 
                     */
                    bool OrderTimeHasBeenSet() const;

                    /**
                     * 获取客户成交的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliveryTime 客户成交的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDeliveryTime() const;

                    /**
                     * 设置客户成交的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deliveryTime 客户成交的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeliveryTime(const uint64_t& _deliveryTime);

                    /**
                     * 判断参数 DeliveryTime 是否已赋值
                     * @return DeliveryTime 是否已赋值
                     * 
                     */
                    bool DeliveryTimeHasBeenSet() const;

                    /**
                     * 获取开票时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvoiceTime 开票时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInvoiceTime() const;

                    /**
                     * 设置开票时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invoiceTime 开票时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvoiceTime(const uint64_t& _invoiceTime);

                    /**
                     * 判断参数 InvoiceTime 是否已赋值
                     * @return InvoiceTime 是否已赋值
                     * 
                     */
                    bool InvoiceTimeHasBeenSet() const;

                    /**
                     * 获取完成对此客户战败审批的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoseTime 完成对此客户战败审批的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLoseTime() const;

                    /**
                     * 设置完成对此客户战败审批的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loseTime 完成对此客户战败审批的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoseTime(const uint64_t& _loseTime);

                    /**
                     * 判断参数 LoseTime 是否已赋值
                     * @return LoseTime 是否已赋值
                     * 
                     */
                    bool LoseTimeHasBeenSet() const;

                    /**
                     * 获取线索成功获取的时间戳，单位：秒
                     * @return CreatedAtTime 线索成功获取的时间戳，单位：秒
                     * 
                     */
                    uint64_t GetCreatedAtTime() const;

                    /**
                     * 设置线索成功获取的时间戳，单位：秒
                     * @param _createdAtTime 线索成功获取的时间戳，单位：秒
                     * 
                     */
                    void SetCreatedAtTime(const uint64_t& _createdAtTime);

                    /**
                     * 判断参数 CreatedAtTime 是否已赋值
                     * @return CreatedAtTime 是否已赋值
                     * 
                     */
                    bool CreatedAtTimeHasBeenSet() const;

                    /**
                     * 获取线索成功导入的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImportAtTime 线索成功导入的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetImportAtTime() const;

                    /**
                     * 设置线索成功导入的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _importAtTime 线索成功导入的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImportAtTime(const uint64_t& _importAtTime);

                    /**
                     * 判断参数 ImportAtTime 是否已赋值
                     * @return ImportAtTime 是否已赋值
                     * 
                     */
                    bool ImportAtTimeHasBeenSet() const;

                    /**
                     * 获取完成线索分配的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DistributeTime 完成线索分配的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDistributeTime() const;

                    /**
                     * 设置完成线索分配的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _distributeTime 完成线索分配的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDistributeTime(const uint64_t& _distributeTime);

                    /**
                     * 判断参数 DistributeTime 是否已赋值
                     * @return DistributeTime 是否已赋值
                     * 
                     */
                    bool DistributeTimeHasBeenSet() const;

                    /**
                     * 获取线索成功创建的时间戳，单位：秒
                     * @return LeadCreateTime 线索成功创建的时间戳，单位：秒
                     * 
                     */
                    uint64_t GetLeadCreateTime() const;

                    /**
                     * 设置线索成功创建的时间戳，单位：秒
                     * @param _leadCreateTime 线索成功创建的时间戳，单位：秒
                     * 
                     */
                    void SetLeadCreateTime(const uint64_t& _leadCreateTime);

                    /**
                     * 判断参数 LeadCreateTime 是否已赋值
                     * @return LeadCreateTime 是否已赋值
                     * 
                     */
                    bool LeadCreateTimeHasBeenSet() const;

                    /**
                     * 获取线索关联微信昵称
                     * @return Nickname 线索关联微信昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置线索关联微信昵称
                     * @param _nickname 线索关联微信昵称
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取线索归属部门节点
                     * @return OrgIdList 线索归属部门节点
                     * 
                     */
                    std::vector<std::string> GetOrgIdList() const;

                    /**
                     * 设置线索归属部门节点
                     * @param _orgIdList 线索归属部门节点
                     * 
                     */
                    void SetOrgIdList(const std::vector<std::string>& _orgIdList);

                    /**
                     * 判断参数 OrgIdList 是否已赋值
                     * @return OrgIdList 是否已赋值
                     * 
                     */
                    bool OrgIdListHasBeenSet() const;

                    /**
                     * 获取客户的介绍人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Introducer 客户的介绍人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntroducer() const;

                    /**
                     * 设置客户的介绍人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _introducer 客户的介绍人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntroducer(const std::string& _introducer);

                    /**
                     * 判断参数 Introducer 是否已赋值
                     * @return Introducer 是否已赋值
                     * 
                     */
                    bool IntroducerHasBeenSet() const;

                    /**
                     * 获取客户的介绍人手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntroducerPhone 客户的介绍人手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntroducerPhone() const;

                    /**
                     * 设置客户的介绍人手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _introducerPhone 客户的介绍人手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntroducerPhone(const std::string& _introducerPhone);

                    /**
                     * 判断参数 IntroducerPhone 是否已赋值
                     * @return IntroducerPhone 是否已赋值
                     * 
                     */
                    bool IntroducerPhoneHasBeenSet() const;

                    /**
                     * 获取最近一次完成跟进的时间戳，单位：秒
                     * @return FollowTime 最近一次完成跟进的时间戳，单位：秒
                     * 
                     */
                    uint64_t GetFollowTime() const;

                    /**
                     * 设置最近一次完成跟进的时间戳，单位：秒
                     * @param _followTime 最近一次完成跟进的时间戳，单位：秒
                     * 
                     */
                    void SetFollowTime(const uint64_t& _followTime);

                    /**
                     * 判断参数 FollowTime 是否已赋值
                     * @return FollowTime 是否已赋值
                     * 
                     */
                    bool FollowTimeHasBeenSet() const;

                    /**
                     * 获取最近一次计划跟进的时间戳，单位：秒
                     * @return NextFollowTime 最近一次计划跟进的时间戳，单位：秒
                     * 
                     */
                    uint64_t GetNextFollowTime() const;

                    /**
                     * 设置最近一次计划跟进的时间戳，单位：秒
                     * @param _nextFollowTime 最近一次计划跟进的时间戳，单位：秒
                     * 
                     */
                    void SetNextFollowTime(const uint64_t& _nextFollowTime);

                    /**
                     * 判断参数 NextFollowTime 是否已赋值
                     * @return NextFollowTime 是否已赋值
                     * 
                     */
                    bool NextFollowTimeHasBeenSet() const;

                    /**
                     * 获取已为该客户添加的企业标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnterpriseTags 已为该客户添加的企业标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EnterpriseTag> GetEnterpriseTags() const;

                    /**
                     * 设置已为该客户添加的企业标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enterpriseTags 已为该客户添加的企业标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnterpriseTags(const std::vector<EnterpriseTag>& _enterpriseTags);

                    /**
                     * 判断参数 EnterpriseTags 是否已赋值
                     * @return EnterpriseTags 是否已赋值
                     * 
                     */
                    bool EnterpriseTagsHasBeenSet() const;

                    /**
                     * 获取已为该客户添加的渠道标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelTags 已为该客户添加的渠道标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ChannelTag> GetChannelTags() const;

                    /**
                     * 设置已为该客户添加的渠道标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelTags 已为该客户添加的渠道标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelTags(const std::vector<ChannelTag>& _channelTags);

                    /**
                     * 判断参数 ChannelTags 是否已赋值
                     * @return ChannelTags 是否已赋值
                     * 
                     */
                    bool ChannelTagsHasBeenSet() const;

                    /**
                     * 获取关联线索id
                     * @return LeadId 关联线索id
                     * 
                     */
                    uint64_t GetLeadId() const;

                    /**
                     * 设置关联线索id
                     * @param _leadId 关联线索id
                     * 
                     */
                    void SetLeadId(const uint64_t& _leadId);

                    /**
                     * 判断参数 LeadId 是否已赋值
                     * @return LeadId 是否已赋值
                     * 
                     */
                    bool LeadIdHasBeenSet() const;

                    /**
                     * 获取客户微信id
                     * @return WxId 客户微信id
                     * 
                     */
                    std::string GetWxId() const;

                    /**
                     * 设置客户微信id
                     * @param _wxId 客户微信id
                     * 
                     */
                    void SetWxId(const std::string& _wxId);

                    /**
                     * 判断参数 WxId 是否已赋值
                     * @return WxId 是否已赋值
                     * 
                     */
                    bool WxIdHasBeenSet() const;

                    /**
                     * 获取顾问职位
                     * @return Position 顾问职位
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置顾问职位
                     * @param _position 顾问职位
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取是否关联微信 1 是 0 否
                     * @return IsBindWx 是否关联微信 1 是 0 否
                     * 
                     */
                    int64_t GetIsBindWx() const;

                    /**
                     * 设置是否关联微信 1 是 0 否
                     * @param _isBindWx 是否关联微信 1 是 0 否
                     * 
                     */
                    void SetIsBindWx(const int64_t& _isBindWx);

                    /**
                     * 判断参数 IsBindWx 是否已赋值
                     * @return IsBindWx 是否已赋值
                     * 
                     */
                    bool IsBindWxHasBeenSet() const;

                    /**
                     * 获取是否无效
                     * @return IsInvalid 是否无效
                     * 
                     */
                    int64_t GetIsInvalid() const;

                    /**
                     * 设置是否无效
                     * @param _isInvalid 是否无效
                     * 
                     */
                    void SetIsInvalid(const int64_t& _isInvalid);

                    /**
                     * 判断参数 IsInvalid 是否已赋值
                     * @return IsInvalid 是否已赋值
                     * 
                     */
                    bool IsInvalidHasBeenSet() const;

                    /**
                     * 获取无效类型
                     * @return InvalidType 无效类型
                     * 
                     */
                    std::string GetInvalidType() const;

                    /**
                     * 设置无效类型
                     * @param _invalidType 无效类型
                     * 
                     */
                    void SetInvalidType(const std::string& _invalidType);

                    /**
                     * 判断参数 InvalidType 是否已赋值
                     * @return InvalidType 是否已赋值
                     * 
                     */
                    bool InvalidTypeHasBeenSet() const;

                    /**
                     * 获取无效类型名称
                     * @return InvalidTypeName 无效类型名称
                     * 
                     */
                    std::string GetInvalidTypeName() const;

                    /**
                     * 设置无效类型名称
                     * @param _invalidTypeName 无效类型名称
                     * 
                     */
                    void SetInvalidTypeName(const std::string& _invalidTypeName);

                    /**
                     * 判断参数 InvalidTypeName 是否已赋值
                     * @return InvalidTypeName 是否已赋值
                     * 
                     */
                    bool InvalidTypeNameHasBeenSet() const;

                    /**
                     * 获取无效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvalidTime 无效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInvalidTime() const;

                    /**
                     * 设置无效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invalidTime 无效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvalidTime(const uint64_t& _invalidTime);

                    /**
                     * 判断参数 InvalidTime 是否已赋值
                     * @return InvalidTime 是否已赋值
                     * 
                     */
                    bool InvalidTimeHasBeenSet() const;

                    /**
                     * 获取由顾问手动输入的无效原因文字
                     * @return InvalidRemark 由顾问手动输入的无效原因文字
                     * 
                     */
                    std::string GetInvalidRemark() const;

                    /**
                     * 设置由顾问手动输入的无效原因文字
                     * @param _invalidRemark 由顾问手动输入的无效原因文字
                     * 
                     */
                    void SetInvalidRemark(const std::string& _invalidRemark);

                    /**
                     * 判断参数 InvalidRemark 是否已赋值
                     * @return InvalidRemark 是否已赋值
                     * 
                     */
                    bool InvalidRemarkHasBeenSet() const;

                    /**
                     * 获取线索是否战败
                     * @return IsLose 线索是否战败
                     * 
                     */
                    int64_t GetIsLose() const;

                    /**
                     * 设置线索是否战败
                     * @param _isLose 线索是否战败
                     * 
                     */
                    void SetIsLose(const int64_t& _isLose);

                    /**
                     * 判断参数 IsLose 是否已赋值
                     * @return IsLose 是否已赋值
                     * 
                     */
                    bool IsLoseHasBeenSet() const;

                    /**
                     * 获取战败类型
                     * @return LoseType 战败类型
                     * 
                     */
                    std::string GetLoseType() const;

                    /**
                     * 设置战败类型
                     * @param _loseType 战败类型
                     * 
                     */
                    void SetLoseType(const std::string& _loseType);

                    /**
                     * 判断参数 LoseType 是否已赋值
                     * @return LoseType 是否已赋值
                     * 
                     */
                    bool LoseTypeHasBeenSet() const;

                    /**
                     * 获取战败类型名称
                     * @return LoseTypeName 战败类型名称
                     * 
                     */
                    std::string GetLoseTypeName() const;

                    /**
                     * 设置战败类型名称
                     * @param _loseTypeName 战败类型名称
                     * 
                     */
                    void SetLoseTypeName(const std::string& _loseTypeName);

                    /**
                     * 判断参数 LoseTypeName 是否已赋值
                     * @return LoseTypeName 是否已赋值
                     * 
                     */
                    bool LoseTypeNameHasBeenSet() const;

                    /**
                     * 获取战败申请原因
                     * @return LoseRemark 战败申请原因
                     * 
                     */
                    std::string GetLoseRemark() const;

                    /**
                     * 设置战败申请原因
                     * @param _loseRemark 战败申请原因
                     * 
                     */
                    void SetLoseRemark(const std::string& _loseRemark);

                    /**
                     * 判断参数 LoseRemark 是否已赋值
                     * @return LoseRemark 是否已赋值
                     * 
                     */
                    bool LoseRemarkHasBeenSet() const;

                private:

                    /**
                     * 客户档案id，客户唯一识别编码
                     */
                    uint64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 所属经销商id
                     */
                    std::string m_dealerCode;
                    bool m_dealerCodeHasBeenSet;

                    /**
                     * 客户在微信生态中唯一识别码
                     */
                    std::string m_unionId;
                    bool m_unionIdHasBeenSet;

                    /**
                     * 档案创建时间戳，单位：秒
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 客户姓名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 0未知，1：男，2：女
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 客户联系手机号
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 客户年龄段名称
                     */
                    std::string m_ageRangeName;
                    bool m_ageRangeNameHasBeenSet;

                    /**
                     * 客户行业类型名称信息，如教师、医生
                     */
                    std::string m_jobTypeName;
                    bool m_jobTypeNameHasBeenSet;

                    /**
                     * 客户居住地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 客户所处状态
 0:已分配 1:未分配 1 待建档, 2 已建档， 3 已到店 4 已经试驾 5 战败申请中 6 已战败 7 已成交 
                     */
                    int64_t m_leadsProcessStatus;
                    bool m_leadsProcessStatusHasBeenSet;

                    /**
                     * 客户来源类型，1：线上，2：线下
                     */
                    int64_t m_leadType;
                    bool m_leadTypeHasBeenSet;

                    /**
                     * 与客户来源类型对应的渠道名称
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 客户购车的意向等级
                     */
                    std::string m_leadsLevelCode;
                    bool m_leadsLevelCodeHasBeenSet;

                    /**
                     * 客户意向品牌编号
                     */
                    std::string m_vehicleBrandCode;
                    bool m_vehicleBrandCodeHasBeenSet;

                    /**
                     * 客户意向车系编号
                     */
                    std::string m_vehicleSeriesCode;
                    bool m_vehicleSeriesCodeHasBeenSet;

                    /**
                     * 客户意向车型编号
                     */
                    std::string m_vehicleTypeCode;
                    bool m_vehicleTypeCodeHasBeenSet;

                    /**
                     * 购车用途信息
                     */
                    VehiclePurpose m_vehiclePurpose;
                    bool m_vehiclePurposeHasBeenSet;

                    /**
                     * 购车关注点信息
                     */
                    std::vector<PurchaseConcern> m_purchaseConcern;
                    bool m_purchaseConcernHasBeenSet;

                    /**
                     * 客户所属顾问姓名
                     */
                    std::string m_salesName;
                    bool m_salesNameHasBeenSet;

                    /**
                     * 客户所属顾问手机号
                     */
                    std::string m_salesPhone;
                    bool m_salesPhoneHasBeenSet;

                    /**
                     * 客户实际到店时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_realArrivalTime;
                    bool m_realArrivalTimeHasBeenSet;

                    /**
                     * 客户到店完成试乘试驾时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_completeTestDriveTime;
                    bool m_completeTestDriveTimeHasBeenSet;

                    /**
                     * 客户完成下订的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_orderTime;
                    bool m_orderTimeHasBeenSet;

                    /**
                     * 客户成交的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_deliveryTime;
                    bool m_deliveryTimeHasBeenSet;

                    /**
                     * 开票时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_invoiceTime;
                    bool m_invoiceTimeHasBeenSet;

                    /**
                     * 完成对此客户战败审批的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_loseTime;
                    bool m_loseTimeHasBeenSet;

                    /**
                     * 线索成功获取的时间戳，单位：秒
                     */
                    uint64_t m_createdAtTime;
                    bool m_createdAtTimeHasBeenSet;

                    /**
                     * 线索成功导入的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_importAtTime;
                    bool m_importAtTimeHasBeenSet;

                    /**
                     * 完成线索分配的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_distributeTime;
                    bool m_distributeTimeHasBeenSet;

                    /**
                     * 线索成功创建的时间戳，单位：秒
                     */
                    uint64_t m_leadCreateTime;
                    bool m_leadCreateTimeHasBeenSet;

                    /**
                     * 线索关联微信昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 线索归属部门节点
                     */
                    std::vector<std::string> m_orgIdList;
                    bool m_orgIdListHasBeenSet;

                    /**
                     * 客户的介绍人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_introducer;
                    bool m_introducerHasBeenSet;

                    /**
                     * 客户的介绍人手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_introducerPhone;
                    bool m_introducerPhoneHasBeenSet;

                    /**
                     * 最近一次完成跟进的时间戳，单位：秒
                     */
                    uint64_t m_followTime;
                    bool m_followTimeHasBeenSet;

                    /**
                     * 最近一次计划跟进的时间戳，单位：秒
                     */
                    uint64_t m_nextFollowTime;
                    bool m_nextFollowTimeHasBeenSet;

                    /**
                     * 已为该客户添加的企业标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EnterpriseTag> m_enterpriseTags;
                    bool m_enterpriseTagsHasBeenSet;

                    /**
                     * 已为该客户添加的渠道标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ChannelTag> m_channelTags;
                    bool m_channelTagsHasBeenSet;

                    /**
                     * 关联线索id
                     */
                    uint64_t m_leadId;
                    bool m_leadIdHasBeenSet;

                    /**
                     * 客户微信id
                     */
                    std::string m_wxId;
                    bool m_wxIdHasBeenSet;

                    /**
                     * 顾问职位
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 是否关联微信 1 是 0 否
                     */
                    int64_t m_isBindWx;
                    bool m_isBindWxHasBeenSet;

                    /**
                     * 是否无效
                     */
                    int64_t m_isInvalid;
                    bool m_isInvalidHasBeenSet;

                    /**
                     * 无效类型
                     */
                    std::string m_invalidType;
                    bool m_invalidTypeHasBeenSet;

                    /**
                     * 无效类型名称
                     */
                    std::string m_invalidTypeName;
                    bool m_invalidTypeNameHasBeenSet;

                    /**
                     * 无效时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_invalidTime;
                    bool m_invalidTimeHasBeenSet;

                    /**
                     * 由顾问手动输入的无效原因文字
                     */
                    std::string m_invalidRemark;
                    bool m_invalidRemarkHasBeenSet;

                    /**
                     * 线索是否战败
                     */
                    int64_t m_isLose;
                    bool m_isLoseHasBeenSet;

                    /**
                     * 战败类型
                     */
                    std::string m_loseType;
                    bool m_loseTypeHasBeenSet;

                    /**
                     * 战败类型名称
                     */
                    std::string m_loseTypeName;
                    bool m_loseTypeNameHasBeenSet;

                    /**
                     * 战败申请原因
                     */
                    std::string m_loseRemark;
                    bool m_loseRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CUSTOMERPROFILE_H_
