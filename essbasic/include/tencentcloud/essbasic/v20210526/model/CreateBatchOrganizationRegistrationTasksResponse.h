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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHORGANIZATIONREGISTRATIONTASKSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHORGANIZATIONREGISTRATIONTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateBatchOrganizationRegistrationTasks返回参数结构体
                */
                class CreateBatchOrganizationRegistrationTasksResponse : public AbstractModel
                {
                public:
                    CreateBatchOrganizationRegistrationTasksResponse();
                    ~CreateBatchOrganizationRegistrationTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取生成注册链接的任务ID，后序根据这个任务ID， 调用<a href="https://qian.tencent.com/developers/partnerApis/accounts/DescribeBatchOrganizationRegistrationUrls" target="_blank">查询子企业批量认证链接</a>获取生成的链接，发给对应的客户使用。

注：`如果有错误，则不会返回任务ID`
                     * @return TaskId 生成注册链接的任务ID，后序根据这个任务ID， 调用<a href="https://qian.tencent.com/developers/partnerApis/accounts/DescribeBatchOrganizationRegistrationUrls" target="_blank">查询子企业批量认证链接</a>获取生成的链接，发给对应的客户使用。

注：`如果有错误，则不会返回任务ID`
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取批量生成企业认证链接的详细错误信息，顺序与输入参数子企业列表顺序一致。
<ul>
<li>如果所有企业认证链接都成功生成，将不返回错误信息</li>
<li>如果存在任何错误，将返回具体的错误描述。（没有错误的企业返回空字符串）</li>
</ul>
                     * @return ErrorMessages 批量生成企业认证链接的详细错误信息，顺序与输入参数子企业列表顺序一致。
<ul>
<li>如果所有企业认证链接都成功生成，将不返回错误信息</li>
<li>如果存在任何错误，将返回具体的错误描述。（没有错误的企业返回空字符串）</li>
</ul>
                     * 
                     */
                    std::vector<std::string> GetErrorMessages() const;

                    /**
                     * 判断参数 ErrorMessages 是否已赋值
                     * @return ErrorMessages 是否已赋值
                     * 
                     */
                    bool ErrorMessagesHasBeenSet() const;

                private:

                    /**
                     * 生成注册链接的任务ID，后序根据这个任务ID， 调用<a href="https://qian.tencent.com/developers/partnerApis/accounts/DescribeBatchOrganizationRegistrationUrls" target="_blank">查询子企业批量认证链接</a>获取生成的链接，发给对应的客户使用。

注：`如果有错误，则不会返回任务ID`
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 批量生成企业认证链接的详细错误信息，顺序与输入参数子企业列表顺序一致。
<ul>
<li>如果所有企业认证链接都成功生成，将不返回错误信息</li>
<li>如果存在任何错误，将返回具体的错误描述。（没有错误的企业返回空字符串）</li>
</ul>
                     */
                    std::vector<std::string> m_errorMessages;
                    bool m_errorMessagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHORGANIZATIONREGISTRATIONTASKSRESPONSE_H_
