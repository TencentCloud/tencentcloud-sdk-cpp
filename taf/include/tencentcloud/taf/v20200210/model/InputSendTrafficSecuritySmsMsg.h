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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_INPUTSENDTRAFFICSECURITYSMSMSG_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_INPUTSENDTRAFFICSECURITYSMSMSG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 业务入参
                */
                class InputSendTrafficSecuritySmsMsg : public AbstractModel
                {
                public:
                    InputSendTrafficSecuritySmsMsg();
                    ~InputSendTrafficSecuritySmsMsg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取投放任务ID
                     * @return TaskId 投放任务ID
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置投放任务ID
                     * @param TaskId 投放任务ID
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取手机号码列表（号码量<=200）
                     * @return Mobiles 手机号码列表（号码量<=200）
                     */
                    std::vector<std::string> GetMobiles() const;

                    /**
                     * 设置手机号码列表（号码量<=200）
                     * @param Mobiles 手机号码列表（号码量<=200）
                     */
                    void SetMobiles(const std::vector<std::string>& _mobiles);

                    /**
                     * 判断参数 Mobiles 是否已赋值
                     * @return Mobiles 是否已赋值
                     */
                    bool MobilesHasBeenSet() const;

                private:

                    /**
                     * 投放任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 手机号码列表（号码量<=200）
                     */
                    std::vector<std::string> m_mobiles;
                    bool m_mobilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_INPUTSENDTRAFFICSECURITYSMSMSG_H_
