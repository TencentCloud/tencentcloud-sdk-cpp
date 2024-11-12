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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_WARNINGINFOOBJ_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_WARNINGINFOOBJ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 告警设置列表
                */
                class WarningInfoObj : public AbstractModel
                {
                public:
                    WarningInfoObj();
                    ~WarningInfoObj() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件告警类型；1：离线，2：木马，3：异常登录，4：爆破，5：漏洞（已拆分为9-12四种类型）6：高危命令，7：反弹sell，8：本地提权，9：应用漏洞，10：web-cms漏洞，11：应急漏洞，12：安全基线 ,13: 防篡改，14：恶意请求，15: 网络攻击，16：Windows系统漏洞，17：Linux软件漏洞，18：核心文件监控告警，19：客户端卸载告警。20：客户端离线告警
                     * @return Type 事件告警类型；1：离线，2：木马，3：异常登录，4：爆破，5：漏洞（已拆分为9-12四种类型）6：高危命令，7：反弹sell，8：本地提权，9：应用漏洞，10：web-cms漏洞，11：应急漏洞，12：安全基线 ,13: 防篡改，14：恶意请求，15: 网络攻击，16：Windows系统漏洞，17：Linux软件漏洞，18：核心文件监控告警，19：客户端卸载告警。20：客户端离线告警
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置事件告警类型；1：离线，2：木马，3：异常登录，4：爆破，5：漏洞（已拆分为9-12四种类型）6：高危命令，7：反弹sell，8：本地提权，9：应用漏洞，10：web-cms漏洞，11：应急漏洞，12：安全基线 ,13: 防篡改，14：恶意请求，15: 网络攻击，16：Windows系统漏洞，17：Linux软件漏洞，18：核心文件监控告警，19：客户端卸载告警。20：客户端离线告警
                     * @param _type 事件告警类型；1：离线，2：木马，3：异常登录，4：爆破，5：漏洞（已拆分为9-12四种类型）6：高危命令，7：反弹sell，8：本地提权，9：应用漏洞，10：web-cms漏洞，11：应急漏洞，12：安全基线 ,13: 防篡改，14：恶意请求，15: 网络攻击，16：Windows系统漏洞，17：Linux软件漏洞，18：核心文件监控告警，19：客户端卸载告警。20：客户端离线告警
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取1: 关闭告警 0: 开启告警
                     * @return DisablePhoneWarning 1: 关闭告警 0: 开启告警
                     * 
                     */
                    uint64_t GetDisablePhoneWarning() const;

                    /**
                     * 设置1: 关闭告警 0: 开启告警
                     * @param _disablePhoneWarning 1: 关闭告警 0: 开启告警
                     * 
                     */
                    void SetDisablePhoneWarning(const uint64_t& _disablePhoneWarning);

                    /**
                     * 判断参数 DisablePhoneWarning 是否已赋值
                     * @return DisablePhoneWarning 是否已赋值
                     * 
                     */
                    bool DisablePhoneWarningHasBeenSet() const;

                    /**
                     * 获取开始时间，格式: HH:mm
                     * @return BeginTime 开始时间，格式: HH:mm
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置开始时间，格式: HH:mm
                     * @param _beginTime 开始时间，格式: HH:mm
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，格式: HH:mm
                     * @return EndTime 结束时间，格式: HH:mm
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，格式: HH:mm
                     * @param _endTime 结束时间，格式: HH:mm
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取时区信息
                     * @return TimeZone 时区信息
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置时区信息
                     * @param _timeZone 时区信息
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取漏洞等级控制位（对应DB的十进制存储）
                     * @return ControlBit 漏洞等级控制位（对应DB的十进制存储）
                     * 
                     */
                    uint64_t GetControlBit() const;

                    /**
                     * 设置漏洞等级控制位（对应DB的十进制存储）
                     * @param _controlBit 漏洞等级控制位（对应DB的十进制存储）
                     * 
                     */
                    void SetControlBit(const uint64_t& _controlBit);

                    /**
                     * 判断参数 ControlBit 是否已赋值
                     * @return ControlBit 是否已赋值
                     * 
                     */
                    bool ControlBitHasBeenSet() const;

                    /**
                     * 获取漏洞等级控制位二进制，每一位对应页面漏洞等级的开启关闭：低中高（0:关闭；1：开启），例如：101 → 同时勾选低+高
                     * @return ControlBits 漏洞等级控制位二进制，每一位对应页面漏洞等级的开启关闭：低中高（0:关闭；1：开启），例如：101 → 同时勾选低+高
                     * 
                     */
                    std::string GetControlBits() const;

                    /**
                     * 设置漏洞等级控制位二进制，每一位对应页面漏洞等级的开启关闭：低中高（0:关闭；1：开启），例如：101 → 同时勾选低+高
                     * @param _controlBits 漏洞等级控制位二进制，每一位对应页面漏洞等级的开启关闭：低中高（0:关闭；1：开启），例如：101 → 同时勾选低+高
                     * 
                     */
                    void SetControlBits(const std::string& _controlBits);

                    /**
                     * 判断参数 ControlBits 是否已赋值
                     * @return ControlBits 是否已赋值
                     * 
                     */
                    bool ControlBitsHasBeenSet() const;

                    /**
                     * 获取告警主机范围类型，0:全部主机，1:按所属项目选，2:按腾讯云标签选，3:按主机安全标签选，4:自选主机
                     * @return HostRange 告警主机范围类型，0:全部主机，1:按所属项目选，2:按腾讯云标签选，3:按主机安全标签选，4:自选主机
                     * 
                     */
                    int64_t GetHostRange() const;

                    /**
                     * 设置告警主机范围类型，0:全部主机，1:按所属项目选，2:按腾讯云标签选，3:按主机安全标签选，4:自选主机
                     * @param _hostRange 告警主机范围类型，0:全部主机，1:按所属项目选，2:按腾讯云标签选，3:按主机安全标签选，4:自选主机
                     * 
                     */
                    void SetHostRange(const int64_t& _hostRange);

                    /**
                     * 判断参数 HostRange 是否已赋值
                     * @return HostRange 是否已赋值
                     * 
                     */
                    bool HostRangeHasBeenSet() const;

                    /**
                     * 获取配置的告警范围主机个数，前端用此判断展示提示信息
                     * @return Count 配置的告警范围主机个数，前端用此判断展示提示信息
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置配置的告警范围主机个数，前端用此判断展示提示信息
                     * @param _count 配置的告警范围主机个数，前端用此判断展示提示信息
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 事件告警类型；1：离线，2：木马，3：异常登录，4：爆破，5：漏洞（已拆分为9-12四种类型）6：高危命令，7：反弹sell，8：本地提权，9：应用漏洞，10：web-cms漏洞，11：应急漏洞，12：安全基线 ,13: 防篡改，14：恶意请求，15: 网络攻击，16：Windows系统漏洞，17：Linux软件漏洞，18：核心文件监控告警，19：客户端卸载告警。20：客户端离线告警
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 1: 关闭告警 0: 开启告警
                     */
                    uint64_t m_disablePhoneWarning;
                    bool m_disablePhoneWarningHasBeenSet;

                    /**
                     * 开始时间，格式: HH:mm
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间，格式: HH:mm
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 时区信息
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * 漏洞等级控制位（对应DB的十进制存储）
                     */
                    uint64_t m_controlBit;
                    bool m_controlBitHasBeenSet;

                    /**
                     * 漏洞等级控制位二进制，每一位对应页面漏洞等级的开启关闭：低中高（0:关闭；1：开启），例如：101 → 同时勾选低+高
                     */
                    std::string m_controlBits;
                    bool m_controlBitsHasBeenSet;

                    /**
                     * 告警主机范围类型，0:全部主机，1:按所属项目选，2:按腾讯云标签选，3:按主机安全标签选，4:自选主机
                     */
                    int64_t m_hostRange;
                    bool m_hostRangeHasBeenSet;

                    /**
                     * 配置的告警范围主机个数，前端用此判断展示提示信息
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_WARNINGINFOOBJ_H_
