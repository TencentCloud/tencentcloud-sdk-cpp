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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULEDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmIdentifyRuleDetail返回参数结构体
                */
                class DescribeDspmIdentifyRuleDetailResponse : public AbstractModel
                {
                public:
                    DescribeDspmIdentifyRuleDetailResponse();
                    ~DescribeDspmIdentifyRuleDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据项id</p>
                     * @return Id <p>数据项id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>数据项名称</p>
                     * @return Name <p>数据项名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>数据项描述</p>
                     * @return Description <p>数据项描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>数据项是否启用</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul><p>默认值：0</p>
                     * @return Status <p>数据项是否启用</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>数据项类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     * @return Type <p>数据项类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>结构化规则</p>
                     * @return StructuredRule <p>结构化规则</p>
                     * 
                     */
                    std::string GetStructuredRule() const;

                    /**
                     * 判断参数 StructuredRule 是否已赋值
                     * @return StructuredRule 是否已赋值
                     * 
                     */
                    bool StructuredRuleHasBeenSet() const;

                    /**
                     * 获取<p>非结构化规则</p>
                     * @return UnStructuredRule <p>非结构化规则</p>
                     * 
                     */
                    std::string GetUnStructuredRule() const;

                    /**
                     * 判断参数 UnStructuredRule 是否已赋值
                     * @return UnStructuredRule 是否已赋值
                     * 
                     */
                    bool UnStructuredRuleHasBeenSet() const;

                private:

                    /**
                     * <p>数据项id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>数据项名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>数据项描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>数据项是否启用</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>数据项类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>结构化规则</p>
                     */
                    std::string m_structuredRule;
                    bool m_structuredRuleHasBeenSet;

                    /**
                     * <p>非结构化规则</p>
                     */
                    std::string m_unStructuredRule;
                    bool m_unStructuredRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULEDETAILRESPONSE_H_
