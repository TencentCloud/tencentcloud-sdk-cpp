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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONTRACTREVIEWWEBURLRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONTRACTREVIEWWEBURLRESPONSE_H_

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
                * CreateContractReviewWebUrl返回参数结构体
                */
                class CreateContractReviewWebUrlResponse : public AbstractModel
                {
                public:
                    CreateContractReviewWebUrlResponse();
                    ~CreateContractReviewWebUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取接口返回的合同审查任务ID，可以调用接口<a href="https://qian.tencent.com/developers/companyApis/embedPages/DescribeContractReviewWebUrl" target="_blank">获取合同审查结果web页面</a>查看审查任务的结果。

注意： `当ResourceId参数不为空时才会返回此值。`
                     * @return TaskId 接口返回的合同审查任务ID，可以调用接口<a href="https://qian.tencent.com/developers/companyApis/embedPages/DescribeContractReviewWebUrl" target="_blank">获取合同审查结果web页面</a>查看审查任务的结果。

注意： `当ResourceId参数不为空时才会返回此值。`
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
                     * 获取合同审查嵌入式web页面链接。

注意：`链接有效期为5分钟，且链接仅能使用一次。如果上传的合同文件为word时不能进行iframe方式嵌入到贵方系统的网页中，需要单独页面打开此链接显示`
                     * @return WebUrl 合同审查嵌入式web页面链接。

注意：`链接有效期为5分钟，且链接仅能使用一次。如果上传的合同文件为word时不能进行iframe方式嵌入到贵方系统的网页中，需要单独页面打开此链接显示`
                     * 
                     */
                    std::string GetWebUrl() const;

                    /**
                     * 判断参数 WebUrl 是否已赋值
                     * @return WebUrl 是否已赋值
                     * 
                     */
                    bool WebUrlHasBeenSet() const;

                private:

                    /**
                     * 接口返回的合同审查任务ID，可以调用接口<a href="https://qian.tencent.com/developers/companyApis/embedPages/DescribeContractReviewWebUrl" target="_blank">获取合同审查结果web页面</a>查看审查任务的结果。

注意： `当ResourceId参数不为空时才会返回此值。`
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 合同审查嵌入式web页面链接。

注意：`链接有效期为5分钟，且链接仅能使用一次。如果上传的合同文件为word时不能进行iframe方式嵌入到贵方系统的网页中，需要单独页面打开此链接显示`
                     */
                    std::string m_webUrl;
                    bool m_webUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONTRACTREVIEWWEBURLRESPONSE_H_
