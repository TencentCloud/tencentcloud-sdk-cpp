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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATEWORKFLOWRUNREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATEWORKFLOWRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/CustomVariable.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
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
                     * 获取运行环境。0: 测试环境； 1: 正式环境
                     * @return RunEnv 运行环境。0: 测试环境； 1: 正式环境
                     * 
                     */
                    uint64_t GetRunEnv() const;

                    /**
                     * 设置运行环境。0: 测试环境； 1: 正式环境
                     * @param _runEnv 运行环境。0: 测试环境； 1: 正式环境
                     * 
                     */
                    void SetRunEnv(const uint64_t& _runEnv);

                    /**
                     * 判断参数 RunEnv 是否已赋值
                     * @return RunEnv 是否已赋值
                     * 
                     */
                    bool RunEnvHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return AppBizId 应用ID
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置应用ID
                     * @param _appBizId 应用ID
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取用户输入的内容
                     * @return Query 用户输入的内容
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置用户输入的内容
                     * @param _query 用户输入的内容
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
                     * 获取API参数配置
                     * @return CustomVariables API参数配置
                     * 
                     */
                    std::vector<CustomVariable> GetCustomVariables() const;

                    /**
                     * 设置API参数配置
                     * @param _customVariables API参数配置
                     * 
                     */
                    void SetCustomVariables(const std::vector<CustomVariable>& _customVariables);

                    /**
                     * 判断参数 CustomVariables 是否已赋值
                     * @return CustomVariables 是否已赋值
                     * 
                     */
                    bool CustomVariablesHasBeenSet() const;

                private:

                    /**
                     * 运行环境。0: 测试环境； 1: 正式环境
                     */
                    uint64_t m_runEnv;
                    bool m_runEnvHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * 用户输入的内容
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * API参数配置
                     */
                    std::vector<CustomVariable> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATEWORKFLOWRUNREQUEST_H_
