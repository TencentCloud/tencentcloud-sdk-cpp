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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_WARNINGSDATA_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_WARNINGSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 告警列表出参
                */
                class WarningsData : public AbstractModel
                {
                public:
                    WarningsData();
                    ~WarningsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一ID
                     * @return Id 唯一ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置唯一ID
                     * @param _id 唯一ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param _deviceId 设备ID
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取告警通道
                     * @return WarnChannel 告警通道
                     * 
                     */
                    std::string GetWarnChannel() const;

                    /**
                     * 设置告警通道
                     * @param _warnChannel 告警通道
                     * 
                     */
                    void SetWarnChannel(const std::string& _warnChannel);

                    /**
                     * 判断参数 WarnChannel 是否已赋值
                     * @return WarnChannel 是否已赋值
                     * 
                     */
                    bool WarnChannelHasBeenSet() const;

                    /**
                     * 获取告警级别 1: "一级警情", 2: "二级警情", 3: "三级警情", 4: "四级警情",
                     * @return WarnLevel 告警级别 1: "一级警情", 2: "二级警情", 3: "三级警情", 4: "四级警情",
                     * 
                     */
                    int64_t GetWarnLevel() const;

                    /**
                     * 设置告警级别 1: "一级警情", 2: "二级警情", 3: "三级警情", 4: "四级警情",
                     * @param _warnLevel 告警级别 1: "一级警情", 2: "二级警情", 3: "三级警情", 4: "四级警情",
                     * 
                     */
                    void SetWarnLevel(const int64_t& _warnLevel);

                    /**
                     * 判断参数 WarnLevel 是否已赋值
                     * @return WarnLevel 是否已赋值
                     * 
                     */
                    bool WarnLevelHasBeenSet() const;

                    /**
                     * 获取告警级别名称
                     * @return WarnLevelName 告警级别名称
                     * 
                     */
                    std::string GetWarnLevelName() const;

                    /**
                     * 设置告警级别名称
                     * @param _warnLevelName 告警级别名称
                     * 
                     */
                    void SetWarnLevelName(const std::string& _warnLevelName);

                    /**
                     * 判断参数 WarnLevelName 是否已赋值
                     * @return WarnLevelName 是否已赋值
                     * 
                     */
                    bool WarnLevelNameHasBeenSet() const;

                    /**
                     * 获取告警方式 2 设备报警 5 视频报警 6 设备故障报警
                     * @return WarnMode 告警方式 2 设备报警 5 视频报警 6 设备故障报警
                     * 
                     */
                    int64_t GetWarnMode() const;

                    /**
                     * 设置告警方式 2 设备报警 5 视频报警 6 设备故障报警
                     * @param _warnMode 告警方式 2 设备报警 5 视频报警 6 设备故障报警
                     * 
                     */
                    void SetWarnMode(const int64_t& _warnMode);

                    /**
                     * 判断参数 WarnMode 是否已赋值
                     * @return WarnMode 是否已赋值
                     * 
                     */
                    bool WarnModeHasBeenSet() const;

                    /**
                     * 获取告警方式名称
                     * @return WarnModeName 告警方式名称
                     * 
                     */
                    std::string GetWarnModeName() const;

                    /**
                     * 设置告警方式名称
                     * @param _warnModeName 告警方式名称
                     * 
                     */
                    void SetWarnModeName(const std::string& _warnModeName);

                    /**
                     * 判断参数 WarnModeName 是否已赋值
                     * @return WarnModeName 是否已赋值
                     * 
                     */
                    bool WarnModeNameHasBeenSet() const;

                    /**
                     * 获取告警类型  2: {
			Name: "设备报警",
			WarnType: map[int]string{
				1: "视频丢失报警",
				2: "设备防拆报警",
				3: "存储设备磁盘满报警",
				4: "设备高温报警",
				5: "设备低温报警",
			},
		},
		5: {
			Name: "视频报警",
			WarnType: map[int]string{
				1:  "人工视频报警",
				2:  "运动目标检测报警",
				3:  "遗留物检测报警",
				4:  "物体移除检测报警",
				5:  "绊线检测报警",
				6:  "入侵检测报警",
				7:  "逆行检测报警",
				8:  "徘徊检测报警",
				9:  "流量统计报警",
				10: "密度检测报警",
				11: "视频异常检测报警",
				12: "快速移动报警",
			},
		},
		6: {
			Name: "设备故障报警",
			WarnType: map[int]string{
				1: "存储设备磁盘故障报警",
				2: "存储设备风扇故障报警",
			},
		}
                     * @return WarnType 告警类型  2: {
			Name: "设备报警",
			WarnType: map[int]string{
				1: "视频丢失报警",
				2: "设备防拆报警",
				3: "存储设备磁盘满报警",
				4: "设备高温报警",
				5: "设备低温报警",
			},
		},
		5: {
			Name: "视频报警",
			WarnType: map[int]string{
				1:  "人工视频报警",
				2:  "运动目标检测报警",
				3:  "遗留物检测报警",
				4:  "物体移除检测报警",
				5:  "绊线检测报警",
				6:  "入侵检测报警",
				7:  "逆行检测报警",
				8:  "徘徊检测报警",
				9:  "流量统计报警",
				10: "密度检测报警",
				11: "视频异常检测报警",
				12: "快速移动报警",
			},
		},
		6: {
			Name: "设备故障报警",
			WarnType: map[int]string{
				1: "存储设备磁盘故障报警",
				2: "存储设备风扇故障报警",
			},
		}
                     * 
                     */
                    int64_t GetWarnType() const;

                    /**
                     * 设置告警类型  2: {
			Name: "设备报警",
			WarnType: map[int]string{
				1: "视频丢失报警",
				2: "设备防拆报警",
				3: "存储设备磁盘满报警",
				4: "设备高温报警",
				5: "设备低温报警",
			},
		},
		5: {
			Name: "视频报警",
			WarnType: map[int]string{
				1:  "人工视频报警",
				2:  "运动目标检测报警",
				3:  "遗留物检测报警",
				4:  "物体移除检测报警",
				5:  "绊线检测报警",
				6:  "入侵检测报警",
				7:  "逆行检测报警",
				8:  "徘徊检测报警",
				9:  "流量统计报警",
				10: "密度检测报警",
				11: "视频异常检测报警",
				12: "快速移动报警",
			},
		},
		6: {
			Name: "设备故障报警",
			WarnType: map[int]string{
				1: "存储设备磁盘故障报警",
				2: "存储设备风扇故障报警",
			},
		}
                     * @param _warnType 告警类型  2: {
			Name: "设备报警",
			WarnType: map[int]string{
				1: "视频丢失报警",
				2: "设备防拆报警",
				3: "存储设备磁盘满报警",
				4: "设备高温报警",
				5: "设备低温报警",
			},
		},
		5: {
			Name: "视频报警",
			WarnType: map[int]string{
				1:  "人工视频报警",
				2:  "运动目标检测报警",
				3:  "遗留物检测报警",
				4:  "物体移除检测报警",
				5:  "绊线检测报警",
				6:  "入侵检测报警",
				7:  "逆行检测报警",
				8:  "徘徊检测报警",
				9:  "流量统计报警",
				10: "密度检测报警",
				11: "视频异常检测报警",
				12: "快速移动报警",
			},
		},
		6: {
			Name: "设备故障报警",
			WarnType: map[int]string{
				1: "存储设备磁盘故障报警",
				2: "存储设备风扇故障报警",
			},
		}
                     * 
                     */
                    void SetWarnType(const int64_t& _warnType);

                    /**
                     * 判断参数 WarnType 是否已赋值
                     * @return WarnType 是否已赋值
                     * 
                     */
                    bool WarnTypeHasBeenSet() const;

                    /**
                     * 获取是否删除
                     * @return Del 是否删除
                     * 
                     */
                    int64_t GetDel() const;

                    /**
                     * 设置是否删除
                     * @param _del 是否删除
                     * 
                     */
                    void SetDel(const int64_t& _del);

                    /**
                     * 判断参数 Del 是否已赋值
                     * @return Del 是否已赋值
                     * 
                     */
                    bool DelHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 唯一ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 告警通道
                     */
                    std::string m_warnChannel;
                    bool m_warnChannelHasBeenSet;

                    /**
                     * 告警级别 1: "一级警情", 2: "二级警情", 3: "三级警情", 4: "四级警情",
                     */
                    int64_t m_warnLevel;
                    bool m_warnLevelHasBeenSet;

                    /**
                     * 告警级别名称
                     */
                    std::string m_warnLevelName;
                    bool m_warnLevelNameHasBeenSet;

                    /**
                     * 告警方式 2 设备报警 5 视频报警 6 设备故障报警
                     */
                    int64_t m_warnMode;
                    bool m_warnModeHasBeenSet;

                    /**
                     * 告警方式名称
                     */
                    std::string m_warnModeName;
                    bool m_warnModeNameHasBeenSet;

                    /**
                     * 告警类型  2: {
			Name: "设备报警",
			WarnType: map[int]string{
				1: "视频丢失报警",
				2: "设备防拆报警",
				3: "存储设备磁盘满报警",
				4: "设备高温报警",
				5: "设备低温报警",
			},
		},
		5: {
			Name: "视频报警",
			WarnType: map[int]string{
				1:  "人工视频报警",
				2:  "运动目标检测报警",
				3:  "遗留物检测报警",
				4:  "物体移除检测报警",
				5:  "绊线检测报警",
				6:  "入侵检测报警",
				7:  "逆行检测报警",
				8:  "徘徊检测报警",
				9:  "流量统计报警",
				10: "密度检测报警",
				11: "视频异常检测报警",
				12: "快速移动报警",
			},
		},
		6: {
			Name: "设备故障报警",
			WarnType: map[int]string{
				1: "存储设备磁盘故障报警",
				2: "存储设备风扇故障报警",
			},
		}
                     */
                    int64_t m_warnType;
                    bool m_warnTypeHasBeenSet;

                    /**
                     * 是否删除
                     */
                    int64_t m_del;
                    bool m_delHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_WARNINGSDATA_H_
