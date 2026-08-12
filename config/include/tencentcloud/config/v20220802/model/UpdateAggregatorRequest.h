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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATORREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATORREQUEST_H_

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
                * UpdateAggregator请求参数结构体
                */
                class UpdateAggregatorRequest : public AbstractModel
                {
                public:
                    UpdateAggregatorRequest();
                    ~UpdateAggregatorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>账号组名称</p>
                     * @return Name <p>账号组名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>账号组名称</p>
                     * @param _name <p>账号组名称</p>
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
                     * 获取<p>账号组描述</p>
                     * @return Description <p>账号组描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>账号组描述</p>
                     * @param _description <p>账号组描述</p>
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
                     * 获取<p>账号组类型</p><p>枚举值：</p><ul><li>RD： 全局账号组</li><li>CUSTOM： 自定义账号组</li></ul>
                     * @return AccountGroupId <p>账号组类型</p><p>枚举值：</p><ul><li>RD： 全局账号组</li><li>CUSTOM： 自定义账号组</li></ul>
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置<p>账号组类型</p><p>枚举值：</p><ul><li>RD： 全局账号组</li><li>CUSTOM： 自定义账号组</li></ul>
                     * @param _accountGroupId <p>账号组类型</p><p>枚举值：</p><ul><li>RD： 全局账号组</li><li>CUSTOM： 自定义账号组</li></ul>
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>账号组创建者ID</p>
                     * @return OwnerUin <p>账号组创建者ID</p>
                     * 
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置<p>账号组创建者ID</p>
                     * @param _ownerUin <p>账号组创建者ID</p>
                     * 
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>账号组成员信息列表，最多100个</p>
                     * @return AggregatorAccounts <p>账号组成员信息列表，最多100个</p>
                     * 
                     */
                    std::vector<AggregatorAccount> GetAggregatorAccounts() const;

                    /**
                     * 设置<p>账号组成员信息列表，最多100个</p>
                     * @param _aggregatorAccounts <p>账号组成员信息列表，最多100个</p>
                     * 
                     */
                    void SetAggregatorAccounts(const std::vector<AggregatorAccount>& _aggregatorAccounts);

                    /**
                     * 判断参数 AggregatorAccounts 是否已赋值
                     * @return AggregatorAccounts 是否已赋值
                     * 
                     */
                    bool AggregatorAccountsHasBeenSet() const;

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
                     * <p>账号组类型</p><p>枚举值：</p><ul><li>RD： 全局账号组</li><li>CUSTOM： 自定义账号组</li></ul>
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * <p>账号组创建者ID</p>
                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>账号组成员信息列表，最多100个</p>
                     */
                    std::vector<AggregatorAccount> m_aggregatorAccounts;
                    bool m_aggregatorAccountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATORREQUEST_H_
