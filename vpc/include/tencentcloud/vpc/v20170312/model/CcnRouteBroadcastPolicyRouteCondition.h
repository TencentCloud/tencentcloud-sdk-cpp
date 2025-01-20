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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTEBROADCASTPOLICYROUTECONDITION_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTEBROADCASTPOLICYROUTECONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 云联网路由传播策略之路由条件
                */
                class CcnRouteBroadcastPolicyRouteCondition : public AbstractModel
                {
                public:
                    CcnRouteBroadcastPolicyRouteCondition();
                    ~CcnRouteBroadcastPolicyRouteCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取条件类型
                     * @return Name 条件类型
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置条件类型
                     * @param _name 条件类型
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取条件值列表
                     * @return Values 条件值列表
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置条件值列表
                     * @param _values 条件值列表
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取匹配模式，`1` 精确匹配，`0` 模糊匹配
                     * @return MatchPattern 匹配模式，`1` 精确匹配，`0` 模糊匹配
                     * 
                     */
                    uint64_t GetMatchPattern() const;

                    /**
                     * 设置匹配模式，`1` 精确匹配，`0` 模糊匹配
                     * @param _matchPattern 匹配模式，`1` 精确匹配，`0` 模糊匹配
                     * 
                     */
                    void SetMatchPattern(const uint64_t& _matchPattern);

                    /**
                     * 判断参数 MatchPattern 是否已赋值
                     * @return MatchPattern 是否已赋值
                     * 
                     */
                    bool MatchPatternHasBeenSet() const;

                private:

                    /**
                     * 条件类型
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 条件值列表
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 匹配模式，`1` 精确匹配，`0` 模糊匹配
                     */
                    uint64_t m_matchPattern;
                    bool m_matchPatternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTEBROADCASTPOLICYROUTECONDITION_H_
