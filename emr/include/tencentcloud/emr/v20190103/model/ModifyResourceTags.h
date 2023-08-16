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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCETAGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCETAGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 强制修改标签
                */
                class ModifyResourceTags : public AbstractModel
                {
                public:
                    ModifyResourceTags();
                    ~ModifyResourceTags() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群id 或者 cvm id
                     * @return ResourceId 集群id 或者 cvm id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置集群id 或者 cvm id
                     * @param _resourceId 集群id 或者 cvm id
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
                     * 获取资源6段式表达式
                     * @return Resource 资源6段式表达式
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置资源6段式表达式
                     * @param _resource 资源6段式表达式
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取资源前缀
                     * @return ResourcePrefix 资源前缀
                     * 
                     */
                    std::string GetResourcePrefix() const;

                    /**
                     * 设置资源前缀
                     * @param _resourcePrefix 资源前缀
                     * 
                     */
                    void SetResourcePrefix(const std::string& _resourcePrefix);

                    /**
                     * 判断参数 ResourcePrefix 是否已赋值
                     * @return ResourcePrefix 是否已赋值
                     * 
                     */
                    bool ResourcePrefixHasBeenSet() const;

                    /**
                     * 获取ap-beijing
                     * @return ResourceRegion ap-beijing
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置ap-beijing
                     * @param _resourceRegion ap-beijing
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取emr
                     * @return ServiceType emr
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置emr
                     * @param _serviceType emr
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取删除的标签列表
                     * @return DeleteTags 删除的标签列表
                     * 
                     */
                    std::vector<Tag> GetDeleteTags() const;

                    /**
                     * 设置删除的标签列表
                     * @param _deleteTags 删除的标签列表
                     * 
                     */
                    void SetDeleteTags(const std::vector<Tag>& _deleteTags);

                    /**
                     * 判断参数 DeleteTags 是否已赋值
                     * @return DeleteTags 是否已赋值
                     * 
                     */
                    bool DeleteTagsHasBeenSet() const;

                    /**
                     * 获取添加的标签列表
                     * @return AddTags 添加的标签列表
                     * 
                     */
                    std::vector<Tag> GetAddTags() const;

                    /**
                     * 设置添加的标签列表
                     * @param _addTags 添加的标签列表
                     * 
                     */
                    void SetAddTags(const std::vector<Tag>& _addTags);

                    /**
                     * 判断参数 AddTags 是否已赋值
                     * @return AddTags 是否已赋值
                     * 
                     */
                    bool AddTagsHasBeenSet() const;

                    /**
                     * 获取修改的标签列表
                     * @return ModifyTags 修改的标签列表
                     * 
                     */
                    std::vector<Tag> GetModifyTags() const;

                    /**
                     * 设置修改的标签列表
                     * @param _modifyTags 修改的标签列表
                     * 
                     */
                    void SetModifyTags(const std::vector<Tag>& _modifyTags);

                    /**
                     * 判断参数 ModifyTags 是否已赋值
                     * @return ModifyTags 是否已赋值
                     * 
                     */
                    bool ModifyTagsHasBeenSet() const;

                private:

                    /**
                     * 集群id 或者 cvm id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源6段式表达式
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 资源前缀
                     */
                    std::string m_resourcePrefix;
                    bool m_resourcePrefixHasBeenSet;

                    /**
                     * ap-beijing
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * emr
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 删除的标签列表
                     */
                    std::vector<Tag> m_deleteTags;
                    bool m_deleteTagsHasBeenSet;

                    /**
                     * 添加的标签列表
                     */
                    std::vector<Tag> m_addTags;
                    bool m_addTagsHasBeenSet;

                    /**
                     * 修改的标签列表
                     */
                    std::vector<Tag> m_modifyTags;
                    bool m_modifyTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCETAGS_H_
