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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_CREATESHIELDPLANINSTANCEREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_CREATESHIELDPLANINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/PlanInfo.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * CreateShieldPlanInstance请求参数结构体
                */
                class CreateShieldPlanInstanceRequest : public AbstractModel
                {
                public:
                    CreateShieldPlanInstanceRequest();
                    ~CreateShieldPlanInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
                     * @param _resourceId 资源id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return PlanName 策略名称
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置策略名称
                     * @param _planName 策略名称
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取策略具体信息
                     * @return PlanInfo 策略具体信息
                     * 
                     */
                    PlanInfo GetPlanInfo() const;

                    /**
                     * 设置策略具体信息
                     * @param _planInfo 策略具体信息
                     * 
                     */
                    void SetPlanInfo(const PlanInfo& _planInfo);

                    /**
                     * 判断参数 PlanInfo 是否已赋值
                     * @return PlanInfo 是否已赋值
                     * 
                     */
                    bool PlanInfoHasBeenSet() const;

                private:

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 策略具体信息
                     */
                    PlanInfo m_planInfo;
                    bool m_planInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_CREATESHIELDPLANINSTANCEREQUEST_H_
