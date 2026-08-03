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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_HEADSPECDTO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_HEADSPECDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Env.h>
#include <tencentcloud/dlc/v20210125/model/Label.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * head组规格
                */
                class HeadSpecDTO : public AbstractModel
                {
                public:
                    HeadSpecDTO();
                    ~HeadSpecDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>head/worker名称</p>
                     * @return Name <p>head/worker名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>head/worker名称</p>
                     * @param _name <p>head/worker名称</p>
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
                     * 获取<p>Pod CPU核数</p>
                     * @return PodCpu <p>Pod CPU核数</p>
                     * 
                     */
                    int64_t GetPodCpu() const;

                    /**
                     * 设置<p>Pod CPU核数</p>
                     * @param _podCpu <p>Pod CPU核数</p>
                     * 
                     */
                    void SetPodCpu(const int64_t& _podCpu);

                    /**
                     * 判断参数 PodCpu 是否已赋值
                     * @return PodCpu 是否已赋值
                     * 
                     */
                    bool PodCpuHasBeenSet() const;

                    /**
                     * 获取<p>Pod 内存大小</p>
                     * @return PodMem <p>Pod 内存大小</p>
                     * 
                     */
                    int64_t GetPodMem() const;

                    /**
                     * 设置<p>Pod 内存大小</p>
                     * @param _podMem <p>Pod 内存大小</p>
                     * 
                     */
                    void SetPodMem(const int64_t& _podMem);

                    /**
                     * 判断参数 PodMem 是否已赋值
                     * @return PodMem 是否已赋值
                     * 
                     */
                    bool PodMemHasBeenSet() const;

                    /**
                     * 获取<p>GPU类型</p>
                     * @return GpuType <p>GPU类型</p>
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置<p>GPU类型</p>
                     * @param _gpuType <p>GPU类型</p>
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
                     * 获取<p>GPU数量</p>
                     * @return GpuNum <p>GPU数量</p>
                     * 
                     */
                    int64_t GetGpuNum() const;

                    /**
                     * 设置<p>GPU数量</p>
                     * @param _gpuNum <p>GPU数量</p>
                     * 
                     */
                    void SetGpuNum(const int64_t& _gpuNum);

                    /**
                     * 判断参数 GpuNum 是否已赋值
                     * @return GpuNum 是否已赋值
                     * 
                     */
                    bool GpuNumHasBeenSet() const;

                    /**
                     * 获取<p>环境变量列表</p>
                     * @return Envs <p>环境变量列表</p>
                     * 
                     */
                    std::vector<Env> GetEnvs() const;

                    /**
                     * 设置<p>环境变量列表</p>
                     * @param _envs <p>环境变量列表</p>
                     * 
                     */
                    void SetEnvs(const std::vector<Env>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Labels <p>标签列表</p>
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _labels <p>标签列表</p>
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>资源标签列表（用于追加到 headGroupSpec/workerGroupSpec 的 resources map 中，对应 Ray/K8s 的自定义资源声明），Value 必须为字符串形式的整数</p>
                     * @return ResourcesLabels <p>资源标签列表（用于追加到 headGroupSpec/workerGroupSpec 的 resources map 中，对应 Ray/K8s 的自定义资源声明），Value 必须为字符串形式的整数</p>
                     * 
                     */
                    std::vector<Label> GetResourcesLabels() const;

                    /**
                     * 设置<p>资源标签列表（用于追加到 headGroupSpec/workerGroupSpec 的 resources map 中，对应 Ray/K8s 的自定义资源声明），Value 必须为字符串形式的整数</p>
                     * @param _resourcesLabels <p>资源标签列表（用于追加到 headGroupSpec/workerGroupSpec 的 resources map 中，对应 Ray/K8s 的自定义资源声明），Value 必须为字符串形式的整数</p>
                     * 
                     */
                    void SetResourcesLabels(const std::vector<Label>& _resourcesLabels);

                    /**
                     * 判断参数 ResourcesLabels 是否已赋值
                     * @return ResourcesLabels 是否已赋值
                     * 
                     */
                    bool ResourcesLabelsHasBeenSet() const;

                    /**
                     * 获取<p>Pod数量</p>
                     * @return PodNum <p>Pod数量</p>
                     * 
                     */
                    int64_t GetPodNum() const;

                    /**
                     * 设置<p>Pod数量</p>
                     * @param _podNum <p>Pod数量</p>
                     * 
                     */
                    void SetPodNum(const int64_t& _podNum);

                    /**
                     * 判断参数 PodNum 是否已赋值
                     * @return PodNum 是否已赋值
                     * 
                     */
                    bool PodNumHasBeenSet() const;

                    /**
                     * 获取<p>是否支持高级可用</p>
                     * @return HighAvailability <p>是否支持高级可用</p>
                     * 
                     */
                    bool GetHighAvailability() const;

                    /**
                     * 设置<p>是否支持高级可用</p>
                     * @param _highAvailability <p>是否支持高级可用</p>
                     * 
                     */
                    void SetHighAvailability(const bool& _highAvailability);

                    /**
                     * 判断参数 HighAvailability 是否已赋值
                     * @return HighAvailability 是否已赋值
                     * 
                     */
                    bool HighAvailabilityHasBeenSet() const;

                    /**
                     * 获取<p>资源类型,CPU,GPU</p>
                     * @return ResourceType <p>资源类型,CPU,GPU</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型,CPU,GPU</p>
                     * @param _resourceType <p>资源类型,CPU,GPU</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>机型</p>
                     * @return InstanceType <p>机型</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>机型</p>
                     * @param _instanceType <p>机型</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>规格数量</p>
                     * @return Spec <p>规格数量</p>
                     * 
                     */
                    int64_t GetSpec() const;

                    /**
                     * 设置<p>规格数量</p>
                     * @param _spec <p>规格数量</p>
                     * 
                     */
                    void SetSpec(const int64_t& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取<p>资源ID(唯一)</p>
                     * @return BillingItem <p>资源ID(唯一)</p>
                     * 
                     */
                    std::string GetBillingItem() const;

                    /**
                     * 设置<p>资源ID(唯一)</p>
                     * @param _billingItem <p>资源ID(唯一)</p>
                     * 
                     */
                    void SetBillingItem(const std::string& _billingItem);

                    /**
                     * 判断参数 BillingItem 是否已赋值
                     * @return BillingItem 是否已赋值
                     * 
                     */
                    bool BillingItemHasBeenSet() const;

                private:

                    /**
                     * <p>head/worker名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Pod CPU核数</p>
                     */
                    int64_t m_podCpu;
                    bool m_podCpuHasBeenSet;

                    /**
                     * <p>Pod 内存大小</p>
                     */
                    int64_t m_podMem;
                    bool m_podMemHasBeenSet;

                    /**
                     * <p>GPU类型</p>
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * <p>GPU数量</p>
                     */
                    int64_t m_gpuNum;
                    bool m_gpuNumHasBeenSet;

                    /**
                     * <p>环境变量列表</p>
                     */
                    std::vector<Env> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>资源标签列表（用于追加到 headGroupSpec/workerGroupSpec 的 resources map 中，对应 Ray/K8s 的自定义资源声明），Value 必须为字符串形式的整数</p>
                     */
                    std::vector<Label> m_resourcesLabels;
                    bool m_resourcesLabelsHasBeenSet;

                    /**
                     * <p>Pod数量</p>
                     */
                    int64_t m_podNum;
                    bool m_podNumHasBeenSet;

                    /**
                     * <p>是否支持高级可用</p>
                     */
                    bool m_highAvailability;
                    bool m_highAvailabilityHasBeenSet;

                    /**
                     * <p>资源类型,CPU,GPU</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>机型</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>规格数量</p>
                     */
                    int64_t m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>资源ID(唯一)</p>
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_HEADSPECDTO_H_
