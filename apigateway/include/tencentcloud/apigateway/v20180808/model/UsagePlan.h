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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLAN_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * usagePlan详情
                */
                class UsagePlan : public AbstractModel
                {
                public:
                    UsagePlan();
                    ~UsagePlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境名称。
                     * @return Environment 环境名称。
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境名称。
                     * @param _environment 环境名称。
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取使用计划唯一ID。
                     * @return UsagePlanId 使用计划唯一ID。
                     * 
                     */
                    std::string GetUsagePlanId() const;

                    /**
                     * 设置使用计划唯一ID。
                     * @param _usagePlanId 使用计划唯一ID。
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
                     * 获取使用计划名称。
                     * @return UsagePlanName 使用计划名称。
                     * 
                     */
                    std::string GetUsagePlanName() const;

                    /**
                     * 设置使用计划名称。
                     * @param _usagePlanName 使用计划名称。
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
                     * 获取使用计划描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsagePlanDesc 使用计划描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsagePlanDesc() const;

                    /**
                     * 设置使用计划描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usagePlanDesc 使用计划描述。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取使用计划qps，-1表示没有限制。
                     * @return MaxRequestNumPreSec 使用计划qps，-1表示没有限制。
                     * 
                     */
                    int64_t GetMaxRequestNumPreSec() const;

                    /**
                     * 设置使用计划qps，-1表示没有限制。
                     * @param _maxRequestNumPreSec 使用计划qps，-1表示没有限制。
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
                     * 获取使用计划时间。
                     * @return CreatedTime 使用计划时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置使用计划时间。
                     * @param _createdTime 使用计划时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取使用计划修改时间。
                     * @return ModifiedTime 使用计划修改时间。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置使用计划修改时间。
                     * @param _modifiedTime 使用计划修改时间。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * 环境名称。
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 使用计划唯一ID。
                     */
                    std::string m_usagePlanId;
                    bool m_usagePlanIdHasBeenSet;

                    /**
                     * 使用计划名称。
                     */
                    std::string m_usagePlanName;
                    bool m_usagePlanNameHasBeenSet;

                    /**
                     * 使用计划描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usagePlanDesc;
                    bool m_usagePlanDescHasBeenSet;

                    /**
                     * 使用计划qps，-1表示没有限制。
                     */
                    int64_t m_maxRequestNumPreSec;
                    bool m_maxRequestNumPreSecHasBeenSet;

                    /**
                     * 使用计划时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 使用计划修改时间。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLAN_H_
