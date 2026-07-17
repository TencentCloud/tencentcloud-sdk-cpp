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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceContainerConfig.h>
#include <tencentcloud/teo/v20220901/model/InferenceResourceConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 推理服务信息。
                */
                class InferenceService : public AbstractModel
                {
                public:
                    InferenceService();
                    ~InferenceService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取推理服务 ID。
                     * @return ServiceId 推理服务 ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置推理服务 ID。
                     * @param _serviceId 推理服务 ID。
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取推理服务的名称。
                     * @return Name 推理服务的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置推理服务的名称。
                     * @param _name 推理服务的名称。
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
                     * 获取描述信息。
                     * @return Description 描述信息。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息。
                     * @param _description 描述信息。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取模型服务需要监听的端口。仅支持 1-65535 之间的整数。
                     * @return ListenPort 模型服务需要监听的端口。仅支持 1-65535 之间的整数。
                     * 
                     */
                    int64_t GetListenPort() const;

                    /**
                     * 设置模型服务需要监听的端口。仅支持 1-65535 之间的整数。
                     * @param _listenPort 模型服务需要监听的端口。仅支持 1-65535 之间的整数。
                     * 
                     */
                    void SetListenPort(const int64_t& _listenPort);

                    /**
                     * 判断参数 ListenPort 是否已赋值
                     * @return ListenPort 是否已赋值
                     * 
                     */
                    bool ListenPortHasBeenSet() const;

                    /**
                     * 获取推理服务的请求路径列表。最多支持 20 个路径。
                     * @return RequestPaths 推理服务的请求路径列表。最多支持 20 个路径。
                     * 
                     */
                    std::vector<std::string> GetRequestPaths() const;

                    /**
                     * 设置推理服务的请求路径列表。最多支持 20 个路径。
                     * @param _requestPaths 推理服务的请求路径列表。最多支持 20 个路径。
                     * 
                     */
                    void SetRequestPaths(const std::vector<std::string>& _requestPaths);

                    /**
                     * 判断参数 RequestPaths 是否已赋值
                     * @return RequestPaths 是否已赋值
                     * 
                     */
                    bool RequestPathsHasBeenSet() const;

                    /**
                     * 获取推理服务的容器配置。
                     * @return Containers 推理服务的容器配置。
                     * 
                     */
                    std::vector<InferenceContainerConfig> GetContainers() const;

                    /**
                     * 设置推理服务的容器配置。
                     * @param _containers 推理服务的容器配置。
                     * 
                     */
                    void SetContainers(const std::vector<InferenceContainerConfig>& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     * 
                     */
                    bool ContainersHasBeenSet() const;

                    /**
                     * 获取推理服务的资源配置。
                     * @return ResourceConfig 推理服务的资源配置。
                     * 
                     */
                    InferenceResourceConfig GetResourceConfig() const;

                    /**
                     * 设置推理服务的资源配置。
                     * @param _resourceConfig 推理服务的资源配置。
                     * 
                     */
                    void SetResourceConfig(const InferenceResourceConfig& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取推理服务状态，包含以下几种状态：<li>Deploying：部署中；</li><li>Running：运行中；</li><li>Stopping：停止中；</li><li>Stopped：已停止；</li><li>Exception：异常；</li><li>Banned：被封禁。</li>
                     * @return Status 推理服务状态，包含以下几种状态：<li>Deploying：部署中；</li><li>Running：运行中；</li><li>Stopping：停止中；</li><li>Stopped：已停止；</li><li>Exception：异常；</li><li>Banned：被封禁。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置推理服务状态，包含以下几种状态：<li>Deploying：部署中；</li><li>Running：运行中；</li><li>Stopping：停止中；</li><li>Stopped：已停止；</li><li>Exception：异常；</li><li>Banned：被封禁。</li>
                     * @param _status 推理服务状态，包含以下几种状态：<li>Deploying：部署中；</li><li>Running：运行中；</li><li>Stopping：停止中；</li><li>Stopped：已停止；</li><li>Exception：异常；</li><li>Banned：被封禁。</li>
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
                     * 获取伸缩状态。取值有：<li>Normal：稳定运行，无进行中的伸缩操作；</li><li>ScalingOut：扩容中；</li><li>ScalingIn：缩容中。</li>
                     * @return ScalingStatus 伸缩状态。取值有：<li>Normal：稳定运行，无进行中的伸缩操作；</li><li>ScalingOut：扩容中；</li><li>ScalingIn：缩容中。</li>
                     * 
                     */
                    std::string GetScalingStatus() const;

                    /**
                     * 设置伸缩状态。取值有：<li>Normal：稳定运行，无进行中的伸缩操作；</li><li>ScalingOut：扩容中；</li><li>ScalingIn：缩容中。</li>
                     * @param _scalingStatus 伸缩状态。取值有：<li>Normal：稳定运行，无进行中的伸缩操作；</li><li>ScalingOut：扩容中；</li><li>ScalingIn：缩容中。</li>
                     * 
                     */
                    void SetScalingStatus(const std::string& _scalingStatus);

                    /**
                     * 判断参数 ScalingStatus 是否已赋值
                     * @return ScalingStatus 是否已赋值
                     * 
                     */
                    bool ScalingStatusHasBeenSet() const;

                    /**
                     * 获取当前运行中的实例数量。
                     * @return CurrentInstanceCount 当前运行中的实例数量。
                     * 
                     */
                    int64_t GetCurrentInstanceCount() const;

                    /**
                     * 设置当前运行中的实例数量。
                     * @param _currentInstanceCount 当前运行中的实例数量。
                     * 
                     */
                    void SetCurrentInstanceCount(const int64_t& _currentInstanceCount);

                    /**
                     * 判断参数 CurrentInstanceCount 是否已赋值
                     * @return CurrentInstanceCount 是否已赋值
                     * 
                     */
                    bool CurrentInstanceCountHasBeenSet() const;

                    /**
                     * 获取推理访问地址，可通过链接访问底层模型进行推理。
                     * @return InferenceURL 推理访问地址，可通过链接访问底层模型进行推理。
                     * 
                     */
                    std::string GetInferenceURL() const;

                    /**
                     * 设置推理访问地址，可通过链接访问底层模型进行推理。
                     * @param _inferenceURL 推理访问地址，可通过链接访问底层模型进行推理。
                     * 
                     */
                    void SetInferenceURL(const std::string& _inferenceURL);

                    /**
                     * 判断参数 InferenceURL 是否已赋值
                     * @return InferenceURL 是否已赋值
                     * 
                     */
                    bool InferenceURLHasBeenSet() const;

                    /**
                     * 获取创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CreateTime 创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _createTime 创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 获取最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return UpdateTime 最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _updateTime 最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 推理服务 ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 推理服务的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 模型服务需要监听的端口。仅支持 1-65535 之间的整数。
                     */
                    int64_t m_listenPort;
                    bool m_listenPortHasBeenSet;

                    /**
                     * 推理服务的请求路径列表。最多支持 20 个路径。
                     */
                    std::vector<std::string> m_requestPaths;
                    bool m_requestPathsHasBeenSet;

                    /**
                     * 推理服务的容器配置。
                     */
                    std::vector<InferenceContainerConfig> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * 推理服务的资源配置。
                     */
                    InferenceResourceConfig m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * 推理服务状态，包含以下几种状态：<li>Deploying：部署中；</li><li>Running：运行中；</li><li>Stopping：停止中；</li><li>Stopped：已停止；</li><li>Exception：异常；</li><li>Banned：被封禁。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 伸缩状态。取值有：<li>Normal：稳定运行，无进行中的伸缩操作；</li><li>ScalingOut：扩容中；</li><li>ScalingIn：缩容中。</li>
                     */
                    std::string m_scalingStatus;
                    bool m_scalingStatusHasBeenSet;

                    /**
                     * 当前运行中的实例数量。
                     */
                    int64_t m_currentInstanceCount;
                    bool m_currentInstanceCountHasBeenSet;

                    /**
                     * 推理访问地址，可通过链接访问底层模型进行推理。
                     */
                    std::string m_inferenceURL;
                    bool m_inferenceURLHasBeenSet;

                    /**
                     * 创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICE_H_
