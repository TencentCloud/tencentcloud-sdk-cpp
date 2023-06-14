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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPACTIONCONFIG_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPACTIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 动作组中的动作参数
                */
                class TaskGroupActionConfig : public AbstractModel
                {
                public:
                    TaskGroupActionConfig();
                    ~TaskGroupActionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该动作在动作组中的顺序，从1开始，不填或填错将匹配不到经验中要修改参数的动作
                     * @return TaskGroupActionOrder 该动作在动作组中的顺序，从1开始，不填或填错将匹配不到经验中要修改参数的动作
                     * 
                     */
                    uint64_t GetTaskGroupActionOrder() const;

                    /**
                     * 设置该动作在动作组中的顺序，从1开始，不填或填错将匹配不到经验中要修改参数的动作
                     * @param _taskGroupActionOrder 该动作在动作组中的顺序，从1开始，不填或填错将匹配不到经验中要修改参数的动作
                     * 
                     */
                    void SetTaskGroupActionOrder(const uint64_t& _taskGroupActionOrder);

                    /**
                     * 判断参数 TaskGroupActionOrder 是否已赋值
                     * @return TaskGroupActionOrder 是否已赋值
                     * 
                     */
                    bool TaskGroupActionOrderHasBeenSet() const;

                    /**
                     * 获取动作通用参数，需要json序列化传入，可以从查询经验详情接口获取，不填默认使用经验中动作参数
                     * @return TaskGroupActionGeneralConfiguration 动作通用参数，需要json序列化传入，可以从查询经验详情接口获取，不填默认使用经验中动作参数
                     * 
                     */
                    std::string GetTaskGroupActionGeneralConfiguration() const;

                    /**
                     * 设置动作通用参数，需要json序列化传入，可以从查询经验详情接口获取，不填默认使用经验中动作参数
                     * @param _taskGroupActionGeneralConfiguration 动作通用参数，需要json序列化传入，可以从查询经验详情接口获取，不填默认使用经验中动作参数
                     * 
                     */
                    void SetTaskGroupActionGeneralConfiguration(const std::string& _taskGroupActionGeneralConfiguration);

                    /**
                     * 判断参数 TaskGroupActionGeneralConfiguration 是否已赋值
                     * @return TaskGroupActionGeneralConfiguration 是否已赋值
                     * 
                     */
                    bool TaskGroupActionGeneralConfigurationHasBeenSet() const;

                    /**
                     * 获取动作自定义参数，需要json序列化传入，可以从查询经验详情接口获取，不填默认使用经验中动作参数
                     * @return TaskGroupActionCustomConfiguration 动作自定义参数，需要json序列化传入，可以从查询经验详情接口获取，不填默认使用经验中动作参数
                     * 
                     */
                    std::string GetTaskGroupActionCustomConfiguration() const;

                    /**
                     * 设置动作自定义参数，需要json序列化传入，可以从查询经验详情接口获取，不填默认使用经验中动作参数
                     * @param _taskGroupActionCustomConfiguration 动作自定义参数，需要json序列化传入，可以从查询经验详情接口获取，不填默认使用经验中动作参数
                     * 
                     */
                    void SetTaskGroupActionCustomConfiguration(const std::string& _taskGroupActionCustomConfiguration);

                    /**
                     * 判断参数 TaskGroupActionCustomConfiguration 是否已赋值
                     * @return TaskGroupActionCustomConfiguration 是否已赋值
                     * 
                     */
                    bool TaskGroupActionCustomConfigurationHasBeenSet() const;

                private:

                    /**
                     * 该动作在动作组中的顺序，从1开始，不填或填错将匹配不到经验中要修改参数的动作
                     */
                    uint64_t m_taskGroupActionOrder;
                    bool m_taskGroupActionOrderHasBeenSet;

                    /**
                     * 动作通用参数，需要json序列化传入，可以从查询经验详情接口获取，不填默认使用经验中动作参数
                     */
                    std::string m_taskGroupActionGeneralConfiguration;
                    bool m_taskGroupActionGeneralConfigurationHasBeenSet;

                    /**
                     * 动作自定义参数，需要json序列化传入，可以从查询经验详情接口获取，不填默认使用经验中动作参数
                     */
                    std::string m_taskGroupActionCustomConfiguration;
                    bool m_taskGroupActionCustomConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPACTIONCONFIG_H_
