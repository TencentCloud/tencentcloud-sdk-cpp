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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_OPERTIMESLOT_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_OPERTIMESLOT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AI分析的时间段配置
                */
                class OperTimeSlot : public AbstractModel
                {
                public:
                    OperTimeSlot();
                    ~OperTimeSlot() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开始时间。格式为"hh:mm:ss"，且 Start 必须小于 End
                     * @return Start 开始时间。格式为"hh:mm:ss"，且 Start 必须小于 End
                     * 
                     */
                    std::string GetStart() const;

                    /**
                     * 设置开始时间。格式为"hh:mm:ss"，且 Start 必须小于 End
                     * @param _start 开始时间。格式为"hh:mm:ss"，且 Start 必须小于 End
                     * 
                     */
                    void SetStart(const std::string& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取结束时间。格式为"hh:mm:ss"，且 Start 必须小于 End
                     * @return End 结束时间。格式为"hh:mm:ss"，且 Start 必须小于 End
                     * 
                     */
                    std::string GetEnd() const;

                    /**
                     * 设置结束时间。格式为"hh:mm:ss"，且 Start 必须小于 End
                     * @param _end 结束时间。格式为"hh:mm:ss"，且 Start 必须小于 End
                     * 
                     */
                    void SetEnd(const std::string& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * 开始时间。格式为"hh:mm:ss"，且 Start 必须小于 End
                     */
                    std::string m_start;
                    bool m_startHasBeenSet;

                    /**
                     * 结束时间。格式为"hh:mm:ss"，且 Start 必须小于 End
                     */
                    std::string m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_OPERTIMESLOT_H_
