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

#ifndef TENCENTCLOUD_CLOUDRC_V20240606_MODEL_DESCRIBERESOURCEREQUEST_H_
#define TENCENTCLOUD_CLOUDRC_V20240606_MODEL_DESCRIBERESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudrc
    {
        namespace V20240606
        {
            namespace Model
            {
                /**
                * DescribeResource请求参数结构体
                */
                class DescribeResourceRequest : public AbstractModel
                {
                public:
                    DescribeResourceRequest();
                    ~DescribeResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源类型</p>
                     * @return ResourceType <p>资源类型</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型</p>
                     * @param _resourceType <p>资源类型</p>
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
                     * 获取<p>地域编码</p>
                     * @return RegionCode <p>地域编码</p>
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置<p>地域编码</p>
                     * @param _regionCode <p>地域编码</p>
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取<p>资源ID</p>
                     * @return ResourceId <p>资源ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID</p>
                     * @param _resourceId <p>资源ID</p>
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
                     * 获取<p>视图ID</p>
                     * @return ViewId <p>视图ID</p>
                     * 
                     */
                    std::string GetViewId() const;

                    /**
                     * 设置<p>视图ID</p>
                     * @param _viewId <p>视图ID</p>
                     * 
                     */
                    void SetViewId(const std::string& _viewId);

                    /**
                     * 判断参数 ViewId 是否已赋值
                     * @return ViewId 是否已赋值
                     * 
                     */
                    bool ViewIdHasBeenSet() const;

                private:

                    /**
                     * <p>资源类型</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>地域编码</p>
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * <p>资源ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>视图ID</p>
                     */
                    std::string m_viewId;
                    bool m_viewIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDRC_V20240606_MODEL_DESCRIBERESOURCEREQUEST_H_
