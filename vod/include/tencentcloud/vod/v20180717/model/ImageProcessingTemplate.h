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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEPROCESSINGTEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEPROCESSINGTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageOperation.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片处理模板， 最多支持三次操作。例如：裁剪-缩略-裁剪。
                */
                class ImageProcessingTemplate : public AbstractModel
                {
                public:
                    ImageProcessingTemplate();
                    ~ImageProcessingTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片处理模板唯一标识。
                     * @return Definition 图片处理模板唯一标识。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置图片处理模板唯一标识。
                     * @param _definition 图片处理模板唯一标识。
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取模板类型，取值范围：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @return Type 模板类型，取值范围：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型，取值范围：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @param _type 模板类型，取值范围：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
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
                     * 获取模板描述信息。
                     * @return Comment 模板描述信息。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述信息。
                     * @param _comment 模板描述信息。
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
                     * 获取图片处理操作数组，操作将以数组顺序执行。
<li>长度限制：3。</li>
                     * @return Operations 图片处理操作数组，操作将以数组顺序执行。
<li>长度限制：3。</li>
                     * 
                     */
                    std::vector<ImageOperation> GetOperations() const;

                    /**
                     * 设置图片处理操作数组，操作将以数组顺序执行。
<li>长度限制：3。</li>
                     * @param _operations 图片处理操作数组，操作将以数组顺序执行。
<li>长度限制：3。</li>
                     * 
                     */
                    void SetOperations(const std::vector<ImageOperation>& _operations);

                    /**
                     * 判断参数 Operations 是否已赋值
                     * @return Operations 是否已赋值
                     * 
                     */
                    bool OperationsHasBeenSet() const;

                    /**
                     * 获取模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CreateTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _createTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 图片处理模板唯一标识。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 模板类型，取值范围：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 图片处理模板名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板描述信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 图片处理操作数组，操作将以数组顺序执行。
<li>长度限制：3。</li>
                     */
                    std::vector<ImageOperation> m_operations;
                    bool m_operationsHasBeenSet;

                    /**
                     * 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEPROCESSINGTEMPLATE_H_
