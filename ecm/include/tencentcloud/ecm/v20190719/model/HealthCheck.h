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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_HEALTHCHECK_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_HEALTHCHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 负载均衡健康检查
                */
                class HealthCheck : public AbstractModel
                {
                public:
                    HealthCheck();
                    ~HealthCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启健康检查：1（开启）、0（关闭）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthSwitch 是否开启健康检查：1（开启）、0（关闭）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置是否开启健康检查：1（开启）、0（关闭）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthSwitch 是否开启健康检查：1（开启）、0（关闭）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeOut 健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeOut() const;

                    /**
                     * 设置健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeOut 健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取健康检查探测间隔时间，默认值：5，可选值：5~300，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntervalTime 健康检查探测间隔时间，默认值：5，可选值：5~300，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置健康检查探测间隔时间，默认值：5，可选值：5~300，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intervalTime 健康检查探测间隔时间，默认值：5，可选值：5~300，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthNum 健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthNum 健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnHealthyNum 不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUnHealthyNum() const;

                    /**
                     * 设置不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unHealthyNum 不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnHealthyNum(const int64_t& _unHealthyNum);

                    /**
                     * 判断参数 UnHealthyNum 是否已赋值
                     * @return UnHealthyNum 是否已赋值
                     * 
                     */
                    bool UnHealthyNumHasBeenSet() const;

                    /**
                     * 获取自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckPort 自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCheckPort() const;

                    /**
                     * 设置自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkPort 自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckPort(const int64_t& _checkPort);

                    /**
                     * 判断参数 CheckPort 是否已赋值
                     * @return CheckPort 是否已赋值
                     * 
                     */
                    bool CheckPortHasBeenSet() const;

                    /**
                     * 获取自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查的输入格式，可取值：HEX或TEXT；取值为HEX时，SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContextType 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查的输入格式，可取值：HEX或TEXT；取值为HEX时，SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查的输入格式，可取值：HEX或TEXT；取值为HEX时，SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contextType 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查的输入格式，可取值：HEX或TEXT；取值为HEX时，SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContextType(const std::string& _contextType);

                    /**
                     * 判断参数 ContextType 是否已赋值
                     * @return ContextType 是否已赋值
                     * 
                     */
                    bool ContextTypeHasBeenSet() const;

                    /**
                     * 获取自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendContext 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendContext 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSendContext(const std::string& _sendContext);

                    /**
                     * 判断参数 SendContext 是否已赋值
                     * @return SendContext 是否已赋值
                     * 
                     */
                    bool SendContextHasBeenSet() const;

                    /**
                     * 获取自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecvContext 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recvContext 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecvContext(const std::string& _recvContext);

                    /**
                     * 判断参数 RecvContext 是否已赋值
                     * @return RecvContext 是否已赋值
                     * 
                     */
                    bool RecvContextHasBeenSet() const;

                    /**
                     * 获取自定义探测相关参数。健康检查使用的协议：TCP | CUSTOM（UDP监听器只支持CUSTOM；如果使用自定义健康检查功能，则必传）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckType 自定义探测相关参数。健康检查使用的协议：TCP | CUSTOM（UDP监听器只支持CUSTOM；如果使用自定义健康检查功能，则必传）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置自定义探测相关参数。健康检查使用的协议：TCP | CUSTOM（UDP监听器只支持CUSTOM；如果使用自定义健康检查功能，则必传）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkType 自定义探测相关参数。健康检查使用的协议：TCP | CUSTOM（UDP监听器只支持CUSTOM；如果使用自定义健康检查功能，则必传）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                private:

                    /**
                     * 是否开启健康检查：1（开启）、0（关闭）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * 健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * 健康检查探测间隔时间，默认值：5，可选值：5~300，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * 不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_unHealthyNum;
                    bool m_unHealthyNumHasBeenSet;

                    /**
                     * 自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_checkPort;
                    bool m_checkPortHasBeenSet;

                    /**
                     * 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查的输入格式，可取值：HEX或TEXT；取值为HEX时，SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                    /**
                     * 自定义探测相关参数。健康检查使用的协议：TCP | CUSTOM（UDP监听器只支持CUSTOM；如果使用自定义健康检查功能，则必传）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_HEALTHCHECK_H_
