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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_PLANDETAILINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_PLANDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 加固策略具体信息
                */
                class PlanDetailInfo : public AbstractModel
                {
                public:
                    PlanDetailInfo();
                    ~PlanDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取默认策略，1为默认，0为非默认
                     * @return IsDefault 默认策略，1为默认，0为非默认
                     * 
                     */
                    uint64_t GetIsDefault() const;

                    /**
                     * 设置默认策略，1为默认，0为非默认
                     * @param _isDefault 默认策略，1为默认，0为非默认
                     * 
                     */
                    void SetIsDefault(const uint64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取策略id
                     * @return PlanId 策略id
                     * 
                     */
                    uint64_t GetPlanId() const;

                    /**
                     * 设置策略id
                     * @param _planId 策略id
                     * 
                     */
                    void SetPlanId(const uint64_t& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

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
                     * 获取策略信息
                     * @return PlanInfo 策略信息
                     * 
                     */
                    PlanInfo GetPlanInfo() const;

                    /**
                     * 设置策略信息
                     * @param _planInfo 策略信息
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
                     * 默认策略，1为默认，0为非默认
                     */
                    uint64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 策略id
                     */
                    uint64_t m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 策略信息
                     */
                    PlanInfo m_planInfo;
                    bool m_planInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_PLANDETAILINFO_H_
