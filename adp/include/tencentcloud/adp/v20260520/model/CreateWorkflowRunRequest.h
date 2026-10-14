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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATEWORKFLOWRUNREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATEWORKFLOWRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CustomVariable.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateWorkflowRun请求参数结构体
                */
                class CreateWorkflowRunRequest : public AbstractModel
                {
                public:
                    CreateWorkflowRunRequest();
                    ~CreateWorkflowRunRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用ID, 获取方法参看如何获取 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     * @return AppId <p>应用ID, 获取方法参看如何获取 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用ID, 获取方法参看如何获取 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     * @param _appId <p>应用ID, 获取方法参看如何获取 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>运行环境。1:开发域，2:生产域</p>
                     * @return Domain <p>运行环境。1:开发域，2:生产域</p>
                     * 
                     */
                    uint64_t GetDomain() const;

                    /**
                     * 设置<p>运行环境。1:开发域，2:生产域</p>
                     * @param _domain <p>运行环境。1:开发域，2:生产域</p>
                     * 
                     */
                    void SetDomain(const uint64_t& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>用户输入的内容</p>
                     * @return Query <p>用户输入的内容</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>用户输入的内容</p>
                     * @param _query <p>用户输入的内容</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>API参数配置</p>
                     * @return CustomVariableList <p>API参数配置</p>
                     * 
                     */
                    std::vector<CustomVariable> GetCustomVariableList() const;

                    /**
                     * 设置<p>API参数配置</p>
                     * @param _customVariableList <p>API参数配置</p>
                     * 
                     */
                    void SetCustomVariableList(const std::vector<CustomVariable>& _customVariableList);

                    /**
                     * 判断参数 CustomVariableList 是否已赋值
                     * @return CustomVariableList 是否已赋值
                     * 
                     */
                    bool CustomVariableListHasBeenSet() const;

                    /**
                     * 获取<p>用户ID</p>
                     * @return UserId <p>用户ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户ID</p>
                     * @param _userId <p>用户ID</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID, 获取方法参看如何获取 <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">AppId</a></p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>运行环境。1:开发域，2:生产域</p>
                     */
                    uint64_t m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>用户输入的内容</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>API参数配置</p>
                     */
                    std::vector<CustomVariable> m_customVariableList;
                    bool m_customVariableListHasBeenSet;

                    /**
                     * <p>用户ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATEWORKFLOWRUNREQUEST_H_
