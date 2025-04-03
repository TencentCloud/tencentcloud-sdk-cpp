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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_RELEASEVERSION_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_RELEASEVERSION_H_

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
                * 配置发布版本信息
                */
                class ReleaseVersion : public AbstractModel
                {
                public:
                    ReleaseVersion();
                    ~ReleaseVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置发布的版本
                     * @return Name 配置发布的版本
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置发布的版本
                     * @param _name 配置发布的版本
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
                     * 获取是否生效
                     * @return Active 是否生效
                     * 
                     */
                    bool GetActive() const;

                    /**
                     * 设置是否生效
                     * @param _active 是否生效
                     * 
                     */
                    void SetActive(const bool& _active);

                    /**
                     * 判断参数 Active 是否已赋值
                     * @return Active 是否已赋值
                     * 
                     */
                    bool ActiveHasBeenSet() const;

                    /**
                     * 获取配置发布的ID
                     * @return Id 配置发布的ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置配置发布的ID
                     * @param _id 配置发布的ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取配置发布的命名空间
                     * @return Namespace 配置发布的命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置配置发布的命名空间
                     * @param _namespace 配置发布的命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取配置发布的分组
                     * @return Group 配置发布的分组
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置配置发布的分组
                     * @param _group 配置发布的分组
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取配置发布的文件名
                     * @return FileName 配置发布的文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置配置发布的文件名
                     * @param _fileName 配置发布的文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                private:

                    /**
                     * 配置发布的版本
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否生效
                     */
                    bool m_active;
                    bool m_activeHasBeenSet;

                    /**
                     * 配置发布的ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 配置发布的命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 配置发布的分组
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 配置发布的文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_RELEASEVERSION_H_
