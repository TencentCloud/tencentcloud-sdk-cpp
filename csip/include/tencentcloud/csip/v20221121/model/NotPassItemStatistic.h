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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_NOTPASSITEMSTATISTIC_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_NOTPASSITEMSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 未通过检测项按策略分组的统计。
                */
                class NotPassItemStatistic : public AbstractModel
                {
                public:
                    NotPassItemStatistic();
                    ~NotPassItemStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略类型。取值：SYSTEM（系统策略）、SELF（自定义策略）。
                     * @return PolicyType 策略类型。取值：SYSTEM（系统策略）、SELF（自定义策略）。
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置策略类型。取值：SYSTEM（系统策略）、SELF（自定义策略）。
                     * @param _policyType 策略类型。取值：SYSTEM（系统策略）、SELF（自定义策略）。
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取策略 ID。SYSTEM 策略为 0。
                     * @return PolicyID 策略 ID。SYSTEM 策略为 0。
                     * 
                     */
                    uint64_t GetPolicyID() const;

                    /**
                     * 设置策略 ID。SYSTEM 策略为 0。
                     * @param _policyID 策略 ID。SYSTEM 策略为 0。
                     * 
                     */
                    void SetPolicyID(const uint64_t& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取父分类 ID。SELF 策略为 0。
                     * @return ParentCategoryID 父分类 ID。SELF 策略为 0。
                     * 
                     */
                    uint64_t GetParentCategoryID() const;

                    /**
                     * 设置父分类 ID。SELF 策略为 0。
                     * @param _parentCategoryID 父分类 ID。SELF 策略为 0。
                     * 
                     */
                    void SetParentCategoryID(const uint64_t& _parentCategoryID);

                    /**
                     * 判断参数 ParentCategoryID 是否已赋值
                     * @return ParentCategoryID 是否已赋值
                     * 
                     */
                    bool ParentCategoryIDHasBeenSet() const;

                    /**
                     * 获取该策略下未通过的检测项数。
                     * @return NotPassCount 该策略下未通过的检测项数。
                     * 
                     */
                    uint64_t GetNotPassCount() const;

                    /**
                     * 设置该策略下未通过的检测项数。
                     * @param _notPassCount 该策略下未通过的检测项数。
                     * 
                     */
                    void SetNotPassCount(const uint64_t& _notPassCount);

                    /**
                     * 判断参数 NotPassCount 是否已赋值
                     * @return NotPassCount 是否已赋值
                     * 
                     */
                    bool NotPassCountHasBeenSet() const;

                    /**
                     * 获取策略或分类名称。SYSTEM 取父分类名称，SELF 取策略名称。
                     * @return Name 策略或分类名称。SYSTEM 取父分类名称，SELF 取策略名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略或分类名称。SYSTEM 取父分类名称，SELF 取策略名称。
                     * @param _name 策略或分类名称。SYSTEM 取父分类名称，SELF 取策略名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 策略类型。取值：SYSTEM（系统策略）、SELF（自定义策略）。
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 策略 ID。SYSTEM 策略为 0。
                     */
                    uint64_t m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * 父分类 ID。SELF 策略为 0。
                     */
                    uint64_t m_parentCategoryID;
                    bool m_parentCategoryIDHasBeenSet;

                    /**
                     * 该策略下未通过的检测项数。
                     */
                    uint64_t m_notPassCount;
                    bool m_notPassCountHasBeenSet;

                    /**
                     * 策略或分类名称。SYSTEM 取父分类名称，SELF 取策略名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_NOTPASSITEMSTATISTIC_H_
