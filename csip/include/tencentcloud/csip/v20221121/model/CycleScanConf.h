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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CYCLESCANCONF_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CYCLESCANCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 策略的周期扫描配置（间隔类型 + 间隔取值 + 扫描时段窗口）。
                */
                class CycleScanConf : public AbstractModel
                {
                public:
                    CycleScanConf();
                    ~CycleScanConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>周期扫描开关。0 关闭，1 开启。</p>
                     * @return Enable <p>周期扫描开关。0 关闭，1 开启。</p>
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置<p>周期扫描开关。0 关闭，1 开启。</p>
                     * @param _enable <p>周期扫描开关。0 关闭，1 开启。</p>
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>周期扫描的间隔类型。取值：</p><ul><li>DAY：每若干天，IntervalValueList 取间隔天数（如 ["1"] 表示每天）</li><li>WEEK：每周指定星期几，IntervalValueList 取 1~7（周一~周日）</li><li>MONTH：每月指定日期，IntervalValueList 取 1~31</li></ul>
                     * @return IntervalType <p>周期扫描的间隔类型。取值：</p><ul><li>DAY：每若干天，IntervalValueList 取间隔天数（如 ["1"] 表示每天）</li><li>WEEK：每周指定星期几，IntervalValueList 取 1~7（周一~周日）</li><li>MONTH：每月指定日期，IntervalValueList 取 1~31</li></ul>
                     * 
                     */
                    std::string GetIntervalType() const;

                    /**
                     * 设置<p>周期扫描的间隔类型。取值：</p><ul><li>DAY：每若干天，IntervalValueList 取间隔天数（如 ["1"] 表示每天）</li><li>WEEK：每周指定星期几，IntervalValueList 取 1~7（周一~周日）</li><li>MONTH：每月指定日期，IntervalValueList 取 1~31</li></ul>
                     * @param _intervalType <p>周期扫描的间隔类型。取值：</p><ul><li>DAY：每若干天，IntervalValueList 取间隔天数（如 ["1"] 表示每天）</li><li>WEEK：每周指定星期几，IntervalValueList 取 1~7（周一~周日）</li><li>MONTH：每月指定日期，IntervalValueList 取 1~31</li></ul>
                     * 
                     */
                    void SetIntervalType(const std::string& _intervalType);

                    /**
                     * 判断参数 IntervalType 是否已赋值
                     * @return IntervalType 是否已赋值
                     * 
                     */
                    bool IntervalTypeHasBeenSet() const;

                    /**
                     * 获取<p>周期取值列表，含义随 IntervalType 变化：</p><ul><li>IntervalType=DAY：每隔多少天，例如 ["1"] 表示每天</li><li>IntervalType=WEEK：每周的星期几，取值 1~7（周一 ~ 周日）</li><li>IntervalType=MONTH：每月的几号，取值 1~31</li></ul>
                     * @return IntervalValueList <p>周期取值列表，含义随 IntervalType 变化：</p><ul><li>IntervalType=DAY：每隔多少天，例如 ["1"] 表示每天</li><li>IntervalType=WEEK：每周的星期几，取值 1~7（周一 ~ 周日）</li><li>IntervalType=MONTH：每月的几号，取值 1~31</li></ul>
                     * 
                     */
                    std::vector<std::string> GetIntervalValueList() const;

                    /**
                     * 设置<p>周期取值列表，含义随 IntervalType 变化：</p><ul><li>IntervalType=DAY：每隔多少天，例如 ["1"] 表示每天</li><li>IntervalType=WEEK：每周的星期几，取值 1~7（周一 ~ 周日）</li><li>IntervalType=MONTH：每月的几号，取值 1~31</li></ul>
                     * @param _intervalValueList <p>周期取值列表，含义随 IntervalType 变化：</p><ul><li>IntervalType=DAY：每隔多少天，例如 ["1"] 表示每天</li><li>IntervalType=WEEK：每周的星期几，取值 1~7（周一 ~ 周日）</li><li>IntervalType=MONTH：每月的几号，取值 1~31</li></ul>
                     * 
                     */
                    void SetIntervalValueList(const std::vector<std::string>& _intervalValueList);

                    /**
                     * 判断参数 IntervalValueList 是否已赋值
                     * @return IntervalValueList 是否已赋值
                     * 
                     */
                    bool IntervalValueListHasBeenSet() const;

                    /**
                     * 获取<p>扫描时段起始时间，格式 HH:mm，例如 02:00。</p>
                     * @return ScanStart <p>扫描时段起始时间，格式 HH:mm，例如 02:00。</p>
                     * 
                     */
                    std::string GetScanStart() const;

                    /**
                     * 设置<p>扫描时段起始时间，格式 HH:mm，例如 02:00。</p>
                     * @param _scanStart <p>扫描时段起始时间，格式 HH:mm，例如 02:00。</p>
                     * 
                     */
                    void SetScanStart(const std::string& _scanStart);

                    /**
                     * 判断参数 ScanStart 是否已赋值
                     * @return ScanStart 是否已赋值
                     * 
                     */
                    bool ScanStartHasBeenSet() const;

                    /**
                     * 获取<p>扫描时段结束时间，格式 HH:mm，例如 06:00。</p>
                     * @return ScanEnd <p>扫描时段结束时间，格式 HH:mm，例如 06:00。</p>
                     * 
                     */
                    std::string GetScanEnd() const;

                    /**
                     * 设置<p>扫描时段结束时间，格式 HH:mm，例如 06:00。</p>
                     * @param _scanEnd <p>扫描时段结束时间，格式 HH:mm，例如 06:00。</p>
                     * 
                     */
                    void SetScanEnd(const std::string& _scanEnd);

                    /**
                     * 判断参数 ScanEnd 是否已赋值
                     * @return ScanEnd 是否已赋值
                     * 
                     */
                    bool ScanEndHasBeenSet() const;

                private:

                    /**
                     * <p>周期扫描开关。0 关闭，1 开启。</p>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>周期扫描的间隔类型。取值：</p><ul><li>DAY：每若干天，IntervalValueList 取间隔天数（如 ["1"] 表示每天）</li><li>WEEK：每周指定星期几，IntervalValueList 取 1~7（周一~周日）</li><li>MONTH：每月指定日期，IntervalValueList 取 1~31</li></ul>
                     */
                    std::string m_intervalType;
                    bool m_intervalTypeHasBeenSet;

                    /**
                     * <p>周期取值列表，含义随 IntervalType 变化：</p><ul><li>IntervalType=DAY：每隔多少天，例如 ["1"] 表示每天</li><li>IntervalType=WEEK：每周的星期几，取值 1~7（周一 ~ 周日）</li><li>IntervalType=MONTH：每月的几号，取值 1~31</li></ul>
                     */
                    std::vector<std::string> m_intervalValueList;
                    bool m_intervalValueListHasBeenSet;

                    /**
                     * <p>扫描时段起始时间，格式 HH:mm，例如 02:00。</p>
                     */
                    std::string m_scanStart;
                    bool m_scanStartHasBeenSet;

                    /**
                     * <p>扫描时段结束时间，格式 HH:mm，例如 06:00。</p>
                     */
                    std::string m_scanEnd;
                    bool m_scanEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CYCLESCANCONF_H_
