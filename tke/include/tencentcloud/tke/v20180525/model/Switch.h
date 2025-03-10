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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SWITCH_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SWITCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/SwitchInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群日志开关集合
                */
                class Switch : public AbstractModel
                {
                public:
                    Switch();
                    ~Switch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取审计开关的详细信息
                     * @return Audit 审计开关的详细信息
                     * 
                     */
                    SwitchInfo GetAudit() const;

                    /**
                     * 设置审计开关的详细信息
                     * @param _audit 审计开关的详细信息
                     * 
                     */
                    void SetAudit(const SwitchInfo& _audit);

                    /**
                     * 判断参数 Audit 是否已赋值
                     * @return Audit 是否已赋值
                     * 
                     */
                    bool AuditHasBeenSet() const;

                    /**
                     * 获取事件开关的详细信息
                     * @return Event 事件开关的详细信息
                     * 
                     */
                    SwitchInfo GetEvent() const;

                    /**
                     * 设置事件开关的详细信息
                     * @param _event 事件开关的详细信息
                     * 
                     */
                    void SetEvent(const SwitchInfo& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取普通日志的详细信息
                     * @return Log 普通日志的详细信息
                     * 
                     */
                    SwitchInfo GetLog() const;

                    /**
                     * 设置普通日志的详细信息
                     * @param _log 普通日志的详细信息
                     * 
                     */
                    void SetLog(const SwitchInfo& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取master 日志详细信息
                     * @return MasterLog master 日志详细信息
                     * 
                     */
                    SwitchInfo GetMasterLog() const;

                    /**
                     * 设置master 日志详细信息
                     * @param _masterLog master 日志详细信息
                     * 
                     */
                    void SetMasterLog(const SwitchInfo& _masterLog);

                    /**
                     * 判断参数 MasterLog 是否已赋值
                     * @return MasterLog 是否已赋值
                     * 
                     */
                    bool MasterLogHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 审计开关的详细信息
                     */
                    SwitchInfo m_audit;
                    bool m_auditHasBeenSet;

                    /**
                     * 事件开关的详细信息
                     */
                    SwitchInfo m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * 普通日志的详细信息
                     */
                    SwitchInfo m_log;
                    bool m_logHasBeenSet;

                    /**
                     * master 日志详细信息
                     */
                    SwitchInfo m_masterLog;
                    bool m_masterLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SWITCH_H_
