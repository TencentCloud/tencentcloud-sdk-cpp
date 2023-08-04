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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_SNAPSHOTCONFIG_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_SNAPSHOTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/OperTimeSlot.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 截图配置
                */
                class SnapshotConfig : public AbstractModel
                {
                public:
                    SnapshotConfig();
                    ~SnapshotConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取截图频率。可选值1～20秒
                     * @return TimeInterval 截图频率。可选值1～20秒
                     * 
                     */
                    uint64_t GetTimeInterval() const;

                    /**
                     * 设置截图频率。可选值1～20秒
                     * @param _timeInterval 截图频率。可选值1～20秒
                     * 
                     */
                    void SetTimeInterval(const uint64_t& _timeInterval);

                    /**
                     * 判断参数 TimeInterval 是否已赋值
                     * @return TimeInterval 是否已赋值
                     * 
                     */
                    bool TimeIntervalHasBeenSet() const;

                    /**
                     * 获取模板生效的时间段。最多包含5组时间段
                     * @return OperTimeSlot 模板生效的时间段。最多包含5组时间段
                     * 
                     */
                    std::vector<OperTimeSlot> GetOperTimeSlot() const;

                    /**
                     * 设置模板生效的时间段。最多包含5组时间段
                     * @param _operTimeSlot 模板生效的时间段。最多包含5组时间段
                     * 
                     */
                    void SetOperTimeSlot(const std::vector<OperTimeSlot>& _operTimeSlot);

                    /**
                     * 判断参数 OperTimeSlot 是否已赋值
                     * @return OperTimeSlot 是否已赋值
                     * 
                     */
                    bool OperTimeSlotHasBeenSet() const;

                private:

                    /**
                     * 截图频率。可选值1～20秒
                     */
                    uint64_t m_timeInterval;
                    bool m_timeIntervalHasBeenSet;

                    /**
                     * 模板生效的时间段。最多包含5组时间段
                     */
                    std::vector<OperTimeSlot> m_operTimeSlot;
                    bool m_operTimeSlotHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_SNAPSHOTCONFIG_H_
