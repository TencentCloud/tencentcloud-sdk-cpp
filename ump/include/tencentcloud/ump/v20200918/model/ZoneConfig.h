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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_ZONECONFIG_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_ZONECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 点位包含绑定、调试信息
                */
                class ZoneConfig : public AbstractModel
                {
                public:
                    ZoneConfig();
                    ~ZoneConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取点位ID
                     * @return ZoneId 点位ID
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置点位ID
                     * @param _zoneId 点位ID
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
                     * 获取点位名称
                     * @return ZoneName 点位名称
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置点位名称
                     * @param _zoneName 点位名称
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
                     * 获取点位类型:
1: 场门
3: 层门
5: 特殊区域
7: 门店
8: 补位
10: 开放式门店
11: 品类区
12: 公共区
                     * @return ZoneType 点位类型:
1: 场门
3: 层门
5: 特殊区域
7: 门店
8: 补位
10: 开放式门店
11: 品类区
12: 公共区
                     * 
                     */
                    int64_t GetZoneType() const;

                    /**
                     * 设置点位类型:
1: 场门
3: 层门
5: 特殊区域
7: 门店
8: 补位
10: 开放式门店
11: 品类区
12: 公共区
                     * @param _zoneType 点位类型:
1: 场门
3: 层门
5: 特殊区域
7: 门店
8: 补位
10: 开放式门店
11: 品类区
12: 公共区
                     * 
                     */
                    void SetZoneType(const int64_t& _zoneType);

                    /**
                     * 判断参数 ZoneType 是否已赋值
                     * @return ZoneType 是否已赋值
                     * 
                     */
                    bool ZoneTypeHasBeenSet() const;

                    /**
                     * 获取铺位编码
                     * @return BunkCodes 铺位编码
                     * 
                     */
                    std::string GetBunkCodes() const;

                    /**
                     * 设置铺位编码
                     * @param _bunkCodes 铺位编码
                     * 
                     */
                    void SetBunkCodes(const std::string& _bunkCodes);

                    /**
                     * 判断参数 BunkCodes 是否已赋值
                     * @return BunkCodes 是否已赋值
                     * 
                     */
                    bool BunkCodesHasBeenSet() const;

                    /**
                     * 获取楼层名称
                     * @return FloorName 楼层名称
                     * 
                     */
                    std::string GetFloorName() const;

                    /**
                     * 设置楼层名称
                     * @param _floorName 楼层名称
                     * 
                     */
                    void SetFloorName(const std::string& _floorName);

                    /**
                     * 判断参数 FloorName 是否已赋值
                     * @return FloorName 是否已赋值
                     * 
                     */
                    bool FloorNameHasBeenSet() const;

                    /**
                     * 获取楼层ID
                     * @return FloorId 楼层ID
                     * 
                     */
                    int64_t GetFloorId() const;

                    /**
                     * 设置楼层ID
                     * @param _floorId 楼层ID
                     * 
                     */
                    void SetFloorId(const int64_t& _floorId);

                    /**
                     * 判断参数 FloorId 是否已赋值
                     * @return FloorId 是否已赋值
                     * 
                     */
                    bool FloorIdHasBeenSet() const;

                    /**
                     * 获取绑定数
                     * @return BindNum 绑定数
                     * 
                     */
                    int64_t GetBindNum() const;

                    /**
                     * 设置绑定数
                     * @param _bindNum 绑定数
                     * 
                     */
                    void SetBindNum(const int64_t& _bindNum);

                    /**
                     * 判断参数 BindNum 是否已赋值
                     * @return BindNum 是否已赋值
                     * 
                     */
                    bool BindNumHasBeenSet() const;

                    /**
                     * 获取调试数
                     * @return DebugNum 调试数
                     * 
                     */
                    int64_t GetDebugNum() const;

                    /**
                     * 设置调试数
                     * @param _debugNum 调试数
                     * 
                     */
                    void SetDebugNum(const int64_t& _debugNum);

                    /**
                     * 判断参数 DebugNum 是否已赋值
                     * @return DebugNum 是否已赋值
                     * 
                     */
                    bool DebugNumHasBeenSet() const;

                    /**
                     * 获取下发状态:
1: 不可下发
2: 可下发
3: 已下发
                     * @return State 下发状态:
1: 不可下发
2: 可下发
3: 已下发
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置下发状态:
1: 不可下发
2: 可下发
3: 已下发
                     * @param _state 下发状态:
1: 不可下发
2: 可下发
3: 已下发
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 点位ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 点位名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 点位类型:
1: 场门
3: 层门
5: 特殊区域
7: 门店
8: 补位
10: 开放式门店
11: 品类区
12: 公共区
                     */
                    int64_t m_zoneType;
                    bool m_zoneTypeHasBeenSet;

                    /**
                     * 铺位编码
                     */
                    std::string m_bunkCodes;
                    bool m_bunkCodesHasBeenSet;

                    /**
                     * 楼层名称
                     */
                    std::string m_floorName;
                    bool m_floorNameHasBeenSet;

                    /**
                     * 楼层ID
                     */
                    int64_t m_floorId;
                    bool m_floorIdHasBeenSet;

                    /**
                     * 绑定数
                     */
                    int64_t m_bindNum;
                    bool m_bindNumHasBeenSet;

                    /**
                     * 调试数
                     */
                    int64_t m_debugNum;
                    bool m_debugNumHasBeenSet;

                    /**
                     * 下发状态:
1: 不可下发
2: 可下发
3: 已下发
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_ZONECONFIG_H_
