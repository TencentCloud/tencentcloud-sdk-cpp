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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_CREATECALLBACKREQUEST_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_CREATECALLBACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/npp/v20190823/model/RreCallerHandle.h>


namespace TencentCloud
{
    namespace Npp
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * CreateCallBack请求参数结构体
                */
                class CreateCallBackRequest : public AbstractModel
                {
                public:
                    CreateCallBackRequest();
                    ~CreateCallBackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务appid
                     * @return BizAppId 业务appid
                     * 
                     */
                    std::string GetBizAppId() const;

                    /**
                     * 设置业务appid
                     * @param _bizAppId 业务appid
                     * 
                     */
                    void SetBizAppId(const std::string& _bizAppId);

                    /**
                     * 判断参数 BizAppId 是否已赋值
                     * @return BizAppId 是否已赋值
                     * 
                     */
                    bool BizAppIdHasBeenSet() const;

                    /**
                     * 获取主叫号码(必须为 11 位手机号，号码前加 0086，如 008613631686024)
                     * @return Src 主叫号码(必须为 11 位手机号，号码前加 0086，如 008613631686024)
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置主叫号码(必须为 11 位手机号，号码前加 0086，如 008613631686024)
                     * @param _src 主叫号码(必须为 11 位手机号，号码前加 0086，如 008613631686024)
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取被叫号码(必须为 11 位手机或固话号码,号码前加 0086，如008613631686024，固话如：0086075586013388)
                     * @return Dst 被叫号码(必须为 11 位手机或固话号码,号码前加 0086，如008613631686024，固话如：0086075586013388)
                     * 
                     */
                    std::string GetDst() const;

                    /**
                     * 设置被叫号码(必须为 11 位手机或固话号码,号码前加 0086，如008613631686024，固话如：0086075586013388)
                     * @param _dst 被叫号码(必须为 11 位手机或固话号码,号码前加 0086，如008613631686024，固话如：0086075586013388)
                     * 
                     */
                    void SetDst(const std::string& _dst);

                    /**
                     * 判断参数 Dst 是否已赋值
                     * @return Dst 是否已赋值
                     * 
                     */
                    bool DstHasBeenSet() const;

                    /**
                     * 获取主叫显示系统分配的固话号码，如不填显示随机分配号码
                     * @return SrcDisplayNum 主叫显示系统分配的固话号码，如不填显示随机分配号码
                     * 
                     */
                    std::string GetSrcDisplayNum() const;

                    /**
                     * 设置主叫显示系统分配的固话号码，如不填显示随机分配号码
                     * @param _srcDisplayNum 主叫显示系统分配的固话号码，如不填显示随机分配号码
                     * 
                     */
                    void SetSrcDisplayNum(const std::string& _srcDisplayNum);

                    /**
                     * 判断参数 SrcDisplayNum 是否已赋值
                     * @return SrcDisplayNum 是否已赋值
                     * 
                     */
                    bool SrcDisplayNumHasBeenSet() const;

                    /**
                     * 获取被叫显示系统分配的固话号码，如不填显示随机分配号码
                     * @return DstDisplayNum 被叫显示系统分配的固话号码，如不填显示随机分配号码
                     * 
                     */
                    std::string GetDstDisplayNum() const;

                    /**
                     * 设置被叫显示系统分配的固话号码，如不填显示随机分配号码
                     * @param _dstDisplayNum 被叫显示系统分配的固话号码，如不填显示随机分配号码
                     * 
                     */
                    void SetDstDisplayNum(const std::string& _dstDisplayNum);

                    /**
                     * 判断参数 DstDisplayNum 是否已赋值
                     * @return DstDisplayNum 是否已赋值
                     * 
                     */
                    bool DstDisplayNumHasBeenSet() const;

                    /**
                     * 获取是否录音，0 表示不录音，1 表示录音。默认为不录音
                     * @return Record 是否录音，0 表示不录音，1 表示录音。默认为不录音
                     * 
                     */
                    std::string GetRecord() const;

                    /**
                     * 设置是否录音，0 表示不录音，1 表示录音。默认为不录音
                     * @param _record 是否录音，0 表示不录音，1 表示录音。默认为不录音
                     * 
                     */
                    void SetRecord(const std::string& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     * 
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取允许最大通话时间，不填默认为 30 分钟（单位：分钟）
                     * @return MaxAllowTime 允许最大通话时间，不填默认为 30 分钟（单位：分钟）
                     * 
                     */
                    std::string GetMaxAllowTime() const;

                    /**
                     * 设置允许最大通话时间，不填默认为 30 分钟（单位：分钟）
                     * @param _maxAllowTime 允许最大通话时间，不填默认为 30 分钟（单位：分钟）
                     * 
                     */
                    void SetMaxAllowTime(const std::string& _maxAllowTime);

                    /**
                     * 判断参数 MaxAllowTime 是否已赋值
                     * @return MaxAllowTime 是否已赋值
                     * 
                     */
                    bool MaxAllowTimeHasBeenSet() const;

                    /**
                     * 获取主叫发起呼叫状态：1 被叫发起呼叫状态：256 主叫响铃状态：2 被叫响铃状态：512 主叫接听状态：4 被叫接听状态：1024 主叫拒绝接听状态：8 被叫拒绝接听状态：2048 主叫正常挂机状态：16 被叫正常挂机状态：4096 主叫呼叫异常：32 被叫呼叫异常：8192
例如：当值为 0：表示所有状态不需要推送；当值为 4：表示只要推送主叫接听状态；当值为 16191：表示所有状态都需要推送(上面所有值和)
                     * @return StatusFlag 主叫发起呼叫状态：1 被叫发起呼叫状态：256 主叫响铃状态：2 被叫响铃状态：512 主叫接听状态：4 被叫接听状态：1024 主叫拒绝接听状态：8 被叫拒绝接听状态：2048 主叫正常挂机状态：16 被叫正常挂机状态：4096 主叫呼叫异常：32 被叫呼叫异常：8192
例如：当值为 0：表示所有状态不需要推送；当值为 4：表示只要推送主叫接听状态；当值为 16191：表示所有状态都需要推送(上面所有值和)
                     * 
                     */
                    std::string GetStatusFlag() const;

                    /**
                     * 设置主叫发起呼叫状态：1 被叫发起呼叫状态：256 主叫响铃状态：2 被叫响铃状态：512 主叫接听状态：4 被叫接听状态：1024 主叫拒绝接听状态：8 被叫拒绝接听状态：2048 主叫正常挂机状态：16 被叫正常挂机状态：4096 主叫呼叫异常：32 被叫呼叫异常：8192
例如：当值为 0：表示所有状态不需要推送；当值为 4：表示只要推送主叫接听状态；当值为 16191：表示所有状态都需要推送(上面所有值和)
                     * @param _statusFlag 主叫发起呼叫状态：1 被叫发起呼叫状态：256 主叫响铃状态：2 被叫响铃状态：512 主叫接听状态：4 被叫接听状态：1024 主叫拒绝接听状态：8 被叫拒绝接听状态：2048 主叫正常挂机状态：16 被叫正常挂机状态：4096 主叫呼叫异常：32 被叫呼叫异常：8192
例如：当值为 0：表示所有状态不需要推送；当值为 4：表示只要推送主叫接听状态；当值为 16191：表示所有状态都需要推送(上面所有值和)
                     * 
                     */
                    void SetStatusFlag(const std::string& _statusFlag);

                    /**
                     * 判断参数 StatusFlag 是否已赋值
                     * @return StatusFlag 是否已赋值
                     * 
                     */
                    bool StatusFlagHasBeenSet() const;

                    /**
                     * 获取状态回调通知地址，正式环境可以配置默认推送地址
                     * @return StatusUrl 状态回调通知地址，正式环境可以配置默认推送地址
                     * 
                     */
                    std::string GetStatusUrl() const;

                    /**
                     * 设置状态回调通知地址，正式环境可以配置默认推送地址
                     * @param _statusUrl 状态回调通知地址，正式环境可以配置默认推送地址
                     * 
                     */
                    void SetStatusUrl(const std::string& _statusUrl);

                    /**
                     * 判断参数 StatusUrl 是否已赋值
                     * @return StatusUrl 是否已赋值
                     * 
                     */
                    bool StatusUrlHasBeenSet() const;

                    /**
                     * 获取话单回调通知地址，正式环境可以配置默认推送地址
                     * @return HangupUrl 话单回调通知地址，正式环境可以配置默认推送地址
                     * 
                     */
                    std::string GetHangupUrl() const;

                    /**
                     * 设置话单回调通知地址，正式环境可以配置默认推送地址
                     * @param _hangupUrl 话单回调通知地址，正式环境可以配置默认推送地址
                     * 
                     */
                    void SetHangupUrl(const std::string& _hangupUrl);

                    /**
                     * 判断参数 HangupUrl 是否已赋值
                     * @return HangupUrl 是否已赋值
                     * 
                     */
                    bool HangupUrlHasBeenSet() const;

                    /**
                     * 获取录单 URL 回调通知地址，正式环境可以配置默认推送地址
                     * @return RecordUrl 录单 URL 回调通知地址，正式环境可以配置默认推送地址
                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置录单 URL 回调通知地址，正式环境可以配置默认推送地址
                     * @param _recordUrl 录单 URL 回调通知地址，正式环境可以配置默认推送地址
                     * 
                     */
                    void SetRecordUrl(const std::string& _recordUrl);

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     * 
                     */
                    bool RecordUrlHasBeenSet() const;

                    /**
                     * 获取业务应用 key，业务用该 key 可以区分内部业务或客户产品等，该 key 需保证在该 appId 下全局唯一，最大长度不超过 64 个字节，bizId 只能包含数字、字母。
                     * @return BizId 业务应用 key，业务用该 key 可以区分内部业务或客户产品等，该 key 需保证在该 appId 下全局唯一，最大长度不超过 64 个字节，bizId 只能包含数字、字母。
                     * 
                     */
                    std::string GetBizId() const;

                    /**
                     * 设置业务应用 key，业务用该 key 可以区分内部业务或客户产品等，该 key 需保证在该 appId 下全局唯一，最大长度不超过 64 个字节，bizId 只能包含数字、字母。
                     * @param _bizId 业务应用 key，业务用该 key 可以区分内部业务或客户产品等，该 key 需保证在该 appId 下全局唯一，最大长度不超过 64 个字节，bizId 只能包含数字、字母。
                     * 
                     */
                    void SetBizId(const std::string& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取最后一次呼叫 callId，带上该字段以后，平台会参考该 callId 分配线路，优先不分配该 callId 通话线路（注：谨慎使用，这个会影响线路调度）
                     * @return LastCallId 最后一次呼叫 callId，带上该字段以后，平台会参考该 callId 分配线路，优先不分配该 callId 通话线路（注：谨慎使用，这个会影响线路调度）
                     * 
                     */
                    std::string GetLastCallId() const;

                    /**
                     * 设置最后一次呼叫 callId，带上该字段以后，平台会参考该 callId 分配线路，优先不分配该 callId 通话线路（注：谨慎使用，这个会影响线路调度）
                     * @param _lastCallId 最后一次呼叫 callId，带上该字段以后，平台会参考该 callId 分配线路，优先不分配该 callId 通话线路（注：谨慎使用，这个会影响线路调度）
                     * 
                     */
                    void SetLastCallId(const std::string& _lastCallId);

                    /**
                     * 判断参数 LastCallId 是否已赋值
                     * @return LastCallId 是否已赋值
                     * 
                     */
                    bool LastCallIdHasBeenSet() const;

                    /**
                     * 获取结构体，主叫呼叫预处理操作，根据不同操作确认是否呼通被叫。如需使用，本结构体需要与 keyList 结构体配合使用，此时这两个参数都为必填项
                     * @return PreCallerHandle 结构体，主叫呼叫预处理操作，根据不同操作确认是否呼通被叫。如需使用，本结构体需要与 keyList 结构体配合使用，此时这两个参数都为必填项
                     * 
                     */
                    RreCallerHandle GetPreCallerHandle() const;

                    /**
                     * 设置结构体，主叫呼叫预处理操作，根据不同操作确认是否呼通被叫。如需使用，本结构体需要与 keyList 结构体配合使用，此时这两个参数都为必填项
                     * @param _preCallerHandle 结构体，主叫呼叫预处理操作，根据不同操作确认是否呼通被叫。如需使用，本结构体需要与 keyList 结构体配合使用，此时这两个参数都为必填项
                     * 
                     */
                    void SetPreCallerHandle(const RreCallerHandle& _preCallerHandle);

                    /**
                     * 判断参数 PreCallerHandle 是否已赋值
                     * @return PreCallerHandle 是否已赋值
                     * 
                     */
                    bool PreCallerHandleHasBeenSet() const;

                    /**
                     * 获取订单 ID，最大长度不超过64个字节，对于一些有订单状态 App 相关应用使用（如达人帮接入 App 应用)，该字段只在帐单中带上，其它回调不附带该字段
                     * @return OrderId 订单 ID，最大长度不超过64个字节，对于一些有订单状态 App 相关应用使用（如达人帮接入 App 应用)，该字段只在帐单中带上，其它回调不附带该字段
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单 ID，最大长度不超过64个字节，对于一些有订单状态 App 相关应用使用（如达人帮接入 App 应用)，该字段只在帐单中带上，其它回调不附带该字段
                     * @param _orderId 订单 ID，最大长度不超过64个字节，对于一些有订单状态 App 相关应用使用（如达人帮接入 App 应用)，该字段只在帐单中带上，其它回调不附带该字段
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                private:

                    /**
                     * 业务appid
                     */
                    std::string m_bizAppId;
                    bool m_bizAppIdHasBeenSet;

                    /**
                     * 主叫号码(必须为 11 位手机号，号码前加 0086，如 008613631686024)
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 被叫号码(必须为 11 位手机或固话号码,号码前加 0086，如008613631686024，固话如：0086075586013388)
                     */
                    std::string m_dst;
                    bool m_dstHasBeenSet;

                    /**
                     * 主叫显示系统分配的固话号码，如不填显示随机分配号码
                     */
                    std::string m_srcDisplayNum;
                    bool m_srcDisplayNumHasBeenSet;

                    /**
                     * 被叫显示系统分配的固话号码，如不填显示随机分配号码
                     */
                    std::string m_dstDisplayNum;
                    bool m_dstDisplayNumHasBeenSet;

                    /**
                     * 是否录音，0 表示不录音，1 表示录音。默认为不录音
                     */
                    std::string m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * 允许最大通话时间，不填默认为 30 分钟（单位：分钟）
                     */
                    std::string m_maxAllowTime;
                    bool m_maxAllowTimeHasBeenSet;

                    /**
                     * 主叫发起呼叫状态：1 被叫发起呼叫状态：256 主叫响铃状态：2 被叫响铃状态：512 主叫接听状态：4 被叫接听状态：1024 主叫拒绝接听状态：8 被叫拒绝接听状态：2048 主叫正常挂机状态：16 被叫正常挂机状态：4096 主叫呼叫异常：32 被叫呼叫异常：8192
例如：当值为 0：表示所有状态不需要推送；当值为 4：表示只要推送主叫接听状态；当值为 16191：表示所有状态都需要推送(上面所有值和)
                     */
                    std::string m_statusFlag;
                    bool m_statusFlagHasBeenSet;

                    /**
                     * 状态回调通知地址，正式环境可以配置默认推送地址
                     */
                    std::string m_statusUrl;
                    bool m_statusUrlHasBeenSet;

                    /**
                     * 话单回调通知地址，正式环境可以配置默认推送地址
                     */
                    std::string m_hangupUrl;
                    bool m_hangupUrlHasBeenSet;

                    /**
                     * 录单 URL 回调通知地址，正式环境可以配置默认推送地址
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                    /**
                     * 业务应用 key，业务用该 key 可以区分内部业务或客户产品等，该 key 需保证在该 appId 下全局唯一，最大长度不超过 64 个字节，bizId 只能包含数字、字母。
                     */
                    std::string m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 最后一次呼叫 callId，带上该字段以后，平台会参考该 callId 分配线路，优先不分配该 callId 通话线路（注：谨慎使用，这个会影响线路调度）
                     */
                    std::string m_lastCallId;
                    bool m_lastCallIdHasBeenSet;

                    /**
                     * 结构体，主叫呼叫预处理操作，根据不同操作确认是否呼通被叫。如需使用，本结构体需要与 keyList 结构体配合使用，此时这两个参数都为必填项
                     */
                    RreCallerHandle m_preCallerHandle;
                    bool m_preCallerHandleHasBeenSet;

                    /**
                     * 订单 ID，最大长度不超过64个字节，对于一些有订单状态 App 相关应用使用（如达人帮接入 App 应用)，该字段只在帐单中带上，其它回调不附带该字段
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_CREATECALLBACKREQUEST_H_
