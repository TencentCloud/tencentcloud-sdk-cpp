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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_MALICIOUSREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_MALICIOUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 恶意请求数据。
                */
                class MaliciousRequest : public AbstractModel
                {
                public:
                    MaliciousRequest();
                    ~MaliciousRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录ID。
                     * @return Id 记录ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置记录ID。
                     * @param _id 记录ID。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取云镜客户端UUID。
                     * @return Uuid 云镜客户端UUID。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端UUID。
                     * @param _uuid 云镜客户端UUID。
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机内网IP。
                     * @return MachineIp 主机内网IP。
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机内网IP。
                     * @param _machineIp 主机内网IP。
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取主机名。
                     * @return MachineName 主机名。
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名。
                     * @param _machineName 主机名。
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取恶意请求域名。
                     * @return Domain 恶意请求域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置恶意请求域名。
                     * @param _domain 恶意请求域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取恶意请求数。
                     * @return Count 恶意请求数。
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置恶意请求数。
                     * @param _count 恶意请求数。
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取进程名。
                     * @return ProcessName 进程名。
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名。
                     * @param _processName 进程名。
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取记录状态。
<li>UN_OPERATED：待处理</li>
<li>TRUSTED：已信任</li>
<li>UN_TRUSTED：已取消信任</li>
                     * @return Status 记录状态。
<li>UN_OPERATED：待处理</li>
<li>TRUSTED：已信任</li>
<li>UN_TRUSTED：已取消信任</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置记录状态。
<li>UN_OPERATED：待处理</li>
<li>TRUSTED：已信任</li>
<li>UN_TRUSTED：已取消信任</li>
                     * @param _status 记录状态。
<li>UN_OPERATED：待处理</li>
<li>TRUSTED：已信任</li>
<li>UN_TRUSTED：已取消信任</li>
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
                     * 获取恶意请求域名描述。
                     * @return Description 恶意请求域名描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置恶意请求域名描述。
                     * @param _description 恶意请求域名描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取参考地址。
                     * @return Reference 参考地址。
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置参考地址。
                     * @param _reference 参考地址。
                     * 
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取发现时间。
                     * @return CreateTime 发现时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置发现时间。
                     * @param _createTime 发现时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取记录合并时间。
                     * @return MergeTime 记录合并时间。
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置记录合并时间。
                     * @param _mergeTime 记录合并时间。
                     * 
                     */
                    void SetMergeTime(const std::string& _mergeTime);

                    /**
                     * 判断参数 MergeTime 是否已赋值
                     * @return MergeTime 是否已赋值
                     * 
                     */
                    bool MergeTimeHasBeenSet() const;

                    /**
                     * 获取进程MD5
值。
                     * @return ProcessMd5 进程MD5
值。
                     * 
                     */
                    std::string GetProcessMd5() const;

                    /**
                     * 设置进程MD5
值。
                     * @param _processMd5 进程MD5
值。
                     * 
                     */
                    void SetProcessMd5(const std::string& _processMd5);

                    /**
                     * 判断参数 ProcessMd5 是否已赋值
                     * @return ProcessMd5 是否已赋值
                     * 
                     */
                    bool ProcessMd5HasBeenSet() const;

                    /**
                     * 获取执行命令行。
                     * @return CmdLine 执行命令行。
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置执行命令行。
                     * @param _cmdLine 执行命令行。
                     * 
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     * 
                     */
                    bool CmdLineHasBeenSet() const;

                    /**
                     * 获取进程PID。
                     * @return Pid 进程PID。
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置进程PID。
                     * @param _pid 进程PID。
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                private:

                    /**
                     * 记录ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 云镜客户端UUID。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机内网IP。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机名。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 恶意请求域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 恶意请求数。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 进程名。
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 记录状态。
<li>UN_OPERATED：待处理</li>
<li>TRUSTED：已信任</li>
<li>UN_TRUSTED：已取消信任</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 恶意请求域名描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 参考地址。
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * 发现时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 记录合并时间。
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * 进程MD5
值。
                     */
                    std::string m_processMd5;
                    bool m_processMd5HasBeenSet;

                    /**
                     * 执行命令行。
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * 进程PID。
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_MALICIOUSREQUEST_H_
