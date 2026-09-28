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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPWEBHOOK_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPWEBHOOK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 云应用 WebHook 配置
                */
                class CloudAppWebHook : public AbstractModel
                {
                public:
                    CloudAppWebHook();
                    ~CloudAppWebHook() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>开启 webhook 触发</p>
                     * @return Enabled <p>开启 webhook 触发</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>开启 webhook 触发</p>
                     * @param _enabled <p>开启 webhook 触发</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>触发分支</p>
                     * @return Branches <p>触发分支</p>
                     * 
                     */
                    std::vector<std::string> GetBranches() const;

                    /**
                     * 设置<p>触发分支</p>
                     * @param _branches <p>触发分支</p>
                     * 
                     */
                    void SetBranches(const std::vector<std::string>& _branches);

                    /**
                     * 判断参数 Branches 是否已赋值
                     * @return Branches 是否已赋值
                     * 
                     */
                    bool BranchesHasBeenSet() const;

                    /**
                     * 获取<p>触发事件</p>
                     * @return Events <p>触发事件</p>
                     * 
                     */
                    std::vector<std::string> GetEvents() const;

                    /**
                     * 设置<p>触发事件</p>
                     * @param _events <p>触发事件</p>
                     * 
                     */
                    void SetEvents(const std::vector<std::string>& _events);

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                private:

                    /**
                     * <p>开启 webhook 触发</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>触发分支</p>
                     */
                    std::vector<std::string> m_branches;
                    bool m_branchesHasBeenSet;

                    /**
                     * <p>触发事件</p>
                     */
                    std::vector<std::string> m_events;
                    bool m_eventsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPWEBHOOK_H_
