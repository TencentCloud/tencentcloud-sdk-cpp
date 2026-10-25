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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMDIALEXECUTIONDETAILRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMDIALEXECUTIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/DialProbe.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMDialExecutionDetail返回参数结构体
                */
                class DescribeTDEMDialExecutionDetailResponse : public AbstractModel
                {
                public:
                    DescribeTDEMDialExecutionDetailResponse();
                    ~DescribeTDEMDialExecutionDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务 ID</p>
                     * @return TaskId <p>任务 ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

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
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>所属用户会话 ID</p>
                     * @return SessionId <p>所属用户会话 ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>本批次是否全部探测成功</p>
                     * @return Success <p>本批次是否全部探测成功</p>
                     * 
                     */
                    bool GetSuccess() const;

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取<p>平均时延，单位毫秒</p>
                     * @return AvgDuration <p>平均时延，单位毫秒</p>
                     * 
                     */
                    double GetAvgDuration() const;

                    /**
                     * 判断参数 AvgDuration 是否已赋值
                     * @return AvgDuration 是否已赋值
                     * 
                     */
                    bool AvgDurationHasBeenSet() const;

                    /**
                     * 获取<p>客户端平台</p>
                     * @return Platform <p>客户端平台</p>
                     * 
                     */
                    std::string GetPlatform() const;

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
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取<p>客户端运营商</p>
                     * @return Operator <p>客户端运营商</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>客户端地区</p>
                     * @return Region <p>客户端地区</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>本批次目标 IP</p>
                     * @return TargetIps <p>本批次目标 IP</p>
                     * 
                     */
                    std::vector<std::string> GetTargetIps() const;

                    /**
                     * 判断参数 TargetIps 是否已赋值
                     * @return TargetIps 是否已赋值
                     * 
                     */
                    bool TargetIpsHasBeenSet() const;

                    /**
                     * 获取<p>每个目标的探测结果</p>
                     * @return Probes <p>每个目标的探测结果</p>
                     * 
                     */
                    std::vector<DialProbe> GetProbes() const;

                    /**
                     * 判断参数 Probes 是否已赋值
                     * @return Probes 是否已赋值
                     * 
                     */
                    bool ProbesHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
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
                     * <p>所属用户会话 ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>本批次是否全部探测成功</p>
                     */
                    bool m_success;
                    bool m_successHasBeenSet;

                    /**
                     * <p>平均时延，单位毫秒</p>
                     */
                    double m_avgDuration;
                    bool m_avgDurationHasBeenSet;

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
                     * <p>客户端运营商</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>客户端地区</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>本批次目标 IP</p>
                     */
                    std::vector<std::string> m_targetIps;
                    bool m_targetIpsHasBeenSet;

                    /**
                     * <p>每个目标的探测结果</p>
                     */
                    std::vector<DialProbe> m_probes;
                    bool m_probesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMDIALEXECUTIONDETAILRESPONSE_H_
