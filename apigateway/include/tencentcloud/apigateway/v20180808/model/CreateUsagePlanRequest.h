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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUSAGEPLANREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUSAGEPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * CreateUsagePlan请求参数结构体
                */
                class CreateUsagePlanRequest : public AbstractModel
                {
                public:
                    CreateUsagePlanRequest();
                    ~CreateUsagePlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户自定义的使用计划名称。
                     * @return UsagePlanName 用户自定义的使用计划名称。
                     * 
                     */
                    std::string GetUsagePlanName() const;

                    /**
                     * 设置用户自定义的使用计划名称。
                     * @param _usagePlanName 用户自定义的使用计划名称。
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
                     * 获取用户自定义的使用计划描述。
                     * @return UsagePlanDesc 用户自定义的使用计划描述。
                     * 
                     */
                    std::string GetUsagePlanDesc() const;

                    /**
                     * 设置用户自定义的使用计划描述。
                     * @param _usagePlanDesc 用户自定义的使用计划描述。
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

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 用户自定义的使用计划名称。
                     */
                    std::string m_usagePlanName;
                    bool m_usagePlanNameHasBeenSet;

                    /**
                     * 用户自定义的使用计划描述。
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

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUSAGEPLANREQUEST_H_
