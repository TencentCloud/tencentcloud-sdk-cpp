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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEDISASTERRECOVERYSITEPAIRREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEDISASTERRECOVERYSITEPAIRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * CreateDisasterRecoverySitePair请求参数结构体
                */
                class CreateDisasterRecoverySitePairRequest : public AbstractModel
                {
                public:
                    CreateDisasterRecoverySitePairRequest();
                    ~CreateDisasterRecoverySitePairRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取容灾策略的容灾类型，跨地域：CROSS_REGION，或跨可用区：CROSS_ZONE
                     * @return DisasterRecoveryType 容灾策略的容灾类型，跨地域：CROSS_REGION，或跨可用区：CROSS_ZONE
                     * 
                     */
                    std::string GetDisasterRecoveryType() const;

                    /**
                     * 设置容灾策略的容灾类型，跨地域：CROSS_REGION，或跨可用区：CROSS_ZONE
                     * @param _disasterRecoveryType 容灾策略的容灾类型，跨地域：CROSS_REGION，或跨可用区：CROSS_ZONE
                     * 
                     */
                    void SetDisasterRecoveryType(const std::string& _disasterRecoveryType);

                    /**
                     * 判断参数 DisasterRecoveryType 是否已赋值
                     * @return DisasterRecoveryType 是否已赋值
                     * 
                     */
                    bool DisasterRecoveryTypeHasBeenSet() const;

                    /**
                     * 获取生产站点地域
                     * @return SourceRegion 生产站点地域
                     * 
                     */
                    std::string GetSourceRegion() const;

                    /**
                     * 设置生产站点地域
                     * @param _sourceRegion 生产站点地域
                     * 
                     */
                    void SetSourceRegion(const std::string& _sourceRegion);

                    /**
                     * 判断参数 SourceRegion 是否已赋值
                     * @return SourceRegion 是否已赋值
                     * 
                     */
                    bool SourceRegionHasBeenSet() const;

                    /**
                     * 获取容灾策略生产站点可用区
                     * @return SourceZone 容灾策略生产站点可用区
                     * 
                     */
                    std::string GetSourceZone() const;

                    /**
                     * 设置容灾策略生产站点可用区
                     * @param _sourceZone 容灾策略生产站点可用区
                     * 
                     */
                    void SetSourceZone(const std::string& _sourceZone);

                    /**
                     * 判断参数 SourceZone 是否已赋值
                     * @return SourceZone 是否已赋值
                     * 
                     */
                    bool SourceZoneHasBeenSet() const;

                    /**
                     * 获取容灾站点地域
                     * @return TargetRegion 容灾站点地域
                     * 
                     */
                    std::string GetTargetRegion() const;

                    /**
                     * 设置容灾站点地域
                     * @param _targetRegion 容灾站点地域
                     * 
                     */
                    void SetTargetRegion(const std::string& _targetRegion);

                    /**
                     * 判断参数 TargetRegion 是否已赋值
                     * @return TargetRegion 是否已赋值
                     * 
                     */
                    bool TargetRegionHasBeenSet() const;

                    /**
                     * 获取容灾策略容灾站点可用区
                     * @return TargetZone 容灾策略容灾站点可用区
                     * 
                     */
                    std::string GetTargetZone() const;

                    /**
                     * 设置容灾策略容灾站点可用区
                     * @param _targetZone 容灾策略容灾站点可用区
                     * 
                     */
                    void SetTargetZone(const std::string& _targetZone);

                    /**
                     * 判断参数 TargetZone 是否已赋值
                     * @return TargetZone 是否已赋值
                     * 
                     */
                    bool TargetZoneHasBeenSet() const;

                    /**
                     * 获取容灾策略生产vpc
                     * @return SourceVpc 容灾策略生产vpc
                     * 
                     */
                    std::string GetSourceVpc() const;

                    /**
                     * 设置容灾策略生产vpc
                     * @param _sourceVpc 容灾策略生产vpc
                     * 
                     */
                    void SetSourceVpc(const std::string& _sourceVpc);

                    /**
                     * 判断参数 SourceVpc 是否已赋值
                     * @return SourceVpc 是否已赋值
                     * 
                     */
                    bool SourceVpcHasBeenSet() const;

                    /**
                     * 获取容灾策略容灾vpc
                     * @return TargetVpc 容灾策略容灾vpc
                     * 
                     */
                    std::string GetTargetVpc() const;

                    /**
                     * 设置容灾策略容灾vpc
                     * @param _targetVpc 容灾策略容灾vpc
                     * 
                     */
                    void SetTargetVpc(const std::string& _targetVpc);

                    /**
                     * 判断参数 TargetVpc 是否已赋值
                     * @return TargetVpc 是否已赋值
                     * 
                     */
                    bool TargetVpcHasBeenSet() const;

                    /**
                     * 获取容灾策略所属产品类型，包括DISK、CFS、INSTANCE
                     * @return SitePairProductType 容灾策略所属产品类型，包括DISK、CFS、INSTANCE
                     * 
                     */
                    std::string GetSitePairProductType() const;

                    /**
                     * 设置容灾策略所属产品类型，包括DISK、CFS、INSTANCE
                     * @param _sitePairProductType 容灾策略所属产品类型，包括DISK、CFS、INSTANCE
                     * 
                     */
                    void SetSitePairProductType(const std::string& _sitePairProductType);

                    /**
                     * 判断参数 SitePairProductType 是否已赋值
                     * @return SitePairProductType 是否已赋值
                     * 
                     */
                    bool SitePairProductTypeHasBeenSet() const;

                    /**
                     * 获取容灾策略的名称，最大长度为60个字符。
                     * @return SitePairName 容灾策略的名称，最大长度为60个字符。
                     * 
                     */
                    std::string GetSitePairName() const;

                    /**
                     * 设置容灾策略的名称，最大长度为60个字符。
                     * @param _sitePairName 容灾策略的名称，最大长度为60个字符。
                     * 
                     */
                    void SetSitePairName(const std::string& _sitePairName);

                    /**
                     * 判断参数 SitePairName 是否已赋值
                     * @return SitePairName 是否已赋值
                     * 
                     */
                    bool SitePairNameHasBeenSet() const;

                    /**
                     * 获取容灾策略复制技术SYN/ASY
                     * @return CopyType 容灾策略复制技术SYN/ASY
                     * 
                     */
                    std::string GetCopyType() const;

                    /**
                     * 设置容灾策略复制技术SYN/ASY
                     * @param _copyType 容灾策略复制技术SYN/ASY
                     * 
                     */
                    void SetCopyType(const std::string& _copyType);

                    /**
                     * 判断参数 CopyType 是否已赋值
                     * @return CopyType 是否已赋值
                     * 
                     */
                    bool CopyTypeHasBeenSet() const;

                private:

                    /**
                     * 容灾策略的容灾类型，跨地域：CROSS_REGION，或跨可用区：CROSS_ZONE
                     */
                    std::string m_disasterRecoveryType;
                    bool m_disasterRecoveryTypeHasBeenSet;

                    /**
                     * 生产站点地域
                     */
                    std::string m_sourceRegion;
                    bool m_sourceRegionHasBeenSet;

                    /**
                     * 容灾策略生产站点可用区
                     */
                    std::string m_sourceZone;
                    bool m_sourceZoneHasBeenSet;

                    /**
                     * 容灾站点地域
                     */
                    std::string m_targetRegion;
                    bool m_targetRegionHasBeenSet;

                    /**
                     * 容灾策略容灾站点可用区
                     */
                    std::string m_targetZone;
                    bool m_targetZoneHasBeenSet;

                    /**
                     * 容灾策略生产vpc
                     */
                    std::string m_sourceVpc;
                    bool m_sourceVpcHasBeenSet;

                    /**
                     * 容灾策略容灾vpc
                     */
                    std::string m_targetVpc;
                    bool m_targetVpcHasBeenSet;

                    /**
                     * 容灾策略所属产品类型，包括DISK、CFS、INSTANCE
                     */
                    std::string m_sitePairProductType;
                    bool m_sitePairProductTypeHasBeenSet;

                    /**
                     * 容灾策略的名称，最大长度为60个字符。
                     */
                    std::string m_sitePairName;
                    bool m_sitePairNameHasBeenSet;

                    /**
                     * 容灾策略复制技术SYN/ASY
                     */
                    std::string m_copyType;
                    bool m_copyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEDISASTERRECOVERYSITEPAIRREQUEST_H_
