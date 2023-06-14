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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLETAGOPERATION_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLETAGOPERATION_H_

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
                * AI 样本管理，标签操作。
                */
                class AiSampleTagOperation : public AbstractModel
                {
                public:
                    AiSampleTagOperation();
                    ~AiSampleTagOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作类型，可选值：add（添加）、delete（删除）、reset（重置）。
                     * @return Type 操作类型，可选值：add（添加）、delete（删除）、reset（重置）。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置操作类型，可选值：add（添加）、delete（删除）、reset（重置）。
                     * @param _type 操作类型，可选值：add（添加）、delete（删除）、reset（重置）。
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
                     * 获取标签，长度限制：128 个字符。
                     * @return Tags 标签，长度限制：128 个字符。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签，长度限制：128 个字符。
                     * @param _tags 标签，长度限制：128 个字符。
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 操作类型，可选值：add（添加）、delete（删除）、reset（重置）。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 标签，长度限制：128 个字符。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLETAGOPERATION_H_
