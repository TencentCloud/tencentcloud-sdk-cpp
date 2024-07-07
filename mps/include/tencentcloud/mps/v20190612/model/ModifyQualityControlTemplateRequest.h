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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYQUALITYCONTROLTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYQUALITYCONTROLTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/QualityControlItemConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyQualityControlTemplate请求参数结构体
                */
                class ModifyQualityControlTemplateRequest : public AbstractModel
                {
                public:
                    ModifyQualityControlTemplateRequest();
                    ~ModifyQualityControlTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体质检模板唯一标识。
                     * @return Definition 媒体质检模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置媒体质检模板唯一标识。
                     * @param _definition 媒体质检模板唯一标识。
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
                     * 获取媒体质检模板名称，长度限制：64 个字符。
                     * @return Name 媒体质检模板名称，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置媒体质检模板名称，长度限制：64 个字符。
                     * @param _name 媒体质检模板名称，长度限制：64 个字符。
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
                     * 获取模板描述信息，长度限制：256 个字符。
                     * @return Comment 模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述信息，长度限制：256 个字符。
                     * @param _comment 模板描述信息，长度限制：256 个字符。
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
                     * 获取媒体质检配置参数。
                     * @return QualityControlItemSet 媒体质检配置参数。
                     * 
                     */
                    std::vector<QualityControlItemConfig> GetQualityControlItemSet() const;

                    /**
                     * 设置媒体质检配置参数。
                     * @param _qualityControlItemSet 媒体质检配置参数。
                     * 
                     */
                    void SetQualityControlItemSet(const std::vector<QualityControlItemConfig>& _qualityControlItemSet);

                    /**
                     * 判断参数 QualityControlItemSet 是否已赋值
                     * @return QualityControlItemSet 是否已赋值
                     * 
                     */
                    bool QualityControlItemSetHasBeenSet() const;

                private:

                    /**
                     * 媒体质检模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 媒体质检模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 媒体质检配置参数。
                     */
                    std::vector<QualityControlItemConfig> m_qualityControlItemSet;
                    bool m_qualityControlItemSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYQUALITYCONTROLTEMPLATEREQUEST_H_
