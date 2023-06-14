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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTCLIENTSREQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTCLIENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeAgentClients请求参数结构体
                */
                class DescribeAgentClientsRequest : public AbstractModel
                {
                public:
                    DescribeAgentClientsRequest();
                    ~DescribeAgentClientsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户账号ID
                     * @return ClientUin 客户账号ID
                     * 
                     */
                    std::string GetClientUin() const;

                    /**
                     * 设置客户账号ID
                     * @param _clientUin 客户账号ID
                     * 
                     */
                    void SetClientUin(const std::string& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取客户名称。由于涉及隐私，名称打码显示，故名称仅支持打码后的模糊搜索
                     * @return ClientName 客户名称。由于涉及隐私，名称打码显示，故名称仅支持打码后的模糊搜索
                     * 
                     */
                    std::string GetClientName() const;

                    /**
                     * 设置客户名称。由于涉及隐私，名称打码显示，故名称仅支持打码后的模糊搜索
                     * @param _clientName 客户名称。由于涉及隐私，名称打码显示，故名称仅支持打码后的模糊搜索
                     * 
                     */
                    void SetClientName(const std::string& _clientName);

                    /**
                     * 判断参数 ClientName 是否已赋值
                     * @return ClientName 是否已赋值
                     * 
                     */
                    bool ClientNameHasBeenSet() const;

                    /**
                     * 获取客户类型，a/b，类型定义参考代理商相关政策文档
                     * @return ClientFlag 客户类型，a/b，类型定义参考代理商相关政策文档
                     * 
                     */
                    std::string GetClientFlag() const;

                    /**
                     * 设置客户类型，a/b，类型定义参考代理商相关政策文档
                     * @param _clientFlag 客户类型，a/b，类型定义参考代理商相关政策文档
                     * 
                     */
                    void SetClientFlag(const std::string& _clientFlag);

                    /**
                     * 判断参数 ClientFlag 是否已赋值
                     * @return ClientFlag 是否已赋值
                     * 
                     */
                    bool ClientFlagHasBeenSet() const;

                    /**
                     * 获取ASC/DESC， 不区分大小写，按申请时间排序
                     * @return OrderDirection ASC/DESC， 不区分大小写，按申请时间排序
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置ASC/DESC， 不区分大小写，按申请时间排序
                     * @param _orderDirection ASC/DESC， 不区分大小写，按申请时间排序
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数目
                     * @return Limit 限制数目
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目
                     * @param _limit 限制数目
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取业务员ID
                     * @return SalesUin 业务员ID
                     * 
                     */
                    std::string GetSalesUin() const;

                    /**
                     * 设置业务员ID
                     * @param _salesUin 业务员ID
                     * 
                     */
                    void SetSalesUin(const std::string& _salesUin);

                    /**
                     * 判断参数 SalesUin 是否已赋值
                     * @return SalesUin 是否已赋值
                     * 
                     */
                    bool SalesUinHasBeenSet() const;

                    /**
                     * 获取业务员姓名（模糊查询）
                     * @return SalesName 业务员姓名（模糊查询）
                     * 
                     */
                    std::string GetSalesName() const;

                    /**
                     * 设置业务员姓名（模糊查询）
                     * @param _salesName 业务员姓名（模糊查询）
                     * 
                     */
                    void SetSalesName(const std::string& _salesName);

                    /**
                     * 判断参数 SalesName 是否已赋值
                     * @return SalesName 是否已赋值
                     * 
                     */
                    bool SalesNameHasBeenSet() const;

                private:

                    /**
                     * 客户账号ID
                     */
                    std::string m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 客户名称。由于涉及隐私，名称打码显示，故名称仅支持打码后的模糊搜索
                     */
                    std::string m_clientName;
                    bool m_clientNameHasBeenSet;

                    /**
                     * 客户类型，a/b，类型定义参考代理商相关政策文档
                     */
                    std::string m_clientFlag;
                    bool m_clientFlagHasBeenSet;

                    /**
                     * ASC/DESC， 不区分大小写，按申请时间排序
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 业务员ID
                     */
                    std::string m_salesUin;
                    bool m_salesUinHasBeenSet;

                    /**
                     * 业务员姓名（模糊查询）
                     */
                    std::string m_salesName;
                    bool m_salesNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTCLIENTSREQUEST_H_
