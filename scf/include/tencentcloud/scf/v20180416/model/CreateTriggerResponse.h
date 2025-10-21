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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_CREATETRIGGERRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_CREATETRIGGERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Trigger.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CreateTrigger返回参数结构体
                */
                class CreateTriggerResponse : public AbstractModel
                {
                public:
                    CreateTriggerResponse();
                    ~CreateTriggerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取触发器信息
                     * @return TriggerInfo 触发器信息
                     * 
                     */
                    Trigger GetTriggerInfo() const;

                    /**
                     * 判断参数 TriggerInfo 是否已赋值
                     * @return TriggerInfo 是否已赋值
                     * 
                     */
                    bool TriggerInfoHasBeenSet() const;

                private:

                    /**
                     * 触发器信息
                     */
                    Trigger m_triggerInfo;
                    bool m_triggerInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CREATETRIGGERRESPONSE_H_
