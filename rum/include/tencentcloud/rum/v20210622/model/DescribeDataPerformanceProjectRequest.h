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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAPERFORMANCEPROJECTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAPERFORMANCEPROJECTREQUEST_H_

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
                * DescribeDataPerformanceProject请求参数结构体
                */
                class DescribeDataPerformanceProjectRequest : public AbstractModel
                {
                public:
                    DescribeDataPerformanceProjectRequest();
                    ~DescribeDataPerformanceProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param StartTime 开始时间
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取allcount：性能视图，falls：页面加载瀑布图，samp：首屏时间，day：14天数据，nettype：网络/平台视图，performance：页面性能TOP视图，condition：条件列表，area：请求速度分布，version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：ISP视图/地区视图/浏览器视图等
                     * @return Type allcount：性能视图，falls：页面加载瀑布图，samp：首屏时间，day：14天数据，nettype：网络/平台视图，performance：页面性能TOP视图，condition：条件列表，area：请求速度分布，version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：ISP视图/地区视图/浏览器视图等
                     */
                    std::string GetType() const;

                    /**
                     * 设置allcount：性能视图，falls：页面加载瀑布图，samp：首屏时间，day：14天数据，nettype：网络/平台视图，performance：页面性能TOP视图，condition：条件列表，area：请求速度分布，version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：ISP视图/地区视图/浏览器视图等
                     * @param Type allcount：性能视图，falls：页面加载瀑布图，samp：首屏时间，day：14天数据，nettype：网络/平台视图，performance：页面性能TOP视图，condition：条件列表，area：请求速度分布，version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：ISP视图/地区视图/浏览器视图等
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param EndTime 结束时间
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ID 项目ID
                     */
                    int64_t GetID() const;

                    /**
                     * 设置项目ID
                     * @param ID 项目ID
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取自定义2
                     * @return ExtSecond 自定义2
                     */
                    std::string GetExtSecond() const;

                    /**
                     * 设置自定义2
                     * @param ExtSecond 自定义2
                     */
                    void SetExtSecond(const std::string& _extSecond);

                    /**
                     * 判断参数 ExtSecond 是否已赋值
                     * @return ExtSecond 是否已赋值
                     */
                    bool ExtSecondHasBeenSet() const;

                    /**
                     * 获取浏览器引擎
                     * @return Engine 浏览器引擎
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置浏览器引擎
                     * @param Engine 浏览器引擎
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取运营商
                     * @return Isp 运营商
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置运营商
                     * @param Isp 运营商
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取来源页面
                     * @return From 来源页面
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置来源页面
                     * @param From 来源页面
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取日志等级
                     * @return Level 日志等级
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置日志等级
                     * @param Level 日志等级
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取品牌
                     * @return Brand 品牌
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置品牌
                     * @param Brand 品牌
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取地区
                     * @return Area 地区
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地区
                     * @param Area 地区
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return VersionNum 版本
                     */
                    std::string GetVersionNum() const;

                    /**
                     * 设置版本
                     * @param VersionNum 版本
                     */
                    void SetVersionNum(const std::string& _versionNum);

                    /**
                     * 判断参数 VersionNum 是否已赋值
                     * @return VersionNum 是否已赋值
                     */
                    bool VersionNumHasBeenSet() const;

                    /**
                     * 获取平台
                     * @return Platform 平台
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台
                     * @param Platform 平台
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取自定义3
                     * @return ExtThird 自定义3
                     */
                    std::string GetExtThird() const;

                    /**
                     * 设置自定义3
                     * @param ExtThird 自定义3
                     */
                    void SetExtThird(const std::string& _extThird);

                    /**
                     * 判断参数 ExtThird 是否已赋值
                     * @return ExtThird 是否已赋值
                     */
                    bool ExtThirdHasBeenSet() const;

                    /**
                     * 获取自定义1
                     * @return ExtFirst 自定义1
                     */
                    std::string GetExtFirst() const;

                    /**
                     * 设置自定义1
                     * @param ExtFirst 自定义1
                     */
                    void SetExtFirst(const std::string& _extFirst);

                    /**
                     * 判断参数 ExtFirst 是否已赋值
                     * @return ExtFirst 是否已赋值
                     */
                    bool ExtFirstHasBeenSet() const;

                    /**
                     * 获取网络类型
                     * @return NetType 网络类型
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置网络类型
                     * @param NetType 网络类型
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取机型
                     * @return Device 机型
                     */
                    std::string GetDevice() const;

                    /**
                     * 设置机型
                     * @param Device 机型
                     */
                    void SetDevice(const std::string& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取是否海外
                     * @return IsAbroad 是否海外
                     */
                    std::string GetIsAbroad() const;

                    /**
                     * 设置是否海外
                     * @param IsAbroad 是否海外
                     */
                    void SetIsAbroad(const std::string& _isAbroad);

                    /**
                     * 判断参数 IsAbroad 是否已赋值
                     * @return IsAbroad 是否已赋值
                     */
                    bool IsAbroadHasBeenSet() const;

                    /**
                     * 获取操作系统
                     * @return Os 操作系统
                     */
                    std::string GetOs() const;

                    /**
                     * 设置操作系统
                     * @param Os 操作系统
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     */
                    bool OsHasBeenSet() const;

                    /**
                     * 获取浏览器
                     * @return Browser 浏览器
                     */
                    std::string GetBrowser() const;

                    /**
                     * 设置浏览器
                     * @param Browser 浏览器
                     */
                    void SetBrowser(const std::string& _browser);

                    /**
                     * 判断参数 Browser 是否已赋值
                     * @return Browser 是否已赋值
                     */
                    bool BrowserHasBeenSet() const;

                    /**
                     * 获取耗时计算
                     * @return CostType 耗时计算
                     */
                    std::string GetCostType() const;

                    /**
                     * 设置耗时计算
                     * @param CostType 耗时计算
                     */
                    void SetCostType(const std::string& _costType);

                    /**
                     * 判断参数 CostType 是否已赋值
                     * @return CostType 是否已赋值
                     */
                    bool CostTypeHasBeenSet() const;

                    /**
                     * 获取环境
                     * @return Env 环境
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置环境
                     * @param Env 环境
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     */
                    bool EnvHasBeenSet() const;

                private:

                    /**
                     * 开始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * allcount：性能视图，falls：页面加载瀑布图，samp：首屏时间，day：14天数据，nettype：网络/平台视图，performance：页面性能TOP视图，condition：条件列表，area：请求速度分布，version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：ISP视图/地区视图/浏览器视图等
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
                     * 是否海外
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
                     * 耗时计算
                     */
                    std::string m_costType;
                    bool m_costTypeHasBeenSet;

                    /**
                     * 环境
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAPERFORMANCEPROJECTREQUEST_H_
