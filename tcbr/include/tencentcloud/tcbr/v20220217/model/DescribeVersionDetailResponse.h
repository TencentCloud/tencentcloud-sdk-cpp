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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBEVERSIONDETAILRESPONSE_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBEVERSIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/HpaPolicy.h>
#include <tencentcloud/tcbr/v20220217/model/VpcConf.h>
#include <tencentcloud/tcbr/v20220217/model/VolumeConf.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DescribeVersionDetail返回参数结构体
                */
                class DescribeVersionDetailResponse : public AbstractModel
                {
                public:
                    DescribeVersionDetailResponse();
                    ~DescribeVersionDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取版本名
                     * @return Name 版本名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取端口号
                     * @return Port 端口号
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取cpu 规格
                     * @return Cpu cpu 规格
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取mem 规格
                     * @return Mem mem 规格
                     * 
                     */
                    double GetMem() const;

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取最小副本数
                     * @return MinNum 最小副本数
                     * 
                     */
                    int64_t GetMinNum() const;

                    /**
                     * 判断参数 MinNum 是否已赋值
                     * @return MinNum 是否已赋值
                     * 
                     */
                    bool MinNumHasBeenSet() const;

                    /**
                     * 获取最大副本数
                     * @return MaxNum 最大副本数
                     * 
                     */
                    int64_t GetMaxNum() const;

                    /**
                     * 判断参数 MaxNum 是否已赋值
                     * @return MaxNum 是否已赋值
                     * 
                     */
                    bool MaxNumHasBeenSet() const;

                    /**
                     * 获取扩缩容策略
                     * @return PolicyDetails 扩缩容策略
                     * 
                     */
                    std::vector<HpaPolicy> GetPolicyDetails() const;

                    /**
                     * 判断参数 PolicyDetails 是否已赋值
                     * @return PolicyDetails 是否已赋值
                     * 
                     */
                    bool PolicyDetailsHasBeenSet() const;

                    /**
                     * 获取Dockerfile path
                     * @return Dockerfile Dockerfile path
                     * 
                     */
                    std::string GetDockerfile() const;

                    /**
                     * 判断参数 Dockerfile 是否已赋值
                     * @return Dockerfile 是否已赋值
                     * 
                     */
                    bool DockerfileHasBeenSet() const;

                    /**
                     * 获取目标目录
                     * @return BuildDir 目标目录
                     * 
                     */
                    std::string GetBuildDir() const;

                    /**
                     * 判断参数 BuildDir 是否已赋值
                     * @return BuildDir 是否已赋值
                     * 
                     */
                    bool BuildDirHasBeenSet() const;

                    /**
                     * 获取环境变量
                     * @return EnvParams 环境变量
                     * 
                     */
                    std::string GetEnvParams() const;

                    /**
                     * 判断参数 EnvParams 是否已赋值
                     * @return EnvParams 是否已赋值
                     * 
                     */
                    bool EnvParamsHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedTime 更新时间
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取日志采集路径
                     * @return LogPath 日志采集路径
                     * 
                     */
                    std::string GetLogPath() const;

                    /**
                     * 判断参数 LogPath 是否已赋值
                     * @return LogPath 是否已赋值
                     * 
                     */
                    bool LogPathHasBeenSet() const;

                    /**
                     * 获取entryPoint
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EntryPoint entryPoint
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEntryPoint() const;

                    /**
                     * 判断参数 EntryPoint 是否已赋值
                     * @return EntryPoint 是否已赋值
                     * 
                     */
                    bool EntryPointHasBeenSet() const;

                    /**
                     * 获取Cmd
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cmd Cmd
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取vpc conf
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcConf vpc conf
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VpcConf GetVpcConf() const;

                    /**
                     * 判断参数 VpcConf 是否已赋值
                     * @return VpcConf 是否已赋值
                     * 
                     */
                    bool VpcConfHasBeenSet() const;

                    /**
                     * 获取volume conf
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumesConf volume conf
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VolumeConf> GetVolumesConf() const;

                    /**
                     * 判断参数 VolumesConf 是否已赋值
                     * @return VolumesConf 是否已赋值
                     * 
                     */
                    bool VolumesConfHasBeenSet() const;

                private:

                    /**
                     * 版本名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 端口号
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * cpu 规格
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * mem 规格
                     */
                    double m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 最小副本数
                     */
                    int64_t m_minNum;
                    bool m_minNumHasBeenSet;

                    /**
                     * 最大副本数
                     */
                    int64_t m_maxNum;
                    bool m_maxNumHasBeenSet;

                    /**
                     * 扩缩容策略
                     */
                    std::vector<HpaPolicy> m_policyDetails;
                    bool m_policyDetailsHasBeenSet;

                    /**
                     * Dockerfile path
                     */
                    std::string m_dockerfile;
                    bool m_dockerfileHasBeenSet;

                    /**
                     * 目标目录
                     */
                    std::string m_buildDir;
                    bool m_buildDirHasBeenSet;

                    /**
                     * 环境变量
                     */
                    std::string m_envParams;
                    bool m_envParamsHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 日志采集路径
                     */
                    std::string m_logPath;
                    bool m_logPathHasBeenSet;

                    /**
                     * entryPoint
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_entryPoint;
                    bool m_entryPointHasBeenSet;

                    /**
                     * Cmd
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * vpc conf
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VpcConf m_vpcConf;
                    bool m_vpcConfHasBeenSet;

                    /**
                     * volume conf
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VolumeConf> m_volumesConf;
                    bool m_volumesConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBEVERSIONDETAILRESPONSE_H_
