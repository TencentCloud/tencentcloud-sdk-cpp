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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHESET_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceCacheRule.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * HTTPService 缓存配置（域名维度）
                */
                class HTTPServiceCacheSet : public AbstractModel
                {
                public:
                    HTTPServiceCacheSet();
                    ~HTTPServiceCacheSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>HTTPService 缓存配置列表。Rules 按数组顺序为优先级顺序，Rules[n-1] 优先级最高</p>
                     * @return Rules <p>HTTPService 缓存配置列表。Rules 按数组顺序为优先级顺序，Rules[n-1] 优先级最高</p>
                     * 
                     */
                    std::vector<HTTPServiceCacheRule> GetRules() const;

                    /**
                     * 设置<p>HTTPService 缓存配置列表。Rules 按数组顺序为优先级顺序，Rules[n-1] 优先级最高</p>
                     * @param _rules <p>HTTPService 缓存配置列表。Rules 按数组顺序为优先级顺序，Rules[n-1] 优先级最高</p>
                     * 
                     */
                    void SetRules(const std::vector<HTTPServiceCacheRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * <p>HTTPService 缓存配置列表。Rules 按数组顺序为优先级顺序，Rules[n-1] 优先级最高</p>
                     */
                    std::vector<HTTPServiceCacheRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHESET_H_
