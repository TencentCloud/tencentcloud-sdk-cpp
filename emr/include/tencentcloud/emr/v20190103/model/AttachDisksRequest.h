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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ATTACHDISKSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ATTACHDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeSpecDiskV2.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * AttachDisks请求参数结构体
                */
                class AttachDisksRequest : public AbstractModel
                {
                public:
                    AttachDisksRequest();
                    ~AttachDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EMR集群实例ID
                     * @return InstanceId EMR集群实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置EMR集群实例ID
                     * @param _instanceId EMR集群实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取需要挂载的云盘ID
                     * @return DiskIds 需要挂载的云盘ID
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置需要挂载的云盘ID
                     * @param _diskIds 需要挂载的云盘ID
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取挂载模式，取值范围：
AUTO_RENEW：自动续费
ALIGN_DEADLINE：自动对其到期时间
                     * @return AlignType 挂载模式，取值范围：
AUTO_RENEW：自动续费
ALIGN_DEADLINE：自动对其到期时间
                     * 
                     */
                    std::string GetAlignType() const;

                    /**
                     * 设置挂载模式，取值范围：
AUTO_RENEW：自动续费
ALIGN_DEADLINE：自动对其到期时间
                     * @param _alignType 挂载模式，取值范围：
AUTO_RENEW：自动续费
ALIGN_DEADLINE：自动对其到期时间
                     * 
                     */
                    void SetAlignType(const std::string& _alignType);

                    /**
                     * 判断参数 AlignType 是否已赋值
                     * @return AlignType 是否已赋值
                     * 
                     */
                    bool AlignTypeHasBeenSet() const;

                    /**
                     * 获取需要挂载的cvm节点id列表
                     * @return CvmInstanceIds 需要挂载的cvm节点id列表
                     * 
                     */
                    std::vector<std::string> GetCvmInstanceIds() const;

                    /**
                     * 设置需要挂载的cvm节点id列表
                     * @param _cvmInstanceIds 需要挂载的cvm节点id列表
                     * 
                     */
                    void SetCvmInstanceIds(const std::vector<std::string>& _cvmInstanceIds);

                    /**
                     * 判断参数 CvmInstanceIds 是否已赋值
                     * @return CvmInstanceIds 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdsHasBeenSet() const;

                    /**
                     * 获取是否是新购云盘进行挂载
                     * @return CreateDisk 是否是新购云盘进行挂载
                     * 
                     */
                    bool GetCreateDisk() const;

                    /**
                     * 设置是否是新购云盘进行挂载
                     * @param _createDisk 是否是新购云盘进行挂载
                     * 
                     */
                    void SetCreateDisk(const bool& _createDisk);

                    /**
                     * 判断参数 CreateDisk 是否已赋值
                     * @return CreateDisk 是否已赋值
                     * 
                     */
                    bool CreateDiskHasBeenSet() const;

                    /**
                     * 获取新购云盘规格
                     * @return DiskSpec 新购云盘规格
                     * 
                     */
                    NodeSpecDiskV2 GetDiskSpec() const;

                    /**
                     * 设置新购云盘规格
                     * @param _diskSpec 新购云盘规格
                     * 
                     */
                    void SetDiskSpec(const NodeSpecDiskV2& _diskSpec);

                    /**
                     * 判断参数 DiskSpec 是否已赋值
                     * @return DiskSpec 是否已赋值
                     * 
                     */
                    bool DiskSpecHasBeenSet() const;

                    /**
                     * 获取可选参数，不传该参数则仅执行挂载操作。传入True时，会在挂载成功后将云硬盘设置为随云主机销毁模式，仅对按量计费云硬盘有效。
                     * @return DeleteWithInstance 可选参数，不传该参数则仅执行挂载操作。传入True时，会在挂载成功后将云硬盘设置为随云主机销毁模式，仅对按量计费云硬盘有效。
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置可选参数，不传该参数则仅执行挂载操作。传入True时，会在挂载成功后将云硬盘设置为随云主机销毁模式，仅对按量计费云硬盘有效。
                     * @param _deleteWithInstance 可选参数，不传该参数则仅执行挂载操作。传入True时，会在挂载成功后将云硬盘设置为随云主机销毁模式，仅对按量计费云硬盘有效。
                     * 
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     * 
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                    /**
                     * 获取新挂磁盘时可支持配置的服务名称列表
                     * @return SelectiveConfServices 新挂磁盘时可支持配置的服务名称列表
                     * 
                     */
                    std::vector<std::string> GetSelectiveConfServices() const;

                    /**
                     * 设置新挂磁盘时可支持配置的服务名称列表
                     * @param _selectiveConfServices 新挂磁盘时可支持配置的服务名称列表
                     * 
                     */
                    void SetSelectiveConfServices(const std::vector<std::string>& _selectiveConfServices);

                    /**
                     * 判断参数 SelectiveConfServices 是否已赋值
                     * @return SelectiveConfServices 是否已赋值
                     * 
                     */
                    bool SelectiveConfServicesHasBeenSet() const;

                private:

                    /**
                     * EMR集群实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 需要挂载的云盘ID
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * 挂载模式，取值范围：
AUTO_RENEW：自动续费
ALIGN_DEADLINE：自动对其到期时间
                     */
                    std::string m_alignType;
                    bool m_alignTypeHasBeenSet;

                    /**
                     * 需要挂载的cvm节点id列表
                     */
                    std::vector<std::string> m_cvmInstanceIds;
                    bool m_cvmInstanceIdsHasBeenSet;

                    /**
                     * 是否是新购云盘进行挂载
                     */
                    bool m_createDisk;
                    bool m_createDiskHasBeenSet;

                    /**
                     * 新购云盘规格
                     */
                    NodeSpecDiskV2 m_diskSpec;
                    bool m_diskSpecHasBeenSet;

                    /**
                     * 可选参数，不传该参数则仅执行挂载操作。传入True时，会在挂载成功后将云硬盘设置为随云主机销毁模式，仅对按量计费云硬盘有效。
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * 新挂磁盘时可支持配置的服务名称列表
                     */
                    std::vector<std::string> m_selectiveConfServices;
                    bool m_selectiveConfServicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ATTACHDISKSREQUEST_H_
