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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYL4LISTENERREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYL4LISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ModifyL4Listener请求参数结构体
                */
                class ModifyL4ListenerRequest : public AbstractModel
                {
                public:
                    ModifyL4ListenerRequest();
                    ~ModifyL4ListenerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * @return LoadBalancerId 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * @param _loadBalancerId 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取四层监听器ID。可通过接口DescribeL4Listeners查询。
                     * @return ListenerId 四层监听器ID。可通过接口DescribeL4Listeners查询。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置四层监听器ID。可通过接口DescribeL4Listeners查询。
                     * @param _listenerId 四层监听器ID。可通过接口DescribeL4Listeners查询。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取四层监听器名称。
                     * @return ListenerName 四层监听器名称。
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置四层监听器名称。
                     * @param _listenerName 四层监听器名称。
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取会话保持时间，单位：秒。可选值：900~3600。
                     * @return SessionExpire 会话保持时间，单位：秒。可选值：900~3600。
                     * 
                     */
                    int64_t GetSessionExpire() const;

                    /**
                     * 设置会话保持时间，单位：秒。可选值：900~3600。
                     * @param _sessionExpire 会话保持时间，单位：秒。可选值：900~3600。
                     * 
                     */
                    void SetSessionExpire(const int64_t& _sessionExpire);

                    /**
                     * 判断参数 SessionExpire 是否已赋值
                     * @return SessionExpire 是否已赋值
                     * 
                     */
                    bool SessionExpireHasBeenSet() const;

                    /**
                     * 获取是否开启健康检查：1（开启）、0（关闭）。默认值0，表示关闭。
                     * @return HealthSwitch 是否开启健康检查：1（开启）、0（关闭）。默认值0，表示关闭。
                     * 
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置是否开启健康检查：1（开启）、0（关闭）。默认值0，表示关闭。
                     * @param _healthSwitch 是否开启健康检查：1（开启）、0（关闭）。默认值0，表示关闭。
                     * 
                     */
                    void SetHealthSwitch(const int64_t& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     * 
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取健康检查的响应超时时间，可选值：2-60，默认值：2，单位:秒。<br><font color="red">响应超时时间要小于检查间隔时间。</font>
                     * @return TimeOut 健康检查的响应超时时间，可选值：2-60，默认值：2，单位:秒。<br><font color="red">响应超时时间要小于检查间隔时间。</font>
                     * 
                     */
                    int64_t GetTimeOut() const;

                    /**
                     * 设置健康检查的响应超时时间，可选值：2-60，默认值：2，单位:秒。<br><font color="red">响应超时时间要小于检查间隔时间。</font>
                     * @param _timeOut 健康检查的响应超时时间，可选值：2-60，默认值：2，单位:秒。<br><font color="red">响应超时时间要小于检查间隔时间。</font>
                     * 
                     */
                    void SetTimeOut(const int64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     * 
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取健康检查间隔，默认值：5，可选值：5-300，单位：秒。
                     * @return IntervalTime 健康检查间隔，默认值：5，可选值：5-300，单位：秒。
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置健康检查间隔，默认值：5，可选值：5-300，单位：秒。
                     * @param _intervalTime 健康检查间隔，默认值：5，可选值：5-300，单位：秒。
                     * 
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
                     * @return HealthNum 健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
                     * @param _healthNum 健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
                     * 
                     */
                    void SetHealthNum(const int64_t& _healthNum);

                    /**
                     * 判断参数 HealthNum 是否已赋值
                     * @return HealthNum 是否已赋值
                     * 
                     */
                    bool HealthNumHasBeenSet() const;

                    /**
                     * 获取不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发不正常，可选值：2-10，单位：次。
                     * @return UnhealthNum 不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发不正常，可选值：2-10，单位：次。
                     * 
                     */
                    int64_t GetUnhealthNum() const;

                    /**
                     * 设置不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发不正常，可选值：2-10，单位：次。
                     * @param _unhealthNum 不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发不正常，可选值：2-10，单位：次。
                     * 
                     */
                    void SetUnhealthNum(const int64_t& _unhealthNum);

                    /**
                     * 判断参数 UnhealthNum 是否已赋值
                     * @return UnhealthNum 是否已赋值
                     * 
                     */
                    bool UnhealthNumHasBeenSet() const;

                    /**
                     * 获取监听器最大带宽值，用于计费模式为固定带宽计费。可选值：0-1000，单位：Mbps。
                     * @return Bandwidth 监听器最大带宽值，用于计费模式为固定带宽计费。可选值：0-1000，单位：Mbps。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置监听器最大带宽值，用于计费模式为固定带宽计费。可选值：0-1000，单位：Mbps。
                     * @param _bandwidth 监听器最大带宽值，用于计费模式为固定带宽计费。可选值：0-1000，单位：Mbps。
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取是否开启自定义健康检查：1（开启）、0（关闭）。默认值0，表示关闭。（该字段在健康检查开启的情况下才生效）
                     * @return CustomHealthSwitch 是否开启自定义健康检查：1（开启）、0（关闭）。默认值0，表示关闭。（该字段在健康检查开启的情况下才生效）
                     * 
                     */
                    int64_t GetCustomHealthSwitch() const;

                    /**
                     * 设置是否开启自定义健康检查：1（开启）、0（关闭）。默认值0，表示关闭。（该字段在健康检查开启的情况下才生效）
                     * @param _customHealthSwitch 是否开启自定义健康检查：1（开启）、0（关闭）。默认值0，表示关闭。（该字段在健康检查开启的情况下才生效）
                     * 
                     */
                    void SetCustomHealthSwitch(const int64_t& _customHealthSwitch);

                    /**
                     * 判断参数 CustomHealthSwitch 是否已赋值
                     * @return CustomHealthSwitch 是否已赋值
                     * 
                     */
                    bool CustomHealthSwitchHasBeenSet() const;

                    /**
                     * 获取自定义健康探测内容类型，可选值：text（文本）、hexadecimal（十六进制）。
                     * @return InputType 自定义健康探测内容类型，可选值：text（文本）、hexadecimal（十六进制）。
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置自定义健康探测内容类型，可选值：text（文本）、hexadecimal（十六进制）。
                     * @param _inputType 自定义健康探测内容类型，可选值：text（文本）、hexadecimal（十六进制）。
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取探测内容类型为文本方式时，针对请求文本中换行替换方式。可选值：1（替换为LF）、2（替换为CR）、3（替换为LF+CR）。
                     * @return LineSeparatorType 探测内容类型为文本方式时，针对请求文本中换行替换方式。可选值：1（替换为LF）、2（替换为CR）、3（替换为LF+CR）。
                     * 
                     */
                    int64_t GetLineSeparatorType() const;

                    /**
                     * 设置探测内容类型为文本方式时，针对请求文本中换行替换方式。可选值：1（替换为LF）、2（替换为CR）、3（替换为LF+CR）。
                     * @param _lineSeparatorType 探测内容类型为文本方式时，针对请求文本中换行替换方式。可选值：1（替换为LF）、2（替换为CR）、3（替换为LF+CR）。
                     * 
                     */
                    void SetLineSeparatorType(const int64_t& _lineSeparatorType);

                    /**
                     * 判断参数 LineSeparatorType 是否已赋值
                     * @return LineSeparatorType 是否已赋值
                     * 
                     */
                    bool LineSeparatorTypeHasBeenSet() const;

                    /**
                     * 获取自定义探测请求内容。
                     * @return HealthRequest 自定义探测请求内容。
                     * 
                     */
                    std::string GetHealthRequest() const;

                    /**
                     * 设置自定义探测请求内容。
                     * @param _healthRequest 自定义探测请求内容。
                     * 
                     */
                    void SetHealthRequest(const std::string& _healthRequest);

                    /**
                     * 判断参数 HealthRequest 是否已赋值
                     * @return HealthRequest 是否已赋值
                     * 
                     */
                    bool HealthRequestHasBeenSet() const;

                    /**
                     * 获取自定义探测返回内容。
                     * @return HealthResponse 自定义探测返回内容。
                     * 
                     */
                    std::string GetHealthResponse() const;

                    /**
                     * 设置自定义探测返回内容。
                     * @param _healthResponse 自定义探测返回内容。
                     * 
                     */
                    void SetHealthResponse(const std::string& _healthResponse);

                    /**
                     * 判断参数 HealthResponse 是否已赋值
                     * @return HealthResponse 是否已赋值
                     * 
                     */
                    bool HealthResponseHasBeenSet() const;

                    /**
                     * 获取是否开启toa。可选值：0（关闭）、1（开启），默认关闭。（该字段在负载均衡为fullnat类型下才生效）
                     * @return ToaFlag 是否开启toa。可选值：0（关闭）、1（开启），默认关闭。（该字段在负载均衡为fullnat类型下才生效）
                     * 
                     */
                    int64_t GetToaFlag() const;

                    /**
                     * 设置是否开启toa。可选值：0（关闭）、1（开启），默认关闭。（该字段在负载均衡为fullnat类型下才生效）
                     * @param _toaFlag 是否开启toa。可选值：0（关闭）、1（开启），默认关闭。（该字段在负载均衡为fullnat类型下才生效）
                     * 
                     */
                    void SetToaFlag(const int64_t& _toaFlag);

                    /**
                     * 判断参数 ToaFlag 是否已赋值
                     * @return ToaFlag 是否已赋值
                     * 
                     */
                    bool ToaFlagHasBeenSet() const;

                    /**
                     * 获取四层调度方式。wrr，wlc。
                     * @return BalanceMode 四层调度方式。wrr，wlc。
                     * 
                     */
                    std::string GetBalanceMode() const;

                    /**
                     * 设置四层调度方式。wrr，wlc。
                     * @param _balanceMode 四层调度方式。wrr，wlc。
                     * 
                     */
                    void SetBalanceMode(const std::string& _balanceMode);

                    /**
                     * 判断参数 BalanceMode 是否已赋值
                     * @return BalanceMode 是否已赋值
                     * 
                     */
                    bool BalanceModeHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 四层监听器ID。可通过接口DescribeL4Listeners查询。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 四层监听器名称。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 会话保持时间，单位：秒。可选值：900~3600。
                     */
                    int64_t m_sessionExpire;
                    bool m_sessionExpireHasBeenSet;

                    /**
                     * 是否开启健康检查：1（开启）、0（关闭）。默认值0，表示关闭。
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * 健康检查的响应超时时间，可选值：2-60，默认值：2，单位:秒。<br><font color="red">响应超时时间要小于检查间隔时间。</font>
                     */
                    int64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * 健康检查间隔，默认值：5，可选值：5-300，单位：秒。
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * 不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发不正常，可选值：2-10，单位：次。
                     */
                    int64_t m_unhealthNum;
                    bool m_unhealthNumHasBeenSet;

                    /**
                     * 监听器最大带宽值，用于计费模式为固定带宽计费。可选值：0-1000，单位：Mbps。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 是否开启自定义健康检查：1（开启）、0（关闭）。默认值0，表示关闭。（该字段在健康检查开启的情况下才生效）
                     */
                    int64_t m_customHealthSwitch;
                    bool m_customHealthSwitchHasBeenSet;

                    /**
                     * 自定义健康探测内容类型，可选值：text（文本）、hexadecimal（十六进制）。
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 探测内容类型为文本方式时，针对请求文本中换行替换方式。可选值：1（替换为LF）、2（替换为CR）、3（替换为LF+CR）。
                     */
                    int64_t m_lineSeparatorType;
                    bool m_lineSeparatorTypeHasBeenSet;

                    /**
                     * 自定义探测请求内容。
                     */
                    std::string m_healthRequest;
                    bool m_healthRequestHasBeenSet;

                    /**
                     * 自定义探测返回内容。
                     */
                    std::string m_healthResponse;
                    bool m_healthResponseHasBeenSet;

                    /**
                     * 是否开启toa。可选值：0（关闭）、1（开启），默认关闭。（该字段在负载均衡为fullnat类型下才生效）
                     */
                    int64_t m_toaFlag;
                    bool m_toaFlagHasBeenSet;

                    /**
                     * 四层调度方式。wrr，wlc。
                     */
                    std::string m_balanceMode;
                    bool m_balanceModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYL4LISTENERREQUEST_H_
