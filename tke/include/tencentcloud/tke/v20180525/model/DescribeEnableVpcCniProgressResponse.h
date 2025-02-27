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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEENABLEVPCCNIPROGRESSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEENABLEVPCCNIPROGRESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeEnableVpcCniProgress返回参数结构体
                */
                class DescribeEnableVpcCniProgressResponse : public AbstractModel
                {
                public:
                    DescribeEnableVpcCniProgressResponse();
                    ~DescribeEnableVpcCniProgressResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务进度的描述：Running/Succeed/Failed
                     * @return Status 任务进度的描述：Running/Succeed/Failed
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取当任务进度为Failed时，对任务状态的进一步描述，例如IPAMD组件安装失败
                     * @return ErrorMessage 当任务进度为Failed时，对任务状态的进一步描述，例如IPAMD组件安装失败
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * 任务进度的描述：Running/Succeed/Failed
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当任务进度为Failed时，对任务状态的进一步描述，例如IPAMD组件安装失败
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEENABLEVPCCNIPROGRESSRESPONSE_H_
