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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYPLANREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RenewFlag.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyPlan请求参数结构体
                */
                class ModifyPlanRequest : public AbstractModel
                {
                public:
                    ModifyPlanRequest();
                    ~ModifyPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取套餐 ID，形如 edgeone-2unuvzjmmn2q。
                     * @return PlanId 套餐 ID，形如 edgeone-2unuvzjmmn2q。
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置套餐 ID，形如 edgeone-2unuvzjmmn2q。
                     * @param _planId 套餐 ID，形如 edgeone-2unuvzjmmn2q。
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取预付费套餐自动续费配置。若开启了自动续费，则会在套餐到期前一天自动续费，仅支持个人版，基础版，标准版套餐。不填写表示保持原有配置。
                     * @return RenewFlag 预付费套餐自动续费配置。若开启了自动续费，则会在套餐到期前一天自动续费，仅支持个人版，基础版，标准版套餐。不填写表示保持原有配置。
                     * 
                     */
                    RenewFlag GetRenewFlag() const;

                    /**
                     * 设置预付费套餐自动续费配置。若开启了自动续费，则会在套餐到期前一天自动续费，仅支持个人版，基础版，标准版套餐。不填写表示保持原有配置。
                     * @param _renewFlag 预付费套餐自动续费配置。若开启了自动续费，则会在套餐到期前一天自动续费，仅支持个人版，基础版，标准版套餐。不填写表示保持原有配置。
                     * 
                     */
                    void SetRenewFlag(const RenewFlag& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * 套餐 ID，形如 edgeone-2unuvzjmmn2q。
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 预付费套餐自动续费配置。若开启了自动续费，则会在套餐到期前一天自动续费，仅支持个人版，基础版，标准版套餐。不填写表示保持原有配置。
                     */
                    RenewFlag m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYPLANREQUEST_H_
