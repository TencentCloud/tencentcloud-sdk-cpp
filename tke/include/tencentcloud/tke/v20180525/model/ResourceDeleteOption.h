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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RESOURCEDELETEOPTION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RESOURCEDELETEOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 资源删除选项
                */
                class ResourceDeleteOption : public AbstractModel
                {
                public:
                    ResourceDeleteOption();
                    ~ResourceDeleteOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型，例如CBS
                     * @return ResourceType 资源类型，例如CBS
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型，例如CBS
                     * @param ResourceType 资源类型，例如CBS
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取集群删除时资源的删除模式：terminate（销毁），retain （保留）
                     * @return DeleteMode 集群删除时资源的删除模式：terminate（销毁），retain （保留）
                     */
                    std::string GetDeleteMode() const;

                    /**
                     * 设置集群删除时资源的删除模式：terminate（销毁），retain （保留）
                     * @param DeleteMode 集群删除时资源的删除模式：terminate（销毁），retain （保留）
                     */
                    void SetDeleteMode(const std::string& _deleteMode);

                    /**
                     * 判断参数 DeleteMode 是否已赋值
                     * @return DeleteMode 是否已赋值
                     */
                    bool DeleteModeHasBeenSet() const;

                private:

                    /**
                     * 资源类型，例如CBS
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 集群删除时资源的删除模式：terminate（销毁），retain （保留）
                     */
                    std::string m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RESOURCEDELETEOPTION_H_
