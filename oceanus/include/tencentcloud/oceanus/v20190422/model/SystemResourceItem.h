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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_SYSTEMRESOURCEITEM_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_SYSTEMRESOURCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 系统资源返回值
                */
                class SystemResourceItem : public AbstractModel
                {
                public:
                    SystemResourceItem();
                    ~SystemResourceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
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
                     * 获取资源名称
                     * @return Name 资源名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源名称
                     * @param _name 资源名称
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
                     * 获取资源类型。1 表示 JAR 包，目前只支持该值。
                     * @return ResourceType 资源类型。1 表示 JAR 包，目前只支持该值。
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置资源类型。1 表示 JAR 包，目前只支持该值。
                     * @param _resourceType 资源类型。1 表示 JAR 包，目前只支持该值。
                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源备注
                     * @return Remark 资源备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置资源备注
                     * @param _remark 资源备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取资源所属地域
                     * @return Region 资源所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置资源所属地域
                     * @param _region 资源所属地域
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
                     * 获取资源的最新版本
                     * @return LatestResourceConfigVersion 资源的最新版本
                     * 
                     */
                    int64_t GetLatestResourceConfigVersion() const;

                    /**
                     * 设置资源的最新版本
                     * @param _latestResourceConfigVersion 资源的最新版本
                     * 
                     */
                    void SetLatestResourceConfigVersion(const int64_t& _latestResourceConfigVersion);

                    /**
                     * 判断参数 LatestResourceConfigVersion 是否已赋值
                     * @return LatestResourceConfigVersion 是否已赋值
                     * 
                     */
                    bool LatestResourceConfigVersionHasBeenSet() const;

                    /**
                     * 获取1 是系统提供资源 2 用户提供CONNECTOR
                     * @return SystemProvide 1 是系统提供资源 2 用户提供CONNECTOR
                     * 
                     */
                    int64_t GetSystemProvide() const;

                    /**
                     * 设置1 是系统提供资源 2 用户提供CONNECTOR
                     * @param _systemProvide 1 是系统提供资源 2 用户提供CONNECTOR
                     * 
                     */
                    void SetSystemProvide(const int64_t& _systemProvide);

                    /**
                     * 判断参数 SystemProvide 是否已赋值
                     * @return SystemProvide 是否已赋值
                     * 
                     */
                    bool SystemProvideHasBeenSet() const;

                private:

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 资源类型。1 表示 JAR 包，目前只支持该值。
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 资源所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 资源的最新版本
                     */
                    int64_t m_latestResourceConfigVersion;
                    bool m_latestResourceConfigVersionHasBeenSet;

                    /**
                     * 1 是系统提供资源 2 用户提供CONNECTOR
                     */
                    int64_t m_systemProvide;
                    bool m_systemProvideHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_SYSTEMRESOURCEITEM_H_
