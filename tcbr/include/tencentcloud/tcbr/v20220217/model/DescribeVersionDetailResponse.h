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
#include <tencentcloud/tcbr/v20220217/model/BuildPacksInfo.h>


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
                     * 获取<p>版本名</p>
                     * @return Name <p>版本名</p>
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
                     * 获取<p>端口号</p>
                     * @return Port <p>端口号</p>
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
                     * 获取<p>cpu 规格</p>
                     * @return Cpu <p>cpu 规格</p>
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
                     * 获取<p>mem 规格</p>
                     * @return Mem <p>mem 规格</p>
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
                     * 获取<p>最小副本数</p>
                     * @return MinNum <p>最小副本数</p>
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
                     * 获取<p>最大副本数</p>
                     * @return MaxNum <p>最大副本数</p>
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
                     * 获取<p>扩缩容策略</p>
                     * @return PolicyDetails <p>扩缩容策略</p>
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
                     * 获取<p>Dockerfile path</p>
                     * @return Dockerfile <p>Dockerfile path</p>
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
                     * 获取<p>目标目录</p>
                     * @return BuildDir <p>目标目录</p>
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
                     * 获取<p>环境变量</p>
                     * @return EnvParams <p>环境变量</p>
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
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdatedTime <p>更新时间</p>
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
                     * 获取<p>日志采集路径</p>
                     * @return LogPath <p>日志采集路径</p>
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
                     * 获取<p>entryPoint</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EntryPoint <p>entryPoint</p>
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
                     * 获取<p>Cmd</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cmd <p>Cmd</p>
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
                     * 获取<p>vpc conf</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcConf <p>vpc conf</p>
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
                     * 获取<p>volume conf</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumesConf <p>volume conf</p>
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

                    /**
                     * 获取<p>buildpack 信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuildPacks <p>buildpack 信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BuildPacksInfo GetBuildPacks() const;

                    /**
                     * 判断参数 BuildPacks 是否已赋值
                     * @return BuildPacks 是否已赋值
                     * 
                     */
                    bool BuildPacksHasBeenSet() const;

                private:

                    /**
                     * <p>版本名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>端口号</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>cpu 规格</p>
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>mem 规格</p>
                     */
                    double m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>最小副本数</p>
                     */
                    int64_t m_minNum;
                    bool m_minNumHasBeenSet;

                    /**
                     * <p>最大副本数</p>
                     */
                    int64_t m_maxNum;
                    bool m_maxNumHasBeenSet;

                    /**
                     * <p>扩缩容策略</p>
                     */
                    std::vector<HpaPolicy> m_policyDetails;
                    bool m_policyDetailsHasBeenSet;

                    /**
                     * <p>Dockerfile path</p>
                     */
                    std::string m_dockerfile;
                    bool m_dockerfileHasBeenSet;

                    /**
                     * <p>目标目录</p>
                     */
                    std::string m_buildDir;
                    bool m_buildDirHasBeenSet;

                    /**
                     * <p>环境变量</p>
                     */
                    std::string m_envParams;
                    bool m_envParamsHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * <p>日志采集路径</p>
                     */
                    std::string m_logPath;
                    bool m_logPathHasBeenSet;

                    /**
                     * <p>entryPoint</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_entryPoint;
                    bool m_entryPointHasBeenSet;

                    /**
                     * <p>Cmd</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * <p>vpc conf</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VpcConf m_vpcConf;
                    bool m_vpcConfHasBeenSet;

                    /**
                     * <p>volume conf</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VolumeConf> m_volumesConf;
                    bool m_volumesConfHasBeenSet;

                    /**
                     * <p>buildpack 信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BuildPacksInfo m_buildPacks;
                    bool m_buildPacksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBEVERSIONDETAILRESPONSE_H_
