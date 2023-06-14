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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_WARNINGRULE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_WARNINGRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 告警配置策略
                */
                class WarningRule : public AbstractModel
                {
                public:
                    WarningRule();
                    ~WarningRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警事件类型：
镜像仓库安全-木马：IMG_REG_VIRUS
镜像仓库安全-漏洞：IMG_REG_VUL
镜像仓库安全-敏感信息：IMG_REG_RISK
镜像安全-木马：IMG_VIRUS
镜像安全-漏洞：IMG_VUL
镜像安全-敏感信息：IMG_RISK
镜像安全-镜像拦截：IMG_INTERCEPT
运行时安全-容器逃逸：RUNTIME_ESCAPE
运行时安全-异常进程：RUNTIME_FILE
运行时安全-异常文件访问：RUNTIME_PROCESS
运行时安全-高危系统调用：RUNTIME_SYSCALL
运行时安全-反弹Shell：RUNTIME_REVERSE_SHELL
运行时安全-木马：RUNTIME_VIRUS
                     * @return Type 告警事件类型：
镜像仓库安全-木马：IMG_REG_VIRUS
镜像仓库安全-漏洞：IMG_REG_VUL
镜像仓库安全-敏感信息：IMG_REG_RISK
镜像安全-木马：IMG_VIRUS
镜像安全-漏洞：IMG_VUL
镜像安全-敏感信息：IMG_RISK
镜像安全-镜像拦截：IMG_INTERCEPT
运行时安全-容器逃逸：RUNTIME_ESCAPE
运行时安全-异常进程：RUNTIME_FILE
运行时安全-异常文件访问：RUNTIME_PROCESS
运行时安全-高危系统调用：RUNTIME_SYSCALL
运行时安全-反弹Shell：RUNTIME_REVERSE_SHELL
运行时安全-木马：RUNTIME_VIRUS
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置告警事件类型：
镜像仓库安全-木马：IMG_REG_VIRUS
镜像仓库安全-漏洞：IMG_REG_VUL
镜像仓库安全-敏感信息：IMG_REG_RISK
镜像安全-木马：IMG_VIRUS
镜像安全-漏洞：IMG_VUL
镜像安全-敏感信息：IMG_RISK
镜像安全-镜像拦截：IMG_INTERCEPT
运行时安全-容器逃逸：RUNTIME_ESCAPE
运行时安全-异常进程：RUNTIME_FILE
运行时安全-异常文件访问：RUNTIME_PROCESS
运行时安全-高危系统调用：RUNTIME_SYSCALL
运行时安全-反弹Shell：RUNTIME_REVERSE_SHELL
运行时安全-木马：RUNTIME_VIRUS
                     * @param _type 告警事件类型：
镜像仓库安全-木马：IMG_REG_VIRUS
镜像仓库安全-漏洞：IMG_REG_VUL
镜像仓库安全-敏感信息：IMG_REG_RISK
镜像安全-木马：IMG_VIRUS
镜像安全-漏洞：IMG_VUL
镜像安全-敏感信息：IMG_RISK
镜像安全-镜像拦截：IMG_INTERCEPT
运行时安全-容器逃逸：RUNTIME_ESCAPE
运行时安全-异常进程：RUNTIME_FILE
运行时安全-异常文件访问：RUNTIME_PROCESS
运行时安全-高危系统调用：RUNTIME_SYSCALL
运行时安全-反弹Shell：RUNTIME_REVERSE_SHELL
运行时安全-木马：RUNTIME_VIRUS
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
                     * 获取开关状态：
打开：ON
关闭：OFF
                     * @return Switch 开关状态：
打开：ON
关闭：OFF
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置开关状态：
打开：ON
关闭：OFF
                     * @param _switch 开关状态：
打开：ON
关闭：OFF
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取告警开始时间，格式: HH:mm
                     * @return BeginTime 告警开始时间，格式: HH:mm
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置告警开始时间，格式: HH:mm
                     * @param _beginTime 告警开始时间，格式: HH:mm
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
                     * 获取告警结束时间，格式: HH:mm
                     * @return EndTime 告警结束时间，格式: HH:mm
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置告警结束时间，格式: HH:mm
                     * @param _endTime 告警结束时间，格式: HH:mm
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
                     * 获取告警等级策略控制，二进制位每位代表一个含义，值以字符串类型传递
控制开关分为高、中、低，则二进制位分别为：第1位:低，第2位:中，第3位:高，0表示关闭、1表示打开。
如：高危和中危打开告警，低危关闭告警，则二进制值为：110
告警类型不区分等级控制，则传1。
                     * @return ControlBits 告警等级策略控制，二进制位每位代表一个含义，值以字符串类型传递
控制开关分为高、中、低，则二进制位分别为：第1位:低，第2位:中，第3位:高，0表示关闭、1表示打开。
如：高危和中危打开告警，低危关闭告警，则二进制值为：110
告警类型不区分等级控制，则传1。
                     * 
                     */
                    std::string GetControlBits() const;

                    /**
                     * 设置告警等级策略控制，二进制位每位代表一个含义，值以字符串类型传递
控制开关分为高、中、低，则二进制位分别为：第1位:低，第2位:中，第3位:高，0表示关闭、1表示打开。
如：高危和中危打开告警，低危关闭告警，则二进制值为：110
告警类型不区分等级控制，则传1。
                     * @param _controlBits 告警等级策略控制，二进制位每位代表一个含义，值以字符串类型传递
控制开关分为高、中、低，则二进制位分别为：第1位:低，第2位:中，第3位:高，0表示关闭、1表示打开。
如：高危和中危打开告警，低危关闭告警，则二进制值为：110
告警类型不区分等级控制，则传1。
                     * 
                     */
                    void SetControlBits(const std::string& _controlBits);

                    /**
                     * 判断参数 ControlBits 是否已赋值
                     * @return ControlBits 是否已赋值
                     * 
                     */
                    bool ControlBitsHasBeenSet() const;

                private:

                    /**
                     * 告警事件类型：
镜像仓库安全-木马：IMG_REG_VIRUS
镜像仓库安全-漏洞：IMG_REG_VUL
镜像仓库安全-敏感信息：IMG_REG_RISK
镜像安全-木马：IMG_VIRUS
镜像安全-漏洞：IMG_VUL
镜像安全-敏感信息：IMG_RISK
镜像安全-镜像拦截：IMG_INTERCEPT
运行时安全-容器逃逸：RUNTIME_ESCAPE
运行时安全-异常进程：RUNTIME_FILE
运行时安全-异常文件访问：RUNTIME_PROCESS
运行时安全-高危系统调用：RUNTIME_SYSCALL
运行时安全-反弹Shell：RUNTIME_REVERSE_SHELL
运行时安全-木马：RUNTIME_VIRUS
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 开关状态：
打开：ON
关闭：OFF
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 告警开始时间，格式: HH:mm
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 告警结束时间，格式: HH:mm
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 告警等级策略控制，二进制位每位代表一个含义，值以字符串类型传递
控制开关分为高、中、低，则二进制位分别为：第1位:低，第2位:中，第3位:高，0表示关闭、1表示打开。
如：高危和中危打开告警，低危关闭告警，则二进制值为：110
告警类型不区分等级控制，则传1。
                     */
                    std::string m_controlBits;
                    bool m_controlBitsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_WARNINGRULE_H_
