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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 知识库信息。
                */
                class KnowledgeBaseInfo : public AbstractModel
                {
                public:
                    KnowledgeBaseInfo();
                    ~KnowledgeBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>知识库ID。</p>
                     * @return KnowledgeBaseId <p>知识库ID。</p>
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置<p>知识库ID。</p>
                     * @param _knowledgeBaseId <p>知识库ID。</p>
                     * 
                     */
                    void SetKnowledgeBaseId(const std::string& _knowledgeBaseId);

                    /**
                     * 判断参数 KnowledgeBaseId 是否已赋值
                     * @return KnowledgeBaseId 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdHasBeenSet() const;

                    /**
                     * 获取<p>知识库名称。</p>
                     * @return Name <p>知识库名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>知识库名称。</p>
                     * @param _name <p>知识库名称。</p>
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
                     * 获取<p>知识库描述。</p>
                     * @return Description <p>知识库描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>知识库描述。</p>
                     * @param _description <p>知识库描述。</p>
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
                     * 获取<p>知识库状态。</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>active： 正常</li><li>deleting： 删除中</li></ul>
                     * @return Status <p>知识库状态。</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>active： 正常</li><li>deleting： 删除中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>知识库状态。</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>active： 正常</li><li>deleting： 删除中</li></ul>
                     * @param _status <p>知识库状态。</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>active： 正常</li><li>deleting： 删除中</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>知识库创建时间。</p>
                     * @return CreateTime <p>知识库创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>知识库创建时间。</p>
                     * @param _createTime <p>知识库创建时间。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>知识库ID。</p>
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                    /**
                     * <p>知识库名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>知识库描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>知识库状态。</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>active： 正常</li><li>deleting： 删除中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>知识库创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASEINFO_H_
