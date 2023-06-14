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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONEHOURFLOW_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONEHOURFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 客流统计分时数据子结构
                */
                class ZoneHourFlow : public AbstractModel
                {
                public:
                    ZoneHourFlow();
                    ~ZoneHourFlow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分时 0~23
                     * @return Hour 分时 0~23
                     * 
                     */
                    int64_t GetHour() const;

                    /**
                     * 设置分时 0~23
                     * @param _hour 分时 0~23
                     * 
                     */
                    void SetHour(const int64_t& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取客流量
                     * @return FlowCount 客流量
                     * 
                     */
                    int64_t GetFlowCount() const;

                    /**
                     * 设置客流量
                     * @param _flowCount 客流量
                     * 
                     */
                    void SetFlowCount(const int64_t& _flowCount);

                    /**
                     * 判断参数 FlowCount 是否已赋值
                     * @return FlowCount 是否已赋值
                     * 
                     */
                    bool FlowCountHasBeenSet() const;

                private:

                    /**
                     * 分时 0~23
                     */
                    int64_t m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * 客流量
                     */
                    int64_t m_flowCount;
                    bool m_flowCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONEHOURFLOW_H_
