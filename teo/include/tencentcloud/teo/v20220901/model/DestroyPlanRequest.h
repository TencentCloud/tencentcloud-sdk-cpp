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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESTROYPLANREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESTROYPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DestroyPlan请求参数结构体
                */
                class DestroyPlanRequest : public AbstractModel
                {
                public:
                    DestroyPlanRequest();
                    ~DestroyPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取套餐 ID，形如 edgeone-2wdo315m2y4c。
                     * @return PlanId 套餐 ID，形如 edgeone-2wdo315m2y4c。
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置套餐 ID，形如 edgeone-2wdo315m2y4c。
                     * @param _planId 套餐 ID，形如 edgeone-2wdo315m2y4c。
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                private:

                    /**
                     * 套餐 ID，形如 edgeone-2wdo315m2y4c。
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESTROYPLANREQUEST_H_
