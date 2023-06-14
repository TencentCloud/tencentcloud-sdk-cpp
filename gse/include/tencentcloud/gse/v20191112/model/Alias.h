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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_ALIAS_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_ALIAS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/RoutingStrategy.h>
#include <tencentcloud/gse/v20191112/model/Tag.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 别名对象
                */
                class Alias : public AbstractModel
                {
                public:
                    Alias();
                    ~Alias() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取别名的唯一标识符
                     * @return AliasId 别名的唯一标识符
                     * 
                     */
                    std::string GetAliasId() const;

                    /**
                     * 设置别名的唯一标识符
                     * @param _aliasId 别名的唯一标识符
                     * 
                     */
                    void SetAliasId(const std::string& _aliasId);

                    /**
                     * 判断参数 AliasId 是否已赋值
                     * @return AliasId 是否已赋值
                     * 
                     */
                    bool AliasIdHasBeenSet() const;

                    /**
                     * 获取别名的全局唯一资源标识符
                     * @return AliasArn 别名的全局唯一资源标识符
                     * 
                     */
                    std::string GetAliasArn() const;

                    /**
                     * 设置别名的全局唯一资源标识符
                     * @param _aliasArn 别名的全局唯一资源标识符
                     * 
                     */
                    void SetAliasArn(const std::string& _aliasArn);

                    /**
                     * 判断参数 AliasArn 是否已赋值
                     * @return AliasArn 是否已赋值
                     * 
                     */
                    bool AliasArnHasBeenSet() const;

                    /**
                     * 获取名字，长度不小于1字符不超过1024字符
                     * @return Name 名字，长度不小于1字符不超过1024字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字，长度不小于1字符不超过1024字符
                     * @param _name 名字，长度不小于1字符不超过1024字符
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
                     * 获取别名的可读说明，长度不小于1字符不超过1024字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 别名的可读说明，长度不小于1字符不超过1024字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置别名的可读说明，长度不小于1字符不超过1024字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 别名的可读说明，长度不小于1字符不超过1024字符
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取别名的路由配置
                     * @return RoutingStrategy 别名的路由配置
                     * 
                     */
                    RoutingStrategy GetRoutingStrategy() const;

                    /**
                     * 设置别名的路由配置
                     * @param _routingStrategy 别名的路由配置
                     * 
                     */
                    void SetRoutingStrategy(const RoutingStrategy& _routingStrategy);

                    /**
                     * 判断参数 RoutingStrategy 是否已赋值
                     * @return RoutingStrategy 是否已赋值
                     * 
                     */
                    bool RoutingStrategyHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreationTime 创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
                     * @param _creationTime 创建时间
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
                     * 获取上次修改此数据对象的时间
                     * @return LastUpdatedTime 上次修改此数据对象的时间
                     * 
                     */
                    std::string GetLastUpdatedTime() const;

                    /**
                     * 设置上次修改此数据对象的时间
                     * @param _lastUpdatedTime 上次修改此数据对象的时间
                     * 
                     */
                    void SetLastUpdatedTime(const std::string& _lastUpdatedTime);

                    /**
                     * 判断参数 LastUpdatedTime 是否已赋值
                     * @return LastUpdatedTime 是否已赋值
                     * 
                     */
                    bool LastUpdatedTimeHasBeenSet() const;

                    /**
                     * 获取标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 别名的唯一标识符
                     */
                    std::string m_aliasId;
                    bool m_aliasIdHasBeenSet;

                    /**
                     * 别名的全局唯一资源标识符
                     */
                    std::string m_aliasArn;
                    bool m_aliasArnHasBeenSet;

                    /**
                     * 名字，长度不小于1字符不超过1024字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 别名的可读说明，长度不小于1字符不超过1024字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 别名的路由配置
                     */
                    RoutingStrategy m_routingStrategy;
                    bool m_routingStrategyHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 上次修改此数据对象的时间
                     */
                    std::string m_lastUpdatedTime;
                    bool m_lastUpdatedTimeHasBeenSet;

                    /**
                     * 标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_ALIAS_H_
