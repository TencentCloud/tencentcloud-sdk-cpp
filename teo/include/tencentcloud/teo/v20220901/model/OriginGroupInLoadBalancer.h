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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPINLOADBALANCER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPINLOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 负载均衡实例中需要绑定的源站组和优先级关系。
                */
                class OriginGroupInLoadBalancer : public AbstractModel
                {
                public:
                    OriginGroupInLoadBalancer();
                    ~OriginGroupInLoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取优先级，填写格式为 "priority_" + "数字"，最高优先级为 "priority_1"。参考取值有：
<li>priority_1：第一优先级；</li>
<li>priority_2：第二优先级；</li>
<li>priority_3：第三优先级。</li>其他优先级可以将数字递增，最多可以递增至 "priority_10"。
                     * @return Priority 优先级，填写格式为 "priority_" + "数字"，最高优先级为 "priority_1"。参考取值有：
<li>priority_1：第一优先级；</li>
<li>priority_2：第二优先级；</li>
<li>priority_3：第三优先级。</li>其他优先级可以将数字递增，最多可以递增至 "priority_10"。
                     * 
                     */
                    std::string GetPriority() const;

                    /**
                     * 设置优先级，填写格式为 "priority_" + "数字"，最高优先级为 "priority_1"。参考取值有：
<li>priority_1：第一优先级；</li>
<li>priority_2：第二优先级；</li>
<li>priority_3：第三优先级。</li>其他优先级可以将数字递增，最多可以递增至 "priority_10"。
                     * @param _priority 优先级，填写格式为 "priority_" + "数字"，最高优先级为 "priority_1"。参考取值有：
<li>priority_1：第一优先级；</li>
<li>priority_2：第二优先级；</li>
<li>priority_3：第三优先级。</li>其他优先级可以将数字递增，最多可以递增至 "priority_10"。
                     * 
                     */
                    void SetPriority(const std::string& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取源站组 ID。
                     * @return OriginGroupId 源站组 ID。
                     * 
                     */
                    std::string GetOriginGroupId() const;

                    /**
                     * 设置源站组 ID。
                     * @param _originGroupId 源站组 ID。
                     * 
                     */
                    void SetOriginGroupId(const std::string& _originGroupId);

                    /**
                     * 判断参数 OriginGroupId 是否已赋值
                     * @return OriginGroupId 是否已赋值
                     * 
                     */
                    bool OriginGroupIdHasBeenSet() const;

                private:

                    /**
                     * 优先级，填写格式为 "priority_" + "数字"，最高优先级为 "priority_1"。参考取值有：
<li>priority_1：第一优先级；</li>
<li>priority_2：第二优先级；</li>
<li>priority_3：第三优先级。</li>其他优先级可以将数字递增，最多可以递增至 "priority_10"。
                     */
                    std::string m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 源站组 ID。
                     */
                    std::string m_originGroupId;
                    bool m_originGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPINLOADBALANCER_H_
