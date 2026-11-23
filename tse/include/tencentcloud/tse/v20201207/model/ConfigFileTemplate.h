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
                     * 获取<p>配置文件模板id</p>
                     * @return Id <p>配置文件模板id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>配置文件模板id</p>
                     * @param _id <p>配置文件模板id</p>
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
                     * 获取<p>配置文件模板名称</p>
                     * @return Name <p>配置文件模板名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>配置文件模板名称</p>
                     * @param _name <p>配置文件模板名称</p>
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
                     * 获取<p>配置文件模板内容</p>
                     * @return Content <p>配置文件模板内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>配置文件模板内容</p>
                     * @param _content <p>配置文件模板内容</p>
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
                     * 获取<p>配置文件模板格式</p>
                     * @return Format <p>配置文件模板格式</p>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>配置文件模板格式</p>
                     * @param _format <p>配置文件模板格式</p>
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
                     * 获取<p>配置文件模板注释</p>
                     * @return Comment <p>配置文件模板注释</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>配置文件模板注释</p>
                     * @param _comment <p>配置文件模板注释</p>
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
                     * 获取<p>配置文件模板创建时间</p>
                     * @return CreateTime <p>配置文件模板创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>配置文件模板创建时间</p>
                     * @param _createTime <p>配置文件模板创建时间</p>
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
                     * 获取<p>配置文件模板创建者</p>
                     * @return CreateBy <p>配置文件模板创建者</p>
                     * 
                     */
                    std::string GetCreateBy() const;

                    /**
                     * 设置<p>配置文件模板创建者</p>
                     * @param _createBy <p>配置文件模板创建者</p>
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
                     * 获取<p>配置文件模板修改时间</p>
                     * @return ModifyTime <p>配置文件模板修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>配置文件模板修改时间</p>
                     * @param _modifyTime <p>配置文件模板修改时间</p>
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
                     * 获取<p>配置文件模板修改者</p>
                     * @return ModifyBy <p>配置文件模板修改者</p>
                     * 
                     */
                    std::string GetModifyBy() const;

                    /**
                     * 设置<p>配置文件模板修改者</p>
                     * @param _modifyBy <p>配置文件模板修改者</p>
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
                     * <p>配置文件模板id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>配置文件模板名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>配置文件模板内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>配置文件模板格式</p>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>配置文件模板注释</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>配置文件模板创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>配置文件模板创建者</p>
                     */
                    std::string m_createBy;
                    bool m_createByHasBeenSet;

                    /**
                     * <p>配置文件模板修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>配置文件模板修改者</p>
                     */
                    std::string m_modifyBy;
                    bool m_modifyByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILETEMPLATE_H_
