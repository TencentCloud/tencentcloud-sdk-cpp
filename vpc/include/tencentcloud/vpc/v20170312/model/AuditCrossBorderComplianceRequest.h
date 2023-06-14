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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_AUDITCROSSBORDERCOMPLIANCEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_AUDITCROSSBORDERCOMPLIANCEREQUEST_H_

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
                * AuditCrossBorderCompliance请求参数结构体
                */
                class AuditCrossBorderComplianceRequest : public AbstractModel
                {
                public:
                    AuditCrossBorderComplianceRequest();
                    ~AuditCrossBorderComplianceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务商, 可选值：`UNICOM`。
                     * @return ServiceProvider 服务商, 可选值：`UNICOM`。
                     * 
                     */
                    std::string GetServiceProvider() const;

                    /**
                     * 设置服务商, 可选值：`UNICOM`。
                     * @param _serviceProvider 服务商, 可选值：`UNICOM`。
                     * 
                     */
                    void SetServiceProvider(const std::string& _serviceProvider);

                    /**
                     * 判断参数 ServiceProvider 是否已赋值
                     * @return ServiceProvider 是否已赋值
                     * 
                     */
                    bool ServiceProviderHasBeenSet() const;

                    /**
                     * 获取表单唯一`ID`。可通过[DescribeCrossBorderCompliance](https://cloud.tencent.com/document/product/215/47838)接口查询ComplianceId信息
                     * @return ComplianceId 表单唯一`ID`。可通过[DescribeCrossBorderCompliance](https://cloud.tencent.com/document/product/215/47838)接口查询ComplianceId信息
                     * 
                     */
                    uint64_t GetComplianceId() const;

                    /**
                     * 设置表单唯一`ID`。可通过[DescribeCrossBorderCompliance](https://cloud.tencent.com/document/product/215/47838)接口查询ComplianceId信息
                     * @param _complianceId 表单唯一`ID`。可通过[DescribeCrossBorderCompliance](https://cloud.tencent.com/document/product/215/47838)接口查询ComplianceId信息
                     * 
                     */
                    void SetComplianceId(const uint64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                    /**
                     * 获取通过：`APPROVED `，拒绝：`DENY`。
                     * @return AuditBehavior 通过：`APPROVED `，拒绝：`DENY`。
                     * 
                     */
                    std::string GetAuditBehavior() const;

                    /**
                     * 设置通过：`APPROVED `，拒绝：`DENY`。
                     * @param _auditBehavior 通过：`APPROVED `，拒绝：`DENY`。
                     * 
                     */
                    void SetAuditBehavior(const std::string& _auditBehavior);

                    /**
                     * 判断参数 AuditBehavior 是否已赋值
                     * @return AuditBehavior 是否已赋值
                     * 
                     */
                    bool AuditBehaviorHasBeenSet() const;

                private:

                    /**
                     * 服务商, 可选值：`UNICOM`。
                     */
                    std::string m_serviceProvider;
                    bool m_serviceProviderHasBeenSet;

                    /**
                     * 表单唯一`ID`。可通过[DescribeCrossBorderCompliance](https://cloud.tencent.com/document/product/215/47838)接口查询ComplianceId信息
                     */
                    uint64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * 通过：`APPROVED `，拒绝：`DENY`。
                     */
                    std::string m_auditBehavior;
                    bool m_auditBehaviorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_AUDITCROSSBORDERCOMPLIANCEREQUEST_H_
