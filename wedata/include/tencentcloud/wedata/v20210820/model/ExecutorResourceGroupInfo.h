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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORRESOURCEGROUPINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORRESOURCEGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ExecutorResourcePackageInfo.h>
#include <tencentcloud/wedata/v20210820/model/MQPackageVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 资源组详情
                */
                class ExecutorResourceGroupInfo : public AbstractModel
                {
                public:
                    ExecutorResourceGroupInfo();
                    ~ExecutorResourceGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行组id, 仅更新资源时需要传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupId 执行组id, 仅更新资源时需要传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置执行组id, 仅更新资源时需要传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupId 执行组id, 仅更新资源时需要传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取执行组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupName 执行组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置执行组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupName 执行组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupName(const std::string& _executorGroupName);

                    /**
                     * 判断参数 ExecutorGroupName 是否已赋值
                     * @return ExecutorGroupName 是否已赋值
                     * 
                     */
                    bool ExecutorGroupNameHasBeenSet() const;

                    /**
                     * 获取执行组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupDesc 执行组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupDesc() const;

                    /**
                     * 设置执行组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupDesc 执行组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupDesc(const std::string& _executorGroupDesc);

                    /**
                     * 判断参数 ExecutorGroupDesc 是否已赋值
                     * @return ExecutorGroupDesc 是否已赋值
                     * 
                     */
                    bool ExecutorGroupDescHasBeenSet() const;

                    /**
                     * 获取SCHEDULER （标准调度资源组），CUSTOM_SCHEDULER （自定义调度资源），INTEGRATION（集成资源组），DATA_SERVICE（数据服务资源组）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorResourceType SCHEDULER （标准调度资源组），CUSTOM_SCHEDULER （自定义调度资源），INTEGRATION（集成资源组），DATA_SERVICE（数据服务资源组）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExecutorResourceType() const;

                    /**
                     * 设置SCHEDULER （标准调度资源组），CUSTOM_SCHEDULER （自定义调度资源），INTEGRATION（集成资源组），DATA_SERVICE（数据服务资源组）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorResourceType SCHEDULER （标准调度资源组），CUSTOM_SCHEDULER （自定义调度资源），INTEGRATION（集成资源组），DATA_SERVICE（数据服务资源组）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorResourceType(const int64_t& _executorResourceType);

                    /**
                     * 判断参数 ExecutorResourceType 是否已赋值
                     * @return ExecutorResourceType 是否已赋值
                     * 
                     */
                    bool ExecutorResourceTypeHasBeenSet() const;

                    /**
                     * 获取区域中文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 区域中文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域中文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 区域中文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取vpcId, 托管服务时需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId vpcId, 托管服务时需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId, 托管服务时需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId vpcId, 托管服务时需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取subnetId, 托管服务时需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId subnetId, 托管服务时需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置subnetId, 托管服务时需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId subnetId, 托管服务时需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取基础资源包，资源组至少包含一个基础资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasicResourcePackage 基础资源包，资源组至少包含一个基础资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExecutorResourcePackageInfo GetBasicResourcePackage() const;

                    /**
                     * 设置基础资源包，资源组至少包含一个基础资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _basicResourcePackage 基础资源包，资源组至少包含一个基础资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBasicResourcePackage(const ExecutorResourcePackageInfo& _basicResourcePackage);

                    /**
                     * 判断参数 BasicResourcePackage 是否已赋值
                     * @return BasicResourcePackage 是否已赋值
                     * 
                     */
                    bool BasicResourcePackageHasBeenSet() const;

                    /**
                     * 获取增强资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvanceResourcePackage 增强资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExecutorResourcePackageInfo GetAdvanceResourcePackage() const;

                    /**
                     * 设置增强资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advanceResourcePackage 增强资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvanceResourcePackage(const ExecutorResourcePackageInfo& _advanceResourcePackage);

                    /**
                     * 判断参数 AdvanceResourcePackage 是否已赋值
                     * @return AdvanceResourcePackage 是否已赋值
                     * 
                     */
                    bool AdvanceResourcePackageHasBeenSet() const;

                    /**
                     * 获取是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlag 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取区域英文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionEn 区域英文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionEn() const;

                    /**
                     * 设置区域英文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionEn 区域英文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionEn(const std::string& _regionEn);

                    /**
                     * 判断参数 RegionEn 是否已赋值
                     * @return RegionEn 是否已赋值
                     * 
                     */
                    bool RegionEnHasBeenSet() const;

                    /**
                     * 获取区域Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 区域Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置区域Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionId 区域Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取项目展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectDisplayName 项目展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectDisplayName() const;

                    /**
                     * 设置项目展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectDisplayName 项目展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectDisplayName(const std::string& _projectDisplayName);

                    /**
                     * 判断参数 ProjectDisplayName 是否已赋值
                     * @return ProjectDisplayName 是否已赋值
                     * 
                     */
                    bool ProjectDisplayNameHasBeenSet() const;

                    /**
                     * 获取资源组关联项目数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssociateProjectNums 资源组关联项目数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAssociateProjectNums() const;

                    /**
                     * 设置资源组关联项目数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _associateProjectNums 资源组关联项目数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssociateProjectNums(const int64_t& _associateProjectNums);

                    /**
                     * 判断参数 AssociateProjectNums 是否已赋值
                     * @return AssociateProjectNums 是否已赋值
                     * 
                     */
                    bool AssociateProjectNumsHasBeenSet() const;

                    /**
                     * 获取是否锁定，false为未锁定，true为锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLocked 是否锁定，false为未锁定，true为锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsLocked() const;

                    /**
                     * 设置是否锁定，false为未锁定，true为锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLocked 是否锁定，false为未锁定，true为锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLocked(const bool& _isLocked);

                    /**
                     * 判断参数 IsLocked 是否已赋值
                     * @return IsLocked 是否已赋值
                     * 
                     */
                    bool IsLockedHasBeenSet() const;

                    /**
                     * 获取来源类型，0为系统默认，1为自定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceType 来源类型，0为系统默认，1为自定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置来源类型，0为系统默认，1为自定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceType 来源类型，0为系统默认，1为自定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取队列资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MQPackageVO 队列资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MQPackageVO GetMQPackageVO() const;

                    /**
                     * 设置队列资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mQPackageVO 队列资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMQPackageVO(const MQPackageVO& _mQPackageVO);

                    /**
                     * 判断参数 MQPackageVO 是否已赋值
                     * @return MQPackageVO 是否已赋值
                     * 
                     */
                    bool MQPackageVOHasBeenSet() const;

                    /**
                     * 获取是否首选
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstChoice 是否首选
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetFirstChoice() const;

                    /**
                     * 设置是否首选
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstChoice 是否首选
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstChoice(const bool& _firstChoice);

                    /**
                     * 判断参数 FirstChoice 是否已赋值
                     * @return FirstChoice 是否已赋值
                     * 
                     */
                    bool FirstChoiceHasBeenSet() const;

                    /**
                     * 获取资源组python版本绑定详情
                     * @return PythonSubVersions 资源组python版本绑定详情
                     * 
                     */
                    std::vector<std::string> GetPythonSubVersions() const;

                    /**
                     * 设置资源组python版本绑定详情
                     * @param _pythonSubVersions 资源组python版本绑定详情
                     * 
                     */
                    void SetPythonSubVersions(const std::vector<std::string>& _pythonSubVersions);

                    /**
                     * 判断参数 PythonSubVersions 是否已赋值
                     * @return PythonSubVersions 是否已赋值
                     * 
                     */
                    bool PythonSubVersionsHasBeenSet() const;

                private:

                    /**
                     * 执行组id, 仅更新资源时需要传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 执行组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * 执行组描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupDesc;
                    bool m_executorGroupDescHasBeenSet;

                    /**
                     * SCHEDULER （标准调度资源组），CUSTOM_SCHEDULER （自定义调度资源），INTEGRATION（集成资源组），DATA_SERVICE（数据服务资源组）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_executorResourceType;
                    bool m_executorResourceTypeHasBeenSet;

                    /**
                     * 区域中文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * vpcId, 托管服务时需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * subnetId, 托管服务时需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 基础资源包，资源组至少包含一个基础资源包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExecutorResourcePackageInfo m_basicResourcePackage;
                    bool m_basicResourcePackageHasBeenSet;

                    /**
                     * 增强资源包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExecutorResourcePackageInfo m_advanceResourcePackage;
                    bool m_advanceResourcePackageHasBeenSet;

                    /**
                     * 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 区域英文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionEn;
                    bool m_regionEnHasBeenSet;

                    /**
                     * 区域Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectDisplayName;
                    bool m_projectDisplayNameHasBeenSet;

                    /**
                     * 资源组关联项目数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_associateProjectNums;
                    bool m_associateProjectNumsHasBeenSet;

                    /**
                     * 是否锁定，false为未锁定，true为锁定
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isLocked;
                    bool m_isLockedHasBeenSet;

                    /**
                     * 来源类型，0为系统默认，1为自定义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 队列资源包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MQPackageVO m_mQPackageVO;
                    bool m_mQPackageVOHasBeenSet;

                    /**
                     * 是否首选
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_firstChoice;
                    bool m_firstChoiceHasBeenSet;

                    /**
                     * 资源组python版本绑定详情
                     */
                    std::vector<std::string> m_pythonSubVersions;
                    bool m_pythonSubVersionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORRESOURCEGROUPINFO_H_
