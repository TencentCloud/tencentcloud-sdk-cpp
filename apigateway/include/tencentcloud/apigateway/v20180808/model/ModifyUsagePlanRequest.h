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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYUSAGEPLANREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYUSAGEPLANREQUEST_H_

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
                * ModifyUsagePlan请求参数结构体
                */
                class ModifyUsagePlanRequest : public AbstractModel
                {
                public:
                    ModifyUsagePlanRequest();
                    ~ModifyUsagePlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取使用计划唯一 ID。
                     * @return UsagePlanId 使用计划唯一 ID。
                     * 
                     */
                    std::string GetUsagePlanId() const;

                    /**
                     * 设置使用计划唯一 ID。
                     * @param _usagePlanId 使用计划唯一 ID。
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
                     * 获取修改后的用户自定义的使用计划名称。
                     * @return UsagePlanName 修改后的用户自定义的使用计划名称。
                     * 
                     */
                    std::string GetUsagePlanName() const;

                    /**
                     * 设置修改后的用户自定义的使用计划名称。
                     * @param _usagePlanName 修改后的用户自定义的使用计划名称。
                     * 
                     */
                    void SetUsagePlanName(const std::string& _usagePlanName);

                    /**
                     * 判断参数 UsagePlanName 是否已赋值
                     * @return UsagePlanName 是否已赋值
                     * 
                     */
                    bool UsagePlanNameHasBeenSet() const;

                    /**
                     * 获取修改后的用户自定义的使用计划描述。
                     * @return UsagePlanDesc 修改后的用户自定义的使用计划描述。
                     * 
                     */
                    std::string GetUsagePlanDesc() const;

                    /**
                     * 设置修改后的用户自定义的使用计划描述。
                     * @param _usagePlanDesc 修改后的用户自定义的使用计划描述。
                     * 
                     */
                    void SetUsagePlanDesc(const std::string& _usagePlanDesc);

                    /**
                     * 判断参数 UsagePlanDesc 是否已赋值
                     * @return UsagePlanDesc 是否已赋值
                     * 
                     */
                    bool UsagePlanDescHasBeenSet() const;

                    /**
                     * 获取请求配额总数，取值范围为-1或者[1, 99999999]，默认为-1，表示不开启。
                     * @return MaxRequestNum 请求配额总数，取值范围为-1或者[1, 99999999]，默认为-1，表示不开启。
                     * 
                     */
                    int64_t GetMaxRequestNum() const;

                    /**
                     * 设置请求配额总数，取值范围为-1或者[1, 99999999]，默认为-1，表示不开启。
                     * @param _maxRequestNum 请求配额总数，取值范围为-1或者[1, 99999999]，默认为-1，表示不开启。
                     * 
                     */
                    void SetMaxRequestNum(const int64_t& _maxRequestNum);

                    /**
                     * 判断参数 MaxRequestNum 是否已赋值
                     * @return MaxRequestNum 是否已赋值
                     * 
                     */
                    bool MaxRequestNumHasBeenSet() const;

                    /**
                     * 获取每秒请求限制数，取值范围为-1或者[1, 2000]，默认-1，表示不开启。
                     * @return MaxRequestNumPreSec 每秒请求限制数，取值范围为-1或者[1, 2000]，默认-1，表示不开启。
                     * 
                     */
                    int64_t GetMaxRequestNumPreSec() const;

                    /**
                     * 设置每秒请求限制数，取值范围为-1或者[1, 2000]，默认-1，表示不开启。
                     * @param _maxRequestNumPreSec 每秒请求限制数，取值范围为-1或者[1, 2000]，默认-1，表示不开启。
                     * 
                     */
                    void SetMaxRequestNumPreSec(const int64_t& _maxRequestNumPreSec);

                    /**
                     * 判断参数 MaxRequestNumPreSec 是否已赋值
                     * @return MaxRequestNumPreSec 是否已赋值
                     * 
                     */
                    bool MaxRequestNumPreSecHasBeenSet() const;

                private:

                    /**
                     * 使用计划唯一 ID。
                     */
                    std::string m_usagePlanId;
                    bool m_usagePlanIdHasBeenSet;

                    /**
                     * 修改后的用户自定义的使用计划名称。
                     */
                    std::string m_usagePlanName;
                    bool m_usagePlanNameHasBeenSet;

                    /**
                     * 修改后的用户自定义的使用计划描述。
                     */
                    std::string m_usagePlanDesc;
                    bool m_usagePlanDescHasBeenSet;

                    /**
                     * 请求配额总数，取值范围为-1或者[1, 99999999]，默认为-1，表示不开启。
                     */
                    int64_t m_maxRequestNum;
                    bool m_maxRequestNumHasBeenSet;

                    /**
                     * 每秒请求限制数，取值范围为-1或者[1, 2000]，默认-1，表示不开启。
                     */
                    int64_t m_maxRequestNumPreSec;
                    bool m_maxRequestNumPreSecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYUSAGEPLANREQUEST_H_
