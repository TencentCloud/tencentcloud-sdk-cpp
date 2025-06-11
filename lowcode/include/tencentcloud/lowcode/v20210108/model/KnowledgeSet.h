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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGESET_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 知识库信息
                */
                class KnowledgeSet : public AbstractModel
                {
                public:
                    KnowledgeSet();
                    ~KnowledgeSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取知识库标识
                     * @return Name 知识库标识
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置知识库标识
                     * @param _name 知识库标识
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
                     * 获取知识库名称
                     * @return Title 知识库名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置知识库名称
                     * @param _title 知识库名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Desc 描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述
                     * @param _desc 描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取状态，
NOT_ENABLED未启用
ENABLED 已启用
                     * @return Active 状态，
NOT_ENABLED未启用
ENABLED 已启用
                     * 
                     */
                    std::string GetActive() const;

                    /**
                     * 设置状态，
NOT_ENABLED未启用
ENABLED 已启用
                     * @param _active 状态，
NOT_ENABLED未启用
ENABLED 已启用
                     * 
                     */
                    void SetActive(const std::string& _active);

                    /**
                     * 判断参数 Active 是否已赋值
                     * @return Active 是否已赋值
                     * 
                     */
                    bool ActiveHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取知识库的meta信息
                     * @return Meta 知识库的meta信息
                     * 
                     */
                    std::string GetMeta() const;

                    /**
                     * 设置知识库的meta信息
                     * @param _meta 知识库的meta信息
                     * 
                     */
                    void SetMeta(const std::string& _meta);

                    /**
                     * 判断参数 Meta 是否已赋值
                     * @return Meta 是否已赋值
                     * 
                     */
                    bool MetaHasBeenSet() const;

                    /**
                     * 获取知识库容量,单位字节
                     * @return TotalSize 知识库容量,单位字节
                     * 
                     */
                    std::string GetTotalSize() const;

                    /**
                     * 设置知识库容量,单位字节
                     * @param _totalSize 知识库容量,单位字节
                     * 
                     */
                    void SetTotalSize(const std::string& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                private:

                    /**
                     * 知识库标识
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 知识库名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 状态，
NOT_ENABLED未启用
ENABLED 已启用
                     */
                    std::string m_active;
                    bool m_activeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 知识库的meta信息
                     */
                    std::string m_meta;
                    bool m_metaHasBeenSet;

                    /**
                     * 知识库容量,单位字节
                     */
                    std::string m_totalSize;
                    bool m_totalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGESET_H_
