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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYWORDSAMPLEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYWORDSAMPLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiSampleTagOperation.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyWordSample请求参数结构体
                */
                class ModifyWordSampleRequest : public AbstractModel
                {
                public:
                    ModifyWordSampleRequest();
                    ~ModifyWordSampleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关键词，长度限制：128 个字符。
                     * @return Keyword 关键词，长度限制：128 个字符。
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键词，长度限制：128 个字符。
                     * @param _keyword 关键词，长度限制：128 个字符。
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<b>关键词应用场景，可选值：</b>
1. Recognition.Ocr：通过光学字符识别技术，进行内容识别；
2. Recognition.Asr：通过音频识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行不适宜的内容识别；
4. Review.Asr：通过音频识别技术，进行不适宜的内容识别；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、音频识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、音频识别技术，进行不适宜的内容识别，等价于 3+4；
7. All：包含以上全部，等价于 1+2+3+4。
                     * @return Usages <b>关键词应用场景，可选值：</b>
1. Recognition.Ocr：通过光学字符识别技术，进行内容识别；
2. Recognition.Asr：通过音频识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行不适宜的内容识别；
4. Review.Asr：通过音频识别技术，进行不适宜的内容识别；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、音频识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、音频识别技术，进行不适宜的内容识别，等价于 3+4；
7. All：包含以上全部，等价于 1+2+3+4。
                     * 
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置<b>关键词应用场景，可选值：</b>
1. Recognition.Ocr：通过光学字符识别技术，进行内容识别；
2. Recognition.Asr：通过音频识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行不适宜的内容识别；
4. Review.Asr：通过音频识别技术，进行不适宜的内容识别；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、音频识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、音频识别技术，进行不适宜的内容识别，等价于 3+4；
7. All：包含以上全部，等价于 1+2+3+4。
                     * @param _usages <b>关键词应用场景，可选值：</b>
1. Recognition.Ocr：通过光学字符识别技术，进行内容识别；
2. Recognition.Asr：通过音频识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行不适宜的内容识别；
4. Review.Asr：通过音频识别技术，进行不适宜的内容识别；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、音频识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、音频识别技术，进行不适宜的内容识别，等价于 3+4；
7. All：包含以上全部，等价于 1+2+3+4。
                     * 
                     */
                    void SetUsages(const std::vector<std::string>& _usages);

                    /**
                     * 判断参数 Usages 是否已赋值
                     * @return Usages 是否已赋值
                     * 
                     */
                    bool UsagesHasBeenSet() const;

                    /**
                     * 获取标签操作信息。
                     * @return TagOperationInfo 标签操作信息。
                     * 
                     */
                    AiSampleTagOperation GetTagOperationInfo() const;

                    /**
                     * 设置标签操作信息。
                     * @param _tagOperationInfo 标签操作信息。
                     * 
                     */
                    void SetTagOperationInfo(const AiSampleTagOperation& _tagOperationInfo);

                    /**
                     * 判断参数 TagOperationInfo 是否已赋值
                     * @return TagOperationInfo 是否已赋值
                     * 
                     */
                    bool TagOperationInfoHasBeenSet() const;

                private:

                    /**
                     * 关键词，长度限制：128 个字符。
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <b>关键词应用场景，可选值：</b>
1. Recognition.Ocr：通过光学字符识别技术，进行内容识别；
2. Recognition.Asr：通过音频识别技术，进行内容识别；
3. Review.Ocr：通过光学字符识别技术，进行不适宜的内容识别；
4. Review.Asr：通过音频识别技术，进行不适宜的内容识别；
<b>可合并简写为：</b>
5. Recognition：通过光学字符识别技术、音频识别技术，进行内容识别，等价于 1+2；
6. Review：通过光学字符识别技术、音频识别技术，进行不适宜的内容识别，等价于 3+4；
7. All：包含以上全部，等价于 1+2+3+4。
                     */
                    std::vector<std::string> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * 标签操作信息。
                     */
                    AiSampleTagOperation m_tagOperationInfo;
                    bool m_tagOperationInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYWORDSAMPLEREQUEST_H_
