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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_RESOURCEINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_RESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/Resource.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 资源信息，包含资源以及归属信息
                */
                class ResourceInfo : public AbstractModel
                {
                public:
                    ResourceInfo();
                    ~ResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒资和分类资源。
                     * @return Resource 媒资和分类资源。
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 设置媒资和分类资源。
                     * @param _resource 媒资和分类资源。
                     * 
                     */
                    void SetResource(const Resource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取资源归属，个人或团队。
                     * @return Owner 资源归属，个人或团队。
                     * 
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置资源归属，个人或团队。
                     * @param _owner 资源归属，个人或团队。
                     * 
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                private:

                    /**
                     * 媒资和分类资源。
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 资源归属，个人或团队。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_RESOURCEINFO_H_
