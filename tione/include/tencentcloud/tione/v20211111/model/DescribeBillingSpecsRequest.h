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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGSPECSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGSPECSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeBillingSpecs请求参数结构体
                */
                class DescribeBillingSpecsRequest : public AbstractModel
                {
                public:
                    DescribeBillingSpecsRequest();
                    ~DescribeBillingSpecsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月</p>
                     * @return ChargeType <p>付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月</p>
                     * @param _chargeType <p>付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月</p>
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>枚举值：空、TRAIN、NOTEBOOK、INFERENCE或EMS</p>
                     * @return TaskType <p>枚举值：空、TRAIN、NOTEBOOK、INFERENCE或EMS</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>枚举值：空、TRAIN、NOTEBOOK、INFERENCE或EMS</p>
                     * @param _taskType <p>枚举值：空、TRAIN、NOTEBOOK、INFERENCE或EMS</p>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>资源类型：[&quot;&quot;, &quot;CALC&quot;, &quot;CPU&quot;, &quot;GPU&quot;, &quot;GPU-SW&quot;]</p>
                     * @return ResourceType <p>资源类型：[&quot;&quot;, &quot;CALC&quot;, &quot;CPU&quot;, &quot;GPU&quot;, &quot;GPU-SW&quot;]</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型：[&quot;&quot;, &quot;CALC&quot;, &quot;CPU&quot;, &quot;GPU&quot;, &quot;GPU-SW&quot;]</p>
                     * @param _resourceType <p>资源类型：[&quot;&quot;, &quot;CALC&quot;, &quot;CPU&quot;, &quot;GPU&quot;, &quot;GPU-SW&quot;]</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>枚举值：空、TRAIN、NOTEBOOK、INFERENCE或EMS</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>资源类型：[&quot;&quot;, &quot;CALC&quot;, &quot;CPU&quot;, &quot;GPU&quot;, &quot;GPU-SW&quot;]</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGSPECSREQUEST_H_
