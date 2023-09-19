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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESTYLES_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESTYLES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeSubtitleStyle.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频编辑/合成任务 样式信息。
                */
                class ComposeStyles : public AbstractModel
                {
                public:
                    ComposeStyles();
                    ~ComposeStyles() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取样式 Id，用于和轨道元素中的样式关联。
注意：允许字母、数字、-、_ 组合，最长 32 字符。
                     * @return Id 样式 Id，用于和轨道元素中的样式关联。
注意：允许字母、数字、-、_ 组合，最长 32 字符。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置样式 Id，用于和轨道元素中的样式关联。
注意：允许字母、数字、-、_ 组合，最长 32 字符。
                     * @param _id 样式 Id，用于和轨道元素中的样式关联。
注意：允许字母、数字、-、_ 组合，最长 32 字符。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取样式类型，取值有：
<li>Subtitle：字幕样式。</li>
                     * @return Type 样式类型，取值有：
<li>Subtitle：字幕样式。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置样式类型，取值有：
<li>Subtitle：字幕样式。</li>
                     * @param _type 样式类型，取值有：
<li>Subtitle：字幕样式。</li>
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
                     * 获取字幕样式信息，当 Type = Subtitle 时有效。
                     * @return Subtitle 字幕样式信息，当 Type = Subtitle 时有效。
                     * 
                     */
                    ComposeSubtitleStyle GetSubtitle() const;

                    /**
                     * 设置字幕样式信息，当 Type = Subtitle 时有效。
                     * @param _subtitle 字幕样式信息，当 Type = Subtitle 时有效。
                     * 
                     */
                    void SetSubtitle(const ComposeSubtitleStyle& _subtitle);

                    /**
                     * 判断参数 Subtitle 是否已赋值
                     * @return Subtitle 是否已赋值
                     * 
                     */
                    bool SubtitleHasBeenSet() const;

                private:

                    /**
                     * 样式 Id，用于和轨道元素中的样式关联。
注意：允许字母、数字、-、_ 组合，最长 32 字符。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 样式类型，取值有：
<li>Subtitle：字幕样式。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 字幕样式信息，当 Type = Subtitle 时有效。
                     */
                    ComposeSubtitleStyle m_subtitle;
                    bool m_subtitleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESTYLES_H_
