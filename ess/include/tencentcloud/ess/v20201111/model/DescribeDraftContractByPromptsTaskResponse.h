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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEDRAFTCONTRACTBYPROMPTSTASKRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEDRAFTCONTRACTBYPROMPTSTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeDraftContractByPromptsTask返回参数结构体
                */
                class DescribeDraftContractByPromptsTaskResponse : public AbstractModel
                {
                public:
                    DescribeDraftContractByPromptsTaskResponse();
                    ~DescribeDraftContractByPromptsTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态，枚举，0 已创建，1 执行中，2 成功，3 失败
                     * @return Status 任务状态，枚举，0 已创建，1 执行中，2 成功，3 失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务错误信息，仅在失败时返回
                     * @return Message 任务错误信息，仅在失败时返回
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取生成的合同名称
                     * @return ContractName 生成的合同名称
                     * 
                     */
                    std::string GetContractName() const;

                    /**
                     * 判断参数 ContractName 是否已赋值
                     * @return ContractName 是否已赋值
                     * 
                     */
                    bool ContractNameHasBeenSet() const;

                    /**
                     * 获取生成的合同文件资源id
                     * @return ResourceId 生成的合同文件资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 任务状态，枚举，0 已创建，1 执行中，2 成功，3 失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务错误信息，仅在失败时返回
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 生成的合同名称
                     */
                    std::string m_contractName;
                    bool m_contractNameHasBeenSet;

                    /**
                     * 生成的合同文件资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEDRAFTCONTRACTBYPROMPTSTASKRESPONSE_H_
