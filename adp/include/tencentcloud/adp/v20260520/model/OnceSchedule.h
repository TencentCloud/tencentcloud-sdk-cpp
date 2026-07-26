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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_ONCESCHEDULE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_ONCESCHEDULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * OnceSchedule
                */
                class OnceSchedule : public AbstractModel
                {
                public:
                    OnceSchedule();
                    ~OnceSchedule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取触发时间
                     * @return FireTime 触发时间
                     * 
                     */
                    std::string GetFireTime() const;

                    /**
                     * 设置触发时间
                     * @param _fireTime 触发时间
                     * 
                     */
                    void SetFireTime(const std::string& _fireTime);

                    /**
                     * 判断参数 FireTime 是否已赋值
                     * @return FireTime 是否已赋值
                     * 
                     */
                    bool FireTimeHasBeenSet() const;

                private:

                    /**
                     * 触发时间
                     */
                    std::string m_fireTime;
                    bool m_fireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_ONCESCHEDULE_H_
