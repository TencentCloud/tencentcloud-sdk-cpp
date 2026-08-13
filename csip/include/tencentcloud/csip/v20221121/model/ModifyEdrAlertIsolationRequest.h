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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRALERTISOLATIONREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRALERTISOLATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EdrAlertTarget.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyEdrAlertIsolation请求参数结构体
                */
                class ModifyEdrAlertIsolationRequest : public AbstractModel
                {
                public:
                    ModifyEdrAlertIsolationRequest();
                    ~ModifyEdrAlertIsolationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>告警定位列表（1-500）</p>
                     * @return Targets <p>告警定位列表（1-500）</p>
                     * 
                     */
                    std::vector<EdrAlertTarget> GetTargets() const;

                    /**
                     * 设置<p>告警定位列表（1-500）</p>
                     * @param _targets <p>告警定位列表（1-500）</p>
                     * 
                     */
                    void SetTargets(const std::vector<EdrAlertTarget>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取<p>操作类型：Isolate（隔离）/ RestoreIsolate（恢复隔离）/ KillProcess（进程查杀）枚举值：Isolate： 隔离RestoreIsolate： 恢复隔离KillProcess： 进程查杀</p>
                     * @return Status <p>操作类型：Isolate（隔离）/ RestoreIsolate（恢复隔离）/ KillProcess（进程查杀）枚举值：Isolate： 隔离RestoreIsolate： 恢复隔离KillProcess： 进程查杀</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>操作类型：Isolate（隔离）/ RestoreIsolate（恢复隔离）/ KillProcess（进程查杀）枚举值：Isolate： 隔离RestoreIsolate： 恢复隔离KillProcess： 进程查杀</p>
                     * @param _status <p>操作类型：Isolate（隔离）/ RestoreIsolate（恢复隔离）/ KillProcess（进程查杀）枚举值：Isolate： 隔离RestoreIsolate： 恢复隔离KillProcess： 进程查杀</p>
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
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>是否终止关联进程，仅 Status=Isolate 有效，Status=KillProcess 时忽略</p>
                     * @return KillProcess <p>是否终止关联进程，仅 Status=Isolate 有效，Status=KillProcess 时忽略</p>
                     * 
                     */
                    bool GetKillProcess() const;

                    /**
                     * 设置<p>是否终止关联进程，仅 Status=Isolate 有效，Status=KillProcess 时忽略</p>
                     * @param _killProcess <p>是否终止关联进程，仅 Status=Isolate 有效，Status=KillProcess 时忽略</p>
                     * 
                     */
                    void SetKillProcess(const bool& _killProcess);

                    /**
                     * 判断参数 KillProcess 是否已赋值
                     * @return KillProcess 是否已赋值
                     * 
                     */
                    bool KillProcessHasBeenSet() const;

                private:

                    /**
                     * <p>告警定位列表（1-500）</p>
                     */
                    std::vector<EdrAlertTarget> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * <p>操作类型：Isolate（隔离）/ RestoreIsolate（恢复隔离）/ KillProcess（进程查杀）枚举值：Isolate： 隔离RestoreIsolate： 恢复隔离KillProcess： 进程查杀</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>是否终止关联进程，仅 Status=Isolate 有效，Status=KillProcess 时忽略</p>
                     */
                    bool m_killProcess;
                    bool m_killProcessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRALERTISOLATIONREQUEST_H_
