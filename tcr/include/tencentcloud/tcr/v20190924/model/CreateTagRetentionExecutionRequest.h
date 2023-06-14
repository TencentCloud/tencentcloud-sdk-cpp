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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATETAGRETENTIONEXECUTIONREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATETAGRETENTIONEXECUTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateTagRetentionExecution请求参数结构体
                */
                class CreateTagRetentionExecutionRequest : public AbstractModel
                {
                public:
                    CreateTagRetentionExecutionRequest();
                    ~CreateTagRetentionExecutionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主实例iD
                     * @return RegistryId 主实例iD
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置主实例iD
                     * @param _registryId 主实例iD
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取版本保留规则Id
                     * @return RetentionId 版本保留规则Id
                     * 
                     */
                    int64_t GetRetentionId() const;

                    /**
                     * 设置版本保留规则Id
                     * @param _retentionId 版本保留规则Id
                     * 
                     */
                    void SetRetentionId(const int64_t& _retentionId);

                    /**
                     * 判断参数 RetentionId 是否已赋值
                     * @return RetentionId 是否已赋值
                     * 
                     */
                    bool RetentionIdHasBeenSet() const;

                    /**
                     * 获取是否模拟执行，默认值为false，即非模拟执行
                     * @return DryRun 是否模拟执行，默认值为false，即非模拟执行
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否模拟执行，默认值为false，即非模拟执行
                     * @param _dryRun 是否模拟执行，默认值为false，即非模拟执行
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 主实例iD
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 版本保留规则Id
                     */
                    int64_t m_retentionId;
                    bool m_retentionIdHasBeenSet;

                    /**
                     * 是否模拟执行，默认值为false，即非模拟执行
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATETAGRETENTIONEXECUTIONREQUEST_H_
