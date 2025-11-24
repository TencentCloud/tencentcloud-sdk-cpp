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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSIMAGETEMPLATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSIMAGETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageTaskInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图片处理模板
                */
                class ProcessImageTemplate : public AbstractModel
                {
                public:
                    ProcessImageTemplate();
                    ~ProcessImageTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片处理模板唯一标识。
                     * @return Definition 图片处理模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置图片处理模板唯一标识。
                     * @param _definition 图片处理模板唯一标识。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取图片处理模板名称。
                     * @return Name 图片处理模板名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置图片处理模板名称。
                     * @param _name 图片处理模板名称。
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
                     * 获取图片处理模板描述信息。
                     * @return Comment 图片处理模板描述信息。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置图片处理模板描述信息。
                     * @param _comment 图片处理模板描述信息。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取模板类型。
                     * @return Type 模板类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型。
                     * @param _type 模板类型。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取图片处理模板配置参数。
                     * @return ProcessImageConfig 图片处理模板配置参数。
                     * 
                     */
                    ImageTaskInput GetProcessImageConfig() const;

                    /**
                     * 设置图片处理模板配置参数。
                     * @param _processImageConfig 图片处理模板配置参数。
                     * 
                     */
                    void SetProcessImageConfig(const ImageTaskInput& _processImageConfig);

                    /**
                     * 判断参数 ProcessImageConfig 是否已赋值
                     * @return ProcessImageConfig 是否已赋值
                     * 
                     */
                    bool ProcessImageConfigHasBeenSet() const;

                    /**
                     * 获取模板创建时间。
                     * @return CreateTime 模板创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模板创建时间。
                     * @param _createTime 模板创建时间。
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
                     * 获取模板最后修改时间。
                     * @return UpdateTime 模板最后修改时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置模板最后修改时间。
                     * @param _updateTime 模板最后修改时间。
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
                     * 图片处理模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 图片处理模板名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 图片处理模板描述信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 模板类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 图片处理模板配置参数。
                     */
                    ImageTaskInput m_processImageConfig;
                    bool m_processImageConfigHasBeenSet;

                    /**
                     * 模板创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模板最后修改时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSIMAGETEMPLATE_H_
