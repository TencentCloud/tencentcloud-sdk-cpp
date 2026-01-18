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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAPVURLSTATISTICSV2REQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAPVURLSTATISTICSV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeDataPvUrlStatisticsV2请求参数结构体
                */
                class DescribeDataPvUrlStatisticsV2Request : public AbstractModel
                {
                public:
                    DescribeDataPvUrlStatisticsV2Request();
                    ~DescribeDataPvUrlStatisticsV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取allcount：性能视图，day：14天数据，vp：性能，ckuv：uv，ckpv：pv，condition：条件列表，nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：网络平台视图/Version视图/设备视图/ISP视图/地区视图/浏览器视图/ext1视图等等
                     * @return Type allcount：性能视图，day：14天数据，vp：性能，ckuv：uv，ckpv：pv，condition：条件列表，nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：网络平台视图/Version视图/设备视图/ISP视图/地区视图/浏览器视图/ext1视图等等
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置allcount：性能视图，day：14天数据，vp：性能，ckuv：uv，ckpv：pv，condition：条件列表，nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：网络平台视图/Version视图/设备视图/ISP视图/地区视图/浏览器视图/ext1视图等等
                     * @param _type allcount：性能视图，day：14天数据，vp：性能，ckuv：uv，ckpv：pv，condition：条件列表，nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：网络平台视图/Version视图/设备视图/ISP视图/地区视图/浏览器视图/ext1视图等等
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ID 项目ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置项目ID
                     * @param _iD 项目ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取自定义2
                     * @return ExtSecond 自定义2
                     * 
                     */
                    std::string GetExtSecond() const;

                    /**
                     * 设置自定义2
                     * @param _extSecond 自定义2
                     * 
                     */
                    void SetExtSecond(const std::string& _extSecond);

                    /**
                     * 判断参数 ExtSecond 是否已赋值
                     * @return ExtSecond 是否已赋值
                     * 
                     */
                    bool ExtSecondHasBeenSet() const;

                    /**
                     * 获取浏览器引擎
                     * @return Engine 浏览器引擎
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置浏览器引擎
                     * @param _engine 浏览器引擎
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取运营商
                     * @return Isp 运营商
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置运营商
                     * @param _isp 运营商
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取来源页面
                     * @return From 来源页面
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置来源页面
                     * @param _from 来源页面
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取日志等级
                     * @return Level 日志等级
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置日志等级
                     * @param _level 日志等级
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取品牌
                     * @return Brand 品牌
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置品牌
                     * @param _brand 品牌
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取地区
                     * @return Area 地区
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地区
                     * @param _area 地区
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return VersionNum 版本
                     * 
                     */
                    std::string GetVersionNum() const;

                    /**
                     * 设置版本
                     * @param _versionNum 版本
                     * 
                     */
                    void SetVersionNum(const std::string& _versionNum);

                    /**
                     * 判断参数 VersionNum 是否已赋值
                     * @return VersionNum 是否已赋值
                     * 
                     */
                    bool VersionNumHasBeenSet() const;

                    /**
                     * 获取平台
                     * @return Platform 平台
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台
                     * @param _platform 平台
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取自定义3
                     * @return ExtThird 自定义3
                     * 
                     */
                    std::string GetExtThird() const;

                    /**
                     * 设置自定义3
                     * @param _extThird 自定义3
                     * 
                     */
                    void SetExtThird(const std::string& _extThird);

                    /**
                     * 判断参数 ExtThird 是否已赋值
                     * @return ExtThird 是否已赋值
                     * 
                     */
                    bool ExtThirdHasBeenSet() const;

                    /**
                     * 获取自定义1
                     * @return ExtFirst 自定义1
                     * 
                     */
                    std::string GetExtFirst() const;

                    /**
                     * 设置自定义1
                     * @param _extFirst 自定义1
                     * 
                     */
                    void SetExtFirst(const std::string& _extFirst);

                    /**
                     * 判断参数 ExtFirst 是否已赋值
                     * @return ExtFirst 是否已赋值
                     * 
                     */
                    bool ExtFirstHasBeenSet() const;

                    /**
                     * 获取网络类型
                     * @return NetType 网络类型
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置网络类型
                     * @param _netType 网络类型
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取机型
                     * @return Device 机型
                     * 
                     */
                    std::string GetDevice() const;

                    /**
                     * 设置机型
                     * @param _device 机型
                     * 
                     */
                    void SetDevice(const std::string& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取显示是否海外,1表示海外，0表示非海外；默认值为空，查询所有。
                     * @return IsAbroad 显示是否海外,1表示海外，0表示非海外；默认值为空，查询所有。
                     * 
                     */
                    std::string GetIsAbroad() const;

                    /**
                     * 设置显示是否海外,1表示海外，0表示非海外；默认值为空，查询所有。
                     * @param _isAbroad 显示是否海外,1表示海外，0表示非海外；默认值为空，查询所有。
                     * 
                     */
                    void SetIsAbroad(const std::string& _isAbroad);

                    /**
                     * 判断参数 IsAbroad 是否已赋值
                     * @return IsAbroad 是否已赋值
                     * 
                     */
                    bool IsAbroadHasBeenSet() const;

                    /**
                     * 获取操作系统
                     * @return Os 操作系统
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置操作系统
                     * @param _os 操作系统
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

                    /**
                     * 获取浏览器
                     * @return Browser 浏览器
                     * 
                     */
                    std::string GetBrowser() const;

                    /**
                     * 设置浏览器
                     * @param _browser 浏览器
                     * 
                     */
                    void SetBrowser(const std::string& _browser);

                    /**
                     * 判断参数 Browser 是否已赋值
                     * @return Browser 是否已赋值
                     * 
                     */
                    bool BrowserHasBeenSet() const;

                    /**
                     * 获取环境
                     * @return Env 环境
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置环境
                     * @param _env 环境
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取group by 参数值枚举1:1m  2:5m  3:30m  4:1h 
 5:1d
                     * @return GroupByType group by 参数值枚举1:1m  2:5m  3:30m  4:1h 
 5:1d
                     * 
                     */
                    int64_t GetGroupByType() const;

                    /**
                     * 设置group by 参数值枚举1:1m  2:5m  3:30m  4:1h 
 5:1d
                     * @param _groupByType group by 参数值枚举1:1m  2:5m  3:30m  4:1h 
 5:1d
                     * 
                     */
                    void SetGroupByType(const int64_t& _groupByType);

                    /**
                     * 判断参数 GroupByType 是否已赋值
                     * @return GroupByType 是否已赋值
                     * 
                     */
                    bool GroupByTypeHasBeenSet() const;

                    /**
                     * 获取1: 查询智研
0: 走旧逻辑，已下线，勿使用
                     * @return IsNewData 1: 查询智研
0: 走旧逻辑，已下线，勿使用
                     * 
                     */
                    int64_t GetIsNewData() const;

                    /**
                     * 设置1: 查询智研
0: 走旧逻辑，已下线，勿使用
                     * @param _isNewData 1: 查询智研
0: 走旧逻辑，已下线，勿使用
                     * 
                     */
                    void SetIsNewData(const int64_t& _isNewData);

                    /**
                     * 判断参数 IsNewData 是否已赋值
                     * @return IsNewData 是否已赋值
                     * 
                     */
                    bool IsNewDataHasBeenSet() const;

                    /**
                     * 获取自定义4
                     * @return ExtFourth 自定义4
                     * 
                     */
                    std::string GetExtFourth() const;

                    /**
                     * 设置自定义4
                     * @param _extFourth 自定义4
                     * 
                     */
                    void SetExtFourth(const std::string& _extFourth);

                    /**
                     * 判断参数 ExtFourth 是否已赋值
                     * @return ExtFourth 是否已赋值
                     * 
                     */
                    bool ExtFourthHasBeenSet() const;

                    /**
                     * 获取自定义5
                     * @return ExtFifth 自定义5
                     * 
                     */
                    std::string GetExtFifth() const;

                    /**
                     * 设置自定义5
                     * @param _extFifth 自定义5
                     * 
                     */
                    void SetExtFifth(const std::string& _extFifth);

                    /**
                     * 判断参数 ExtFifth 是否已赋值
                     * @return ExtFifth 是否已赋值
                     * 
                     */
                    bool ExtFifthHasBeenSet() const;

                    /**
                     * 获取自定义6
                     * @return ExtSixth 自定义6
                     * 
                     */
                    std::string GetExtSixth() const;

                    /**
                     * 设置自定义6
                     * @param _extSixth 自定义6
                     * 
                     */
                    void SetExtSixth(const std::string& _extSixth);

                    /**
                     * 判断参数 ExtSixth 是否已赋值
                     * @return ExtSixth 是否已赋值
                     * 
                     */
                    bool ExtSixthHasBeenSet() const;

                    /**
                     * 获取自定义7
                     * @return ExtSeventh 自定义7
                     * 
                     */
                    std::string GetExtSeventh() const;

                    /**
                     * 设置自定义7
                     * @param _extSeventh 自定义7
                     * 
                     */
                    void SetExtSeventh(const std::string& _extSeventh);

                    /**
                     * 判断参数 ExtSeventh 是否已赋值
                     * @return ExtSeventh 是否已赋值
                     * 
                     */
                    bool ExtSeventhHasBeenSet() const;

                    /**
                     * 获取自定义8
                     * @return ExtEighth 自定义8
                     * 
                     */
                    std::string GetExtEighth() const;

                    /**
                     * 设置自定义8
                     * @param _extEighth 自定义8
                     * 
                     */
                    void SetExtEighth(const std::string& _extEighth);

                    /**
                     * 判断参数 ExtEighth 是否已赋值
                     * @return ExtEighth 是否已赋值
                     * 
                     */
                    bool ExtEighthHasBeenSet() const;

                    /**
                     * 获取自定义9
                     * @return ExtNinth 自定义9
                     * 
                     */
                    std::string GetExtNinth() const;

                    /**
                     * 设置自定义9
                     * @param _extNinth 自定义9
                     * 
                     */
                    void SetExtNinth(const std::string& _extNinth);

                    /**
                     * 判断参数 ExtNinth 是否已赋值
                     * @return ExtNinth 是否已赋值
                     * 
                     */
                    bool ExtNinthHasBeenSet() const;

                    /**
                     * 获取自定义10
                     * @return ExtTenth 自定义10
                     * 
                     */
                    std::string GetExtTenth() const;

                    /**
                     * 设置自定义10
                     * @param _extTenth 自定义10
                     * 
                     */
                    void SetExtTenth(const std::string& _extTenth);

                    /**
                     * 判断参数 ExtTenth 是否已赋值
                     * @return ExtTenth 是否已赋值
                     * 
                     */
                    bool ExtTenthHasBeenSet() const;

                    /**
                     * 获取时间段
                     * @return Granularity 时间段
                     * 
                     */
                    std::string GetGranularity() const;

                    /**
                     * 设置时间段
                     * @param _granularity 时间段
                     * 
                     */
                    void SetGranularity(const std::string& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                private:

                    /**
                     * 开始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * allcount：性能视图，day：14天数据，vp：性能，ckuv：uv，ckpv：pv，condition：条件列表，nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：网络平台视图/Version视图/设备视图/ISP视图/地区视图/浏览器视图/ext1视图等等
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 自定义2
                     */
                    std::string m_extSecond;
                    bool m_extSecondHasBeenSet;

                    /**
                     * 浏览器引擎
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 运营商
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * 来源页面
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 日志等级
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 品牌
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * 地区
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_versionNum;
                    bool m_versionNumHasBeenSet;

                    /**
                     * 平台
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 自定义3
                     */
                    std::string m_extThird;
                    bool m_extThirdHasBeenSet;

                    /**
                     * 自定义1
                     */
                    std::string m_extFirst;
                    bool m_extFirstHasBeenSet;

                    /**
                     * 网络类型
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 机型
                     */
                    std::string m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * 显示是否海外,1表示海外，0表示非海外；默认值为空，查询所有。
                     */
                    std::string m_isAbroad;
                    bool m_isAbroadHasBeenSet;

                    /**
                     * 操作系统
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * 浏览器
                     */
                    std::string m_browser;
                    bool m_browserHasBeenSet;

                    /**
                     * 环境
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * group by 参数值枚举1:1m  2:5m  3:30m  4:1h 
 5:1d
                     */
                    int64_t m_groupByType;
                    bool m_groupByTypeHasBeenSet;

                    /**
                     * 1: 查询智研
0: 走旧逻辑，已下线，勿使用
                     */
                    int64_t m_isNewData;
                    bool m_isNewDataHasBeenSet;

                    /**
                     * 自定义4
                     */
                    std::string m_extFourth;
                    bool m_extFourthHasBeenSet;

                    /**
                     * 自定义5
                     */
                    std::string m_extFifth;
                    bool m_extFifthHasBeenSet;

                    /**
                     * 自定义6
                     */
                    std::string m_extSixth;
                    bool m_extSixthHasBeenSet;

                    /**
                     * 自定义7
                     */
                    std::string m_extSeventh;
                    bool m_extSeventhHasBeenSet;

                    /**
                     * 自定义8
                     */
                    std::string m_extEighth;
                    bool m_extEighthHasBeenSet;

                    /**
                     * 自定义9
                     */
                    std::string m_extNinth;
                    bool m_extNinthHasBeenSet;

                    /**
                     * 自定义10
                     */
                    std::string m_extTenth;
                    bool m_extTenthHasBeenSet;

                    /**
                     * 时间段
                     */
                    std::string m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAPVURLSTATISTICSV2REQUEST_H_
