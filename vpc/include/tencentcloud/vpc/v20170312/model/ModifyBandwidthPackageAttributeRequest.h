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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYBANDWIDTHPACKAGEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYBANDWIDTHPACKAGEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyBandwidthPackageAttribute请求参数结构体
                */
                class ModifyBandwidthPackageAttributeRequest : public AbstractModel
                {
                public:
                    ModifyBandwidthPackageAttributeRequest();
                    ~ModifyBandwidthPackageAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取带宽包唯一标识ID
                     * @return BandwidthPackageId 带宽包唯一标识ID
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置带宽包唯一标识ID
                     * @param BandwidthPackageId 带宽包唯一标识ID
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取带宽包名称
                     * @return BandwidthPackageName 带宽包名称
                     */
                    std::string GetBandwidthPackageName() const;

                    /**
                     * 设置带宽包名称
                     * @param BandwidthPackageName 带宽包名称
                     */
                    void SetBandwidthPackageName(const std::string& _bandwidthPackageName);

                    /**
                     * 判断参数 BandwidthPackageName 是否已赋值
                     * @return BandwidthPackageName 是否已赋值
                     */
                    bool BandwidthPackageNameHasBeenSet() const;

                    /**
                     * 获取带宽包计费模式
                     * @return ChargeType 带宽包计费模式
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置带宽包计费模式
                     * @param ChargeType 带宽包计费模式
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取退款时迁移为后付费带宽包。默认值：否
                     * @return MigrateOnRefund 退款时迁移为后付费带宽包。默认值：否
                     */
                    bool GetMigrateOnRefund() const;

                    /**
                     * 设置退款时迁移为后付费带宽包。默认值：否
                     * @param MigrateOnRefund 退款时迁移为后付费带宽包。默认值：否
                     */
                    void SetMigrateOnRefund(const bool& _migrateOnRefund);

                    /**
                     * 判断参数 MigrateOnRefund 是否已赋值
                     * @return MigrateOnRefund 是否已赋值
                     */
                    bool MigrateOnRefundHasBeenSet() const;

                private:

                    /**
                     * 带宽包唯一标识ID
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * 带宽包名称
                     */
                    std::string m_bandwidthPackageName;
                    bool m_bandwidthPackageNameHasBeenSet;

                    /**
                     * 带宽包计费模式
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 退款时迁移为后付费带宽包。默认值：否
                     */
                    bool m_migrateOnRefund;
                    bool m_migrateOnRefundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYBANDWIDTHPACKAGEATTRIBUTEREQUEST_H_
