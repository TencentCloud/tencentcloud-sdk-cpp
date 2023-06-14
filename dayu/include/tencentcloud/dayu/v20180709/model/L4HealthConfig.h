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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_L4HEALTHCONFIG_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_L4HEALTHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 四层健康检查配置
                */
                class L4HealthConfig : public AbstractModel
                {
                public:
                    L4HealthConfig();
                    ~L4HealthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发协议，取值[TCP, UDP]
                     * @return Protocol 转发协议，取值[TCP, UDP]
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置转发协议，取值[TCP, UDP]
                     * @param _protocol 转发协议，取值[TCP, UDP]
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
                     * 获取转发端口
                     * @return VirtualPort 转发端口
                     * 
                     */
                    uint64_t GetVirtualPort() const;

                    /**
                     * 设置转发端口
                     * @param _virtualPort 转发端口
                     * 
                     */
                    void SetVirtualPort(const uint64_t& _virtualPort);

                    /**
                     * 判断参数 VirtualPort 是否已赋值
                     * @return VirtualPort 是否已赋值
                     * 
                     */
                    bool VirtualPortHasBeenSet() const;

                    /**
                     * 获取=1表示开启；=0表示关闭
                     * @return Enable =1表示开启；=0表示关闭
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置=1表示开启；=0表示关闭
                     * @param _enable =1表示开启；=0表示关闭
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
                     * 获取响应超时时间，单位秒
                     * @return TimeOut 响应超时时间，单位秒
                     * 
                     */
                    uint64_t GetTimeOut() const;

                    /**
                     * 设置响应超时时间，单位秒
                     * @param _timeOut 响应超时时间，单位秒
                     * 
                     */
                    void SetTimeOut(const uint64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     * 
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取检测间隔时间，单位秒
                     * @return Interval 检测间隔时间，单位秒
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置检测间隔时间，单位秒
                     * @param _interval 检测间隔时间，单位秒
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取不健康阈值，单位次
                     * @return KickNum 不健康阈值，单位次
                     * 
                     */
                    uint64_t GetKickNum() const;

                    /**
                     * 设置不健康阈值，单位次
                     * @param _kickNum 不健康阈值，单位次
                     * 
                     */
                    void SetKickNum(const uint64_t& _kickNum);

                    /**
                     * 判断参数 KickNum 是否已赋值
                     * @return KickNum 是否已赋值
                     * 
                     */
                    bool KickNumHasBeenSet() const;

                    /**
                     * 获取健康阈值，单位次
                     * @return AliveNum 健康阈值，单位次
                     * 
                     */
                    uint64_t GetAliveNum() const;

                    /**
                     * 设置健康阈值，单位次
                     * @param _aliveNum 健康阈值，单位次
                     * 
                     */
                    void SetAliveNum(const uint64_t& _aliveNum);

                    /**
                     * 判断参数 AliveNum 是否已赋值
                     * @return AliveNum 是否已赋值
                     * 
                     */
                    bool AliveNumHasBeenSet() const;

                    /**
                     * 获取会话保持时间，单位秒
                     * @return KeepTime 会话保持时间，单位秒
                     * 
                     */
                    uint64_t GetKeepTime() const;

                    /**
                     * 设置会话保持时间，单位秒
                     * @param _keepTime 会话保持时间，单位秒
                     * 
                     */
                    void SetKeepTime(const uint64_t& _keepTime);

                    /**
                     * 判断参数 KeepTime 是否已赋值
                     * @return KeepTime 是否已赋值
                     * 
                     */
                    bool KeepTimeHasBeenSet() const;

                private:

                    /**
                     * 转发协议，取值[TCP, UDP]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 转发端口
                     */
                    uint64_t m_virtualPort;
                    bool m_virtualPortHasBeenSet;

                    /**
                     * =1表示开启；=0表示关闭
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 响应超时时间，单位秒
                     */
                    uint64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * 检测间隔时间，单位秒
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 不健康阈值，单位次
                     */
                    uint64_t m_kickNum;
                    bool m_kickNumHasBeenSet;

                    /**
                     * 健康阈值，单位次
                     */
                    uint64_t m_aliveNum;
                    bool m_aliveNumHasBeenSet;

                    /**
                     * 会话保持时间，单位秒
                     */
                    uint64_t m_keepTime;
                    bool m_keepTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_L4HEALTHCONFIG_H_
