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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_REGIONLATENCY_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_REGIONLATENCY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * 玩家到各区域的延迟
                */
                class RegionLatency : public AbstractModel
                {
                public:
                    RegionLatency();
                    ~RegionLatency() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域
ap-beijing          华北地区(北京)
ap-chengdu          西南地区(成都)
ap-guangzhou          华南地区(广州)
ap-hongkong          港澳台地区(中国香港)
ap-seoul          亚太地区(首尔)
ap-shanghai          华东地区(上海)
ap-singapore          东南亚地区(新加坡)
eu-frankfurt          欧洲地区(法兰克福)
na-siliconvalley          美国西部(硅谷)
na-toronto          北美地区(多伦多)
ap-mumbai          亚太地区(孟买)
na-ashburn          美国东部(弗吉尼亚)
ap-bangkok          亚太地区(曼谷)
eu-moscow          欧洲地区(莫斯科)
ap-tokyo          亚太地区(东京)
                     * @return Region 地域
ap-beijing          华北地区(北京)
ap-chengdu          西南地区(成都)
ap-guangzhou          华南地区(广州)
ap-hongkong          港澳台地区(中国香港)
ap-seoul          亚太地区(首尔)
ap-shanghai          华东地区(上海)
ap-singapore          东南亚地区(新加坡)
eu-frankfurt          欧洲地区(法兰克福)
na-siliconvalley          美国西部(硅谷)
na-toronto          北美地区(多伦多)
ap-mumbai          亚太地区(孟买)
na-ashburn          美国东部(弗吉尼亚)
ap-bangkok          亚太地区(曼谷)
eu-moscow          欧洲地区(莫斯科)
ap-tokyo          亚太地区(东京)
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
ap-beijing          华北地区(北京)
ap-chengdu          西南地区(成都)
ap-guangzhou          华南地区(广州)
ap-hongkong          港澳台地区(中国香港)
ap-seoul          亚太地区(首尔)
ap-shanghai          华东地区(上海)
ap-singapore          东南亚地区(新加坡)
eu-frankfurt          欧洲地区(法兰克福)
na-siliconvalley          美国西部(硅谷)
na-toronto          北美地区(多伦多)
ap-mumbai          亚太地区(孟买)
na-ashburn          美国东部(弗吉尼亚)
ap-bangkok          亚太地区(曼谷)
eu-moscow          欧洲地区(莫斯科)
ap-tokyo          亚太地区(东京)
                     * @param _region 地域
ap-beijing          华北地区(北京)
ap-chengdu          西南地区(成都)
ap-guangzhou          华南地区(广州)
ap-hongkong          港澳台地区(中国香港)
ap-seoul          亚太地区(首尔)
ap-shanghai          华东地区(上海)
ap-singapore          东南亚地区(新加坡)
eu-frankfurt          欧洲地区(法兰克福)
na-siliconvalley          美国西部(硅谷)
na-toronto          北美地区(多伦多)
ap-mumbai          亚太地区(孟买)
na-ashburn          美国东部(弗吉尼亚)
ap-bangkok          亚太地区(曼谷)
eu-moscow          欧洲地区(莫斯科)
ap-tokyo          亚太地区(东京)
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取毫秒延迟 0～999999
                     * @return Latency 毫秒延迟 0～999999
                     * 
                     */
                    uint64_t GetLatency() const;

                    /**
                     * 设置毫秒延迟 0～999999
                     * @param _latency 毫秒延迟 0～999999
                     * 
                     */
                    void SetLatency(const uint64_t& _latency);

                    /**
                     * 判断参数 Latency 是否已赋值
                     * @return Latency 是否已赋值
                     * 
                     */
                    bool LatencyHasBeenSet() const;

                private:

                    /**
                     * 地域
ap-beijing          华北地区(北京)
ap-chengdu          西南地区(成都)
ap-guangzhou          华南地区(广州)
ap-hongkong          港澳台地区(中国香港)
ap-seoul          亚太地区(首尔)
ap-shanghai          华东地区(上海)
ap-singapore          东南亚地区(新加坡)
eu-frankfurt          欧洲地区(法兰克福)
na-siliconvalley          美国西部(硅谷)
na-toronto          北美地区(多伦多)
ap-mumbai          亚太地区(孟买)
na-ashburn          美国东部(弗吉尼亚)
ap-bangkok          亚太地区(曼谷)
eu-moscow          欧洲地区(莫斯科)
ap-tokyo          亚太地区(东京)
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 毫秒延迟 0～999999
                     */
                    uint64_t m_latency;
                    bool m_latencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_REGIONLATENCY_H_
