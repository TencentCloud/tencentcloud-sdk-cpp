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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONETRAFFICINFODETAIL_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONETRAFFICINFODETAIL_H_

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
                * 门店区域客流详细信息
                */
                class ZoneTrafficInfoDetail : public AbstractModel
                {
                public:
                    ZoneTrafficInfoDetail();
                    ~ZoneTrafficInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区域ID
                     * @return ZoneId 区域ID
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置区域ID
                     * @param _zoneId 区域ID
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

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
                     * 获取客流量
                     * @return TrafficTotalCount 客流量
                     * 
                     */
                    uint64_t GetTrafficTotalCount() const;

                    /**
                     * 设置客流量
                     * @param _trafficTotalCount 客流量
                     * 
                     */
                    void SetTrafficTotalCount(const uint64_t& _trafficTotalCount);

                    /**
                     * 判断参数 TrafficTotalCount 是否已赋值
                     * @return TrafficTotalCount 是否已赋值
                     * 
                     */
                    bool TrafficTotalCountHasBeenSet() const;

                    /**
                     * 获取平均停留时间
                     * @return AvgStayTime 平均停留时间
                     * 
                     */
                    uint64_t GetAvgStayTime() const;

                    /**
                     * 设置平均停留时间
                     * @param _avgStayTime 平均停留时间
                     * 
                     */
                    void SetAvgStayTime(const uint64_t& _avgStayTime);

                    /**
                     * 判断参数 AvgStayTime 是否已赋值
                     * @return AvgStayTime 是否已赋值
                     * 
                     */
                    bool AvgStayTimeHasBeenSet() const;

                private:

                    /**
                     * 区域ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 区域名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 客流量
                     */
                    uint64_t m_trafficTotalCount;
                    bool m_trafficTotalCountHasBeenSet;

                    /**
                     * 平均停留时间
                     */
                    uint64_t m_avgStayTime;
                    bool m_avgStayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONETRAFFICINFODETAIL_H_
