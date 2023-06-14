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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONEFLOWANDAVRSTAYTIME_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONEFLOWANDAVRSTAYTIME_H_

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
                * 客流停留统计子结构
                */
                class ZoneFlowAndAvrStayTime : public AbstractModel
                {
                public:
                    ZoneFlowAndAvrStayTime();
                    ~ZoneFlowAndAvrStayTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区域id
                     * @return ZoneId 区域id
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置区域id
                     * @param _zoneId 区域id
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取区域名称
                     * @return ZoneName 区域名称
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置区域名称
                     * @param _zoneName 区域名称
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取人流量
                     * @return FlowCount 人流量
                     * 
                     */
                    uint64_t GetFlowCount() const;

                    /**
                     * 设置人流量
                     * @param _flowCount 人流量
                     * 
                     */
                    void SetFlowCount(const uint64_t& _flowCount);

                    /**
                     * 判断参数 FlowCount 是否已赋值
                     * @return FlowCount 是否已赋值
                     * 
                     */
                    bool FlowCountHasBeenSet() const;

                    /**
                     * 获取平均停留时长
                     * @return AvrStayTime 平均停留时长
                     * 
                     */
                    uint64_t GetAvrStayTime() const;

                    /**
                     * 设置平均停留时长
                     * @param _avrStayTime 平均停留时长
                     * 
                     */
                    void SetAvrStayTime(const uint64_t& _avrStayTime);

                    /**
                     * 判断参数 AvrStayTime 是否已赋值
                     * @return AvrStayTime 是否已赋值
                     * 
                     */
                    bool AvrStayTimeHasBeenSet() const;

                private:

                    /**
                     * 区域id
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 区域名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 人流量
                     */
                    uint64_t m_flowCount;
                    bool m_flowCountHasBeenSet;

                    /**
                     * 平均停留时长
                     */
                    uint64_t m_avrStayTime;
                    bool m_avrStayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONEFLOWANDAVRSTAYTIME_H_
