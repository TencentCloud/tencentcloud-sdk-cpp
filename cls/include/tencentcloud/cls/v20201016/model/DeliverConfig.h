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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELIVERCONFIG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELIVERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 投递配置入参
                */
                class DeliverConfig : public AbstractModel
                {
                public:
                    DeliverConfig();
                    ~DeliverConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域信息。

示例：
 ap-guangzhou  广州地域；
ap-nanjing 南京地域。

详细信息请查看官网：

https://cloud.tencent.com/document/product/614/18940
                     * @return Region 地域信息。

示例：
 ap-guangzhou  广州地域；
ap-nanjing 南京地域。

详细信息请查看官网：

https://cloud.tencent.com/document/product/614/18940
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域信息。

示例：
 ap-guangzhou  广州地域；
ap-nanjing 南京地域。

详细信息请查看官网：

https://cloud.tencent.com/document/product/614/18940
                     * @param _region 地域信息。

示例：
 ap-guangzhou  广州地域；
ap-nanjing 南京地域。

详细信息请查看官网：

https://cloud.tencent.com/document/product/614/18940
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取日志主题ID。
                     * @return TopicId 日志主题ID。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID。
                     * @param _topicId 日志主题ID。
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取投递数据范围。

0: 全部日志, 包括告警策略日常周期执行的所有日志，也包括告警策略变更产生的日志，默认值

1:仅告警触发及恢复日志
                     * @return Scope 投递数据范围。

0: 全部日志, 包括告警策略日常周期执行的所有日志，也包括告警策略变更产生的日志，默认值

1:仅告警触发及恢复日志
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置投递数据范围。

0: 全部日志, 包括告警策略日常周期执行的所有日志，也包括告警策略变更产生的日志，默认值

1:仅告警触发及恢复日志
                     * @param _scope 投递数据范围。

0: 全部日志, 包括告警策略日常周期执行的所有日志，也包括告警策略变更产生的日志，默认值

1:仅告警触发及恢复日志
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                private:

                    /**
                     * 地域信息。

示例：
 ap-guangzhou  广州地域；
ap-nanjing 南京地域。

详细信息请查看官网：

https://cloud.tencent.com/document/product/614/18940
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 日志主题ID。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 投递数据范围。

0: 全部日志, 包括告警策略日常周期执行的所有日志，也包括告警策略变更产生的日志，默认值

1:仅告警触发及恢复日志
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELIVERCONFIG_H_
