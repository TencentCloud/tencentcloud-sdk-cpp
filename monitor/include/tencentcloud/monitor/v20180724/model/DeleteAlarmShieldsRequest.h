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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALARMSHIELDSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALARMSHIELDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DeleteAlarmShields请求参数结构体
                */
                class DeleteAlarmShieldsRequest : public AbstractModel
                {
                public:
                    DeleteAlarmShieldsRequest();
                    ~DeleteAlarmShieldsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模块名，这里填“monitor”</p>
                     * @return Module <p>模块名，这里填“monitor”</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>模块名，这里填“monitor”</p>
                     * @param _module <p>模块名，这里填“monitor”</p>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取<p>屏蔽策略Id列表</p>
                     * @return Shields <p>屏蔽策略Id列表</p>
                     * 
                     */
                    std::vector<std::string> GetShields() const;

                    /**
                     * 设置<p>屏蔽策略Id列表</p>
                     * @param _shields <p>屏蔽策略Id列表</p>
                     * 
                     */
                    void SetShields(const std::vector<std::string>& _shields);

                    /**
                     * 判断参数 Shields 是否已赋值
                     * @return Shields 是否已赋值
                     * 
                     */
                    bool ShieldsHasBeenSet() const;

                private:

                    /**
                     * <p>模块名，这里填“monitor”</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>屏蔽策略Id列表</p>
                     */
                    std::vector<std::string> m_shields;
                    bool m_shieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALARMSHIELDSREQUEST_H_
