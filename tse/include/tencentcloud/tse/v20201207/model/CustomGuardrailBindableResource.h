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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILBINDABLERESOURCE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILBINDABLERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 可绑定自定义安全护栏的业务资源
                */
                class CustomGuardrailBindableResource : public AbstractModel
                {
                public:
                    CustomGuardrailBindableResource();
                    ~CustomGuardrailBindableResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>业务资源类型</p>
                     * @return ResourceType <p>业务资源类型</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>业务资源类型</p>
                     * @param _resourceType <p>业务资源类型</p>
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
                     * 获取<p>业务资源 ID</p>
                     * @return ResourceId <p>业务资源 ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>业务资源 ID</p>
                     * @param _resourceId <p>业务资源 ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>业务资源名称</p>
                     * @return ResourceName <p>业务资源名称</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>业务资源名称</p>
                     * @param _resourceName <p>业务资源名称</p>
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取<p>业务资源访问路径</p>
                     * @return Path <p>业务资源访问路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>业务资源访问路径</p>
                     * @param _path <p>业务资源访问路径</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>数据面解析协议</p>
                     * @return Protocol <p>数据面解析协议</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>数据面解析协议</p>
                     * @param _protocol <p>数据面解析协议</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>该业务资源对应的全部 Kong Route ID，仅用于关联/排查；创建 Scope.Resources 时仍填业务 ResourceId。</p>
                     * @return RouteIds <p>该业务资源对应的全部 Kong Route ID，仅用于关联/排查；创建 Scope.Resources 时仍填业务 ResourceId。</p>
                     * 
                     */
                    std::vector<std::string> GetRouteIds() const;

                    /**
                     * 设置<p>该业务资源对应的全部 Kong Route ID，仅用于关联/排查；创建 Scope.Resources 时仍填业务 ResourceId。</p>
                     * @param _routeIds <p>该业务资源对应的全部 Kong Route ID，仅用于关联/排查；创建 Scope.Resources 时仍填业务 ResourceId。</p>
                     * 
                     */
                    void SetRouteIds(const std::vector<std::string>& _routeIds);

                    /**
                     * 判断参数 RouteIds 是否已赋值
                     * @return RouteIds 是否已赋值
                     * 
                     */
                    bool RouteIdsHasBeenSet() const;

                    /**
                     * 获取<p>对应任一 Route 是否被其他自定义护栏策略占用；查询时传 PolicyId 可排除自身占用。</p>
                     * @return Occupied <p>对应任一 Route 是否被其他自定义护栏策略占用；查询时传 PolicyId 可排除自身占用。</p>
                     * 
                     */
                    bool GetOccupied() const;

                    /**
                     * 设置<p>对应任一 Route 是否被其他自定义护栏策略占用；查询时传 PolicyId 可排除自身占用。</p>
                     * @param _occupied <p>对应任一 Route 是否被其他自定义护栏策略占用；查询时传 PolicyId 可排除自身占用。</p>
                     * 
                     */
                    void SetOccupied(const bool& _occupied);

                    /**
                     * 判断参数 Occupied 是否已赋值
                     * @return Occupied 是否已赋值
                     * 
                     */
                    bool OccupiedHasBeenSet() const;

                    /**
                     * 获取<p>占用策略的可读名称及 ID，格式为 策略名称 (策略ID)，多个以逗号分隔；名称不可用时回退 ID，不应按此展示字段解析策略主键。</p>
                     * @return OccupiedBy <p>占用策略的可读名称及 ID，格式为 策略名称 (策略ID)，多个以逗号分隔；名称不可用时回退 ID，不应按此展示字段解析策略主键。</p>
                     * 
                     */
                    std::string GetOccupiedBy() const;

                    /**
                     * 设置<p>占用策略的可读名称及 ID，格式为 策略名称 (策略ID)，多个以逗号分隔；名称不可用时回退 ID，不应按此展示字段解析策略主键。</p>
                     * @param _occupiedBy <p>占用策略的可读名称及 ID，格式为 策略名称 (策略ID)，多个以逗号分隔；名称不可用时回退 ID，不应按此展示字段解析策略主键。</p>
                     * 
                     */
                    void SetOccupiedBy(const std::string& _occupiedBy);

                    /**
                     * 判断参数 OccupiedBy 是否已赋值
                     * @return OccupiedBy 是否已赋值
                     * 
                     */
                    bool OccupiedByHasBeenSet() const;

                    /**
                     * 获取<p>资源当前是否可解析为受支持的绑定目标；与 Occupied 独立，选择时同时检查 Supported=true 且 Occupied=false。</p>
                     * @return Supported <p>资源当前是否可解析为受支持的绑定目标；与 Occupied 独立，选择时同时检查 Supported=true 且 Occupied=false。</p>
                     * 
                     */
                    bool GetSupported() const;

                    /**
                     * 设置<p>资源当前是否可解析为受支持的绑定目标；与 Occupied 独立，选择时同时检查 Supported=true 且 Occupied=false。</p>
                     * @param _supported <p>资源当前是否可解析为受支持的绑定目标；与 Occupied 独立，选择时同时检查 Supported=true 且 Occupied=false。</p>
                     * 
                     */
                    void SetSupported(const bool& _supported);

                    /**
                     * 判断参数 Supported 是否已赋值
                     * @return Supported 是否已赋值
                     * 
                     */
                    bool SupportedHasBeenSet() const;

                    /**
                     * 获取<p>不支持绑定的原因</p>
                     * @return UnsupportedReason <p>不支持绑定的原因</p>
                     * 
                     */
                    std::string GetUnsupportedReason() const;

                    /**
                     * 设置<p>不支持绑定的原因</p>
                     * @param _unsupportedReason <p>不支持绑定的原因</p>
                     * 
                     */
                    void SetUnsupportedReason(const std::string& _unsupportedReason);

                    /**
                     * 判断参数 UnsupportedReason 是否已赋值
                     * @return UnsupportedReason 是否已赋值
                     * 
                     */
                    bool UnsupportedReasonHasBeenSet() const;

                private:

                    /**
                     * <p>业务资源类型</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>业务资源 ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>业务资源名称</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>业务资源访问路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>数据面解析协议</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>该业务资源对应的全部 Kong Route ID，仅用于关联/排查；创建 Scope.Resources 时仍填业务 ResourceId。</p>
                     */
                    std::vector<std::string> m_routeIds;
                    bool m_routeIdsHasBeenSet;

                    /**
                     * <p>对应任一 Route 是否被其他自定义护栏策略占用；查询时传 PolicyId 可排除自身占用。</p>
                     */
                    bool m_occupied;
                    bool m_occupiedHasBeenSet;

                    /**
                     * <p>占用策略的可读名称及 ID，格式为 策略名称 (策略ID)，多个以逗号分隔；名称不可用时回退 ID，不应按此展示字段解析策略主键。</p>
                     */
                    std::string m_occupiedBy;
                    bool m_occupiedByHasBeenSet;

                    /**
                     * <p>资源当前是否可解析为受支持的绑定目标；与 Occupied 独立，选择时同时检查 Supported=true 且 Occupied=false。</p>
                     */
                    bool m_supported;
                    bool m_supportedHasBeenSet;

                    /**
                     * <p>不支持绑定的原因</p>
                     */
                    std::string m_unsupportedReason;
                    bool m_unsupportedReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILBINDABLERESOURCE_H_
