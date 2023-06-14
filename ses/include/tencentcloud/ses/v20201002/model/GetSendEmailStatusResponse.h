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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_GETSENDEMAILSTATUSRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_GETSENDEMAILSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/SendEmailStatus.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * GetSendEmailStatus返回参数结构体
                */
                class GetSendEmailStatusResponse : public AbstractModel
                {
                public:
                    GetSendEmailStatusResponse();
                    ~GetSendEmailStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取邮件发送状态列表
                     * @return EmailStatusList 邮件发送状态列表
                     * 
                     */
                    std::vector<SendEmailStatus> GetEmailStatusList() const;

                    /**
                     * 判断参数 EmailStatusList 是否已赋值
                     * @return EmailStatusList 是否已赋值
                     * 
                     */
                    bool EmailStatusListHasBeenSet() const;

                private:

                    /**
                     * 邮件发送状态列表
                     */
                    std::vector<SendEmailStatus> m_emailStatusList;
                    bool m_emailStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_GETSENDEMAILSTATUSRESPONSE_H_
