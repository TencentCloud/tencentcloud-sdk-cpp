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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_RESETINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_RESETINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * ResetInstances请求参数结构体
                */
                class ResetInstancesRequest : public AbstractModel
                {
                public:
                    ResetInstancesRequest();
                    ~ResetInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要重置的实例id列表
                     * @return InstanceIds 需要重置的实例id列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置需要重置的实例id列表
                     * @param _instanceIds 需要重置的实例id列表
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取重置的目标镜像id
                     * @return ImageId 重置的目标镜像id
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置重置的目标镜像id
                     * @param _imageId 重置的目标镜像id
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
                     * 获取重置实例的区域
                     * @return InstanceRegion 重置实例的区域
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置重置实例的区域
                     * @param _instanceRegion 重置实例的区域
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取是否解绑机器原有绑定关系
                     * @return IsUnbind 是否解绑机器原有绑定关系
                     * 
                     */
                    bool GetIsUnbind() const;

                    /**
                     * 设置是否解绑机器原有绑定关系
                     * @param _isUnbind 是否解绑机器原有绑定关系
                     * 
                     */
                    void SetIsUnbind(const bool& _isUnbind);

                    /**
                     * 判断参数 IsUnbind 是否已赋值
                     * @return IsUnbind 是否已赋值
                     * 
                     */
                    bool IsUnbindHasBeenSet() const;

                private:

                    /**
                     * 需要重置的实例id列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 重置的目标镜像id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 重置实例的区域
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * 是否解绑机器原有绑定关系
                     */
                    bool m_isUnbind;
                    bool m_isUnbindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_RESETINSTANCESREQUEST_H_
