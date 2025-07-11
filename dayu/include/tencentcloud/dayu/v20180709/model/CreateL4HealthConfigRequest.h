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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL4HEALTHCONFIGREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL4HEALTHCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/L4HealthConfig.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateL4HealthConfig请求参数结构体
                */
                class CreateL4HealthConfigRequest : public AbstractModel
                {
                public:
                    CreateL4HealthConfigRequest();
                    ~CreateL4HealthConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源ID
                     * @param _id 资源ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取四层健康检查配置数组
                     * @return HealthConfig 四层健康检查配置数组
                     * 
                     */
                    std::vector<L4HealthConfig> GetHealthConfig() const;

                    /**
                     * 设置四层健康检查配置数组
                     * @param _healthConfig 四层健康检查配置数组
                     * 
                     */
                    void SetHealthConfig(const std::vector<L4HealthConfig>& _healthConfig);

                    /**
                     * 判断参数 HealthConfig 是否已赋值
                     * @return HealthConfig 是否已赋值
                     * 
                     */
                    bool HealthConfigHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 四层健康检查配置数组
                     */
                    std::vector<L4HealthConfig> m_healthConfig;
                    bool m_healthConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL4HEALTHCONFIGREQUEST_H_
