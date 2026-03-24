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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEAGGREGATORRESPONSE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEAGGREGATORRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/AggregatorAccount.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * DescribeAggregator返回参数结构体
                */
                class DescribeAggregatorResponse : public AbstractModel
                {
                public:
                    DescribeAggregatorResponse();
                    ~DescribeAggregatorResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>账号组名称</p>
                     * @return Name <p>账号组名称</p>
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
                     * 获取<p>账号组描述</p>
                     * @return Description <p>账号组描述</p>
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
                     * 获取<p>账号组类型</p>
                     * @return Type <p>账号组类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>成员信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AggregatorAccounts <p>成员信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AggregatorAccount> GetAggregatorAccounts() const;

                    /**
                     * 判断参数 AggregatorAccounts 是否已赋值
                     * @return AggregatorAccounts 是否已赋值
                     * 
                     */
                    bool AggregatorAccountsHasBeenSet() const;

                    /**
                     * 获取<p>创建状态</p>
                     * @return AggregatorStatus <p>创建状态</p>
                     * 
                     */
                    uint64_t GetAggregatorStatus() const;

                    /**
                     * 判断参数 AggregatorStatus 是否已赋值
                     * @return AggregatorStatus 是否已赋值
                     * 
                     */
                    bool AggregatorStatusHasBeenSet() const;

                private:

                    /**
                     * <p>账号组名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>账号组描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>账号组类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>成员信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AggregatorAccount> m_aggregatorAccounts;
                    bool m_aggregatorAccountsHasBeenSet;

                    /**
                     * <p>创建状态</p>
                     */
                    uint64_t m_aggregatorStatus;
                    bool m_aggregatorStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEAGGREGATORRESPONSE_H_
