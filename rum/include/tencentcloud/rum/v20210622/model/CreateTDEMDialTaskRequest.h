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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMDIALTASKREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMDIALTASKREQUEST_H_

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
                * CreateTDEMDialTask请求参数结构体
                */
                class CreateTDEMDialTaskRequest : public AbstractModel
                {
                public:
                    CreateTDEMDialTaskRequest();
                    ~CreateTDEMDialTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名称，最长 128 个字符</p>
                     * @return TaskName <p>任务名称，最长 128 个字符</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称，最长 128 个字符</p>
                     * @param _taskName <p>任务名称，最长 128 个字符</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>探测类型。取值说明：icmp、tcp。</p>
                     * @return Type <p>探测类型。取值说明：icmp、tcp。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>探测类型。取值说明：icmp、tcp。</p>
                     * @param _type <p>探测类型。取值说明：icmp、tcp。</p>
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
                     * 获取<p>执行时机。取值说明：realtime、after_request、after_error、after_slow、after_dns_slow。tcp 不能使用 after_dns_slow。</p>
                     * @return ExecutionTime <p>执行时机。取值说明：realtime、after_request、after_error、after_slow、after_dns_slow。tcp 不能使用 after_dns_slow。</p>
                     * 
                     */
                    std::string GetExecutionTime() const;

                    /**
                     * 设置<p>执行时机。取值说明：realtime、after_request、after_error、after_slow、after_dns_slow。tcp 不能使用 after_dns_slow。</p>
                     * @param _executionTime <p>执行时机。取值说明：realtime、after_request、after_error、after_slow、after_dns_slow。tcp 不能使用 after_dns_slow。</p>
                     * 
                     */
                    void SetExecutionTime(const std::string& _executionTime);

                    /**
                     * 判断参数 ExecutionTime 是否已赋值
                     * @return ExecutionTime 是否已赋值
                     * 
                     */
                    bool ExecutionTimeHasBeenSet() const;

                    /**
                     * 获取<p>单次探测超时，单位毫秒。范围 1000 到 20000。</p>
                     * @return TimeoutMs <p>单次探测超时，单位毫秒。范围 1000 到 20000。</p>
                     * 
                     */
                    int64_t GetTimeoutMs() const;

                    /**
                     * 设置<p>单次探测超时，单位毫秒。范围 1000 到 20000。</p>
                     * @param _timeoutMs <p>单次探测超时，单位毫秒。范围 1000 到 20000。</p>
                     * 
                     */
                    void SetTimeoutMs(const int64_t& _timeoutMs);

                    /**
                     * 判断参数 TimeoutMs 是否已赋值
                     * @return TimeoutMs 是否已赋值
                     * 
                     */
                    bool TimeoutMsHasBeenSet() const;

                    /**
                     * 获取<p>探测周期，单位毫秒，必须大于 0。</p>
                     * @return PeriodMs <p>探测周期，单位毫秒，必须大于 0。</p>
                     * 
                     */
                    int64_t GetPeriodMs() const;

                    /**
                     * 设置<p>探测周期，单位毫秒，必须大于 0。</p>
                     * @param _periodMs <p>探测周期，单位毫秒，必须大于 0。</p>
                     * 
                     */
                    void SetPeriodMs(const int64_t& _periodMs);

                    /**
                     * 判断参数 PeriodMs 是否已赋值
                     * @return PeriodMs 是否已赋值
                     * 
                     */
                    bool PeriodMsHasBeenSet() const;

                    /**
                     * 获取<p>发包次数。范围 3 到 40。</p>
                     * @return PackageCount <p>发包次数。范围 3 到 40。</p>
                     * 
                     */
                    int64_t GetPackageCount() const;

                    /**
                     * 设置<p>发包次数。范围 3 到 40。</p>
                     * @param _packageCount <p>发包次数。范围 3 到 40。</p>
                     * 
                     */
                    void SetPackageCount(const int64_t& _packageCount);

                    /**
                     * 判断参数 PackageCount 是否已赋值
                     * @return PackageCount 是否已赋值
                     * 
                     */
                    bool PackageCountHasBeenSet() const;

                    /**
                     * 获取<p>任务状态。取值说明：active、paused。不传时默认为 active。</p>
                     * @return Status <p>任务状态。取值说明：active、paused。不传时默认为 active。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态。取值说明：active、paused。不传时默认为 active。</p>
                     * @param _status <p>任务状态。取值说明：active、paused。不传时默认为 active。</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>监听域名。ExecutionTime 不是 realtime 时必填。</p>
                     * @return WatchDomain <p>监听域名。ExecutionTime 不是 realtime 时必填。</p>
                     * 
                     */
                    std::string GetWatchDomain() const;

                    /**
                     * 设置<p>监听域名。ExecutionTime 不是 realtime 时必填。</p>
                     * @param _watchDomain <p>监听域名。ExecutionTime 不是 realtime 时必填。</p>
                     * 
                     */
                    void SetWatchDomain(const std::string& _watchDomain);

                    /**
                     * 判断参数 WatchDomain 是否已赋值
                     * @return WatchDomain 是否已赋值
                     * 
                     */
                    bool WatchDomainHasBeenSet() const;

                    /**
                     * 获取<p>拨测目标。域名、IP 或 ldns。after_dns_slow 固定为 ldns，其它时机必填。</p>
                     * @return DialDomain <p>拨测目标。域名、IP 或 ldns。after_dns_slow 固定为 ldns，其它时机必填。</p>
                     * 
                     */
                    std::string GetDialDomain() const;

                    /**
                     * 设置<p>拨测目标。域名、IP 或 ldns。after_dns_slow 固定为 ldns，其它时机必填。</p>
                     * @param _dialDomain <p>拨测目标。域名、IP 或 ldns。after_dns_slow 固定为 ldns，其它时机必填。</p>
                     * 
                     */
                    void SetDialDomain(const std::string& _dialDomain);

                    /**
                     * 判断参数 DialDomain 是否已赋值
                     * @return DialDomain 是否已赋值
                     * 
                     */
                    bool DialDomainHasBeenSet() const;

                    /**
                     * 获取<p>TCP 端口，1 到 65535。Type 为 tcp 时必填。</p>
                     * @return Port <p>TCP 端口，1 到 65535。Type 为 tcp 时必填。</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>TCP 端口，1 到 65535。Type 为 tcp 时必填。</p>
                     * @param _port <p>TCP 端口，1 到 65535。Type 为 tcp 时必填。</p>
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>实时拨测间隔，单位毫秒。ExecutionTime 为 realtime 时必填。取值说明：60000、300000、600000、900000、1800000、3600000。</p>
                     * @return FrequencyMs <p>实时拨测间隔，单位毫秒。ExecutionTime 为 realtime 时必填。取值说明：60000、300000、600000、900000、1800000、3600000。</p>
                     * 
                     */
                    int64_t GetFrequencyMs() const;

                    /**
                     * 设置<p>实时拨测间隔，单位毫秒。ExecutionTime 为 realtime 时必填。取值说明：60000、300000、600000、900000、1800000、3600000。</p>
                     * @param _frequencyMs <p>实时拨测间隔，单位毫秒。ExecutionTime 为 realtime 时必填。取值说明：60000、300000、600000、900000、1800000、3600000。</p>
                     * 
                     */
                    void SetFrequencyMs(const int64_t& _frequencyMs);

                    /**
                     * 判断参数 FrequencyMs 是否已赋值
                     * @return FrequencyMs 是否已赋值
                     * 
                     */
                    bool FrequencyMsHasBeenSet() const;

                    /**
                     * 获取<p>ICMP 包大小，单位字节。范围 32 到 1024。不传时默认 64。</p>
                     * @return PackageSize <p>ICMP 包大小，单位字节。范围 32 到 1024。不传时默认 64。</p>
                     * 
                     */
                    int64_t GetPackageSize() const;

                    /**
                     * 设置<p>ICMP 包大小，单位字节。范围 32 到 1024。不传时默认 64。</p>
                     * @param _packageSize <p>ICMP 包大小，单位字节。范围 32 到 1024。不传时默认 64。</p>
                     * 
                     */
                    void SetPackageSize(const int64_t& _packageSize);

                    /**
                     * 判断参数 PackageSize 是否已赋值
                     * @return PackageSize 是否已赋值
                     * 
                     */
                    bool PackageSizeHasBeenSet() const;

                    /**
                     * 获取<p>是否做路由追踪。取值说明：0 否，1 是。不传时为 0。</p>
                     * @return NeedMTR <p>是否做路由追踪。取值说明：0 否，1 是。不传时为 0。</p>
                     * 
                     */
                    int64_t GetNeedMTR() const;

                    /**
                     * 设置<p>是否做路由追踪。取值说明：0 否，1 是。不传时为 0。</p>
                     * @param _needMTR <p>是否做路由追踪。取值说明：0 否，1 是。不传时为 0。</p>
                     * 
                     */
                    void SetNeedMTR(const int64_t& _needMTR);

                    /**
                     * 判断参数 NeedMTR 是否已赋值
                     * @return NeedMTR 是否已赋值
                     * 
                     */
                    bool NeedMTRHasBeenSet() const;

                    /**
                     * 获取<p>路由追踪超时，单位毫秒。NeedMTR 为 1 时必填。</p>
                     * @return MTRTimeoutMs <p>路由追踪超时，单位毫秒。NeedMTR 为 1 时必填。</p>
                     * 
                     */
                    int64_t GetMTRTimeoutMs() const;

                    /**
                     * 设置<p>路由追踪超时，单位毫秒。NeedMTR 为 1 时必填。</p>
                     * @param _mTRTimeoutMs <p>路由追踪超时，单位毫秒。NeedMTR 为 1 时必填。</p>
                     * 
                     */
                    void SetMTRTimeoutMs(const int64_t& _mTRTimeoutMs);

                    /**
                     * 判断参数 MTRTimeoutMs 是否已赋值
                     * @return MTRTimeoutMs 是否已赋值
                     * 
                     */
                    bool MTRTimeoutMsHasBeenSet() const;

                    /**
                     * 获取<p>路由追踪最大跳数。NeedMTR 为 1 时填写。</p>
                     * @return MTRMaxHop <p>路由追踪最大跳数。NeedMTR 为 1 时填写。</p>
                     * 
                     */
                    int64_t GetMTRMaxHop() const;

                    /**
                     * 设置<p>路由追踪最大跳数。NeedMTR 为 1 时填写。</p>
                     * @param _mTRMaxHop <p>路由追踪最大跳数。NeedMTR 为 1 时填写。</p>
                     * 
                     */
                    void SetMTRMaxHop(const int64_t& _mTRMaxHop);

                    /**
                     * 判断参数 MTRMaxHop 是否已赋值
                     * @return MTRMaxHop 是否已赋值
                     * 
                     */
                    bool MTRMaxHopHasBeenSet() const;

                    /**
                     * 获取<p>每一跳发包次数。范围 3 到 40。</p>
                     * @return MTRPingCount <p>每一跳发包次数。范围 3 到 40。</p>
                     * 
                     */
                    int64_t GetMTRPingCount() const;

                    /**
                     * 设置<p>每一跳发包次数。范围 3 到 40。</p>
                     * @param _mTRPingCount <p>每一跳发包次数。范围 3 到 40。</p>
                     * 
                     */
                    void SetMTRPingCount(const int64_t& _mTRPingCount);

                    /**
                     * 判断参数 MTRPingCount 是否已赋值
                     * @return MTRPingCount 是否已赋值
                     * 
                     */
                    bool MTRPingCountHasBeenSet() const;

                    /**
                     * 获取<p>慢请求阈值，单位毫秒。after_slow、after_dns_slow 不传时默认 2000。</p>
                     * @return SlowThresholdMs <p>慢请求阈值，单位毫秒。after_slow、after_dns_slow 不传时默认 2000。</p>
                     * 
                     */
                    int64_t GetSlowThresholdMs() const;

                    /**
                     * 设置<p>慢请求阈值，单位毫秒。after_slow、after_dns_slow 不传时默认 2000。</p>
                     * @param _slowThresholdMs <p>慢请求阈值，单位毫秒。after_slow、after_dns_slow 不传时默认 2000。</p>
                     * 
                     */
                    void SetSlowThresholdMs(const int64_t& _slowThresholdMs);

                    /**
                     * 判断参数 SlowThresholdMs 是否已赋值
                     * @return SlowThresholdMs 是否已赋值
                     * 
                     */
                    bool SlowThresholdMsHasBeenSet() const;

                    /**
                     * 获取<p>错误类型过滤。after_error 时使用。</p>
                     * @return ErrorType <p>错误类型过滤。after_error 时使用。</p>
                     * 
                     */
                    std::string GetErrorType() const;

                    /**
                     * 设置<p>错误类型过滤。after_error 时使用。</p>
                     * @param _errorType <p>错误类型过滤。after_error 时使用。</p>
                     * 
                     */
                    void SetErrorType(const std::string& _errorType);

                    /**
                     * 判断参数 ErrorType 是否已赋值
                     * @return ErrorType 是否已赋值
                     * 
                     */
                    bool ErrorTypeHasBeenSet() const;

                    /**
                     * 获取<p>允许启动的客户端地区，逗号分隔，名称必须与分析页客户端地区完全一致。不传或空字符串表示不限制。</p>
                     * @return Regions <p>允许启动的客户端地区，逗号分隔，名称必须与分析页客户端地区完全一致。不传或空字符串表示不限制。</p>
                     * 
                     */
                    std::string GetRegions() const;

                    /**
                     * 设置<p>允许启动的客户端地区，逗号分隔，名称必须与分析页客户端地区完全一致。不传或空字符串表示不限制。</p>
                     * @param _regions <p>允许启动的客户端地区，逗号分隔，名称必须与分析页客户端地区完全一致。不传或空字符串表示不限制。</p>
                     * 
                     */
                    void SetRegions(const std::string& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取<p>允许启动的客户端运营商，逗号分隔，名称必须与分析页客户端运营商完全一致。不传或空字符串表示不限制。</p>
                     * @return Operators <p>允许启动的客户端运营商，逗号分隔，名称必须与分析页客户端运营商完全一致。不传或空字符串表示不限制。</p>
                     * 
                     */
                    std::string GetOperators() const;

                    /**
                     * 设置<p>允许启动的客户端运营商，逗号分隔，名称必须与分析页客户端运营商完全一致。不传或空字符串表示不限制。</p>
                     * @param _operators <p>允许启动的客户端运营商，逗号分隔，名称必须与分析页客户端运营商完全一致。不传或空字符串表示不限制。</p>
                     * 
                     */
                    void SetOperators(const std::string& _operators);

                    /**
                     * 判断参数 Operators 是否已赋值
                     * @return Operators 是否已赋值
                     * 
                     */
                    bool OperatorsHasBeenSet() const;

                    /**
                     * 获取<p>允许启动的用户 ID，逗号分隔。不传或空字符串表示不限制。</p>
                     * @return UserIds <p>允许启动的用户 ID，逗号分隔。不传或空字符串表示不限制。</p>
                     * 
                     */
                    std::string GetUserIds() const;

                    /**
                     * 设置<p>允许启动的用户 ID，逗号分隔。不传或空字符串表示不限制。</p>
                     * @param _userIds <p>允许启动的用户 ID，逗号分隔。不传或空字符串表示不限制。</p>
                     * 
                     */
                    void SetUserIds(const std::string& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取<p>允许启动的设备 ID，逗号分隔。不传或空字符串表示不限制。</p>
                     * @return DeviceIds <p>允许启动的设备 ID，逗号分隔。不传或空字符串表示不限制。</p>
                     * 
                     */
                    std::string GetDeviceIds() const;

                    /**
                     * 设置<p>允许启动的设备 ID，逗号分隔。不传或空字符串表示不限制。</p>
                     * @param _deviceIds <p>允许启动的设备 ID，逗号分隔。不传或空字符串表示不限制。</p>
                     * 
                     */
                    void SetDeviceIds(const std::string& _deviceIds);

                    /**
                     * 判断参数 DeviceIds 是否已赋值
                     * @return DeviceIds 是否已赋值
                     * 
                     */
                    bool DeviceIdsHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>任务名称，最长 128 个字符</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>探测类型。取值说明：icmp、tcp。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>执行时机。取值说明：realtime、after_request、after_error、after_slow、after_dns_slow。tcp 不能使用 after_dns_slow。</p>
                     */
                    std::string m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * <p>单次探测超时，单位毫秒。范围 1000 到 20000。</p>
                     */
                    int64_t m_timeoutMs;
                    bool m_timeoutMsHasBeenSet;

                    /**
                     * <p>探测周期，单位毫秒，必须大于 0。</p>
                     */
                    int64_t m_periodMs;
                    bool m_periodMsHasBeenSet;

                    /**
                     * <p>发包次数。范围 3 到 40。</p>
                     */
                    int64_t m_packageCount;
                    bool m_packageCountHasBeenSet;

                    /**
                     * <p>任务状态。取值说明：active、paused。不传时默认为 active。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>监听域名。ExecutionTime 不是 realtime 时必填。</p>
                     */
                    std::string m_watchDomain;
                    bool m_watchDomainHasBeenSet;

                    /**
                     * <p>拨测目标。域名、IP 或 ldns。after_dns_slow 固定为 ldns，其它时机必填。</p>
                     */
                    std::string m_dialDomain;
                    bool m_dialDomainHasBeenSet;

                    /**
                     * <p>TCP 端口，1 到 65535。Type 为 tcp 时必填。</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>实时拨测间隔，单位毫秒。ExecutionTime 为 realtime 时必填。取值说明：60000、300000、600000、900000、1800000、3600000。</p>
                     */
                    int64_t m_frequencyMs;
                    bool m_frequencyMsHasBeenSet;

                    /**
                     * <p>ICMP 包大小，单位字节。范围 32 到 1024。不传时默认 64。</p>
                     */
                    int64_t m_packageSize;
                    bool m_packageSizeHasBeenSet;

                    /**
                     * <p>是否做路由追踪。取值说明：0 否，1 是。不传时为 0。</p>
                     */
                    int64_t m_needMTR;
                    bool m_needMTRHasBeenSet;

                    /**
                     * <p>路由追踪超时，单位毫秒。NeedMTR 为 1 时必填。</p>
                     */
                    int64_t m_mTRTimeoutMs;
                    bool m_mTRTimeoutMsHasBeenSet;

                    /**
                     * <p>路由追踪最大跳数。NeedMTR 为 1 时填写。</p>
                     */
                    int64_t m_mTRMaxHop;
                    bool m_mTRMaxHopHasBeenSet;

                    /**
                     * <p>每一跳发包次数。范围 3 到 40。</p>
                     */
                    int64_t m_mTRPingCount;
                    bool m_mTRPingCountHasBeenSet;

                    /**
                     * <p>慢请求阈值，单位毫秒。after_slow、after_dns_slow 不传时默认 2000。</p>
                     */
                    int64_t m_slowThresholdMs;
                    bool m_slowThresholdMsHasBeenSet;

                    /**
                     * <p>错误类型过滤。after_error 时使用。</p>
                     */
                    std::string m_errorType;
                    bool m_errorTypeHasBeenSet;

                    /**
                     * <p>允许启动的客户端地区，逗号分隔，名称必须与分析页客户端地区完全一致。不传或空字符串表示不限制。</p>
                     */
                    std::string m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * <p>允许启动的客户端运营商，逗号分隔，名称必须与分析页客户端运营商完全一致。不传或空字符串表示不限制。</p>
                     */
                    std::string m_operators;
                    bool m_operatorsHasBeenSet;

                    /**
                     * <p>允许启动的用户 ID，逗号分隔。不传或空字符串表示不限制。</p>
                     */
                    std::string m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * <p>允许启动的设备 ID，逗号分隔。不传或空字符串表示不限制。</p>
                     */
                    std::string m_deviceIds;
                    bool m_deviceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMDIALTASKREQUEST_H_
