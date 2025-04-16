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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAGOVERNPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAGOVERNPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据治理规则
                */
                class DataGovernPolicy : public AbstractModel
                {
                public:
                    DataGovernPolicy();
                    ~DataGovernPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取治理规则类型，Customize: 自定义；Intelligence: 智能治理
                     * @return RuleType 治理规则类型，Customize: 自定义；Intelligence: 智能治理
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置治理规则类型，Customize: 自定义；Intelligence: 智能治理
                     * @param _ruleType 治理规则类型，Customize: 自定义；Intelligence: 智能治理
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取治理引擎
                     * @return GovernEngine 治理引擎
                     * 
                     */
                    std::string GetGovernEngine() const;

                    /**
                     * 设置治理引擎
                     * @param _governEngine 治理引擎
                     * 
                     */
                    void SetGovernEngine(const std::string& _governEngine);

                    /**
                     * 判断参数 GovernEngine 是否已赋值
                     * @return GovernEngine 是否已赋值
                     * 
                     */
                    bool GovernEngineHasBeenSet() const;

                private:

                    /**
                     * 治理规则类型，Customize: 自定义；Intelligence: 智能治理
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 治理引擎
                     */
                    std::string m_governEngine;
                    bool m_governEngineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAGOVERNPOLICY_H_
