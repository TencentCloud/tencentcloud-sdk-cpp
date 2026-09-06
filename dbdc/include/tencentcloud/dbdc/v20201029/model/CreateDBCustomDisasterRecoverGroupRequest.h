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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_CREATEDBCUSTOMDISASTERRECOVERGROUPREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_CREATEDBCUSTOMDISASTERRECOVERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/Tag.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * CreateDBCustomDisasterRecoverGroup请求参数结构体
                */
                class CreateDBCustomDisasterRecoverGroupRequest : public AbstractModel
                {
                public:
                    CreateDBCustomDisasterRecoverGroupRequest();
                    ~CreateDBCustomDisasterRecoverGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>置放群组名称</p><p>入参限制：长度1-60个字符，支持中、英文</p>
                     * @return Name <p>置放群组名称</p><p>入参限制：长度1-60个字符，支持中、英文</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>置放群组名称</p><p>入参限制：长度1-60个字符，支持中、英文</p>
                     * @param _name <p>置放群组名称</p><p>入参限制：长度1-60个字符，支持中、英文</p>
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
                     * 获取<p>置放群组类型</p><p>枚举值：</p><ul><li>HOST： 物理机</li></ul><p>默认值：HOST</p><p>当前仅支持物理机类型</p>
                     * @return Type <p>置放群组类型</p><p>枚举值：</p><ul><li>HOST： 物理机</li></ul><p>默认值：HOST</p><p>当前仅支持物理机类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>置放群组类型</p><p>枚举值：</p><ul><li>HOST： 物理机</li></ul><p>默认值：HOST</p><p>当前仅支持物理机类型</p>
                     * @param _type <p>置放群组类型</p><p>枚举值：</p><ul><li>HOST： 物理机</li></ul><p>默认值：HOST</p><p>当前仅支持物理机类型</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>置放群组策略</p><p>入参限制：当前仅支持分散置放群组</p><p>枚举值：</p><ul><li>SPREAD： 分散置放群组</li></ul><p>默认值：SPREAD</p>
                     * @return Strategy <p>置放群组策略</p><p>入参限制：当前仅支持分散置放群组</p><p>枚举值：</p><ul><li>SPREAD： 分散置放群组</li></ul><p>默认值：SPREAD</p>
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置<p>置放群组策略</p><p>入参限制：当前仅支持分散置放群组</p><p>枚举值：</p><ul><li>SPREAD： 分散置放群组</li></ul><p>默认值：SPREAD</p>
                     * @param _strategy <p>置放群组策略</p><p>入参限制：当前仅支持分散置放群组</p><p>枚举值：</p><ul><li>SPREAD： 分散置放群组</li></ul><p>默认值：SPREAD</p>
                     * 
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取<p>置放群组的亲和度，在置放群组的实例会按该亲和度分布</p><p>取值范围：[1, 10]</p><p>默认值：1</p>
                     * @return Affinity <p>置放群组的亲和度，在置放群组的实例会按该亲和度分布</p><p>取值范围：[1, 10]</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetAffinity() const;

                    /**
                     * 设置<p>置放群组的亲和度，在置放群组的实例会按该亲和度分布</p><p>取值范围：[1, 10]</p><p>默认值：1</p>
                     * @param _affinity <p>置放群组的亲和度，在置放群组的实例会按该亲和度分布</p><p>取值范围：[1, 10]</p><p>默认值：1</p>
                     * 
                     */
                    void SetAffinity(const int64_t& _affinity);

                    /**
                     * 判断参数 Affinity 是否已赋值
                     * @return Affinity 是否已赋值
                     * 
                     */
                    bool AffinityHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * @return ClientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * @param _clientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * <p>置放群组名称</p><p>入参限制：长度1-60个字符，支持中、英文</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>置放群组类型</p><p>枚举值：</p><ul><li>HOST： 物理机</li></ul><p>默认值：HOST</p><p>当前仅支持物理机类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>置放群组策略</p><p>入参限制：当前仅支持分散置放群组</p><p>枚举值：</p><ul><li>SPREAD： 分散置放群组</li></ul><p>默认值：SPREAD</p>
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * <p>置放群组的亲和度，在置放群组的实例会按该亲和度分布</p><p>取值范围：[1, 10]</p><p>默认值：1</p>
                     */
                    int64_t m_affinity;
                    bool m_affinityHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_CREATEDBCUSTOMDISASTERRECOVERGROUPREQUEST_H_
