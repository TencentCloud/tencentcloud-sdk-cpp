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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEJOBREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * CreateJob请求参数结构体
                */
                class CreateJobRequest : public AbstractModel
                {
                public:
                    CreateJobRequest();
                    ~CreateJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业名称，允许输入长度小于等于50个字符的中文、英文、数字、-（横线）、_（下划线）、.（点），且符号必须半角字符。注意作业名不能和现有作业同名
                     * @return Name 作业名称，允许输入长度小于等于50个字符的中文、英文、数字、-（横线）、_（下划线）、.（点），且符号必须半角字符。注意作业名不能和现有作业同名
                     */
                    std::string GetName() const;

                    /**
                     * 设置作业名称，允许输入长度小于等于50个字符的中文、英文、数字、-（横线）、_（下划线）、.（点），且符号必须半角字符。注意作业名不能和现有作业同名
                     * @param Name 作业名称，允许输入长度小于等于50个字符的中文、英文、数字、-（横线）、_（下划线）、.（点），且符号必须半角字符。注意作业名不能和现有作业同名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取作业的类型，1 表示 SQL 作业，2 表示 JAR 作业
                     * @return JobType 作业的类型，1 表示 SQL 作业，2 表示 JAR 作业
                     */
                    int64_t GetJobType() const;

                    /**
                     * 设置作业的类型，1 表示 SQL 作业，2 表示 JAR 作业
                     * @param JobType 作业的类型，1 表示 SQL 作业，2 表示 JAR 作业
                     */
                    void SetJobType(const int64_t& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取集群的类型，1 表示共享集群，2 表示独享集群
                     * @return ClusterType 集群的类型，1 表示共享集群，2 表示独享集群
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置集群的类型，1 表示共享集群，2 表示独享集群
                     * @param ClusterType 集群的类型，1 表示共享集群，2 表示独享集群
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取当 ClusterType=2 时，必选，用来指定该作业提交的独享集群 ID
                     * @return ClusterId 当 ClusterType=2 时，必选，用来指定该作业提交的独享集群 ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置当 ClusterType=2 时，必选，用来指定该作业提交的独享集群 ID
                     * @param ClusterId 当 ClusterType=2 时，必选，用来指定该作业提交的独享集群 ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取设置每 CU 的内存规格，单位为 GB，支持 2、4、8、16（需申请开通白名单后使用）。默认为 4，即 1 CU 对应 4 GB 的运行内存
                     * @return CuMem 设置每 CU 的内存规格，单位为 GB，支持 2、4、8、16（需申请开通白名单后使用）。默认为 4，即 1 CU 对应 4 GB 的运行内存
                     */
                    uint64_t GetCuMem() const;

                    /**
                     * 设置设置每 CU 的内存规格，单位为 GB，支持 2、4、8、16（需申请开通白名单后使用）。默认为 4，即 1 CU 对应 4 GB 的运行内存
                     * @param CuMem 设置每 CU 的内存规格，单位为 GB，支持 2、4、8、16（需申请开通白名单后使用）。默认为 4，即 1 CU 对应 4 GB 的运行内存
                     */
                    void SetCuMem(const uint64_t& _cuMem);

                    /**
                     * 判断参数 CuMem 是否已赋值
                     * @return CuMem 是否已赋值
                     */
                    bool CuMemHasBeenSet() const;

                    /**
                     * 获取作业的备注信息，可以随意设置
                     * @return Remark 作业的备注信息，可以随意设置
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置作业的备注信息，可以随意设置
                     * @param Remark 作业的备注信息，可以随意设置
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取作业名所属文件夹ID，根目录为"root"
                     * @return FolderId 作业名所属文件夹ID，根目录为"root"
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置作业名所属文件夹ID，根目录为"root"
                     * @param FolderId 作业名所属文件夹ID，根目录为"root"
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取作业运行的Flink版本
                     * @return FlinkVersion 作业运行的Flink版本
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置作业运行的Flink版本
                     * @param FlinkVersion 作业运行的Flink版本
                     */
                    void SetFlinkVersion(const std::string& _flinkVersion);

                    /**
                     * 判断参数 FlinkVersion 是否已赋值
                     * @return FlinkVersion 是否已赋值
                     */
                    bool FlinkVersionHasBeenSet() const;

                    /**
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param WorkSpaceId 工作空间 SerialId
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                private:

                    /**
                     * 作业名称，允许输入长度小于等于50个字符的中文、英文、数字、-（横线）、_（下划线）、.（点），且符号必须半角字符。注意作业名不能和现有作业同名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 作业的类型，1 表示 SQL 作业，2 表示 JAR 作业
                     */
                    int64_t m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 集群的类型，1 表示共享集群，2 表示独享集群
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 当 ClusterType=2 时，必选，用来指定该作业提交的独享集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 设置每 CU 的内存规格，单位为 GB，支持 2、4、8、16（需申请开通白名单后使用）。默认为 4，即 1 CU 对应 4 GB 的运行内存
                     */
                    uint64_t m_cuMem;
                    bool m_cuMemHasBeenSet;

                    /**
                     * 作业的备注信息，可以随意设置
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 作业名所属文件夹ID，根目录为"root"
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 作业运行的Flink版本
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEJOBREQUEST_H_
