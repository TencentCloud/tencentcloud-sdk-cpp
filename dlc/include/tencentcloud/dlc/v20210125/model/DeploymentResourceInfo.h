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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DEPLOYMENTRESOURCEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DEPLOYMENTRESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 部署的资源规格
                */
                class DeploymentResourceInfo : public AbstractModel
                {
                public:
                    DeploymentResourceInfo();
                    ~DeploymentResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>部署业务唯一标识（deploymentUid）</p>
                     * @return DeploymentId <p>部署业务唯一标识（deploymentUid）</p>
                     * 
                     */
                    std::string GetDeploymentId() const;

                    /**
                     * 设置<p>部署业务唯一标识（deploymentUid）</p>
                     * @param _deploymentId <p>部署业务唯一标识（deploymentUid）</p>
                     * 
                     */
                    void SetDeploymentId(const std::string& _deploymentId);

                    /**
                     * 判断参数 DeploymentId 是否已赋值
                     * @return DeploymentId 是否已赋值
                     * 
                     */
                    bool DeploymentIdHasBeenSet() const;

                    /**
                     * 获取<p>部署名称</p>
                     * @return DeploymentName <p>部署名称</p>
                     * 
                     */
                    std::string GetDeploymentName() const;

                    /**
                     * 设置<p>部署名称</p>
                     * @param _deploymentName <p>部署名称</p>
                     * 
                     */
                    void SetDeploymentName(const std::string& _deploymentName);

                    /**
                     * 判断参数 DeploymentName 是否已赋值
                     * @return DeploymentName 是否已赋值
                     * 
                     */
                    bool DeploymentNameHasBeenSet() const;

                    /**
                     * 获取<p>部署状态</p>
                     * @return Status <p>部署状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>部署状态</p>
                     * @param _status <p>部署状态</p>
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
                     * 获取<p>Worker 节点 BillingItem</p>
                     * @return WorkerBillingItem <p>Worker 节点 BillingItem</p>
                     * 
                     */
                    std::string GetWorkerBillingItem() const;

                    /**
                     * 设置<p>Worker 节点 BillingItem</p>
                     * @param _workerBillingItem <p>Worker 节点 BillingItem</p>
                     * 
                     */
                    void SetWorkerBillingItem(const std::string& _workerBillingItem);

                    /**
                     * 判断参数 WorkerBillingItem 是否已赋值
                     * @return WorkerBillingItem 是否已赋值
                     * 
                     */
                    bool WorkerBillingItemHasBeenSet() const;

                    /**
                     * 获取<p>Worker 节点规格倍数</p>
                     * @return WorkerSpec <p>Worker 节点规格倍数</p>
                     * 
                     */
                    int64_t GetWorkerSpec() const;

                    /**
                     * 设置<p>Worker 节点规格倍数</p>
                     * @param _workerSpec <p>Worker 节点规格倍数</p>
                     * 
                     */
                    void SetWorkerSpec(const int64_t& _workerSpec);

                    /**
                     * 判断参数 WorkerSpec 是否已赋值
                     * @return WorkerSpec 是否已赋值
                     * 
                     */
                    bool WorkerSpecHasBeenSet() const;

                    /**
                     * 获取<p>Worker 节点资源类型，枚举： • GU — GPU 计费单位 • CU — CPU 计费单位</p>
                     * @return WorkerResourceType <p>Worker 节点资源类型，枚举： • GU — GPU 计费单位 • CU — CPU 计费单位</p>
                     * 
                     */
                    std::string GetWorkerResourceType() const;

                    /**
                     * 设置<p>Worker 节点资源类型，枚举： • GU — GPU 计费单位 • CU — CPU 计费单位</p>
                     * @param _workerResourceType <p>Worker 节点资源类型，枚举： • GU — GPU 计费单位 • CU — CPU 计费单位</p>
                     * 
                     */
                    void SetWorkerResourceType(const std::string& _workerResourceType);

                    /**
                     * 判断参数 WorkerResourceType 是否已赋值
                     * @return WorkerResourceType 是否已赋值
                     * 
                     */
                    bool WorkerResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Head 节点 BillingItem</p>
                     * @return HeadBillingItem <p>Head 节点 BillingItem</p>
                     * 
                     */
                    std::string GetHeadBillingItem() const;

                    /**
                     * 设置<p>Head 节点 BillingItem</p>
                     * @param _headBillingItem <p>Head 节点 BillingItem</p>
                     * 
                     */
                    void SetHeadBillingItem(const std::string& _headBillingItem);

                    /**
                     * 判断参数 HeadBillingItem 是否已赋值
                     * @return HeadBillingItem 是否已赋值
                     * 
                     */
                    bool HeadBillingItemHasBeenSet() const;

                    /**
                     * 获取<p>Head 节点规格倍数</p>
                     * @return HeadSpec <p>Head 节点规格倍数</p>
                     * 
                     */
                    int64_t GetHeadSpec() const;

                    /**
                     * 设置<p>Head 节点规格倍数</p>
                     * @param _headSpec <p>Head 节点规格倍数</p>
                     * 
                     */
                    void SetHeadSpec(const int64_t& _headSpec);

                    /**
                     * 判断参数 HeadSpec 是否已赋值
                     * @return HeadSpec 是否已赋值
                     * 
                     */
                    bool HeadSpecHasBeenSet() const;

                    /**
                     * 获取<p>Head 节点资源类型。当前实现恒为 CU</p>
                     * @return HeadResourceType <p>Head 节点资源类型。当前实现恒为 CU</p>
                     * 
                     */
                    std::string GetHeadResourceType() const;

                    /**
                     * 设置<p>Head 节点资源类型。当前实现恒为 CU</p>
                     * @param _headResourceType <p>Head 节点资源类型。当前实现恒为 CU</p>
                     * 
                     */
                    void SetHeadResourceType(const std::string& _headResourceType);

                    /**
                     * 判断参数 HeadResourceType 是否已赋值
                     * @return HeadResourceType 是否已赋值
                     * 
                     */
                    bool HeadResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>GPU 型号。CPU 部署或型号未知时为空串 &quot;&quot;</p>
                     * @return GpuType <p>GPU 型号。CPU 部署或型号未知时为空串 &quot;&quot;</p>
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置<p>GPU 型号。CPU 部署或型号未知时为空串 &quot;&quot;</p>
                     * @param _gpuType <p>GPU 型号。CPU 部署或型号未知时为空串 &quot;&quot;</p>
                     * 
                     */
                    void SetGpuType(const std::string& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     * 
                     */
                    bool GpuTypeHasBeenSet() const;

                    /**
                     * 获取<p>期望副本数</p>
                     * @return Replicas <p>期望副本数</p>
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置<p>期望副本数</p>
                     * @param _replicas <p>期望副本数</p>
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                private:

                    /**
                     * <p>部署业务唯一标识（deploymentUid）</p>
                     */
                    std::string m_deploymentId;
                    bool m_deploymentIdHasBeenSet;

                    /**
                     * <p>部署名称</p>
                     */
                    std::string m_deploymentName;
                    bool m_deploymentNameHasBeenSet;

                    /**
                     * <p>部署状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Worker 节点 BillingItem</p>
                     */
                    std::string m_workerBillingItem;
                    bool m_workerBillingItemHasBeenSet;

                    /**
                     * <p>Worker 节点规格倍数</p>
                     */
                    int64_t m_workerSpec;
                    bool m_workerSpecHasBeenSet;

                    /**
                     * <p>Worker 节点资源类型，枚举： • GU — GPU 计费单位 • CU — CPU 计费单位</p>
                     */
                    std::string m_workerResourceType;
                    bool m_workerResourceTypeHasBeenSet;

                    /**
                     * <p>Head 节点 BillingItem</p>
                     */
                    std::string m_headBillingItem;
                    bool m_headBillingItemHasBeenSet;

                    /**
                     * <p>Head 节点规格倍数</p>
                     */
                    int64_t m_headSpec;
                    bool m_headSpecHasBeenSet;

                    /**
                     * <p>Head 节点资源类型。当前实现恒为 CU</p>
                     */
                    std::string m_headResourceType;
                    bool m_headResourceTypeHasBeenSet;

                    /**
                     * <p>GPU 型号。CPU 部署或型号未知时为空串 &quot;&quot;</p>
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * <p>期望副本数</p>
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DEPLOYMENTRESOURCEINFO_H_
