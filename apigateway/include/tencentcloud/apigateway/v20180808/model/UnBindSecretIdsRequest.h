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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDSECRETIDSREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDSECRETIDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * UnBindSecretIds请求参数结构体
                */
                class UnBindSecretIdsRequest : public AbstractModel
                {
                public:
                    UnBindSecretIdsRequest();
                    ~UnBindSecretIdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待解绑的使用计划唯一 ID。
                     * @return UsagePlanId 待解绑的使用计划唯一 ID。
                     * 
                     */
                    std::string GetUsagePlanId() const;

                    /**
                     * 设置待解绑的使用计划唯一 ID。
                     * @param _usagePlanId 待解绑的使用计划唯一 ID。
                     * 
                     */
                    void SetUsagePlanId(const std::string& _usagePlanId);

                    /**
                     * 判断参数 UsagePlanId 是否已赋值
                     * @return UsagePlanId 是否已赋值
                     * 
                     */
                    bool UsagePlanIdHasBeenSet() const;

                    /**
                     * 获取待解绑的密钥 ID 数组。
                     * @return AccessKeyIds 待解绑的密钥 ID 数组。
                     * 
                     */
                    std::vector<std::string> GetAccessKeyIds() const;

                    /**
                     * 设置待解绑的密钥 ID 数组。
                     * @param _accessKeyIds 待解绑的密钥 ID 数组。
                     * 
                     */
                    void SetAccessKeyIds(const std::vector<std::string>& _accessKeyIds);

                    /**
                     * 判断参数 AccessKeyIds 是否已赋值
                     * @return AccessKeyIds 是否已赋值
                     * 
                     */
                    bool AccessKeyIdsHasBeenSet() const;

                private:

                    /**
                     * 待解绑的使用计划唯一 ID。
                     */
                    std::string m_usagePlanId;
                    bool m_usagePlanIdHasBeenSet;

                    /**
                     * 待解绑的密钥 ID 数组。
                     */
                    std::vector<std::string> m_accessKeyIds;
                    bool m_accessKeyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDSECRETIDSREQUEST_H_
