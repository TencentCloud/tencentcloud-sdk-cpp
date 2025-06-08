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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONTRACTDIFFTASKWEBURLRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONTRACTDIFFTASKWEBURLRESPONSE_H_

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
                * CreateContractDiffTaskWebUrl返回参数结构体
                */
                class CreateContractDiffTaskWebUrlResponse : public AbstractModel
                {
                public:
                    CreateContractDiffTaskWebUrlResponse();
                    ~CreateContractDiffTaskWebUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取接口返回的合同对比任务ID，可以调用接口<a href="https://qian.tencent.com/developers/companyApis/embedPages/DescribeContractDiffTaskWebUrl" target="_blank">获取合同对比结果web页面</a>查看对比任务的结果。
当`SkipFileUpload`参数为`true`时才会返回值，否则为空。
                     * @return TaskId 接口返回的合同对比任务ID，可以调用接口<a href="https://qian.tencent.com/developers/companyApis/embedPages/DescribeContractDiffTaskWebUrl" target="_blank">获取合同对比结果web页面</a>查看对比任务的结果。
当`SkipFileUpload`参数为`true`时才会返回值，否则为空。
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
                     * 获取合同对比嵌入式web页面链接，有效期：5分钟
链接仅能使用一次
                     * @return WebUrl 合同对比嵌入式web页面链接，有效期：5分钟
链接仅能使用一次
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
                     * 接口返回的合同对比任务ID，可以调用接口<a href="https://qian.tencent.com/developers/companyApis/embedPages/DescribeContractDiffTaskWebUrl" target="_blank">获取合同对比结果web页面</a>查看对比任务的结果。
当`SkipFileUpload`参数为`true`时才会返回值，否则为空。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 合同对比嵌入式web页面链接，有效期：5分钟
链接仅能使用一次
                     */
                    std::string m_webUrl;
                    bool m_webUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONTRACTDIFFTASKWEBURLRESPONSE_H_
