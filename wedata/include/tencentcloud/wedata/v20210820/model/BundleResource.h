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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BUNDLERESOURCE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BUNDLERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * boundle 绑定/解绑操作资源信息
                */
                class BundleResource : public AbstractModel
                {
                public:
                    BundleResource();
                    ~BundleResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源类型，取值范围：</p>
<ul>
<li>WORKFLOW 工作流</li>
<li>TASK 任务</li>
<li>CODE_TEMPLATE 代码模版</li>
<li>RESOURCE 资源信息</li>
<li>EVENT 事件</li>
<li>PROJECT_PARAM 项目参数</li>
</ul>
                     * @return ResourceType <p>资源类型，取值范围：</p>
<ul>
<li>WORKFLOW 工作流</li>
<li>TASK 任务</li>
<li>CODE_TEMPLATE 代码模版</li>
<li>RESOURCE 资源信息</li>
<li>EVENT 事件</li>
<li>PROJECT_PARAM 项目参数</li>
</ul>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型，取值范围：</p>
<ul>
<li>WORKFLOW 工作流</li>
<li>TASK 任务</li>
<li>CODE_TEMPLATE 代码模版</li>
<li>RESOURCE 资源信息</li>
<li>EVENT 事件</li>
<li>PROJECT_PARAM 项目参数</li>
</ul>
                     * @param _resourceType <p>资源类型，取值范围：</p>
<ul>
<li>WORKFLOW 工作流</li>
<li>TASK 任务</li>
<li>CODE_TEMPLATE 代码模版</li>
<li>RESOURCE 资源信息</li>
<li>EVENT 事件</li>
<li>PROJECT_PARAM 项目参数</li>
</ul>
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
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
                     * @param _resourceId 资源id
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
                     * @return ResourceName 资源名称
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
                     * @param _resourceName 资源名称
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                private:

                    /**
                     * <p>资源类型，取值范围：</p>
<ul>
<li>WORKFLOW 工作流</li>
<li>TASK 任务</li>
<li>CODE_TEMPLATE 代码模版</li>
<li>RESOURCE 资源信息</li>
<li>EVENT 事件</li>
<li>PROJECT_PARAM 项目参数</li>
</ul>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BUNDLERESOURCE_H_
