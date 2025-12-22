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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_VERSIONINFO_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_VERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/ObjectKV.h>
#include <tencentcloud/tcbr/v20220217/model/ObjectKVPriority.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 版本信息
                */
                class VersionInfo : public AbstractModel
                {
                public:
                    VersionInfo();
                    ~VersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本名
                     * @return VersionName 版本名
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名
                     * @param _versionName 版本名
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取流量比例
                     * @return FlowRatio 流量比例
                     * 
                     */
                    int64_t GetFlowRatio() const;

                    /**
                     * 设置流量比例
                     * @param _flowRatio 流量比例
                     * 
                     */
                    void SetFlowRatio(const int64_t& _flowRatio);

                    /**
                     * 判断参数 FlowRatio 是否已赋值
                     * @return FlowRatio 是否已赋值
                     * 
                     */
                    bool FlowRatioHasBeenSet() const;

                    /**
                     * 获取版本状态
                     * @return Status 版本状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置版本状态
                     * @param _status 版本状态
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
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

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
                     * 设置更新时间
                     * @param _updatedTime 更新时间
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取构建Id
                     * @return BuildId 构建Id
                     * 
                     */
                    int64_t GetBuildId() const;

                    /**
                     * 设置构建Id
                     * @param _buildId 构建Id
                     * 
                     */
                    void SetBuildId(const int64_t& _buildId);

                    /**
                     * 判断参数 BuildId 是否已赋值
                     * @return BuildId 是否已赋值
                     * 
                     */
                    bool BuildIdHasBeenSet() const;

                    /**
                     * 获取上传方式
                     * @return UploadType 上传方式
                     * 
                     */
                    std::string GetUploadType() const;

                    /**
                     * 设置上传方式
                     * @param _uploadType 上传方式
                     * 
                     */
                    void SetUploadType(const std::string& _uploadType);

                    /**
                     * 判断参数 UploadType 是否已赋值
                     * @return UploadType 是否已赋值
                     * 
                     */
                    bool UploadTypeHasBeenSet() const;

                    /**
                     * 获取操作标识
                     * @return Remark 操作标识
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置操作标识
                     * @param _remark 操作标识
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取测试参数
                     * @return UrlParam 测试参数
                     * 
                     */
                    ObjectKV GetUrlParam() const;

                    /**
                     * 设置测试参数
                     * @param _urlParam 测试参数
                     * 
                     */
                    void SetUrlParam(const ObjectKV& _urlParam);

                    /**
                     * 判断参数 UrlParam 是否已赋值
                     * @return UrlParam 是否已赋值
                     * 
                     */
                    bool UrlParamHasBeenSet() const;

                    /**
                     * 获取权重
                     * @return Priority 权重
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置权重
                     * @param _priority 权重
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取是否默认
                     * @return IsDefaultPriority 是否默认
                     * 
                     */
                    bool GetIsDefaultPriority() const;

                    /**
                     * 设置是否默认
                     * @param _isDefaultPriority 是否默认
                     * 
                     */
                    void SetIsDefaultPriority(const bool& _isDefaultPriority);

                    /**
                     * 判断参数 IsDefaultPriority 是否已赋值
                     * @return IsDefaultPriority 是否已赋值
                     * 
                     */
                    bool IsDefaultPriorityHasBeenSet() const;

                    /**
                     * 获取流量参数
                     * @return FlowParams 流量参数
                     * 
                     */
                    std::vector<ObjectKVPriority> GetFlowParams() const;

                    /**
                     * 设置流量参数
                     * @param _flowParams 流量参数
                     * 
                     */
                    void SetFlowParams(const std::vector<ObjectKVPriority>& _flowParams);

                    /**
                     * 判断参数 FlowParams 是否已赋值
                     * @return FlowParams 是否已赋值
                     * 
                     */
                    bool FlowParamsHasBeenSet() const;

                    /**
                     * 获取最小副本数
                     * @return MinReplicas 最小副本数
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置最小副本数
                     * @param _minReplicas 最小副本数
                     * 
                     */
                    void SetMinReplicas(const int64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     * 
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取最大副本数
                     * @return MaxReplicas 最大副本数
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置最大副本数
                     * @param _maxReplicas 最大副本数
                     * 
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取操作Id
                     * @return RunId 操作Id
                     * 
                     */
                    std::string GetRunId() const;

                    /**
                     * 设置操作Id
                     * @param _runId 操作Id
                     * 
                     */
                    void SetRunId(const std::string& _runId);

                    /**
                     * 判断参数 RunId 是否已赋值
                     * @return RunId 是否已赋值
                     * 
                     */
                    bool RunIdHasBeenSet() const;

                    /**
                     * 获取百分比
                     * @return Percent 百分比
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置百分比
                     * @param _percent 百分比
                     * 
                     */
                    void SetPercent(const int64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取当前副本数
                     * @return CurrentReplicas 当前副本数
                     * 
                     */
                    int64_t GetCurrentReplicas() const;

                    /**
                     * 设置当前副本数
                     * @param _currentReplicas 当前副本数
                     * 
                     */
                    void SetCurrentReplicas(const int64_t& _currentReplicas);

                    /**
                     * 判断参数 CurrentReplicas 是否已赋值
                     * @return CurrentReplicas 是否已赋值
                     * 
                     */
                    bool CurrentReplicasHasBeenSet() const;

                    /**
                     * 获取架构类型
                     * @return Architecture 架构类型
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置架构类型
                     * @param _architecture 架构类型
                     * 
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                private:

                    /**
                     * 版本名
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 流量比例
                     */
                    int64_t m_flowRatio;
                    bool m_flowRatioHasBeenSet;

                    /**
                     * 版本状态
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
                     * 构建Id
                     */
                    int64_t m_buildId;
                    bool m_buildIdHasBeenSet;

                    /**
                     * 上传方式
                     */
                    std::string m_uploadType;
                    bool m_uploadTypeHasBeenSet;

                    /**
                     * 操作标识
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 测试参数
                     */
                    ObjectKV m_urlParam;
                    bool m_urlParamHasBeenSet;

                    /**
                     * 权重
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 是否默认
                     */
                    bool m_isDefaultPriority;
                    bool m_isDefaultPriorityHasBeenSet;

                    /**
                     * 流量参数
                     */
                    std::vector<ObjectKVPriority> m_flowParams;
                    bool m_flowParamsHasBeenSet;

                    /**
                     * 最小副本数
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * 最大副本数
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * 操作Id
                     */
                    std::string m_runId;
                    bool m_runIdHasBeenSet;

                    /**
                     * 百分比
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 当前副本数
                     */
                    int64_t m_currentReplicas;
                    bool m_currentReplicasHasBeenSet;

                    /**
                     * 架构类型
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_VERSIONINFO_H_
