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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECREDITSUSAGEDETAILREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECREDITSUSAGEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCreditsUsageDetail请求参数结构体
                */
                class DescribeCreditsUsageDetailRequest : public AbstractModel
                {
                public:
                    DescribeCreditsUsageDetailRequest();
                    ~DescribeCreditsUsageDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模块列表</p><p>枚举值：</p><ul><li>FLEXDB： 文档数据库</li><li>TDSQL： MYSQL数据库</li><li>SCF： 云函数</li><li>AI： 大模型</li><li>EKS： 云托管</li><li>COS： 云存储</li><li>HOSTING： 静态托管</li><li>Auth： 用户权限</li><li>APIInvocation： API调用</li><li>HTTPInvocation： HTTP调用</li><li>VM： 主机</li><li>Workflow： 工作流</li><li>Other： 其他</li><li>PostgreSQL： PostgreSQL</li><li>Token： Token</li></ul>
                     * @return Modules <p>模块列表</p><p>枚举值：</p><ul><li>FLEXDB： 文档数据库</li><li>TDSQL： MYSQL数据库</li><li>SCF： 云函数</li><li>AI： 大模型</li><li>EKS： 云托管</li><li>COS： 云存储</li><li>HOSTING： 静态托管</li><li>Auth： 用户权限</li><li>APIInvocation： API调用</li><li>HTTPInvocation： HTTP调用</li><li>VM： 主机</li><li>Workflow： 工作流</li><li>Other： 其他</li><li>PostgreSQL： PostgreSQL</li><li>Token： Token</li></ul>
                     * 
                     */
                    std::vector<std::string> GetModules() const;

                    /**
                     * 设置<p>模块列表</p><p>枚举值：</p><ul><li>FLEXDB： 文档数据库</li><li>TDSQL： MYSQL数据库</li><li>SCF： 云函数</li><li>AI： 大模型</li><li>EKS： 云托管</li><li>COS： 云存储</li><li>HOSTING： 静态托管</li><li>Auth： 用户权限</li><li>APIInvocation： API调用</li><li>HTTPInvocation： HTTP调用</li><li>VM： 主机</li><li>Workflow： 工作流</li><li>Other： 其他</li><li>PostgreSQL： PostgreSQL</li><li>Token： Token</li></ul>
                     * @param _modules <p>模块列表</p><p>枚举值：</p><ul><li>FLEXDB： 文档数据库</li><li>TDSQL： MYSQL数据库</li><li>SCF： 云函数</li><li>AI： 大模型</li><li>EKS： 云托管</li><li>COS： 云存储</li><li>HOSTING： 静态托管</li><li>Auth： 用户权限</li><li>APIInvocation： API调用</li><li>HTTPInvocation： HTTP调用</li><li>VM： 主机</li><li>Workflow： 工作流</li><li>Other： 其他</li><li>PostgreSQL： PostgreSQL</li><li>Token： Token</li></ul>
                     * 
                     */
                    void SetModules(const std::vector<std::string>& _modules);

                    /**
                     * 判断参数 Modules 是否已赋值
                     * @return Modules 是否已赋值
                     * 
                     */
                    bool ModulesHasBeenSet() const;

                    /**
                     * 获取<p>开始日期</p>
                     * @return StartDate <p>开始日期</p>
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置<p>开始日期</p>
                     * @param _startDate <p>开始日期</p>
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取<p>结束日期</p>
                     * @return EndDate <p>结束日期</p>
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置<p>结束日期</p>
                     * @param _endDate <p>结束日期</p>
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取<p>是否需要每日用量明细</p>
                     * @return NeedUsageDetails <p>是否需要每日用量明细</p>
                     * 
                     */
                    bool GetNeedUsageDetails() const;

                    /**
                     * 设置<p>是否需要每日用量明细</p>
                     * @param _needUsageDetails <p>是否需要每日用量明细</p>
                     * 
                     */
                    void SetNeedUsageDetails(const bool& _needUsageDetails);

                    /**
                     * 判断参数 NeedUsageDetails 是否已赋值
                     * @return NeedUsageDetails 是否已赋值
                     * 
                     */
                    bool NeedUsageDetailsHasBeenSet() const;

                    /**
                     * 获取<p>环境id</p>
                     * @return EnvId <p>环境id</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境id</p>
                     * @param _envId <p>环境id</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                private:

                    /**
                     * <p>模块列表</p><p>枚举值：</p><ul><li>FLEXDB： 文档数据库</li><li>TDSQL： MYSQL数据库</li><li>SCF： 云函数</li><li>AI： 大模型</li><li>EKS： 云托管</li><li>COS： 云存储</li><li>HOSTING： 静态托管</li><li>Auth： 用户权限</li><li>APIInvocation： API调用</li><li>HTTPInvocation： HTTP调用</li><li>VM： 主机</li><li>Workflow： 工作流</li><li>Other： 其他</li><li>PostgreSQL： PostgreSQL</li><li>Token： Token</li></ul>
                     */
                    std::vector<std::string> m_modules;
                    bool m_modulesHasBeenSet;

                    /**
                     * <p>开始日期</p>
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * <p>结束日期</p>
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * <p>是否需要每日用量明细</p>
                     */
                    bool m_needUsageDetails;
                    bool m_needUsageDetailsHasBeenSet;

                    /**
                     * <p>环境id</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECREDITSUSAGEDETAILREQUEST_H_
