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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONBATCHSIGNURLRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONBATCHSIGNURLRESPONSE_H_

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
                * CreateOrganizationBatchSignUrl返回参数结构体
                */
                class CreateOrganizationBatchSignUrlResponse : public AbstractModel
                {
                public:
                    CreateOrganizationBatchSignUrlResponse();
                    ~CreateOrganizationBatchSignUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量签署入口链接，用户可使用这个链接跳转到控制台页面对合同进行签署操作。
                     * @return SignUrl 批量签署入口链接，用户可使用这个链接跳转到控制台页面对合同进行签署操作。
                     * 
                     */
                    std::string GetSignUrl() const;

                    /**
                     * 判断参数 SignUrl 是否已赋值
                     * @return SignUrl 是否已赋值
                     * 
                     */
                    bool SignUrlHasBeenSet() const;

                    /**
                     * 获取链接过期截止时间，格式为Unix标准时间戳（秒），默认为7天后截止。
                     * @return ExpiredTime 链接过期截止时间，格式为Unix标准时间戳（秒），默认为7天后截止。
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * 批量签署入口链接，用户可使用这个链接跳转到控制台页面对合同进行签署操作。
                     */
                    std::string m_signUrl;
                    bool m_signUrlHasBeenSet;

                    /**
                     * 链接过期截止时间，格式为Unix标准时间戳（秒），默认为7天后截止。
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONBATCHSIGNURLRESPONSE_H_
