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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_QUEUECONFIG_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_QUEUECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/SystemDisk.h>
#include <tencentcloud/thpc/v20230321/model/DataDisk.h>
#include <tencentcloud/thpc/v20230321/model/InternetAccessible.h>
#include <tencentcloud/thpc/v20230321/model/ExpansionNodeConfig.h>
#include <tencentcloud/thpc/v20230321/model/EnhancedService.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 扩容队列配置。
                */
                class QueueConfig : public AbstractModel
                {
                public:
                    QueueConfig();
                    ~QueueConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>队列名称。</p>
                     * @return QueueName <p>队列名称。</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>队列名称。</p>
                     * @param _queueName <p>队列名称。</p>
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取<p>队列中弹性节点数量最小值。默认值：0。取值范围：0～200。</p>
                     * @return MinSize <p>队列中弹性节点数量最小值。默认值：0。取值范围：0～200。</p>
                     * 
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置<p>队列中弹性节点数量最小值。默认值：0。取值范围：0～200。</p>
                     * @param _minSize <p>队列中弹性节点数量最小值。默认值：0。取值范围：0～200。</p>
                     * 
                     */
                    void SetMinSize(const uint64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取<p>队列中弹性节点数量最大值。默认值：10。取值范围：0～200。</p>
                     * @return MaxSize <p>队列中弹性节点数量最大值。默认值：10。取值范围：0～200。</p>
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置<p>队列中弹性节点数量最大值。默认值：10。取值范围：0～200。</p>
                     * @param _maxSize <p>队列中弹性节点数量最大值。默认值：10。取值范围：0～200。</p>
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启自动扩容。</p>
                     * @return EnableAutoExpansion <p>是否开启自动扩容。</p>
                     * 
                     */
                    bool GetEnableAutoExpansion() const;

                    /**
                     * 设置<p>是否开启自动扩容。</p>
                     * @param _enableAutoExpansion <p>是否开启自动扩容。</p>
                     * 
                     */
                    void SetEnableAutoExpansion(const bool& _enableAutoExpansion);

                    /**
                     * 判断参数 EnableAutoExpansion 是否已赋值
                     * @return EnableAutoExpansion 是否已赋值
                     * 
                     */
                    bool EnableAutoExpansionHasBeenSet() const;

                    /**
                     * 获取<p>是否开启自动缩容。</p>
                     * @return EnableAutoShrink <p>是否开启自动缩容。</p>
                     * 
                     */
                    bool GetEnableAutoShrink() const;

                    /**
                     * 设置<p>是否开启自动缩容。</p>
                     * @param _enableAutoShrink <p>是否开启自动缩容。</p>
                     * 
                     */
                    void SetEnableAutoShrink(const bool& _enableAutoShrink);

                    /**
                     * 判断参数 EnableAutoShrink 是否已赋值
                     * @return EnableAutoShrink 是否已赋值
                     * 
                     */
                    bool EnableAutoShrinkHasBeenSet() const;

                    /**
                     * 获取<p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。目前仅支持公有镜和特定自定义镜像。</p>
                     * @return ImageId <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。目前仅支持公有镜和特定自定义镜像。</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。目前仅支持公有镜和特定自定义镜像。</p>
                     * @param _imageId <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。目前仅支持公有镜和特定自定义镜像。</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * @return SystemDisk <p>节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置<p>节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * @param _systemDisk <p>节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取<p>节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
                     * @return DataDisks <p>节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置<p>节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
                     * @param _dataDisks <p>节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取<p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     * @return InternetAccessible <p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置<p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     * @param _internetAccessible <p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取<p>扩容节点配置信息。</p>
                     * @return ExpansionNodeConfigs <p>扩容节点配置信息。</p>
                     * 
                     */
                    std::vector<ExpansionNodeConfig> GetExpansionNodeConfigs() const;

                    /**
                     * 设置<p>扩容节点配置信息。</p>
                     * @param _expansionNodeConfigs <p>扩容节点配置信息。</p>
                     * 
                     */
                    void SetExpansionNodeConfigs(const std::vector<ExpansionNodeConfig>& _expansionNodeConfigs);

                    /**
                     * 判断参数 ExpansionNodeConfigs 是否已赋值
                     * @return ExpansionNodeConfigs 是否已赋值
                     * 
                     */
                    bool ExpansionNodeConfigsHasBeenSet() const;

                    /**
                     * 获取<p>队列中期望的空闲节点数量（包含弹性节点和静态节点）。默认值：0。队列中，处于空闲状态的节点小于此值，集群会扩容弹性节点；处于空闲状态的节点大于此值，集群会缩容弹性节点。</p>
                     * @return DesiredIdleNodeCapacity <p>队列中期望的空闲节点数量（包含弹性节点和静态节点）。默认值：0。队列中，处于空闲状态的节点小于此值，集群会扩容弹性节点；处于空闲状态的节点大于此值，集群会缩容弹性节点。</p>
                     * 
                     */
                    int64_t GetDesiredIdleNodeCapacity() const;

                    /**
                     * 设置<p>队列中期望的空闲节点数量（包含弹性节点和静态节点）。默认值：0。队列中，处于空闲状态的节点小于此值，集群会扩容弹性节点；处于空闲状态的节点大于此值，集群会缩容弹性节点。</p>
                     * @param _desiredIdleNodeCapacity <p>队列中期望的空闲节点数量（包含弹性节点和静态节点）。默认值：0。队列中，处于空闲状态的节点小于此值，集群会扩容弹性节点；处于空闲状态的节点大于此值，集群会缩容弹性节点。</p>
                     * 
                     */
                    void SetDesiredIdleNodeCapacity(const int64_t& _desiredIdleNodeCapacity);

                    /**
                     * 判断参数 DesiredIdleNodeCapacity 是否已赋值
                     * @return DesiredIdleNodeCapacity 是否已赋值
                     * 
                     */
                    bool DesiredIdleNodeCapacityHasBeenSet() const;

                    /**
                     * 获取<p>队列中期望的总节点数。</p>
                     * @return DesiredNodeCount <p>队列中期望的总节点数。</p>
                     * 
                     */
                    int64_t GetDesiredNodeCount() const;

                    /**
                     * 设置<p>队列中期望的总节点数。</p>
                     * @param _desiredNodeCount <p>队列中期望的总节点数。</p>
                     * 
                     */
                    void SetDesiredNodeCount(const int64_t& _desiredNodeCount);

                    /**
                     * 判断参数 DesiredNodeCount 是否已赋值
                     * @return DesiredNodeCount 是否已赋值
                     * 
                     */
                    bool DesiredNodeCountHasBeenSet() const;

                    /**
                     * 获取<p>扩容比例。默认值：100。取值范围：1～100。<br>如果扩容比例为50，那么每轮只会扩容当前作业负载所需的50%数量的节点。</p>
                     * @return ScaleOutRatio <p>扩容比例。默认值：100。取值范围：1～100。<br>如果扩容比例为50，那么每轮只会扩容当前作业负载所需的50%数量的节点。</p>
                     * 
                     */
                    int64_t GetScaleOutRatio() const;

                    /**
                     * 设置<p>扩容比例。默认值：100。取值范围：1～100。<br>如果扩容比例为50，那么每轮只会扩容当前作业负载所需的50%数量的节点。</p>
                     * @param _scaleOutRatio <p>扩容比例。默认值：100。取值范围：1～100。<br>如果扩容比例为50，那么每轮只会扩容当前作业负载所需的50%数量的节点。</p>
                     * 
                     */
                    void SetScaleOutRatio(const int64_t& _scaleOutRatio);

                    /**
                     * 判断参数 ScaleOutRatio 是否已赋值
                     * @return ScaleOutRatio 是否已赋值
                     * 
                     */
                    bool ScaleOutRatioHasBeenSet() const;

                    /**
                     * 获取<p>比例扩容阈值。默认值：0。取值范围：0～200。<br>当作业负载需要扩容节点数量大于此值，当前扩容轮次按照ScaleOutRatio配置的比例进行扩容。当作业负载需要扩容节点数量小于此值，当前扩容轮次扩容当前作业负载所需数量的节点。<br>此参数配合ScaleOutRatio参数进行使用，用于比例扩容场景下，在作业负载所需节点数量较小时，加快收敛速度。</p>
                     * @return ScaleOutNodeThreshold <p>比例扩容阈值。默认值：0。取值范围：0～200。<br>当作业负载需要扩容节点数量大于此值，当前扩容轮次按照ScaleOutRatio配置的比例进行扩容。当作业负载需要扩容节点数量小于此值，当前扩容轮次扩容当前作业负载所需数量的节点。<br>此参数配合ScaleOutRatio参数进行使用，用于比例扩容场景下，在作业负载所需节点数量较小时，加快收敛速度。</p>
                     * 
                     */
                    int64_t GetScaleOutNodeThreshold() const;

                    /**
                     * 设置<p>比例扩容阈值。默认值：0。取值范围：0～200。<br>当作业负载需要扩容节点数量大于此值，当前扩容轮次按照ScaleOutRatio配置的比例进行扩容。当作业负载需要扩容节点数量小于此值，当前扩容轮次扩容当前作业负载所需数量的节点。<br>此参数配合ScaleOutRatio参数进行使用，用于比例扩容场景下，在作业负载所需节点数量较小时，加快收敛速度。</p>
                     * @param _scaleOutNodeThreshold <p>比例扩容阈值。默认值：0。取值范围：0～200。<br>当作业负载需要扩容节点数量大于此值，当前扩容轮次按照ScaleOutRatio配置的比例进行扩容。当作业负载需要扩容节点数量小于此值，当前扩容轮次扩容当前作业负载所需数量的节点。<br>此参数配合ScaleOutRatio参数进行使用，用于比例扩容场景下，在作业负载所需节点数量较小时，加快收敛速度。</p>
                     * 
                     */
                    void SetScaleOutNodeThreshold(const int64_t& _scaleOutNodeThreshold);

                    /**
                     * 判断参数 ScaleOutNodeThreshold 是否已赋值
                     * @return ScaleOutNodeThreshold 是否已赋值
                     * 
                     */
                    bool ScaleOutNodeThresholdHasBeenSet() const;

                    /**
                     * 获取<p>每轮扩容最大节点个数。默认值：100。取值范围：1～100。</p>
                     * @return MaxNodesPerCycle <p>每轮扩容最大节点个数。默认值：100。取值范围：1～100。</p>
                     * 
                     */
                    int64_t GetMaxNodesPerCycle() const;

                    /**
                     * 设置<p>每轮扩容最大节点个数。默认值：100。取值范围：1～100。</p>
                     * @param _maxNodesPerCycle <p>每轮扩容最大节点个数。默认值：100。取值范围：1～100。</p>
                     * 
                     */
                    void SetMaxNodesPerCycle(const int64_t& _maxNodesPerCycle);

                    /**
                     * 判断参数 MaxNodesPerCycle 是否已赋值
                     * @return MaxNodesPerCycle 是否已赋值
                     * 
                     */
                    bool MaxNodesPerCycleHasBeenSet() const;

                    /**
                     * 获取<p>扩容过程中，作业的内存在匹配实例机型时增大比例（不会影响作业提交的内存大小，只影响匹配计算过程）。<br><br>针对场景：由于实例机型的总内存会大于实例内部的可用内存，16GB内存规格的实例，实例操作系统内的可用内存只有约14.9GB内存。假设此时提交一个需要15GB内存的作业，</p><ul><li>当ScaleUpMemRatio=0时，会匹配到16GB内存规格的实例,但是由于操作系统内的可用内存为14.9GB小于作业所需的15GB，扩容出来的实例作业无法运行起来。</li><li>当ScaleUpMemRatio=10时，匹配实例规格会按照15*(1+10%)=16.5GB来进行实例规格匹配，则不会匹配到16GB的实例，而是更大内存规格的实例来保证作业能够被运行起来。</li></ul>
                     * @return ScaleUpMemRatio <p>扩容过程中，作业的内存在匹配实例机型时增大比例（不会影响作业提交的内存大小，只影响匹配计算过程）。<br><br>针对场景：由于实例机型的总内存会大于实例内部的可用内存，16GB内存规格的实例，实例操作系统内的可用内存只有约14.9GB内存。假设此时提交一个需要15GB内存的作业，</p><ul><li>当ScaleUpMemRatio=0时，会匹配到16GB内存规格的实例,但是由于操作系统内的可用内存为14.9GB小于作业所需的15GB，扩容出来的实例作业无法运行起来。</li><li>当ScaleUpMemRatio=10时，匹配实例规格会按照15*(1+10%)=16.5GB来进行实例规格匹配，则不会匹配到16GB的实例，而是更大内存规格的实例来保证作业能够被运行起来。</li></ul>
                     * 
                     */
                    int64_t GetScaleUpMemRatio() const;

                    /**
                     * 设置<p>扩容过程中，作业的内存在匹配实例机型时增大比例（不会影响作业提交的内存大小，只影响匹配计算过程）。<br><br>针对场景：由于实例机型的总内存会大于实例内部的可用内存，16GB内存规格的实例，实例操作系统内的可用内存只有约14.9GB内存。假设此时提交一个需要15GB内存的作业，</p><ul><li>当ScaleUpMemRatio=0时，会匹配到16GB内存规格的实例,但是由于操作系统内的可用内存为14.9GB小于作业所需的15GB，扩容出来的实例作业无法运行起来。</li><li>当ScaleUpMemRatio=10时，匹配实例规格会按照15*(1+10%)=16.5GB来进行实例规格匹配，则不会匹配到16GB的实例，而是更大内存规格的实例来保证作业能够被运行起来。</li></ul>
                     * @param _scaleUpMemRatio <p>扩容过程中，作业的内存在匹配实例机型时增大比例（不会影响作业提交的内存大小，只影响匹配计算过程）。<br><br>针对场景：由于实例机型的总内存会大于实例内部的可用内存，16GB内存规格的实例，实例操作系统内的可用内存只有约14.9GB内存。假设此时提交一个需要15GB内存的作业，</p><ul><li>当ScaleUpMemRatio=0时，会匹配到16GB内存规格的实例,但是由于操作系统内的可用内存为14.9GB小于作业所需的15GB，扩容出来的实例作业无法运行起来。</li><li>当ScaleUpMemRatio=10时，匹配实例规格会按照15*(1+10%)=16.5GB来进行实例规格匹配，则不会匹配到16GB的实例，而是更大内存规格的实例来保证作业能够被运行起来。</li></ul>
                     * 
                     */
                    void SetScaleUpMemRatio(const int64_t& _scaleUpMemRatio);

                    /**
                     * 判断参数 ScaleUpMemRatio 是否已赋值
                     * @return ScaleUpMemRatio 是否已赋值
                     * 
                     */
                    bool ScaleUpMemRatioHasBeenSet() const;

                    /**
                     * 获取<p>增强服务。通过该参数可以指定是否开启云安全、腾讯云可观测平台等服务。若不指定该参数，则默认开启腾讯云可观测平台、云安全服务、自动化助手服务。</p>
                     * @return EnhancedService <p>增强服务。通过该参数可以指定是否开启云安全、腾讯云可观测平台等服务。若不指定该参数，则默认开启腾讯云可观测平台、云安全服务、自动化助手服务。</p>
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置<p>增强服务。通过该参数可以指定是否开启云安全、腾讯云可观测平台等服务。若不指定该参数，则默认开启腾讯云可观测平台、云安全服务、自动化助手服务。</p>
                     * @param _enhancedService <p>增强服务。通过该参数可以指定是否开启云安全、腾讯云可观测平台等服务。若不指定该参数，则默认开启腾讯云可观测平台、云安全服务、自动化助手服务。</p>
                     * 
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     * 
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取<p>扩容实例模板，可以在cvm侧进行设置</p>
                     * @return LaunchTemplateIds <p>扩容实例模板，可以在cvm侧进行设置</p>
                     * 
                     */
                    std::vector<std::string> GetLaunchTemplateIds() const;

                    /**
                     * 设置<p>扩容实例模板，可以在cvm侧进行设置</p>
                     * @param _launchTemplateIds <p>扩容实例模板，可以在cvm侧进行设置</p>
                     * 
                     */
                    void SetLaunchTemplateIds(const std::vector<std::string>& _launchTemplateIds);

                    /**
                     * 判断参数 LaunchTemplateIds 是否已赋值
                     * @return LaunchTemplateIds 是否已赋值
                     * 
                     */
                    bool LaunchTemplateIdsHasBeenSet() const;

                private:

                    /**
                     * <p>队列名称。</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>队列中弹性节点数量最小值。默认值：0。取值范围：0～200。</p>
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * <p>队列中弹性节点数量最大值。默认值：10。取值范围：0～200。</p>
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * <p>是否开启自动扩容。</p>
                     */
                    bool m_enableAutoExpansion;
                    bool m_enableAutoExpansionHasBeenSet;

                    /**
                     * <p>是否开启自动缩容。</p>
                     */
                    bool m_enableAutoShrink;
                    bool m_enableAutoShrinkHasBeenSet;

                    /**
                     * <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。目前仅支持公有镜和特定自定义镜像。</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * <p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * <p>扩容节点配置信息。</p>
                     */
                    std::vector<ExpansionNodeConfig> m_expansionNodeConfigs;
                    bool m_expansionNodeConfigsHasBeenSet;

                    /**
                     * <p>队列中期望的空闲节点数量（包含弹性节点和静态节点）。默认值：0。队列中，处于空闲状态的节点小于此值，集群会扩容弹性节点；处于空闲状态的节点大于此值，集群会缩容弹性节点。</p>
                     */
                    int64_t m_desiredIdleNodeCapacity;
                    bool m_desiredIdleNodeCapacityHasBeenSet;

                    /**
                     * <p>队列中期望的总节点数。</p>
                     */
                    int64_t m_desiredNodeCount;
                    bool m_desiredNodeCountHasBeenSet;

                    /**
                     * <p>扩容比例。默认值：100。取值范围：1～100。<br>如果扩容比例为50，那么每轮只会扩容当前作业负载所需的50%数量的节点。</p>
                     */
                    int64_t m_scaleOutRatio;
                    bool m_scaleOutRatioHasBeenSet;

                    /**
                     * <p>比例扩容阈值。默认值：0。取值范围：0～200。<br>当作业负载需要扩容节点数量大于此值，当前扩容轮次按照ScaleOutRatio配置的比例进行扩容。当作业负载需要扩容节点数量小于此值，当前扩容轮次扩容当前作业负载所需数量的节点。<br>此参数配合ScaleOutRatio参数进行使用，用于比例扩容场景下，在作业负载所需节点数量较小时，加快收敛速度。</p>
                     */
                    int64_t m_scaleOutNodeThreshold;
                    bool m_scaleOutNodeThresholdHasBeenSet;

                    /**
                     * <p>每轮扩容最大节点个数。默认值：100。取值范围：1～100。</p>
                     */
                    int64_t m_maxNodesPerCycle;
                    bool m_maxNodesPerCycleHasBeenSet;

                    /**
                     * <p>扩容过程中，作业的内存在匹配实例机型时增大比例（不会影响作业提交的内存大小，只影响匹配计算过程）。<br><br>针对场景：由于实例机型的总内存会大于实例内部的可用内存，16GB内存规格的实例，实例操作系统内的可用内存只有约14.9GB内存。假设此时提交一个需要15GB内存的作业，</p><ul><li>当ScaleUpMemRatio=0时，会匹配到16GB内存规格的实例,但是由于操作系统内的可用内存为14.9GB小于作业所需的15GB，扩容出来的实例作业无法运行起来。</li><li>当ScaleUpMemRatio=10时，匹配实例规格会按照15*(1+10%)=16.5GB来进行实例规格匹配，则不会匹配到16GB的实例，而是更大内存规格的实例来保证作业能够被运行起来。</li></ul>
                     */
                    int64_t m_scaleUpMemRatio;
                    bool m_scaleUpMemRatioHasBeenSet;

                    /**
                     * <p>增强服务。通过该参数可以指定是否开启云安全、腾讯云可观测平台等服务。若不指定该参数，则默认开启腾讯云可观测平台、云安全服务、自动化助手服务。</p>
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * <p>扩容实例模板，可以在cvm侧进行设置</p>
                     */
                    std::vector<std::string> m_launchTemplateIds;
                    bool m_launchTemplateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_QUEUECONFIG_H_
