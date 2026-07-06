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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_CREATEMEMORYPLUSSPACEREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_CREATEMEMORYPLUSSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * CreateMemoryPlusSpace请求参数结构体
                */
                class CreateMemoryPlusSpaceRequest : public AbstractModel
                {
                public:
                    CreateMemoryPlusSpaceRequest();
                    ~CreateMemoryPlusSpaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Memory 实例的自定义名称，用于唯一标识和管理实例。支持 60 个字符内的中英文、数字、中划线（-）及下划线（_）。</p>
                     * @return Name <p>Memory 实例的自定义名称，用于唯一标识和管理实例。支持 60 个字符内的中英文、数字、中划线（-）及下划线（_）。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Memory 实例的自定义名称，用于唯一标识和管理实例。支持 60 个字符内的中英文、数字、中划线（-）及下划线（_）。</p>
                     * @param _name <p>Memory 实例的自定义名称，用于唯一标识和管理实例。支持 60 个字符内的中英文、数字、中划线（-）及下划线（_）。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>emory 实例的简要描述，包括使用场景、用途或背景信息，便于日常运维识别。长度限制为 0-200 个字符。</p>
                     * @return Description <p>emory 实例的简要描述，包括使用场景、用途或背景信息，便于日常运维识别。长度限制为 0-200 个字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>emory 实例的简要描述，包括使用场景、用途或背景信息，便于日常运维识别。长度限制为 0-200 个字符。</p>
                     * @param _description <p>emory 实例的简要描述，包括使用场景、用途或背景信息，便于日常运维识别。长度限制为 0-200 个字符。</p>
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
                     * 获取<p>以键值对（Key-Value）形式为 Memory 实例绑定的标签，用于项目管理、成本分摊、环境隔离等场景。</p>
                     * @return ResourceTags <p>以键值对（Key-Value）形式为 Memory 实例绑定的标签，用于项目管理、成本分摊、环境隔离等场景。</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>以键值对（Key-Value）形式为 Memory 实例绑定的标签，用于项目管理、成本分摊、环境隔离等场景。</p>
                     * @param _resourceTags <p>以键值对（Key-Value）形式为 Memory 实例绑定的标签，用于项目管理、成本分摊、环境隔离等场景。</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>单次批量创建 Memory 实例的数量。取值范围为 1-50。</p>
                     * @return GoodsNum <p>单次批量创建 Memory 实例的数量。取值范围为 1-50。</p>
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置<p>单次批量创建 Memory 实例的数量。取值范围为 1-50。</p>
                     * @param _goodsNum <p>单次批量创建 Memory 实例的数量。取值范围为 1-50。</p>
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取<p>计费模式。</p><p>枚举值：</p><ul><li>0： 按量计费。</li><li>1： 包年包月。</li></ul>
                     * @return PayMode <p>计费模式。</p><p>枚举值：</p><ul><li>0： 按量计费。</li><li>1： 包年包月。</li></ul>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>计费模式。</p><p>枚举值：</p><ul><li>0： 按量计费。</li><li>1： 包年包月。</li></ul>
                     * @param _payMode <p>计费模式。</p><p>枚举值：</p><ul><li>0： 按量计费。</li><li>1： 包年包月。</li></ul>
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>包年包月周期</p>
                     * @return PayPeriod <p>包年包月周期</p>
                     * 
                     */
                    int64_t GetPayPeriod() const;

                    /**
                     * 设置<p>包年包月周期</p>
                     * @param _payPeriod <p>包年包月周期</p>
                     * 
                     */
                    void SetPayPeriod(const int64_t& _payPeriod);

                    /**
                     * 判断参数 PayPeriod 是否已赋值
                     * @return PayPeriod 是否已赋值
                     * 
                     */
                    bool PayPeriodHasBeenSet() const;

                    /**
                     * 获取<p>是否自动续费</p>
                     * @return AutoRenew <p>是否自动续费</p>
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置<p>是否自动续费</p>
                     * @param _autoRenew <p>是否自动续费</p>
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                private:

                    /**
                     * <p>Memory 实例的自定义名称，用于唯一标识和管理实例。支持 60 个字符内的中英文、数字、中划线（-）及下划线（_）。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>emory 实例的简要描述，包括使用场景、用途或背景信息，便于日常运维识别。长度限制为 0-200 个字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>以键值对（Key-Value）形式为 Memory 实例绑定的标签，用于项目管理、成本分摊、环境隔离等场景。</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>单次批量创建 Memory 实例的数量。取值范围为 1-50。</p>
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>计费模式。</p><p>枚举值：</p><ul><li>0： 按量计费。</li><li>1： 包年包月。</li></ul>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>包年包月周期</p>
                     */
                    int64_t m_payPeriod;
                    bool m_payPeriodHasBeenSet;

                    /**
                     * <p>是否自动续费</p>
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_CREATEMEMORYPLUSSPACEREQUEST_H_
