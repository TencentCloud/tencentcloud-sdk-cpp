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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DIALEXECUTION_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DIALEXECUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/DialTargetIpGeo.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 一次拨测执行批次
                */
                class DialExecution : public AbstractModel
                {
                public:
                    DialExecution();
                    ~DialExecution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务 ID</p>
                     * @return TaskId <p>任务 ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务 ID</p>
                     * @param _taskId <p>任务 ID</p>
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
                     * 获取<p>任务名称。任务已删除时仍返回当时名称，找不到则为空。</p>
                     * @return TaskName <p>任务名称。任务已删除时仍返回当时名称，找不到则为空。</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称。任务已删除时仍返回当时名称，找不到则为空。</p>
                     * @param _taskName <p>任务名称。任务已删除时仍返回当时名称，找不到则为空。</p>
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
                     * 获取<p>批次开始时间，毫秒时间戳</p>
                     * @return StartTime <p>批次开始时间，毫秒时间戳</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>批次开始时间，毫秒时间戳</p>
                     * @param _startTime <p>批次开始时间，毫秒时间戳</p>
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
                     * 获取<p>客户端平台</p>
                     * @return Platform <p>客户端平台</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>客户端平台</p>
                     * @param _platform <p>客户端平台</p>
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
                     * 获取<p>应用版本</p>
                     * @return AppVersion <p>应用版本</p>
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置<p>应用版本</p>
                     * @param _appVersion <p>应用版本</p>
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
                     * 获取<p>设备机型</p>
                     * @return Device <p>设备机型</p>
                     * 
                     */
                    std::string GetDevice() const;

                    /**
                     * 设置<p>设备机型</p>
                     * @param _device <p>设备机型</p>
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
                     * 获取<p>网络类型</p>
                     * @return NetType <p>网络类型</p>
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置<p>网络类型</p>
                     * @param _netType <p>网络类型</p>
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
                     * 获取<p>客户端运营商。不是目标 IP 运营商。</p>
                     * @return Operator <p>客户端运营商。不是目标 IP 运营商。</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>客户端运营商。不是目标 IP 运营商。</p>
                     * @param _operator <p>客户端运营商。不是目标 IP 运营商。</p>
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
                     * 获取<p>客户端地区。不是目标 IP 地区。</p>
                     * @return Region <p>客户端地区。不是目标 IP 地区。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>客户端地区。不是目标 IP 地区。</p>
                     * @param _region <p>客户端地区。不是目标 IP 地区。</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>本批次探测到的目标 IP，顺序与 TargetIpGeo 一致</p>
                     * @return TargetIps <p>本批次探测到的目标 IP，顺序与 TargetIpGeo 一致</p>
                     * 
                     */
                    std::vector<std::string> GetTargetIps() const;

                    /**
                     * 设置<p>本批次探测到的目标 IP，顺序与 TargetIpGeo 一致</p>
                     * @param _targetIps <p>本批次探测到的目标 IP，顺序与 TargetIpGeo 一致</p>
                     * 
                     */
                    void SetTargetIps(const std::vector<std::string>& _targetIps);

                    /**
                     * 判断参数 TargetIps 是否已赋值
                     * @return TargetIps 是否已赋值
                     * 
                     */
                    bool TargetIpsHasBeenSet() const;

                    /**
                     * 获取<p>每个目标 IP 的地区和运营商</p>
                     * @return TargetIpGeo <p>每个目标 IP 的地区和运营商</p>
                     * 
                     */
                    std::vector<DialTargetIpGeo> GetTargetIpGeo() const;

                    /**
                     * 设置<p>每个目标 IP 的地区和运营商</p>
                     * @param _targetIpGeo <p>每个目标 IP 的地区和运营商</p>
                     * 
                     */
                    void SetTargetIpGeo(const std::vector<DialTargetIpGeo>& _targetIpGeo);

                    /**
                     * 判断参数 TargetIpGeo 是否已赋值
                     * @return TargetIpGeo 是否已赋值
                     * 
                     */
                    bool TargetIpGeoHasBeenSet() const;

                    /**
                     * 获取<p>本批次是否全部探测成功</p>
                     * @return Success <p>本批次是否全部探测成功</p>
                     * 
                     */
                    bool GetSuccess() const;

                    /**
                     * 设置<p>本批次是否全部探测成功</p>
                     * @param _success <p>本批次是否全部探测成功</p>
                     * 
                     */
                    void SetSuccess(const bool& _success);

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取<p>本批次是否未实际探测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotProbed <p>本批次是否未实际探测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetNotProbed() const;

                    /**
                     * 设置<p>本批次是否未实际探测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notProbed <p>本批次是否未实际探测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotProbed(const bool& _notProbed);

                    /**
                     * 判断参数 NotProbed 是否已赋值
                     * @return NotProbed 是否已赋值
                     * 
                     */
                    bool NotProbedHasBeenSet() const;

                    /**
                     * 获取<p>本批次成功目标的平均时延，单位毫秒</p>
                     * @return AvgDuration <p>本批次成功目标的平均时延，单位毫秒</p>
                     * 
                     */
                    double GetAvgDuration() const;

                    /**
                     * 设置<p>本批次成功目标的平均时延，单位毫秒</p>
                     * @param _avgDuration <p>本批次成功目标的平均时延，单位毫秒</p>
                     * 
                     */
                    void SetAvgDuration(const double& _avgDuration);

                    /**
                     * 判断参数 AvgDuration 是否已赋值
                     * @return AvgDuration 是否已赋值
                     * 
                     */
                    bool AvgDurationHasBeenSet() const;

                    /**
                     * 获取<p>本批次是否包含路由追踪</p>
                     * @return HasMTR <p>本批次是否包含路由追踪</p>
                     * 
                     */
                    bool GetHasMTR() const;

                    /**
                     * 设置<p>本批次是否包含路由追踪</p>
                     * @param _hasMTR <p>本批次是否包含路由追踪</p>
                     * 
                     */
                    void SetHasMTR(const bool& _hasMTR);

                    /**
                     * 判断参数 HasMTR 是否已赋值
                     * @return HasMTR 是否已赋值
                     * 
                     */
                    bool HasMTRHasBeenSet() const;

                    /**
                     * 获取<p>所属用户会话 ID</p>
                     * @return SessionId <p>所属用户会话 ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>所属用户会话 ID</p>
                     * @param _sessionId <p>所属用户会话 ID</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称。任务已删除时仍返回当时名称，找不到则为空。</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>拨测批次 ID</p>
                     */
                    std::string m_taskSessionId;
                    bool m_taskSessionIdHasBeenSet;

                    /**
                     * <p>批次开始时间，毫秒时间戳</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>客户端平台</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>应用版本</p>
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * <p>设备机型</p>
                     */
                    std::string m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * <p>网络类型</p>
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>客户端运营商。不是目标 IP 运营商。</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>客户端地区。不是目标 IP 地区。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>本批次探测到的目标 IP，顺序与 TargetIpGeo 一致</p>
                     */
                    std::vector<std::string> m_targetIps;
                    bool m_targetIpsHasBeenSet;

                    /**
                     * <p>每个目标 IP 的地区和运营商</p>
                     */
                    std::vector<DialTargetIpGeo> m_targetIpGeo;
                    bool m_targetIpGeoHasBeenSet;

                    /**
                     * <p>本批次是否全部探测成功</p>
                     */
                    bool m_success;
                    bool m_successHasBeenSet;

                    /**
                     * <p>本批次是否未实际探测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_notProbed;
                    bool m_notProbedHasBeenSet;

                    /**
                     * <p>本批次成功目标的平均时延，单位毫秒</p>
                     */
                    double m_avgDuration;
                    bool m_avgDurationHasBeenSet;

                    /**
                     * <p>本批次是否包含路由追踪</p>
                     */
                    bool m_hasMTR;
                    bool m_hasMTRHasBeenSet;

                    /**
                     * <p>所属用户会话 ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DIALEXECUTION_H_
