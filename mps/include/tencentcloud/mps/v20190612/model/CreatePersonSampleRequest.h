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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPERSONSAMPLEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPERSONSAMPLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreatePersonSample请求参数结构体
                */
                class CreatePersonSampleRequest : public AbstractModel
                {
                public:
                    CreatePersonSampleRequest();
                    ~CreatePersonSampleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取人物名称，长度限制：20 个字符。
                     * @return Name 人物名称，长度限制：20 个字符。
                     */
                    std::string GetName() const;

                    /**
                     * 设置人物名称，长度限制：20 个字符。
                     * @param Name 人物名称，长度限制：20 个字符。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取人物应用场景，可选值：
1. Recognition：用于内容识别，等价于 Recognition.Face。
2. Review：用于内容审核，等价于 Review.Face。
3. All：用于内容识别、内容审核，等价于 1+2。
                     * @return Usages 人物应用场景，可选值：
1. Recognition：用于内容识别，等价于 Recognition.Face。
2. Review：用于内容审核，等价于 Review.Face。
3. All：用于内容识别、内容审核，等价于 1+2。
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置人物应用场景，可选值：
1. Recognition：用于内容识别，等价于 Recognition.Face。
2. Review：用于内容审核，等价于 Review.Face。
3. All：用于内容识别、内容审核，等价于 1+2。
                     * @param Usages 人物应用场景，可选值：
1. Recognition：用于内容识别，等价于 Recognition.Face。
2. Review：用于内容审核，等价于 Review.Face。
3. All：用于内容识别、内容审核，等价于 1+2。
                     */
                    void SetUsages(const std::vector<std::string>& _usages);

                    /**
                     * 判断参数 Usages 是否已赋值
                     * @return Usages 是否已赋值
                     */
                    bool UsagesHasBeenSet() const;

                    /**
                     * 获取人物描述，长度限制：1024 个字符。
                     * @return Description 人物描述，长度限制：1024 个字符。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置人物描述，长度限制：1024 个字符。
                     * @param Description 人物描述，长度限制：1024 个字符。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取人脸图片 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串，仅支持 jpeg、png 图片格式。数组长度限制：5 张图片。
注意：图片必须是单人像正面人脸较清晰的照片，像素不低于 200*200。
                     * @return FaceContents 人脸图片 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串，仅支持 jpeg、png 图片格式。数组长度限制：5 张图片。
注意：图片必须是单人像正面人脸较清晰的照片，像素不低于 200*200。
                     */
                    std::vector<std::string> GetFaceContents() const;

                    /**
                     * 设置人脸图片 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串，仅支持 jpeg、png 图片格式。数组长度限制：5 张图片。
注意：图片必须是单人像正面人脸较清晰的照片，像素不低于 200*200。
                     * @param FaceContents 人脸图片 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串，仅支持 jpeg、png 图片格式。数组长度限制：5 张图片。
注意：图片必须是单人像正面人脸较清晰的照片，像素不低于 200*200。
                     */
                    void SetFaceContents(const std::vector<std::string>& _faceContents);

                    /**
                     * 判断参数 FaceContents 是否已赋值
                     * @return FaceContents 是否已赋值
                     */
                    bool FaceContentsHasBeenSet() const;

                    /**
                     * 获取人物标签
<li>数组长度限制：20 个标签；</li>
<li>单个标签长度限制：128 个字符。</li>
                     * @return Tags 人物标签
<li>数组长度限制：20 个标签；</li>
<li>单个标签长度限制：128 个字符。</li>
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置人物标签
<li>数组长度限制：20 个标签；</li>
<li>单个标签长度限制：128 个字符。</li>
                     * @param Tags 人物标签
<li>数组长度限制：20 个标签；</li>
<li>单个标签长度限制：128 个字符。</li>
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 人物名称，长度限制：20 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 人物应用场景，可选值：
1. Recognition：用于内容识别，等价于 Recognition.Face。
2. Review：用于内容审核，等价于 Review.Face。
3. All：用于内容识别、内容审核，等价于 1+2。
                     */
                    std::vector<std::string> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * 人物描述，长度限制：1024 个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 人脸图片 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串，仅支持 jpeg、png 图片格式。数组长度限制：5 张图片。
注意：图片必须是单人像正面人脸较清晰的照片，像素不低于 200*200。
                     */
                    std::vector<std::string> m_faceContents;
                    bool m_faceContentsHasBeenSet;

                    /**
                     * 人物标签
<li>数组长度限制：20 个标签；</li>
<li>单个标签长度限制：128 个字符。</li>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPERSONSAMPLEREQUEST_H_
