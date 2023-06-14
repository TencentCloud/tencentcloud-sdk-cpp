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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_L4LISTENER_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_L4LISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 查询四层监听器时返回的四层监听器信息。
                */
                class L4Listener : public AbstractModel
                {
                public:
                    L4Listener();
                    ~L4Listener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监听器ID。
                     * @return ListenerId 监听器ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID。
                     * @param _listenerId 监听器ID。
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
                     * 获取用户自定义的监听器名称。
                     * @return ListenerName 用户自定义的监听器名称。
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置用户自定义的监听器名称。
                     * @param _listenerName 用户自定义的监听器名称。
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
                     * 获取负载均衡实例监听器协议类型，可选值tcp，udp。
                     * @return Protocol 负载均衡实例监听器协议类型，可选值tcp，udp。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置负载均衡实例监听器协议类型，可选值tcp，udp。
                     * @param _protocol 负载均衡实例监听器协议类型，可选值tcp，udp。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取负载均衡监听器的监听接口，可选值1~65535。
                     * @return LoadBalancerPort 负载均衡监听器的监听接口，可选值1~65535。
                     * 
                     */
                    int64_t GetLoadBalancerPort() const;

                    /**
                     * 设置负载均衡监听器的监听接口，可选值1~65535。
                     * @param _loadBalancerPort 负载均衡监听器的监听接口，可选值1~65535。
                     * 
                     */
                    void SetLoadBalancerPort(const int64_t& _loadBalancerPort);

                    /**
                     * 判断参数 LoadBalancerPort 是否已赋值
                     * @return LoadBalancerPort 是否已赋值
                     * 
                     */
                    bool LoadBalancerPortHasBeenSet() const;

                    /**
                     * 获取用于计费模式为固定带宽计费，指定监听器最大带宽值，可选值：0-1000，单位：Mbps。
                     * @return Bandwidth 用于计费模式为固定带宽计费，指定监听器最大带宽值，可选值：0-1000，单位：Mbps。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置用于计费模式为固定带宽计费，指定监听器最大带宽值，可选值：0-1000，单位：Mbps。
                     * @param _bandwidth 用于计费模式为固定带宽计费，指定监听器最大带宽值，可选值：0-1000，单位：Mbps。
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
                     * 获取监听器的类别：L4Listener（四层监听器），L7Listener（七层监听器）。
                     * @return ListenerType 监听器的类别：L4Listener（四层监听器），L7Listener（七层监听器）。
                     * 
                     */
                    std::string GetListenerType() const;

                    /**
                     * 设置监听器的类别：L4Listener（四层监听器），L7Listener（七层监听器）。
                     * @param _listenerType 监听器的类别：L4Listener（四层监听器），L7Listener（七层监听器）。
                     * 
                     */
                    void SetListenerType(const std::string& _listenerType);

                    /**
                     * 判断参数 ListenerType 是否已赋值
                     * @return ListenerType 是否已赋值
                     * 
                     */
                    bool ListenerTypeHasBeenSet() const;

                    /**
                     * 获取会话保持时间。单位：秒
                     * @return SessionExpire 会话保持时间。单位：秒
                     * 
                     */
                    int64_t GetSessionExpire() const;

                    /**
                     * 设置会话保持时间。单位：秒
                     * @param _sessionExpire 会话保持时间。单位：秒
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
                     * 获取是否开启了检查：1（开启）、0（关闭）。
                     * @return HealthSwitch 是否开启了检查：1（开启）、0（关闭）。
                     * 
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置是否开启了检查：1（开启）、0（关闭）。
                     * @param _healthSwitch 是否开启了检查：1（开启）、0（关闭）。
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
                     * 获取响应超时时间，单位：秒。
                     * @return TimeOut 响应超时时间，单位：秒。
                     * 
                     */
                    int64_t GetTimeOut() const;

                    /**
                     * 设置响应超时时间，单位：秒。
                     * @param _timeOut 响应超时时间，单位：秒。
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
                     * 获取检查间隔，单位：秒。
                     * @return IntervalTime 检查间隔，单位：秒。
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置检查间隔，单位：秒。
                     * @param _intervalTime 检查间隔，单位：秒。
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
                     * 获取负载均衡监听器健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
                     * @return HealthNum 负载均衡监听器健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置负载均衡监听器健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
                     * @param _healthNum 负载均衡监听器健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
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
                     * 获取负载均衡监听器不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发不正常，可选值：2-10，单位：次。
                     * @return UnhealthNum 负载均衡监听器不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发不正常，可选值：2-10，单位：次。
                     * 
                     */
                    int64_t GetUnhealthNum() const;

                    /**
                     * 设置负载均衡监听器不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发不正常，可选值：2-10，单位：次。
                     * @param _unhealthNum 负载均衡监听器不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发不正常，可选值：2-10，单位：次。
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
                     * 获取是否开启toa：1（开启）、0（关闭）。
                     * @return ToaFlag 是否开启toa：1（开启）、0（关闭）。
                     * 
                     */
                    int64_t GetToaFlag() const;

                    /**
                     * 设置是否开启toa：1（开启）、0（关闭）。
                     * @param _toaFlag 是否开启toa：1（开启）、0（关闭）。
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
                     * 获取监听器当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     * @return Status 监听器当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置监听器当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     * @param _status 监听器当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间戳。
                     * @return AddTimestamp 创建时间戳。
                     * 
                     */
                    std::string GetAddTimestamp() const;

                    /**
                     * 设置创建时间戳。
                     * @param _addTimestamp 创建时间戳。
                     * 
                     */
                    void SetAddTimestamp(const std::string& _addTimestamp);

                    /**
                     * 判断参数 AddTimestamp 是否已赋值
                     * @return AddTimestamp 是否已赋值
                     * 
                     */
                    bool AddTimestampHasBeenSet() const;

                    /**
                     * 获取转发后端服务器调度类型。
                     * @return BalanceMode 转发后端服务器调度类型。
                     * 
                     */
                    std::string GetBalanceMode() const;

                    /**
                     * 设置转发后端服务器调度类型。
                     * @param _balanceMode 转发后端服务器调度类型。
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
                     * 监听器ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 用户自定义的监听器名称。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 负载均衡实例监听器协议类型，可选值tcp，udp。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 负载均衡监听器的监听接口，可选值1~65535。
                     */
                    int64_t m_loadBalancerPort;
                    bool m_loadBalancerPortHasBeenSet;

                    /**
                     * 用于计费模式为固定带宽计费，指定监听器最大带宽值，可选值：0-1000，单位：Mbps。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 监听器的类别：L4Listener（四层监听器），L7Listener（七层监听器）。
                     */
                    std::string m_listenerType;
                    bool m_listenerTypeHasBeenSet;

                    /**
                     * 会话保持时间。单位：秒
                     */
                    int64_t m_sessionExpire;
                    bool m_sessionExpireHasBeenSet;

                    /**
                     * 是否开启了检查：1（开启）、0（关闭）。
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * 响应超时时间，单位：秒。
                     */
                    int64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * 检查间隔，单位：秒。
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 负载均衡监听器健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2-10，单位：次。
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * 负载均衡监听器不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发不正常，可选值：2-10，单位：次。
                     */
                    int64_t m_unhealthNum;
                    bool m_unhealthNumHasBeenSet;

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
                     * 是否开启toa：1（开启）、0（关闭）。
                     */
                    int64_t m_toaFlag;
                    bool m_toaFlagHasBeenSet;

                    /**
                     * 监听器当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间戳。
                     */
                    std::string m_addTimestamp;
                    bool m_addTimestampHasBeenSet;

                    /**
                     * 转发后端服务器调度类型。
                     */
                    std::string m_balanceMode;
                    bool m_balanceModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_L4LISTENER_H_
