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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYBLOCKIPLISTREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYBLOCKIPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyBlockIPList请求参数结构体
                */
                class ModifyBlockIPListRequest : public AbstractModel
                {
                public:
                    ModifyBlockIPListRequest();
                    ~ModifyBlockIPListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID
                     * @return LoadBalancerIds 负载均衡实例ID
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置负载均衡实例ID
                     * @param _loadBalancerIds 负载均衡实例ID
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取操作类型，可取：
<li> add_customized_field（首次设置header，开启黑名单功能）</li>
<li> set_customized_field（修改header）</li>
<li> del_customized_field（删除header）</li>
<li> add_blocked（添加黑名单）</li>
<li> del_blocked（删除黑名单）</li>
<li> flush_blocked（清空黑名单）</li>
                     * @return Type 操作类型，可取：
<li> add_customized_field（首次设置header，开启黑名单功能）</li>
<li> set_customized_field（修改header）</li>
<li> del_customized_field（删除header）</li>
<li> add_blocked（添加黑名单）</li>
<li> del_blocked（删除黑名单）</li>
<li> flush_blocked（清空黑名单）</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置操作类型，可取：
<li> add_customized_field（首次设置header，开启黑名单功能）</li>
<li> set_customized_field（修改header）</li>
<li> del_customized_field（删除header）</li>
<li> add_blocked（添加黑名单）</li>
<li> del_blocked（删除黑名单）</li>
<li> flush_blocked（清空黑名单）</li>
                     * @param _type 操作类型，可取：
<li> add_customized_field（首次设置header，开启黑名单功能）</li>
<li> set_customized_field（修改header）</li>
<li> del_customized_field（删除header）</li>
<li> add_blocked（添加黑名单）</li>
<li> del_blocked（删除黑名单）</li>
<li> flush_blocked（清空黑名单）</li>
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
                     * 获取客户端真实IP存放的header字段名
                     * @return ClientIPField 客户端真实IP存放的header字段名
                     * 
                     */
                    std::string GetClientIPField() const;

                    /**
                     * 设置客户端真实IP存放的header字段名
                     * @param _clientIPField 客户端真实IP存放的header字段名
                     * 
                     */
                    void SetClientIPField(const std::string& _clientIPField);

                    /**
                     * 判断参数 ClientIPField 是否已赋值
                     * @return ClientIPField 是否已赋值
                     * 
                     */
                    bool ClientIPFieldHasBeenSet() const;

                    /**
                     * 获取封禁IP列表，单次操作数组最大长度支持200000
                     * @return BlockIPList 封禁IP列表，单次操作数组最大长度支持200000
                     * 
                     */
                    std::vector<std::string> GetBlockIPList() const;

                    /**
                     * 设置封禁IP列表，单次操作数组最大长度支持200000
                     * @param _blockIPList 封禁IP列表，单次操作数组最大长度支持200000
                     * 
                     */
                    void SetBlockIPList(const std::vector<std::string>& _blockIPList);

                    /**
                     * 判断参数 BlockIPList 是否已赋值
                     * @return BlockIPList 是否已赋值
                     * 
                     */
                    bool BlockIPListHasBeenSet() const;

                    /**
                     * 获取过期时间，单位秒，默认值3600
                     * @return ExpireTime 过期时间，单位秒，默认值3600
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置过期时间，单位秒，默认值3600
                     * @param _expireTime 过期时间，单位秒，默认值3600
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取添加IP的策略，可取：fifo（如果黑名单容量已满，新加入黑名单的IP采用先进先出策略）
                     * @return AddStrategy 添加IP的策略，可取：fifo（如果黑名单容量已满，新加入黑名单的IP采用先进先出策略）
                     * 
                     */
                    std::string GetAddStrategy() const;

                    /**
                     * 设置添加IP的策略，可取：fifo（如果黑名单容量已满，新加入黑名单的IP采用先进先出策略）
                     * @param _addStrategy 添加IP的策略，可取：fifo（如果黑名单容量已满，新加入黑名单的IP采用先进先出策略）
                     * 
                     */
                    void SetAddStrategy(const std::string& _addStrategy);

                    /**
                     * 判断参数 AddStrategy 是否已赋值
                     * @return AddStrategy 是否已赋值
                     * 
                     */
                    bool AddStrategyHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * 操作类型，可取：
<li> add_customized_field（首次设置header，开启黑名单功能）</li>
<li> set_customized_field（修改header）</li>
<li> del_customized_field（删除header）</li>
<li> add_blocked（添加黑名单）</li>
<li> del_blocked（删除黑名单）</li>
<li> flush_blocked（清空黑名单）</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 客户端真实IP存放的header字段名
                     */
                    std::string m_clientIPField;
                    bool m_clientIPFieldHasBeenSet;

                    /**
                     * 封禁IP列表，单次操作数组最大长度支持200000
                     */
                    std::vector<std::string> m_blockIPList;
                    bool m_blockIPListHasBeenSet;

                    /**
                     * 过期时间，单位秒，默认值3600
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 添加IP的策略，可取：fifo（如果黑名单容量已满，新加入黑名单的IP采用先进先出策略）
                     */
                    std::string m_addStrategy;
                    bool m_addStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYBLOCKIPLISTREQUEST_H_
