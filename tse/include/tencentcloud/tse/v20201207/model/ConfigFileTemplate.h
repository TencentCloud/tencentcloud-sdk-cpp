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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILETEMPLATE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILETEMPLATE_H_

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
                * 配置文件模板
                */
                class ConfigFileTemplate : public AbstractModel
                {
                public:
                    ConfigFileTemplate();
                    ~ConfigFileTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置文件模板id
                     * @return Id 配置文件模板id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置配置文件模板id
                     * @param _id 配置文件模板id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取配置文件模板名称
                     * @return Name 配置文件模板名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置文件模板名称
                     * @param _name 配置文件模板名称
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
                     * 获取配置文件模板内容
                     * @return Content 配置文件模板内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置配置文件模板内容
                     * @param _content 配置文件模板内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取配置文件模板格式
                     * @return Format 配置文件模板格式
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置配置文件模板格式
                     * @param _format 配置文件模板格式
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取配置文件模板注释
                     * @return Comment 配置文件模板注释
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置配置文件模板注释
                     * @param _comment 配置文件模板注释
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
                     * 获取配置文件模板创建时间
                     * @return CreateTime 配置文件模板创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置配置文件模板创建时间
                     * @param _createTime 配置文件模板创建时间
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
                     * 获取配置文件模板创建者
                     * @return CreateBy 配置文件模板创建者
                     * 
                     */
                    std::string GetCreateBy() const;

                    /**
                     * 设置配置文件模板创建者
                     * @param _createBy 配置文件模板创建者
                     * 
                     */
                    void SetCreateBy(const std::string& _createBy);

                    /**
                     * 判断参数 CreateBy 是否已赋值
                     * @return CreateBy 是否已赋值
                     * 
                     */
                    bool CreateByHasBeenSet() const;

                    /**
                     * 获取配置文件模板修改时间
                     * @return ModifyTime 配置文件模板修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置配置文件模板修改时间
                     * @param _modifyTime 配置文件模板修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取配置文件模板修改者
                     * @return ModifyBy 配置文件模板修改者
                     * 
                     */
                    std::string GetModifyBy() const;

                    /**
                     * 设置配置文件模板修改者
                     * @param _modifyBy 配置文件模板修改者
                     * 
                     */
                    void SetModifyBy(const std::string& _modifyBy);

                    /**
                     * 判断参数 ModifyBy 是否已赋值
                     * @return ModifyBy 是否已赋值
                     * 
                     */
                    bool ModifyByHasBeenSet() const;

                private:

                    /**
                     * 配置文件模板id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 配置文件模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 配置文件模板内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 配置文件模板格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 配置文件模板注释
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 配置文件模板创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 配置文件模板创建者
                     */
                    std::string m_createBy;
                    bool m_createByHasBeenSet;

                    /**
                     * 配置文件模板修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 配置文件模板修改者
                     */
                    std::string m_modifyBy;
                    bool m_modifyByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILETEMPLATE_H_
