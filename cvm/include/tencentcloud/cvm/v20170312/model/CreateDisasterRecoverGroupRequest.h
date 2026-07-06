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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CREATEDISASTERRECOVERGROUPREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CREATEDISASTERRECOVERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateDisasterRecoverGroup请求参数结构体
                */
                class CreateDisasterRecoverGroupRequest : public AbstractModel
                {
                public:
                    CreateDisasterRecoverGroupRequest();
                    ~CreateDisasterRecoverGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分散置放群组名称，长度1-60个字符，支持中、英文。</p>
                     * @return Name <p>分散置放群组名称，长度1-60个字符，支持中、英文。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>分散置放群组名称，长度1-60个字符，支持中、英文。</p>
                     * @param _name <p>分散置放群组名称，长度1-60个字符，支持中、英文。</p>
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
                     * 获取<p>分散置放群组类型，取值范围：<br><li>HOST：物理机</li><li>SW：交换机</li><li>RACK：机架</li></p>
                     * @return Type <p>分散置放群组类型，取值范围：<br><li>HOST：物理机</li><li>SW：交换机</li><li>RACK：机架</li></p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>分散置放群组类型，取值范围：<br><li>HOST：物理机</li><li>SW：交换机</li><li>RACK：机架</li></p>
                     * @param _type <p>分散置放群组类型，取值范围：<br><li>HOST：物理机</li><li>SW：交换机</li><li>RACK：机架</li></p>
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
                     * 获取<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。<br>更多详细信息请参阅：如何保证幂等性。</p>
                     * @return ClientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。<br>更多详细信息请参阅：如何保证幂等性。</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。<br>更多详细信息请参阅：如何保证幂等性。</p>
                     * @param _clientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。<br>更多详细信息请参阅：如何保证幂等性。</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>置放群组的亲和度，在置放群组的实例会按该亲和度分布，亲和度的取值范围是：1-10，默认为1</p>
                     * @return Affinity <p>置放群组的亲和度，在置放群组的实例会按该亲和度分布，亲和度的取值范围是：1-10，默认为1</p>
                     * 
                     */
                    int64_t GetAffinity() const;

                    /**
                     * 设置<p>置放群组的亲和度，在置放群组的实例会按该亲和度分布，亲和度的取值范围是：1-10，默认为1</p>
                     * @param _affinity <p>置放群组的亲和度，在置放群组的实例会按该亲和度分布，亲和度的取值范围是：1-10，默认为1</p>
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
                     * 获取<p>置放群组类型，当前支持两种，分散置放群组和分区置放群组(灰度中)，取值范围：PARTITION：分区置放群组，SPREAD：分散置放群组，不传该值默认是分散置放群组。</p>
                     * @return Strategy <p>置放群组类型，当前支持两种，分散置放群组和分区置放群组(灰度中)，取值范围：PARTITION：分区置放群组，SPREAD：分散置放群组，不传该值默认是分散置放群组。</p>
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置<p>置放群组类型，当前支持两种，分散置放群组和分区置放群组(灰度中)，取值范围：PARTITION：分区置放群组，SPREAD：分散置放群组，不传该值默认是分散置放群组。</p>
                     * @param _strategy <p>置放群组类型，当前支持两种，分散置放群组和分区置放群组(灰度中)，取值范围：PARTITION：分区置放群组，SPREAD：分散置放群组，不传该值默认是分散置放群组。</p>
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
                     * 获取<p>分区置放群组的分区数量，取值范围：2-30，当置放群组类型是分区置放群组时传入(分区置放群组功能灰度中)。</p>
                     * @return PartitionCount <p>分区置放群组的分区数量，取值范围：2-30，当置放群组类型是分区置放群组时传入(分区置放群组功能灰度中)。</p>
                     * 
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 设置<p>分区置放群组的分区数量，取值范围：2-30，当置放群组类型是分区置放群组时传入(分区置放群组功能灰度中)。</p>
                     * @param _partitionCount <p>分区置放群组的分区数量，取值范围：2-30，当置放群组类型是分区置放群组时传入(分区置放群组功能灰度中)。</p>
                     * 
                     */
                    void SetPartitionCount(const int64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取<p>标签描述列表。通过指定该参数可以绑定标签到置放群组。</p>
                     * @return TagSpecification <p>标签描述列表。通过指定该参数可以绑定标签到置放群组。</p>
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置<p>标签描述列表。通过指定该参数可以绑定标签到置放群组。</p>
                     * @param _tagSpecification <p>标签描述列表。通过指定该参数可以绑定标签到置放群组。</p>
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                private:

                    /**
                     * <p>分散置放群组名称，长度1-60个字符，支持中、英文。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>分散置放群组类型，取值范围：<br><li>HOST：物理机</li><li>SW：交换机</li><li>RACK：机架</li></p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。<br>更多详细信息请参阅：如何保证幂等性。</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>置放群组的亲和度，在置放群组的实例会按该亲和度分布，亲和度的取值范围是：1-10，默认为1</p>
                     */
                    int64_t m_affinity;
                    bool m_affinityHasBeenSet;

                    /**
                     * <p>置放群组类型，当前支持两种，分散置放群组和分区置放群组(灰度中)，取值范围：PARTITION：分区置放群组，SPREAD：分散置放群组，不传该值默认是分散置放群组。</p>
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * <p>分区置放群组的分区数量，取值范围：2-30，当置放群组类型是分区置放群组时传入(分区置放群组功能灰度中)。</p>
                     */
                    int64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * <p>标签描述列表。通过指定该参数可以绑定标签到置放群组。</p>
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CREATEDISASTERRECOVERGROUPREQUEST_H_
