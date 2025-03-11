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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_TREEJOBSETS_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_TREEJOBSETS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 自定义树结构出参作业列表
                */
                class TreeJobSets : public AbstractModel
                {
                public:
                    TreeJobSets();
                    ~TreeJobSets() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取作业Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 作业Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 作业Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取作业名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 作业名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置作业名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 作业名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取作业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobType 作业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobType() const;

                    /**
                     * 设置作业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobType 作业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobType(const int64_t& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取作业占用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningCu 作业占用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRunningCu() const;

                    /**
                     * 设置作业占用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningCu 作业占用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningCu(const double& _runningCu);

                    /**
                     * 判断参数 RunningCu 是否已赋值
                     * @return RunningCu 是否已赋值
                     * 
                     */
                    bool RunningCuHasBeenSet() const;

                    /**
                     * 获取作业状态 启动或者停止或者暂停
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 作业状态 启动或者停止或者暂停
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置作业状态 启动或者停止或者暂停
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 作业状态 启动或者停止或者暂停
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取0:代表没开启调优任务，1:开启智能调优，2:代表定时调优

注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScalingType 0:代表没开启调优任务，1:开启智能调优，2:代表定时调优

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScalingType() const;

                    /**
                     * 设置0:代表没开启调优任务，1:开启智能调优，2:代表定时调优

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scalingType 0:代表没开启调优任务，1:开启智能调优，2:代表定时调优

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScalingType(const int64_t& _scalingType);

                    /**
                     * 判断参数 ScalingType 是否已赋值
                     * @return ScalingType 是否已赋值
                     * 
                     */
                    bool ScalingTypeHasBeenSet() const;

                    /**
                     * 获取RunningCpu
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningCpu RunningCpu
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRunningCpu() const;

                    /**
                     * 设置RunningCpu
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningCpu RunningCpu
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningCpu(const double& _runningCpu);

                    /**
                     * 判断参数 RunningCpu 是否已赋值
                     * @return RunningCpu 是否已赋值
                     * 
                     */
                    bool RunningCpuHasBeenSet() const;

                    /**
                     * 获取RunningMem
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningMem RunningMem
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRunningMem() const;

                    /**
                     * 设置RunningMem
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningMem RunningMem
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningMem(const double& _runningMem);

                    /**
                     * 判断参数 RunningMem 是否已赋值
                     * @return RunningMem 是否已赋值
                     * 
                     */
                    bool RunningMemHasBeenSet() const;

                    /**
                     * 获取sql
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DecodeSqlCode sql
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDecodeSqlCode() const;

                    /**
                     * 设置sql
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _decodeSqlCode sql
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDecodeSqlCode(const std::string& _decodeSqlCode);

                    /**
                     * 判断参数 DecodeSqlCode 是否已赋值
                     * @return DecodeSqlCode 是否已赋值
                     * 
                     */
                    bool DecodeSqlCodeHasBeenSet() const;

                private:

                    /**
                     * 作业Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 作业名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 作业类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 作业占用资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_runningCu;
                    bool m_runningCuHasBeenSet;

                    /**
                     * 作业状态 启动或者停止或者暂停
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 0:代表没开启调优任务，1:开启智能调优，2:代表定时调优

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scalingType;
                    bool m_scalingTypeHasBeenSet;

                    /**
                     * RunningCpu
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_runningCpu;
                    bool m_runningCpuHasBeenSet;

                    /**
                     * RunningMem
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_runningMem;
                    bool m_runningMemHasBeenSet;

                    /**
                     * sql
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_decodeSqlCode;
                    bool m_decodeSqlCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_TREEJOBSETS_H_
