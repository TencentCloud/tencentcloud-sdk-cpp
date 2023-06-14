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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEUNDERWRITETASKRESPONSE_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEUNDERWRITETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cii/v20210408/model/UnderwriteOutput.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeUnderwriteTask返回参数结构体
                */
                class DescribeUnderwriteTaskResponse : public AbstractModel
                {
                public:
                    DescribeUnderwriteTaskResponse();
                    ~DescribeUnderwriteTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云主账号ID
                     * @return Uin 腾讯云主账号ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取操作人子账户ID
                     * @return SubAccountUin 操作人子账户ID
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取保单ID
                     * @return PolicyId 保单ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取主任务ID
                     * @return MainTaskId 主任务ID
                     * 
                     */
                    std::string GetMainTaskId() const;

                    /**
                     * 判断参数 MainTaskId 是否已赋值
                     * @return MainTaskId 是否已赋值
                     * 
                     */
                    bool MainTaskIdHasBeenSet() const;

                    /**
                     * 获取核保任务ID
                     * @return UnderwriteTaskId 核保任务ID
                     * 
                     */
                    std::string GetUnderwriteTaskId() const;

                    /**
                     * 判断参数 UnderwriteTaskId 是否已赋值
                     * @return UnderwriteTaskId 是否已赋值
                     * 
                     */
                    bool UnderwriteTaskIdHasBeenSet() const;

                    /**
                     * 获取结果状态：
0：返回成功
1：结果未生成
2：结果生成失败
                     * @return Status 结果状态：
0：返回成功
1：结果未生成
2：结果生成失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取核保结果
                     * @return UnderwriteResults 核保结果
                     * 
                     */
                    std::vector<UnderwriteOutput> GetUnderwriteResults() const;

                    /**
                     * 判断参数 UnderwriteResults 是否已赋值
                     * @return UnderwriteResults 是否已赋值
                     * 
                     */
                    bool UnderwriteResultsHasBeenSet() const;

                private:

                    /**
                     * 腾讯云主账号ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 操作人子账户ID
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 保单ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 主任务ID
                     */
                    std::string m_mainTaskId;
                    bool m_mainTaskIdHasBeenSet;

                    /**
                     * 核保任务ID
                     */
                    std::string m_underwriteTaskId;
                    bool m_underwriteTaskIdHasBeenSet;

                    /**
                     * 结果状态：
0：返回成功
1：结果未生成
2：结果生成失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 核保结果
                     */
                    std::vector<UnderwriteOutput> m_underwriteResults;
                    bool m_underwriteResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEUNDERWRITETASKRESPONSE_H_
