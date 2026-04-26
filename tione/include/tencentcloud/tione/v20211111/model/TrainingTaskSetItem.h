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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGTASKSETITEM_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGTASKSETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ResourceConfigInfo.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/EnvVar.h>
#include <tencentcloud/tione/v20211111/model/OperatorInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 出参类型
                */
                class TrainingTaskSetItem : public AbstractModel
                {
                public:
                    TrainingTaskSetItem();
                    ~TrainingTaskSetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>训练任务ID</p>
                     * @return Id <p>训练任务ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>训练任务ID</p>
                     * @param _id <p>训练任务ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>训练任务名称</p>
                     * @return Name <p>训练任务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>训练任务名称</p>
                     * @param _name <p>训练任务名称</p>
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
                     * 获取<p>框架名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameworkName <p>框架名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrameworkName() const;

                    /**
                     * 设置<p>框架名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameworkName <p>框架名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrameworkName(const std::string& _frameworkName);

                    /**
                     * 判断参数 FrameworkName 是否已赋值
                     * @return FrameworkName 是否已赋值
                     * 
                     */
                    bool FrameworkNameHasBeenSet() const;

                    /**
                     * 获取<p>训练框架版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameworkVersion <p>训练框架版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrameworkVersion() const;

                    /**
                     * 设置<p>训练框架版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameworkVersion <p>训练框架版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrameworkVersion(const std::string& _frameworkVersion);

                    /**
                     * 判断参数 FrameworkVersion 是否已赋值
                     * @return FrameworkVersion 是否已赋值
                     * 
                     */
                    bool FrameworkVersionHasBeenSet() const;

                    /**
                     * 获取<p>框架运行环境</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameworkEnvironment <p>框架运行环境</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrameworkEnvironment() const;

                    /**
                     * 设置<p>框架运行环境</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameworkEnvironment <p>框架运行环境</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrameworkEnvironment(const std::string& _frameworkEnvironment);

                    /**
                     * 判断参数 FrameworkEnvironment 是否已赋值
                     * @return FrameworkEnvironment 是否已赋值
                     * 
                     */
                    bool FrameworkEnvironmentHasBeenSet() const;

                    /**
                     * 获取<p>计费模式</p>
                     * @return ChargeType <p>计费模式</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>计费模式</p>
                     * @param _chargeType <p>计费模式</p>
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中</p>
                     * @return ChargeStatus <p>计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中</p>
                     * 
                     */
                    std::string GetChargeStatus() const;

                    /**
                     * 设置<p>计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中</p>
                     * @param _chargeStatus <p>计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中</p>
                     * 
                     */
                    void SetChargeStatus(const std::string& _chargeStatus);

                    /**
                     * 判断参数 ChargeStatus 是否已赋值
                     * @return ChargeStatus 是否已赋值
                     * 
                     */
                    bool ChargeStatusHasBeenSet() const;

                    /**
                     * 获取<p>预付费专用资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId <p>预付费专用资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>预付费专用资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId <p>预付费专用资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>资源配置</p>
                     * @return ResourceConfigInfos <p>资源配置</p>
                     * 
                     */
                    std::vector<ResourceConfigInfo> GetResourceConfigInfos() const;

                    /**
                     * 设置<p>资源配置</p>
                     * @param _resourceConfigInfos <p>资源配置</p>
                     * 
                     */
                    void SetResourceConfigInfos(const std::vector<ResourceConfigInfo>& _resourceConfigInfos);

                    /**
                     * 判断参数 ResourceConfigInfos 是否已赋值
                     * @return ResourceConfigInfos 是否已赋值
                     * 
                     */
                    bool ResourceConfigInfosHasBeenSet() const;

                    /**
                     * 获取<p>训练模式eg：PS_WORKER、DDP、MPI、HOROVOD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingMode <p>训练模式eg：PS_WORKER、DDP、MPI、HOROVOD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainingMode() const;

                    /**
                     * 设置<p>训练模式eg：PS_WORKER、DDP、MPI、HOROVOD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainingMode <p>训练模式eg：PS_WORKER、DDP、MPI、HOROVOD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainingMode(const std::string& _trainingMode);

                    /**
                     * 判断参数 TrainingMode 是否已赋值
                     * @return TrainingMode 是否已赋值
                     * 
                     */
                    bool TrainingModeHasBeenSet() const;

                    /**
                     * 获取<p>任务状态，eg：SUBMITTING提交中、PENDING排队中、<br>STARTING启动中、RUNNING运行中、STOPPING停止中、STOPPED已停止、FAILED异常、SUCCEED已完成</p>
                     * @return Status <p>任务状态，eg：SUBMITTING提交中、PENDING排队中、<br>STARTING启动中、RUNNING运行中、STOPPING停止中、STOPPED已停止、FAILED异常、SUCCEED已完成</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态，eg：SUBMITTING提交中、PENDING排队中、<br>STARTING启动中、RUNNING运行中、STOPPING停止中、STOPPED已停止、FAILED异常、SUCCEED已完成</p>
                     * @param _status <p>任务状态，eg：SUBMITTING提交中、PENDING排队中、<br>STARTING启动中、RUNNING运行中、STOPPING停止中、STOPPED已停止、FAILED异常、SUCCEED已完成</p>
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
                     * 获取<p>运行时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimeInSeconds <p>运行时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuntimeInSeconds() const;

                    /**
                     * 设置<p>运行时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtimeInSeconds <p>运行时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuntimeInSeconds(const uint64_t& _runtimeInSeconds);

                    /**
                     * 判断参数 RuntimeInSeconds 是否已赋值
                     * @return RuntimeInSeconds 是否已赋值
                     * 
                     */
                    bool RuntimeInSecondsHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>训练开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>训练开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>训练开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>训练开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>训练结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>训练结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>训练结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>训练结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>训练输出</p>
                     * @return Output <p>训练输出</p>
                     * 
                     */
                    CosPathInfo GetOutput() const;

                    /**
                     * 设置<p>训练输出</p>
                     * @param _output <p>训练输出</p>
                     * 
                     */
                    void SetOutput(const CosPathInfo& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailureReason <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置<p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failureReason <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailureReason(const std::string& _failureReason);

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     * 
                     */
                    bool FailureReasonHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>计费金额信息，eg：2.00元/小时 (按量计费)</p>
                     * @return BillingInfo <p>计费金额信息，eg：2.00元/小时 (按量计费)</p>
                     * 
                     */
                    std::string GetBillingInfo() const;

                    /**
                     * 设置<p>计费金额信息，eg：2.00元/小时 (按量计费)</p>
                     * @param _billingInfo <p>计费金额信息，eg：2.00元/小时 (按量计费)</p>
                     * 
                     */
                    void SetBillingInfo(const std::string& _billingInfo);

                    /**
                     * 判断参数 BillingInfo 是否已赋值
                     * @return BillingInfo 是否已赋值
                     * 
                     */
                    bool BillingInfoHasBeenSet() const;

                    /**
                     * 获取<p>预付费专用资源组名称</p>
                     * @return ResourceGroupName <p>预付费专用资源组名称</p>
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置<p>预付费专用资源组名称</p>
                     * @param _resourceGroupName <p>预付费专用资源组名称</p>
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>自定义镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageInfo <p>自定义镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置<p>自定义镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageInfo <p>自定义镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     * 
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取<p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message <p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message <p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>标签配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>回调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallbackUrl <p>回调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>回调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callbackUrl <p>回调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取<p>任务subUin信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubUin <p>任务subUin信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置<p>任务subUin信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subUin <p>任务subUin信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取<p>任务创建者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubUinName <p>任务创建者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubUinName() const;

                    /**
                     * 设置<p>任务创建者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subUinName <p>任务创建者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubUinName(const std::string& _subUinName);

                    /**
                     * 判断参数 SubUinName 是否已赋值
                     * @return SubUinName 是否已赋值
                     * 
                     */
                    bool SubUinNameHasBeenSet() const;

                    /**
                     * 获取<p>任务AppId</p>
                     * @return AppId <p>任务AppId</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>任务AppId</p>
                     * @param _appId <p>任务AppId</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>环境变量</p>
                     * @return Envs <p>环境变量</p>
                     * 
                     */
                    std::vector<EnvVar> GetEnvs() const;

                    /**
                     * 设置<p>环境变量</p>
                     * @param _envs <p>环境变量</p>
                     * 
                     */
                    void SetEnvs(const std::vector<EnvVar>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                    /**
                     * 获取<p>操作者信息</p>
                     * @return LatestOperatorInfo <p>操作者信息</p>
                     * 
                     */
                    OperatorInfo GetLatestOperatorInfo() const;

                    /**
                     * 设置<p>操作者信息</p>
                     * @param _latestOperatorInfo <p>操作者信息</p>
                     * 
                     */
                    void SetLatestOperatorInfo(const OperatorInfo& _latestOperatorInfo);

                    /**
                     * 判断参数 LatestOperatorInfo 是否已赋值
                     * @return LatestOperatorInfo 是否已赋值
                     * 
                     */
                    bool LatestOperatorInfoHasBeenSet() const;

                private:

                    /**
                     * <p>训练任务ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>训练任务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>框架名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frameworkName;
                    bool m_frameworkNameHasBeenSet;

                    /**
                     * <p>训练框架版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frameworkVersion;
                    bool m_frameworkVersionHasBeenSet;

                    /**
                     * <p>框架运行环境</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frameworkEnvironment;
                    bool m_frameworkEnvironmentHasBeenSet;

                    /**
                     * <p>计费模式</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>计费状态，eg：BILLING计费中，ARREARS_STOP欠费停止，NOT_BILLING不在计费中</p>
                     */
                    std::string m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * <p>预付费专用资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>资源配置</p>
                     */
                    std::vector<ResourceConfigInfo> m_resourceConfigInfos;
                    bool m_resourceConfigInfosHasBeenSet;

                    /**
                     * <p>训练模式eg：PS_WORKER、DDP、MPI、HOROVOD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingMode;
                    bool m_trainingModeHasBeenSet;

                    /**
                     * <p>任务状态，eg：SUBMITTING提交中、PENDING排队中、<br>STARTING启动中、RUNNING运行中、STOPPING停止中、STOPPED已停止、FAILED异常、SUCCEED已完成</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>运行时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runtimeInSeconds;
                    bool m_runtimeInSecondsHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>训练开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>训练结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>训练输出</p>
                     */
                    CosPathInfo m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>计费金额信息，eg：2.00元/小时 (按量计费)</p>
                     */
                    std::string m_billingInfo;
                    bool m_billingInfoHasBeenSet;

                    /**
                     * <p>预付费专用资源组名称</p>
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * <p>自定义镜像信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * <p>任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>标签配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>回调地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>任务subUin信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * <p>任务创建者名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                    /**
                     * <p>任务AppId</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>环境变量</p>
                     */
                    std::vector<EnvVar> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * <p>操作者信息</p>
                     */
                    OperatorInfo m_latestOperatorInfo;
                    bool m_latestOperatorInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGTASKSETITEM_H_
