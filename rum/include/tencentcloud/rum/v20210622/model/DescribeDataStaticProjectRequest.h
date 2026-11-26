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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATASTATICPROJECTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATASTATICPROJECTREQUEST_H_

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
                * DescribeDataStaticProject请求参数结构体
                */
                class DescribeDataStaticProjectRequest : public AbstractModel
                {
                public:
                    DescribeDataStaticProjectRequest();
                    ~DescribeDataStaticProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
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
                     * 获取<p>allcount：性能视图，day：14天数据，condition：条件列表，area：请求速度分布，nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：网络平台视图/Version视图/设备视图/ISP视图/地区视图/浏览器视图/ext1视图等等</p>
                     * @return Type <p>allcount：性能视图，day：14天数据，condition：条件列表，area：请求速度分布，nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：网络平台视图/Version视图/设备视图/ISP视图/地区视图/浏览器视图/ext1视图等等</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>allcount：性能视图，day：14天数据，condition：条件列表，area：请求速度分布，nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：网络平台视图/Version视图/设备视图/ISP视图/地区视图/浏览器视图/ext1视图等等</p>
                     * @param _type <p>allcount：性能视图，day：14天数据，condition：条件列表，area：请求速度分布，nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：网络平台视图/Version视图/设备视图/ISP视图/地区视图/浏览器视图/ext1视图等等</p>
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
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>项目ID</p>
                     * @return ID <p>项目ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _iD <p>项目ID</p>
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
                     * 获取<p>自定义2</p>
                     * @return ExtSecond <p>自定义2</p>
                     * 
                     */
                    std::string GetExtSecond() const;

                    /**
                     * 设置<p>自定义2</p>
                     * @param _extSecond <p>自定义2</p>
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
                     * 获取<p>浏览器引擎</p>
                     * @return Engine <p>浏览器引擎</p>
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置<p>浏览器引擎</p>
                     * @param _engine <p>浏览器引擎</p>
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
                     * 获取<p>运营商</p>
                     * @return Isp <p>运营商</p>
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置<p>运营商</p>
                     * @param _isp <p>运营商</p>
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
                     * 获取<p>来源页面</p>
                     * @return From <p>来源页面</p>
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置<p>来源页面</p>
                     * @param _from <p>来源页面</p>
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
                     * 获取<p>日志等级（1表示白名单日志，2表示一般日志，4表示错误日志，8表示Promise 错误，16表示Ajax 请求异常，32表示JS 加载异常，64表示图片加载异常，128表示css 加载异常，256表示console.error，512表示音视频资源异常，1024表示retcode 异常，2048表示aegis report，4096表示PV日志，8192表示自定义事件，16384表示小程序 页面不存在，32768表示websocket错误，65536表示js bridge错误）</p>
                     * @return Level <p>日志等级（1表示白名单日志，2表示一般日志，4表示错误日志，8表示Promise 错误，16表示Ajax 请求异常，32表示JS 加载异常，64表示图片加载异常，128表示css 加载异常，256表示console.error，512表示音视频资源异常，1024表示retcode 异常，2048表示aegis report，4096表示PV日志，8192表示自定义事件，16384表示小程序 页面不存在，32768表示websocket错误，65536表示js bridge错误）</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>日志等级（1表示白名单日志，2表示一般日志，4表示错误日志，8表示Promise 错误，16表示Ajax 请求异常，32表示JS 加载异常，64表示图片加载异常，128表示css 加载异常，256表示console.error，512表示音视频资源异常，1024表示retcode 异常，2048表示aegis report，4096表示PV日志，8192表示自定义事件，16384表示小程序 页面不存在，32768表示websocket错误，65536表示js bridge错误）</p>
                     * @param _level <p>日志等级（1表示白名单日志，2表示一般日志，4表示错误日志，8表示Promise 错误，16表示Ajax 请求异常，32表示JS 加载异常，64表示图片加载异常，128表示css 加载异常，256表示console.error，512表示音视频资源异常，1024表示retcode 异常，2048表示aegis report，4096表示PV日志，8192表示自定义事件，16384表示小程序 页面不存在，32768表示websocket错误，65536表示js bridge错误）</p>
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
                     * 获取<p>品牌</p>
                     * @return Brand <p>品牌</p>
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置<p>品牌</p>
                     * @param _brand <p>品牌</p>
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
                     * 获取<p>地区</p>
                     * @return Area <p>地区</p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>地区</p>
                     * @param _area <p>地区</p>
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
                     * 获取<p>版本</p>
                     * @return VersionNum <p>版本</p>
                     * 
                     */
                    std::string GetVersionNum() const;

                    /**
                     * 设置<p>版本</p>
                     * @param _versionNum <p>版本</p>
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
                     * 获取<p>平台</p>
                     * @return Platform <p>平台</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>平台</p>
                     * @param _platform <p>平台</p>
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
                     * 获取<p>自定义3</p>
                     * @return ExtThird <p>自定义3</p>
                     * 
                     */
                    std::string GetExtThird() const;

                    /**
                     * 设置<p>自定义3</p>
                     * @param _extThird <p>自定义3</p>
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
                     * 获取<p>自定义1</p>
                     * @return ExtFirst <p>自定义1</p>
                     * 
                     */
                    std::string GetExtFirst() const;

                    /**
                     * 设置<p>自定义1</p>
                     * @param _extFirst <p>自定义1</p>
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
                     * 获取<p>网络类型（1,2,3,4,5,100），1表示WIFI, 2表示2G, 3表示3G, 4表示4G, 5表示5G, 6表示6G, 100表示未知。</p>
                     * @return NetType <p>网络类型（1,2,3,4,5,100），1表示WIFI, 2表示2G, 3表示3G, 4表示4G, 5表示5G, 6表示6G, 100表示未知。</p>
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置<p>网络类型（1,2,3,4,5,100），1表示WIFI, 2表示2G, 3表示3G, 4表示4G, 5表示5G, 6表示6G, 100表示未知。</p>
                     * @param _netType <p>网络类型（1,2,3,4,5,100），1表示WIFI, 2表示2G, 3表示3G, 4表示4G, 5表示5G, 6表示6G, 100表示未知。</p>
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
                     * 获取<p>机型</p>
                     * @return Device <p>机型</p>
                     * 
                     */
                    std::string GetDevice() const;

                    /**
                     * 设置<p>机型</p>
                     * @param _device <p>机型</p>
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
                     * 获取<p>显示是否海外,1表示海外，0表示非海外；默认值为空，查询所有。</p>
                     * @return IsAbroad <p>显示是否海外,1表示海外，0表示非海外；默认值为空，查询所有。</p>
                     * 
                     */
                    std::string GetIsAbroad() const;

                    /**
                     * 设置<p>显示是否海外,1表示海外，0表示非海外；默认值为空，查询所有。</p>
                     * @param _isAbroad <p>显示是否海外,1表示海外，0表示非海外；默认值为空，查询所有。</p>
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
                     * 获取<p>操作系统</p>
                     * @return Os <p>操作系统</p>
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置<p>操作系统</p>
                     * @param _os <p>操作系统</p>
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
                     * 获取<p>浏览器</p>
                     * @return Browser <p>浏览器</p>
                     * 
                     */
                    std::string GetBrowser() const;

                    /**
                     * 设置<p>浏览器</p>
                     * @param _browser <p>浏览器</p>
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
                     * 获取<p>耗时口径：&quot;50&quot;/&quot;75&quot;/&quot;90&quot;/&quot;95&quot;/&quot;99&quot;/&quot;99.5&quot; 分别表示 TP50/TP75/TP90/TP95/TP99/TP99.5（percentile2）；&quot;avg&quot; 表示均值（avg）。</p>
                     * @return CostType <p>耗时口径：&quot;50&quot;/&quot;75&quot;/&quot;90&quot;/&quot;95&quot;/&quot;99&quot;/&quot;99.5&quot; 分别表示 TP50/TP75/TP90/TP95/TP99/TP99.5（percentile2）；&quot;avg&quot; 表示均值（avg）。</p>
                     * 
                     */
                    std::string GetCostType() const;

                    /**
                     * 设置<p>耗时口径：&quot;50&quot;/&quot;75&quot;/&quot;90&quot;/&quot;95&quot;/&quot;99&quot;/&quot;99.5&quot; 分别表示 TP50/TP75/TP90/TP95/TP99/TP99.5（percentile2）；&quot;avg&quot; 表示均值（avg）。</p>
                     * @param _costType <p>耗时口径：&quot;50&quot;/&quot;75&quot;/&quot;90&quot;/&quot;95&quot;/&quot;99&quot;/&quot;99.5&quot; 分别表示 TP50/TP75/TP90/TP95/TP99/TP99.5（percentile2）；&quot;avg&quot; 表示均值（avg）。</p>
                     * 
                     */
                    void SetCostType(const std::string& _costType);

                    /**
                     * 判断参数 CostType 是否已赋值
                     * @return CostType 是否已赋值
                     * 
                     */
                    bool CostTypeHasBeenSet() const;

                    /**
                     * 获取<p>来源</p>
                     * @return Url <p>来源</p>
                     * 
                     */
                    std::vector<std::string> GetUrl() const;

                    /**
                     * 设置<p>来源</p>
                     * @param _url <p>来源</p>
                     * 
                     */
                    void SetUrl(const std::vector<std::string>& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>环境</p>
                     * @return Env <p>环境</p>
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置<p>环境</p>
                     * @param _env <p>环境</p>
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>allcount：性能视图，day：14天数据，condition：条件列表，area：请求速度分布，nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/：网络平台视图/Version视图/设备视图/ISP视图/地区视图/浏览器视图/ext1视图等等</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>自定义2</p>
                     */
                    std::string m_extSecond;
                    bool m_extSecondHasBeenSet;

                    /**
                     * <p>浏览器引擎</p>
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * <p>运营商</p>
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * <p>来源页面</p>
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>日志等级（1表示白名单日志，2表示一般日志，4表示错误日志，8表示Promise 错误，16表示Ajax 请求异常，32表示JS 加载异常，64表示图片加载异常，128表示css 加载异常，256表示console.error，512表示音视频资源异常，1024表示retcode 异常，2048表示aegis report，4096表示PV日志，8192表示自定义事件，16384表示小程序 页面不存在，32768表示websocket错误，65536表示js bridge错误）</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>品牌</p>
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * <p>地区</p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>版本</p>
                     */
                    std::string m_versionNum;
                    bool m_versionNumHasBeenSet;

                    /**
                     * <p>平台</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>自定义3</p>
                     */
                    std::string m_extThird;
                    bool m_extThirdHasBeenSet;

                    /**
                     * <p>自定义1</p>
                     */
                    std::string m_extFirst;
                    bool m_extFirstHasBeenSet;

                    /**
                     * <p>网络类型（1,2,3,4,5,100），1表示WIFI, 2表示2G, 3表示3G, 4表示4G, 5表示5G, 6表示6G, 100表示未知。</p>
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>机型</p>
                     */
                    std::string m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * <p>显示是否海外,1表示海外，0表示非海外；默认值为空，查询所有。</p>
                     */
                    std::string m_isAbroad;
                    bool m_isAbroadHasBeenSet;

                    /**
                     * <p>操作系统</p>
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * <p>浏览器</p>
                     */
                    std::string m_browser;
                    bool m_browserHasBeenSet;

                    /**
                     * <p>耗时口径：&quot;50&quot;/&quot;75&quot;/&quot;90&quot;/&quot;95&quot;/&quot;99&quot;/&quot;99.5&quot; 分别表示 TP50/TP75/TP90/TP95/TP99/TP99.5（percentile2）；&quot;avg&quot; 表示均值（avg）。</p>
                     */
                    std::string m_costType;
                    bool m_costTypeHasBeenSet;

                    /**
                     * <p>来源</p>
                     */
                    std::vector<std::string> m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>环境</p>
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATASTATICPROJECTREQUEST_H_
