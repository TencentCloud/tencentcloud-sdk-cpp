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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVECLOUDEFFECTLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVECLOUDEFFECTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveCloudEffectList请求参数结构体
                */
                class DescribeLiveCloudEffectListRequest : public AbstractModel
                {
                public:
                    DescribeLiveCloudEffectListRequest();
                    ~DescribeLiveCloudEffectListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云端特效ID。
                     * @return Id 云端特效ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置云端特效ID。
                     * @param _id 云端特效ID。
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
                     * 获取云端特效描述词。由用户原始输入的描述词。
                     * @return Prompt 云端特效描述词。由用户原始输入的描述词。
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置云端特效描述词。由用户原始输入的描述词。
                     * @param _prompt 云端特效描述词。由用户原始输入的描述词。
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取云端特效标签。对云端特效进行分类标签，可用于分类搜索。
                     * @return Flag 云端特效标签。对云端特效进行分类标签，可用于分类搜索。
                     * 
                     */
                    std::string GetFlag() const;

                    /**
                     * 设置云端特效标签。对云端特效进行分类标签，可用于分类搜索。
                     * @param _flag 云端特效标签。对云端特效进行分类标签，可用于分类搜索。
                     * 
                     */
                    void SetFlag(const std::string& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取云端特效类型, 默认不填，返回全部。PGC: 特效库中的特效；AICG : AI生成的特效；UGC：用户自定义上传的特效；
                     * @return Type 云端特效类型, 默认不填，返回全部。PGC: 特效库中的特效；AICG : AI生成的特效；UGC：用户自定义上传的特效；
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置云端特效类型, 默认不填，返回全部。PGC: 特效库中的特效；AICG : AI生成的特效；UGC：用户自定义上传的特效；
                     * @param _type 云端特效类型, 默认不填，返回全部。PGC: 特效库中的特效；AICG : AI生成的特效；UGC：用户自定义上传的特效；
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 云端特效ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 云端特效描述词。由用户原始输入的描述词。
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 云端特效标签。对云端特效进行分类标签，可用于分类搜索。
                     */
                    std::string m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * 云端特效类型, 默认不填，返回全部。PGC: 特效库中的特效；AICG : AI生成的特效；UGC：用户自定义上传的特效；
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVECLOUDEFFECTLISTREQUEST_H_
