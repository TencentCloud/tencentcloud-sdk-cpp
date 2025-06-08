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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORRESOURCEPACKAGEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORRESOURCEPACKAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ExecutorResourcePackageExtInfo.h>
#include <tencentcloud/wedata/v20210820/model/ExecutorResourcePackageUsageInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 执行资源包
                */
                class ExecutorResourcePackageInfo : public AbstractModel
                {
                public:
                    ExecutorResourcePackageInfo();
                    ~ExecutorResourcePackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源包规格相关：资源包个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePackageNum 资源包规格相关：资源包个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResourcePackageNum() const;

                    /**
                     * 设置资源包规格相关：资源包个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePackageNum 资源包规格相关：资源包个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourcePackageNum(const int64_t& _resourcePackageNum);

                    /**
                     * 判断参数 ResourcePackageNum 是否已赋值
                     * @return ResourcePackageNum 是否已赋值
                     * 
                     */
                    bool ResourcePackageNumHasBeenSet() const;

                    /**
                     * 获取资源包规格相关：cpu个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuNum 资源包规格相关：cpu个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置资源包规格相关：cpu个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuNum 资源包规格相关：cpu个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuNum(const int64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取资源包id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorResourcePackageId 资源包id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorResourcePackageId() const;

                    /**
                     * 设置资源包id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorResourcePackageId 资源包id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorResourcePackageId(const std::string& _executorResourcePackageId);

                    /**
                     * 判断参数 ExecutorResourcePackageId 是否已赋值
                     * @return ExecutorResourcePackageId 是否已赋值
                     * 
                     */
                    bool ExecutorResourcePackageIdHasBeenSet() const;

                    /**
                     * 获取资源包规格相关：内存大小，单位:G
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemSize 资源包规格相关：内存大小，单位:G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置资源包规格相关：内存大小，单位:G
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memSize 资源包规格相关：内存大小，单位:G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取资源包状态， /**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
    EXPIRED(9);
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 资源包状态， /**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
    EXPIRED(9);
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置资源包状态， /**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
    EXPIRED(9);
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 资源包状态， /**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
    EXPIRED(9);
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
                     * 获取资源包状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDescription 资源包状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusDescription() const;

                    /**
                     * 设置资源包状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusDescription 资源包状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusDescription(const std::string& _statusDescription);

                    /**
                     * 判断参数 StatusDescription 是否已赋值
                     * @return StatusDescription 是否已赋值
                     * 
                     */
                    bool StatusDescriptionHasBeenSet() const;

                    /**
                     * 获取资源包到期时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 资源包到期时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置资源包到期时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 资源包到期时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取资源包额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtInfo 资源包额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExecutorResourcePackageExtInfo GetExtInfo() const;

                    /**
                     * 设置资源包额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extInfo 资源包额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtInfo(const ExecutorResourcePackageExtInfo& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取绑定的项目id，可为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 绑定的项目id，可为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置绑定的项目id，可为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 绑定的项目id，可为空
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
                     * 获取资源组绑定的时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectBindTime 资源组绑定的时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProjectBindTime() const;

                    /**
                     * 设置资源组绑定的时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectBindTime 资源组绑定的时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectBindTime(const int64_t& _projectBindTime);

                    /**
                     * 判断参数 ProjectBindTime 是否已赋值
                     * @return ProjectBindTime 是否已赋值
                     * 
                     */
                    bool ProjectBindTimeHasBeenSet() const;

                    /**
                     * 获取资源包使用状态: cpu使用，内存使用及趋势
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePackageUsage 资源包使用状态: cpu使用，内存使用及趋势
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExecutorResourcePackageUsageInfo GetResourcePackageUsage() const;

                    /**
                     * 设置资源包使用状态: cpu使用，内存使用及趋势
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePackageUsage 资源包使用状态: cpu使用，内存使用及趋势
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourcePackageUsage(const ExecutorResourcePackageUsageInfo& _resourcePackageUsage);

                    /**
                     * 判断参数 ResourcePackageUsage 是否已赋值
                     * @return ResourcePackageUsage 是否已赋值
                     * 
                     */
                    bool ResourcePackageUsageHasBeenSet() const;

                    /**
                     * 获取计费相关：产品资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductResourceIdList 计费相关：产品资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetProductResourceIdList() const;

                    /**
                     * 设置计费相关：产品资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productResourceIdList 计费相关：产品资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductResourceIdList(const std::vector<int64_t>& _productResourceIdList);

                    /**
                     * 判断参数 ProductResourceIdList 是否已赋值
                     * @return ProductResourceIdList 是否已赋值
                     * 
                     */
                    bool ProductResourceIdListHasBeenSet() const;

                    /**
                     * 获取生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeTime 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLifeTime() const;

                    /**
                     * 设置生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeTime 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifeTime(const int64_t& _lifeTime);

                    /**
                     * 判断参数 LifeTime 是否已赋值
                     * @return LifeTime 是否已赋值
                     * 
                     */
                    bool LifeTimeHasBeenSet() const;

                    /**
                     * 获取私有网络Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 私有网络Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 私有网络Id
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
                     * 获取私有网络名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcName 私有网络名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置私有网络名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcName 私有网络名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 子网Id
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
                     * 获取子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetName 子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetName 子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取执行资源相关：资源规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceStandard 执行资源相关：资源规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceStandard() const;

                    /**
                     * 设置执行资源相关：资源规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceStandard 执行资源相关：资源规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceStandard(const std::string& _resourceStandard);

                    /**
                     * 判断参数 ResourceStandard 是否已赋值
                     * @return ResourceStandard 是否已赋值
                     * 
                     */
                    bool ResourceStandardHasBeenSet() const;

                    /**
                     * 获取内存总数
                     * @return TotalMemory 内存总数
                     * 
                     */
                    uint64_t GetTotalMemory() const;

                    /**
                     * 设置内存总数
                     * @param _totalMemory 内存总数
                     * 
                     */
                    void SetTotalMemory(const uint64_t& _totalMemory);

                    /**
                     * 判断参数 TotalMemory 是否已赋值
                     * @return TotalMemory 是否已赋值
                     * 
                     */
                    bool TotalMemoryHasBeenSet() const;

                private:

                    /**
                     * 资源包规格相关：资源包个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resourcePackageNum;
                    bool m_resourcePackageNumHasBeenSet;

                    /**
                     * 资源包规格相关：cpu个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * 资源包id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorResourcePackageId;
                    bool m_executorResourcePackageIdHasBeenSet;

                    /**
                     * 资源包规格相关：内存大小，单位:G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 资源包状态， /**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
    EXPIRED(9);
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 资源包状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDescription;
                    bool m_statusDescriptionHasBeenSet;

                    /**
                     * 资源包到期时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 资源包额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExecutorResourcePackageExtInfo m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * 绑定的项目id，可为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 资源组绑定的时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_projectBindTime;
                    bool m_projectBindTimeHasBeenSet;

                    /**
                     * 资源包使用状态: cpu使用，内存使用及趋势
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExecutorResourcePackageUsageInfo m_resourcePackageUsage;
                    bool m_resourcePackageUsageHasBeenSet;

                    /**
                     * 计费相关：产品资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_productResourceIdList;
                    bool m_productResourceIdListHasBeenSet;

                    /**
                     * 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lifeTime;
                    bool m_lifeTimeHasBeenSet;

                    /**
                     * 私有网络Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 执行资源相关：资源规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceStandard;
                    bool m_resourceStandardHasBeenSet;

                    /**
                     * 内存总数
                     */
                    uint64_t m_totalMemory;
                    bool m_totalMemoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORRESOURCEPACKAGEINFO_H_
