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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PreExecuteFileSettings.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ScaleOutInstance请求参数结构体
                */
                class ScaleOutInstanceRequest : public AbstractModel
                {
                public:
                    ScaleOutInstanceRequest();
                    ~ScaleOutInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取扩容的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * @return TimeUnit 扩容的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置扩容的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * @param TimeUnit 扩容的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取扩容的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * @return TimeSpan 扩容的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置扩容的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * @param TimeSpan 扩容的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param InstanceId 实例ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     * @return PayMode 实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     * @param PayMode 实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取客户端Token。
                     * @return ClientToken 客户端Token。
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置客户端Token。
                     * @param ClientToken 客户端Token。
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取引导操作脚本设置。
                     * @return PreExecutedFileSettings 引导操作脚本设置。
                     */
                    std::vector<PreExecuteFileSettings> GetPreExecutedFileSettings() const;

                    /**
                     * 设置引导操作脚本设置。
                     * @param PreExecutedFileSettings 引导操作脚本设置。
                     */
                    void SetPreExecutedFileSettings(const std::vector<PreExecuteFileSettings>& _preExecutedFileSettings);

                    /**
                     * 判断参数 PreExecutedFileSettings 是否已赋值
                     * @return PreExecutedFileSettings 是否已赋值
                     */
                    bool PreExecutedFileSettingsHasBeenSet() const;

                    /**
                     * 获取扩容的Task节点数量。
                     * @return TaskCount 扩容的Task节点数量。
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置扩容的Task节点数量。
                     * @param TaskCount 扩容的Task节点数量。
                     */
                    void SetTaskCount(const uint64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取扩容的Core节点数量。
                     * @return CoreCount 扩容的Core节点数量。
                     */
                    uint64_t GetCoreCount() const;

                    /**
                     * 设置扩容的Core节点数量。
                     * @param CoreCount 扩容的Core节点数量。
                     */
                    void SetCoreCount(const uint64_t& _coreCount);

                    /**
                     * 判断参数 CoreCount 是否已赋值
                     * @return CoreCount 是否已赋值
                     */
                    bool CoreCountHasBeenSet() const;

                    /**
                     * 获取扩容时不需要安装的进程。
                     * @return UnNecessaryNodeList 扩容时不需要安装的进程。
                     */
                    std::vector<uint64_t> GetUnNecessaryNodeList() const;

                    /**
                     * 设置扩容时不需要安装的进程。
                     * @param UnNecessaryNodeList 扩容时不需要安装的进程。
                     */
                    void SetUnNecessaryNodeList(const std::vector<uint64_t>& _unNecessaryNodeList);

                    /**
                     * 判断参数 UnNecessaryNodeList 是否已赋值
                     * @return UnNecessaryNodeList 是否已赋值
                     */
                    bool UnNecessaryNodeListHasBeenSet() const;

                    /**
                     * 获取扩容的Router节点数量。
                     * @return RouterCount 扩容的Router节点数量。
                     */
                    uint64_t GetRouterCount() const;

                    /**
                     * 设置扩容的Router节点数量。
                     * @param RouterCount 扩容的Router节点数量。
                     */
                    void SetRouterCount(const uint64_t& _routerCount);

                    /**
                     * 判断参数 RouterCount 是否已赋值
                     * @return RouterCount 是否已赋值
                     */
                    bool RouterCountHasBeenSet() const;

                    /**
                     * 获取部署的服务。
<li>SoftDeployInfo和ServiceNodeInfo是同组参数，和UnNecessaryNodeList参数互斥。</li>
<li>建议使用SoftDeployInfo和ServiceNodeInfo组合。</li>
                     * @return SoftDeployInfo 部署的服务。
<li>SoftDeployInfo和ServiceNodeInfo是同组参数，和UnNecessaryNodeList参数互斥。</li>
<li>建议使用SoftDeployInfo和ServiceNodeInfo组合。</li>
                     */
                    std::vector<uint64_t> GetSoftDeployInfo() const;

                    /**
                     * 设置部署的服务。
<li>SoftDeployInfo和ServiceNodeInfo是同组参数，和UnNecessaryNodeList参数互斥。</li>
<li>建议使用SoftDeployInfo和ServiceNodeInfo组合。</li>
                     * @param SoftDeployInfo 部署的服务。
<li>SoftDeployInfo和ServiceNodeInfo是同组参数，和UnNecessaryNodeList参数互斥。</li>
<li>建议使用SoftDeployInfo和ServiceNodeInfo组合。</li>
                     */
                    void SetSoftDeployInfo(const std::vector<uint64_t>& _softDeployInfo);

                    /**
                     * 判断参数 SoftDeployInfo 是否已赋值
                     * @return SoftDeployInfo 是否已赋值
                     */
                    bool SoftDeployInfoHasBeenSet() const;

                    /**
                     * 获取启动的进程。
                     * @return ServiceNodeInfo 启动的进程。
                     */
                    std::vector<uint64_t> GetServiceNodeInfo() const;

                    /**
                     * 设置启动的进程。
                     * @param ServiceNodeInfo 启动的进程。
                     */
                    void SetServiceNodeInfo(const std::vector<uint64_t>& _serviceNodeInfo);

                    /**
                     * 判断参数 ServiceNodeInfo 是否已赋值
                     * @return ServiceNodeInfo 是否已赋值
                     */
                    bool ServiceNodeInfoHasBeenSet() const;

                    /**
                     * 获取分散置放群组ID列表，当前仅支持指定一个。
                     * @return DisasterRecoverGroupIds 分散置放群组ID列表，当前仅支持指定一个。
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置分散置放群组ID列表，当前仅支持指定一个。
                     * @param DisasterRecoverGroupIds 分散置放群组ID列表，当前仅支持指定一个。
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取扩容节点绑定标签列表。
                     * @return Tags 扩容节点绑定标签列表。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置扩容节点绑定标签列表。
                     * @param Tags 扩容节点绑定标签列表。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 扩容的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 扩容的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 客户端Token。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 引导操作脚本设置。
                     */
                    std::vector<PreExecuteFileSettings> m_preExecutedFileSettings;
                    bool m_preExecutedFileSettingsHasBeenSet;

                    /**
                     * 扩容的Task节点数量。
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * 扩容的Core节点数量。
                     */
                    uint64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * 扩容时不需要安装的进程。
                     */
                    std::vector<uint64_t> m_unNecessaryNodeList;
                    bool m_unNecessaryNodeListHasBeenSet;

                    /**
                     * 扩容的Router节点数量。
                     */
                    uint64_t m_routerCount;
                    bool m_routerCountHasBeenSet;

                    /**
                     * 部署的服务。
<li>SoftDeployInfo和ServiceNodeInfo是同组参数，和UnNecessaryNodeList参数互斥。</li>
<li>建议使用SoftDeployInfo和ServiceNodeInfo组合。</li>
                     */
                    std::vector<uint64_t> m_softDeployInfo;
                    bool m_softDeployInfoHasBeenSet;

                    /**
                     * 启动的进程。
                     */
                    std::vector<uint64_t> m_serviceNodeInfo;
                    bool m_serviceNodeInfoHasBeenSet;

                    /**
                     * 分散置放群组ID列表，当前仅支持指定一个。
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * 扩容节点绑定标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCEREQUEST_H_
