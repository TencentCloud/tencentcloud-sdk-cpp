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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_RESOURCECREATIONLIMITPOLICY_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_RESOURCECREATIONLIMITPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 资源创建规则
                */
                class ResourceCreationLimitPolicy : public AbstractModel
                {
                public:
                    ResourceCreationLimitPolicy();
                    ~ResourceCreationLimitPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建数量，最小值1，默认2
                     * @return NewGameServerSessionsPerCreator 创建数量，最小值1，默认2
                     * 
                     */
                    uint64_t GetNewGameServerSessionsPerCreator() const;

                    /**
                     * 设置创建数量，最小值1，默认2
                     * @param _newGameServerSessionsPerCreator 创建数量，最小值1，默认2
                     * 
                     */
                    void SetNewGameServerSessionsPerCreator(const uint64_t& _newGameServerSessionsPerCreator);

                    /**
                     * 判断参数 NewGameServerSessionsPerCreator 是否已赋值
                     * @return NewGameServerSessionsPerCreator 是否已赋值
                     * 
                     */
                    bool NewGameServerSessionsPerCreatorHasBeenSet() const;

                    /**
                     * 获取单位时间，最小值1，默认3，单位分钟
                     * @return PolicyPeriodInMinutes 单位时间，最小值1，默认3，单位分钟
                     * 
                     */
                    uint64_t GetPolicyPeriodInMinutes() const;

                    /**
                     * 设置单位时间，最小值1，默认3，单位分钟
                     * @param _policyPeriodInMinutes 单位时间，最小值1，默认3，单位分钟
                     * 
                     */
                    void SetPolicyPeriodInMinutes(const uint64_t& _policyPeriodInMinutes);

                    /**
                     * 判断参数 PolicyPeriodInMinutes 是否已赋值
                     * @return PolicyPeriodInMinutes 是否已赋值
                     * 
                     */
                    bool PolicyPeriodInMinutesHasBeenSet() const;

                private:

                    /**
                     * 创建数量，最小值1，默认2
                     */
                    uint64_t m_newGameServerSessionsPerCreator;
                    bool m_newGameServerSessionsPerCreatorHasBeenSet;

                    /**
                     * 单位时间，最小值1，默认3，单位分钟
                     */
                    uint64_t m_policyPeriodInMinutes;
                    bool m_policyPeriodInMinutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_RESOURCECREATIONLIMITPOLICY_H_
