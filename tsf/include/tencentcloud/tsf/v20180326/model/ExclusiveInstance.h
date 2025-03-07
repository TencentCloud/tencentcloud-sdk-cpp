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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_EXCLUSIVEINSTANCE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_EXCLUSIVEINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 独占实例
                */
                class ExclusiveInstance : public AbstractModel
                {
                public:
                    ExclusiveInstance();
                    ~ExclusiveInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置中心类型[Registration、Configuration]
                     * @return CenterType 配置中心类型[Registration、Configuration]
                     * 
                     */
                    std::string GetCenterType() const;

                    /**
                     * 设置配置中心类型[Registration、Configuration]
                     * @param _centerType 配置中心类型[Registration、Configuration]
                     * 
                     */
                    void SetCenterType(const std::string& _centerType);

                    /**
                     * 判断参数 CenterType 是否已赋值
                     * @return CenterType 是否已赋值
                     * 
                     */
                    bool CenterTypeHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取实例类型[Polaris]
                     * @return InstanceType 实例类型[Polaris]
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型[Polaris]
                     * @param _instanceType 实例类型[Polaris]
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例地域id
                     * @return RegionId 实例地域id
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置实例地域id
                     * @param _regionId 实例地域id
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取实例命名空间ID
                     * @return InstanceNamespaceId 实例命名空间ID
                     * 
                     */
                    std::string GetInstanceNamespaceId() const;

                    /**
                     * 设置实例命名空间ID
                     * @param _instanceNamespaceId 实例命名空间ID
                     * 
                     */
                    void SetInstanceNamespaceId(const std::string& _instanceNamespaceId);

                    /**
                     * 判断参数 InstanceNamespaceId 是否已赋值
                     * @return InstanceNamespaceId 是否已赋值
                     * 
                     */
                    bool InstanceNamespaceIdHasBeenSet() const;

                private:

                    /**
                     * 配置中心类型[Registration、Configuration]
                     */
                    std::string m_centerType;
                    bool m_centerTypeHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例类型[Polaris]
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例地域id
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 实例命名空间ID
                     */
                    std::string m_instanceNamespaceId;
                    bool m_instanceNamespaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_EXCLUSIVEINSTANCE_H_
