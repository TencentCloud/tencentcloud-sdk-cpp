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

#ifndef TENCENTCLOUD_THPC_V20220401_MODEL_QUEUECONFIG_H_
#define TENCENTCLOUD_THPC_V20220401_MODEL_QUEUECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20220401/model/SystemDisk.h>
#include <tencentcloud/thpc/v20220401/model/DataDisk.h>
#include <tencentcloud/thpc/v20220401/model/InternetAccessible.h>
#include <tencentcloud/thpc/v20220401/model/ExpansionNodeConfig.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20220401
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
                     * 获取队列名称。
                     * @return QueueName 队列名称。
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置队列名称。
                     * @param _queueName 队列名称。
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
                     * 获取队列中弹性节点数量最小值。取值范围0～200。
                     * @return MinSize 队列中弹性节点数量最小值。取值范围0～200。
                     * 
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置队列中弹性节点数量最小值。取值范围0～200。
                     * @param _minSize 队列中弹性节点数量最小值。取值范围0～200。
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
                     * 获取队列中弹性节点数量最大值。取值范围0～200。
                     * @return MaxSize 队列中弹性节点数量最大值。取值范围0～200。
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置队列中弹性节点数量最大值。取值范围0～200。
                     * @param _maxSize 队列中弹性节点数量最大值。取值范围0～200。
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
                     * 获取是否开启自动扩容。
                     * @return EnableAutoExpansion 是否开启自动扩容。
                     * 
                     */
                    bool GetEnableAutoExpansion() const;

                    /**
                     * 设置是否开启自动扩容。
                     * @param _enableAutoExpansion 是否开启自动扩容。
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
                     * 获取是否开启自动缩容。
                     * @return EnableAutoShrink 是否开启自动缩容。
                     * 
                     */
                    bool GetEnableAutoShrink() const;

                    /**
                     * 设置是否开启自动缩容。
                     * @param _enableAutoShrink 是否开启自动缩容。
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
                     * 获取指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。目前仅支持公有镜和特定自定义镜像。
                     * @return ImageId 指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。目前仅支持公有镜和特定自定义镜像。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。目前仅支持公有镜和特定自定义镜像。
                     * @param _imageId 指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。目前仅支持公有镜和特定自定义镜像。
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
                     * 获取节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                     * @return SystemDisk 节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                     * @param _systemDisk 节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
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
                     * 获取节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。
                     * @return DataDisks 节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。
                     * @param _dataDisks 节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。
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
                     * 获取公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。
                     * @return InternetAccessible 公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。
                     * @param _internetAccessible 公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。
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
                     * 获取扩容节点配置信息。
                     * @return ExpansionNodeConfigs 扩容节点配置信息。
                     * 
                     */
                    std::vector<ExpansionNodeConfig> GetExpansionNodeConfigs() const;

                    /**
                     * 设置扩容节点配置信息。
                     * @param _expansionNodeConfigs 扩容节点配置信息。
                     * 
                     */
                    void SetExpansionNodeConfigs(const std::vector<ExpansionNodeConfig>& _expansionNodeConfigs);

                    /**
                     * 判断参数 ExpansionNodeConfigs 是否已赋值
                     * @return ExpansionNodeConfigs 是否已赋值
                     * 
                     */
                    bool ExpansionNodeConfigsHasBeenSet() const;

                private:

                    /**
                     * 队列名称。
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 队列中弹性节点数量最小值。取值范围0～200。
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * 队列中弹性节点数量最大值。取值范围0～200。
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 是否开启自动扩容。
                     */
                    bool m_enableAutoExpansion;
                    bool m_enableAutoExpansionHasBeenSet;

                    /**
                     * 是否开启自动缩容。
                     */
                    bool m_enableAutoShrink;
                    bool m_enableAutoShrinkHasBeenSet;

                    /**
                     * 指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。目前仅支持公有镜和特定自定义镜像。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * 公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 扩容节点配置信息。
                     */
                    std::vector<ExpansionNodeConfig> m_expansionNodeConfigs;
                    bool m_expansionNodeConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20220401_MODEL_QUEUECONFIG_H_
