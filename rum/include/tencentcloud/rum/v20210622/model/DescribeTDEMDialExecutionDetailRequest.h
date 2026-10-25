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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMDIALEXECUTIONDETAILREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMDIALEXECUTIONDETAILREQUEST_H_

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
                * DescribeTDEMDialExecutionDetail请求参数结构体
                */
                class DescribeTDEMDialExecutionDetailRequest : public AbstractModel
                {
                public:
                    DescribeTDEMDialExecutionDetailRequest();
                    ~DescribeTDEMDialExecutionDetailRequest() = default;
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
                     * 获取<p>开始时间，毫秒时间戳</p>
                     * @return StartTime <p>开始时间，毫秒时间戳</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间，毫秒时间戳</p>
                     * @param _startTime <p>开始时间，毫秒时间戳</p>
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
                     * 获取<p>结束时间，毫秒时间戳，必须大于 StartTime</p>
                     * @return EndTime <p>结束时间，毫秒时间戳，必须大于 StartTime</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间，毫秒时间戳，必须大于 StartTime</p>
                     * @param _endTime <p>结束时间，毫秒时间戳，必须大于 StartTime</p>
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
                     * 获取<p>任务 ID。不传表示不过滤。</p>
                     * @return TaskId <p>任务 ID。不传表示不过滤。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务 ID。不传表示不过滤。</p>
                     * @param _taskId <p>任务 ID。不传表示不过滤。</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>拨测批次 ID</p>
                     * @return TaskSessionId <p>拨测批次 ID</p>
                     * 
                     */
                    std::string GetTaskSessionId() const;

                    /**
                     * 设置<p>拨测批次 ID</p>
                     * @param _taskSessionId <p>拨测批次 ID</p>
                     * 
                     */
                    void SetTaskSessionId(const std::string& _taskSessionId);

                    /**
                     * 判断参数 TaskSessionId 是否已赋值
                     * @return TaskSessionId 是否已赋值
                     * 
                     */
                    bool TaskSessionIdHasBeenSet() const;

                    /**
                     * 获取<p>客户端平台。不传表示不过滤。</p>
                     * @return Platform <p>客户端平台。不传表示不过滤。</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>客户端平台。不传表示不过滤。</p>
                     * @param _platform <p>客户端平台。不传表示不过滤。</p>
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
                     * 获取<p>应用版本。不传表示不过滤。</p>
                     * @return AppVersion <p>应用版本。不传表示不过滤。</p>
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置<p>应用版本。不传表示不过滤。</p>
                     * @param _appVersion <p>应用版本。不传表示不过滤。</p>
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取<p>设备机型，对应 device_type。不传表示不过滤。</p>
                     * @return Device <p>设备机型，对应 device_type。不传表示不过滤。</p>
                     * 
                     */
                    std::string GetDevice() const;

                    /**
                     * 设置<p>设备机型，对应 device_type。不传表示不过滤。</p>
                     * @param _device <p>设备机型，对应 device_type。不传表示不过滤。</p>
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
                     * 获取<p>网络类型，对应 network_type。不传表示不过滤。</p>
                     * @return NetType <p>网络类型，对应 network_type。不传表示不过滤。</p>
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置<p>网络类型，对应 network_type。不传表示不过滤。</p>
                     * @param _netType <p>网络类型，对应 network_type。不传表示不过滤。</p>
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
                     * 获取<p>客户端运营商，对应 isp。不传表示不过滤。不是目标 IP 运营商。</p>
                     * @return Operator <p>客户端运营商，对应 isp。不传表示不过滤。不是目标 IP 运营商。</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>客户端运营商，对应 isp。不传表示不过滤。不是目标 IP 运营商。</p>
                     * @param _operator <p>客户端运营商，对应 isp。不传表示不过滤。不是目标 IP 运营商。</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>客户端地区，对应 province。云 API 公共参数已占用 Region，筛选入参名为 ClientRegion。不传表示不过滤。不是目标 IP 地区。</p>
                     * @return ClientRegion <p>客户端地区，对应 province。云 API 公共参数已占用 Region，筛选入参名为 ClientRegion。不传表示不过滤。不是目标 IP 地区。</p>
                     * 
                     */
                    std::string GetClientRegion() const;

                    /**
                     * 设置<p>客户端地区，对应 province。云 API 公共参数已占用 Region，筛选入参名为 ClientRegion。不传表示不过滤。不是目标 IP 地区。</p>
                     * @param _clientRegion <p>客户端地区，对应 province。云 API 公共参数已占用 Region，筛选入参名为 ClientRegion。不传表示不过滤。不是目标 IP 地区。</p>
                     * 
                     */
                    void SetClientRegion(const std::string& _clientRegion);

                    /**
                     * 判断参数 ClientRegion 是否已赋值
                     * @return ClientRegion 是否已赋值
                     * 
                     */
                    bool ClientRegionHasBeenSet() const;

                    /**
                     * 获取<p>目标 IP。不传表示不过滤。</p>
                     * @return TargetIp <p>目标 IP。不传表示不过滤。</p>
                     * 
                     */
                    std::string GetTargetIp() const;

                    /**
                     * 设置<p>目标 IP。不传表示不过滤。</p>
                     * @param _targetIp <p>目标 IP。不传表示不过滤。</p>
                     * 
                     */
                    void SetTargetIp(const std::string& _targetIp);

                    /**
                     * 判断参数 TargetIp 是否已赋值
                     * @return TargetIp 是否已赋值
                     * 
                     */
                    bool TargetIpHasBeenSet() const;

                    /**
                     * 获取<p>环境。可选。不传表示不过滤。</p>
                     * @return Environment <p>环境。可选。不传表示不过滤。</p>
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置<p>环境。可选。不传表示不过滤。</p>
                     * @param _environment <p>环境。可选。不传表示不过滤。</p>
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>开始时间，毫秒时间戳</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，毫秒时间戳，必须大于 StartTime</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>任务 ID。不传表示不过滤。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>拨测批次 ID</p>
                     */
                    std::string m_taskSessionId;
                    bool m_taskSessionIdHasBeenSet;

                    /**
                     * <p>客户端平台。不传表示不过滤。</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>应用版本。不传表示不过滤。</p>
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * <p>设备机型，对应 device_type。不传表示不过滤。</p>
                     */
                    std::string m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * <p>网络类型，对应 network_type。不传表示不过滤。</p>
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>客户端运营商，对应 isp。不传表示不过滤。不是目标 IP 运营商。</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>客户端地区，对应 province。云 API 公共参数已占用 Region，筛选入参名为 ClientRegion。不传表示不过滤。不是目标 IP 地区。</p>
                     */
                    std::string m_clientRegion;
                    bool m_clientRegionHasBeenSet;

                    /**
                     * <p>目标 IP。不传表示不过滤。</p>
                     */
                    std::string m_targetIp;
                    bool m_targetIpHasBeenSet;

                    /**
                     * <p>环境。可选。不传表示不过滤。</p>
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMDIALEXECUTIONDETAILREQUEST_H_
