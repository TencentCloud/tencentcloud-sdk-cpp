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

#ifndef TENCENTCLOUD_IC_V20190307_MODEL_CARDINFO_H_
#define TENCENTCLOUD_IC_V20190307_MODEL_CARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            namespace Model
            {
                /**
                * 卡片详细信息
                */
                class CardInfo : public AbstractModel
                {
                public:
                    CardInfo();
                    ~CardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取卡片ID
                     * @return Iccid 卡片ID
                     * 
                     */
                    std::string GetIccid() const;

                    /**
                     * 设置卡片ID
                     * @param _iccid 卡片ID
                     * 
                     */
                    void SetIccid(const std::string& _iccid);

                    /**
                     * 判断参数 Iccid 是否已赋值
                     * @return Iccid 是否已赋值
                     * 
                     */
                    bool IccidHasBeenSet() const;

                    /**
                     * 获取卡电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msisdn 卡电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsisdn() const;

                    /**
                     * 设置卡电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msisdn 卡电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsisdn(const std::string& _msisdn);

                    /**
                     * 判断参数 Msisdn 是否已赋值
                     * @return Msisdn 是否已赋值
                     * 
                     */
                    bool MsisdnHasBeenSet() const;

                    /**
                     * 获取卡imsi
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Imsi 卡imsi
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImsi() const;

                    /**
                     * 设置卡imsi
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imsi 卡imsi
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImsi(const std::string& _imsi);

                    /**
                     * 判断参数 Imsi 是否已赋值
                     * @return Imsi 是否已赋值
                     * 
                     */
                    bool ImsiHasBeenSet() const;

                    /**
                     * 获取卡imei
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Imei 卡imei
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 设置卡imei
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imei 卡imei
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImei(const std::string& _imei);

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     * 
                     */
                    bool ImeiHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return Sdkappid 应用ID
                     * 
                     */
                    std::string GetSdkappid() const;

                    /**
                     * 设置应用ID
                     * @param _sdkappid 应用ID
                     * 
                     */
                    void SetSdkappid(const std::string& _sdkappid);

                    /**
                     * 判断参数 Sdkappid 是否已赋值
                     * @return Sdkappid 是否已赋值
                     * 
                     */
                    bool SdkappidHasBeenSet() const;

                    /**
                     * 获取运营商编号
                     * @return Teleoperator 运营商编号
                     * 
                     */
                    int64_t GetTeleoperator() const;

                    /**
                     * 设置运营商编号
                     * @param _teleoperator 运营商编号
                     * 
                     */
                    void SetTeleoperator(const int64_t& _teleoperator);

                    /**
                     * 判断参数 Teleoperator 是否已赋值
                     * @return Teleoperator 是否已赋值
                     * 
                     */
                    bool TeleoperatorHasBeenSet() const;

                    /**
                     * 获取卡片状态 1:未激活 2：激活 3：停卡 5：销卡
                     * @return CardStatus 卡片状态 1:未激活 2：激活 3：停卡 5：销卡
                     * 
                     */
                    int64_t GetCardStatus() const;

                    /**
                     * 设置卡片状态 1:未激活 2：激活 3：停卡 5：销卡
                     * @param _cardStatus 卡片状态 1:未激活 2：激活 3：停卡 5：销卡
                     * 
                     */
                    void SetCardStatus(const int64_t& _cardStatus);

                    /**
                     * 判断参数 CardStatus 是否已赋值
                     * @return CardStatus 是否已赋值
                     * 
                     */
                    bool CardStatusHasBeenSet() const;

                    /**
                     * 获取网络状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkStatus 网络状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNetworkStatus() const;

                    /**
                     * 设置网络状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkStatus 网络状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkStatus(const int64_t& _networkStatus);

                    /**
                     * 判断参数 NetworkStatus 是否已赋值
                     * @return NetworkStatus 是否已赋值
                     * 
                     */
                    bool NetworkStatusHasBeenSet() const;

                    /**
                     * 获取激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivitedTime 激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActivitedTime() const;

                    /**
                     * 设置激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activitedTime 激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivitedTime(const std::string& _activitedTime);

                    /**
                     * 判断参数 ActivitedTime 是否已赋值
                     * @return ActivitedTime 是否已赋值
                     * 
                     */
                    bool ActivitedTimeHasBeenSet() const;

                    /**
                     * 获取资费类型，1 单卡，2 流量池
                     * @return Type 资费类型，1 单卡，2 流量池
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置资费类型，1 单卡，2 流量池
                     * @param _type 资费类型，1 单卡，2 流量池
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取套餐类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId 套餐类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置套餐类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productId 套餐类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取流量池ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PoolId 流量池ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPoolId() const;

                    /**
                     * 设置流量池ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _poolId 流量池ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPoolId(const std::string& _poolId);

                    /**
                     * 判断参数 PoolId 是否已赋值
                     * @return PoolId 是否已赋值
                     * 
                     */
                    bool PoolIdHasBeenSet() const;

                    /**
                     * 获取周期套餐流量使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataUsedInPeriod 周期套餐流量使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDataUsedInPeriod() const;

                    /**
                     * 设置周期套餐流量使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataUsedInPeriod 周期套餐流量使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataUsedInPeriod(const double& _dataUsedInPeriod);

                    /**
                     * 判断参数 DataUsedInPeriod 是否已赋值
                     * @return DataUsedInPeriod 是否已赋值
                     * 
                     */
                    bool DataUsedInPeriodHasBeenSet() const;

                    /**
                     * 获取周期套餐总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataTotalInPeriod 周期套餐总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDataTotalInPeriod() const;

                    /**
                     * 设置周期套餐总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataTotalInPeriod 周期套餐总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataTotalInPeriod(const double& _dataTotalInPeriod);

                    /**
                     * 判断参数 DataTotalInPeriod 是否已赋值
                     * @return DataTotalInPeriod 是否已赋值
                     * 
                     */
                    bool DataTotalInPeriodHasBeenSet() const;

                    /**
                     * 获取过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductExpiredTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductExpiredTime() const;

                    /**
                     * 设置过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productExpiredTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductExpiredTime(const std::string& _productExpiredTime);

                    /**
                     * 判断参数 ProductExpiredTime 是否已赋值
                     * @return ProductExpiredTime 是否已赋值
                     * 
                     */
                    bool ProductExpiredTimeHasBeenSet() const;

                    /**
                     * 获取描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifiedTime 修改时间
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifiedTime 修改时间
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取套餐周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreorderCnt 套餐周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPreorderCnt() const;

                    /**
                     * 设置套餐周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _preorderCnt 套餐周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPreorderCnt(const int64_t& _preorderCnt);

                    /**
                     * 判断参数 PreorderCnt 是否已赋值
                     * @return PreorderCnt 是否已赋值
                     * 
                     */
                    bool PreorderCntHasBeenSet() const;

                    /**
                     * 获取激活被回调标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsActivated 激活被回调标志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsActivated() const;

                    /**
                     * 设置激活被回调标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isActivated 激活被回调标志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsActivated(const int64_t& _isActivated);

                    /**
                     * 判断参数 IsActivated 是否已赋值
                     * @return IsActivated 是否已赋值
                     * 
                     */
                    bool IsActivatedHasBeenSet() const;

                    /**
                     * 获取订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderId 订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderId 订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenew 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenew 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取0 不需要开通达量不停卡 1 需要开通达量不停卡
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowArrears 0 不需要开通达量不停卡 1 需要开通达量不停卡
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAllowArrears() const;

                    /**
                     * 设置0 不需要开通达量不停卡 1 需要开通达量不停卡
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowArrears 0 不需要开通达量不停卡 1 需要开通达量不停卡
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowArrears(const int64_t& _allowArrears);

                    /**
                     * 判断参数 AllowArrears 是否已赋值
                     * @return AllowArrears 是否已赋值
                     * 
                     */
                    bool AllowArrearsHasBeenSet() const;

                    /**
                     * 获取是否开通短信0:未开短信 1:开通短信
                     * @return NeedSms 是否开通短信0:未开短信 1:开通短信
                     * 
                     */
                    int64_t GetNeedSms() const;

                    /**
                     * 设置是否开通短信0:未开短信 1:开通短信
                     * @param _needSms 是否开通短信0:未开短信 1:开通短信
                     * 
                     */
                    void SetNeedSms(const int64_t& _needSms);

                    /**
                     * 判断参数 NeedSms 是否已赋值
                     * @return NeedSms 是否已赋值
                     * 
                     */
                    bool NeedSmsHasBeenSet() const;

                    /**
                     * 获取供应商
                     * @return Provider 供应商
                     * 
                     */
                    int64_t GetProvider() const;

                    /**
                     * 设置供应商
                     * @param _provider 供应商
                     * 
                     */
                    void SetProvider(const int64_t& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取实名认证 0:无 1:未实名 2:已实名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificationState 实名认证 0:无 1:未实名 2:已实名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCertificationState() const;

                    /**
                     * 设置实名认证 0:无 1:未实名 2:已实名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certificationState 实名认证 0:无 1:未实名 2:已实名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertificationState(const int64_t& _certificationState);

                    /**
                     * 判断参数 CertificationState 是否已赋值
                     * @return CertificationState 是否已赋值
                     * 
                     */
                    bool CertificationStateHasBeenSet() const;

                    /**
                     * 获取其他流量信息,流量分离统计其他流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherData 其他流量信息,流量分离统计其他流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetOtherData() const;

                    /**
                     * 设置其他流量信息,流量分离统计其他流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _otherData 其他流量信息,流量分离统计其他流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOtherData(const double& _otherData);

                    /**
                     * 判断参数 OtherData 是否已赋值
                     * @return OtherData 是否已赋值
                     * 
                     */
                    bool OtherDataHasBeenSet() const;

                private:

                    /**
                     * 卡片ID
                     */
                    std::string m_iccid;
                    bool m_iccidHasBeenSet;

                    /**
                     * 卡电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msisdn;
                    bool m_msisdnHasBeenSet;

                    /**
                     * 卡imsi
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imsi;
                    bool m_imsiHasBeenSet;

                    /**
                     * 卡imei
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_sdkappid;
                    bool m_sdkappidHasBeenSet;

                    /**
                     * 运营商编号
                     */
                    int64_t m_teleoperator;
                    bool m_teleoperatorHasBeenSet;

                    /**
                     * 卡片状态 1:未激活 2：激活 3：停卡 5：销卡
                     */
                    int64_t m_cardStatus;
                    bool m_cardStatusHasBeenSet;

                    /**
                     * 网络状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_networkStatus;
                    bool m_networkStatusHasBeenSet;

                    /**
                     * 激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activitedTime;
                    bool m_activitedTimeHasBeenSet;

                    /**
                     * 资费类型，1 单卡，2 流量池
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 套餐类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 流量池ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_poolId;
                    bool m_poolIdHasBeenSet;

                    /**
                     * 周期套餐流量使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_dataUsedInPeriod;
                    bool m_dataUsedInPeriodHasBeenSet;

                    /**
                     * 周期套餐总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_dataTotalInPeriod;
                    bool m_dataTotalInPeriodHasBeenSet;

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productExpiredTime;
                    bool m_productExpiredTimeHasBeenSet;

                    /**
                     * 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 套餐周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_preorderCnt;
                    bool m_preorderCntHasBeenSet;

                    /**
                     * 激活被回调标志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * 订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 0 不需要开通达量不停卡 1 需要开通达量不停卡
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_allowArrears;
                    bool m_allowArrearsHasBeenSet;

                    /**
                     * 是否开通短信0:未开短信 1:开通短信
                     */
                    int64_t m_needSms;
                    bool m_needSmsHasBeenSet;

                    /**
                     * 供应商
                     */
                    int64_t m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * 实名认证 0:无 1:未实名 2:已实名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_certificationState;
                    bool m_certificationStateHasBeenSet;

                    /**
                     * 其他流量信息,流量分离统计其他流量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_otherData;
                    bool m_otherDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_MODEL_CARDINFO_H_
