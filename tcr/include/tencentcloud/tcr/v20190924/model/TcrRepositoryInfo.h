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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TCRREPOSITORYINFO_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TCRREPOSITORYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Tcr镜像仓库信息
                */
                class TcrRepositoryInfo : public AbstractModel
                {
                public:
                    TcrRepositoryInfo();
                    ~TcrRepositoryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仓库名称
                     * @return Name 仓库名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置仓库名称
                     * @param _name 仓库名称
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
                     * 获取命名空间名称
                     * @return Namespace 命名空间名称
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespace 命名空间名称
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
                     * 获取创建时间，格式"2006-01-02 15:04:05.999999999 -0700 MST"
                     * @return CreationTime 创建时间，格式"2006-01-02 15:04:05.999999999 -0700 MST"
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间，格式"2006-01-02 15:04:05.999999999 -0700 MST"
                     * @param _creationTime 创建时间，格式"2006-01-02 15:04:05.999999999 -0700 MST"
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取是否公开
                     * @return Public 是否公开
                     * 
                     */
                    bool GetPublic() const;

                    /**
                     * 设置是否公开
                     * @param _public 是否公开
                     * 
                     */
                    void SetPublic(const bool& _public);

                    /**
                     * 判断参数 Public 是否已赋值
                     * @return Public 是否已赋值
                     * 
                     */
                    bool PublicHasBeenSet() const;

                    /**
                     * 获取仓库详细描述
                     * @return Description 仓库详细描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置仓库详细描述
                     * @param _description 仓库详细描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取简单描述
                     * @return BriefDescription 简单描述
                     * 
                     */
                    std::string GetBriefDescription() const;

                    /**
                     * 设置简单描述
                     * @param _briefDescription 简单描述
                     * 
                     */
                    void SetBriefDescription(const std::string& _briefDescription);

                    /**
                     * 判断参数 BriefDescription 是否已赋值
                     * @return BriefDescription 是否已赋值
                     * 
                     */
                    bool BriefDescriptionHasBeenSet() const;

                    /**
                     * 获取更新时间，格式"2006-01-02 15:04:05.999999999 -0700 MST"
                     * @return UpdateTime 更新时间，格式"2006-01-02 15:04:05.999999999 -0700 MST"
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间，格式"2006-01-02 15:04:05.999999999 -0700 MST"
                     * @param _updateTime 更新时间，格式"2006-01-02 15:04:05.999999999 -0700 MST"
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 仓库名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 创建时间，格式"2006-01-02 15:04:05.999999999 -0700 MST"
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 是否公开
                     */
                    bool m_public;
                    bool m_publicHasBeenSet;

                    /**
                     * 仓库详细描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 简单描述
                     */
                    std::string m_briefDescription;
                    bool m_briefDescriptionHasBeenSet;

                    /**
                     * 更新时间，格式"2006-01-02 15:04:05.999999999 -0700 MST"
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TCRREPOSITORYINFO_H_
