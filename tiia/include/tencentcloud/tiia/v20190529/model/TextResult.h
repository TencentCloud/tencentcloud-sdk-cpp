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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_TEXTRESULT_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_TEXTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 图像文本内容审核结果。
                */
                class TextResult : public AbstractModel
                {
                public:
                    TextResult();
                    ~TextResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误，
-1400表示图片解码失败，
-1401表示图片不符合规范。
-1402表示图片文件太大。
                     * @return Code 该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误，
-1400表示图片解码失败，
-1401表示图片不符合规范。
-1402表示图片文件太大。
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误，
-1400表示图片解码失败，
-1401表示图片不符合规范。
-1402表示图片文件太大。
                     * @param Code 该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误，
-1400表示图片解码失败，
-1401表示图片不符合规范。
-1402表示图片文件太大。
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取错误码描述信息。
                     * @return Msg 错误码描述信息。
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置错误码描述信息。
                     * @param Msg 错误码描述信息。
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规

Suggestion由Type决定：
Type为 NOTEXT/NORMAL 时，Suggestion为PASS；
Type为 POLITICS/PORN/TERRORISM/ADS 时，Suggestion为BLOCK；
其他情况下Suggestion为REVIEW。
                     * @return Suggestion 识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规

Suggestion由Type决定：
Type为 NOTEXT/NORMAL 时，Suggestion为PASS；
Type为 POLITICS/PORN/TERRORISM/ADS 时，Suggestion为BLOCK；
其他情况下Suggestion为REVIEW。
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规

Suggestion由Type决定：
Type为 NOTEXT/NORMAL 时，Suggestion为PASS；
Type为 POLITICS/PORN/TERRORISM/ADS 时，Suggestion为BLOCK；
其他情况下Suggestion为REVIEW。
                     * @param Suggestion 识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规

Suggestion由Type决定：
Type为 NOTEXT/NORMAL 时，Suggestion为PASS；
Type为 POLITICS/PORN/TERRORISM/ADS 时，Suggestion为BLOCK；
其他情况下Suggestion为REVIEW。
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取算法对于识别结果的置信度，0-100之间，值越高，表示对于结论越确定。
                     * @return Confidence 算法对于识别结果的置信度，0-100之间，值越高，表示对于结论越确定。
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置算法对于识别结果的置信度，0-100之间，值越高，表示对于结论越确定。
                     * @param Confidence 算法对于识别结果的置信度，0-100之间，值越高，表示对于结论越确定。
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取识别到的关键词数组
                     * @return Keywords 识别到的关键词数组
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置识别到的关键词数组
                     * @param Keywords 识别到的关键词数组
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取图片中是否包含敏感文本内容。
包含：
NOTEXT：无文本
NORMAL：内容正常
ADS：广告推广
POLITICS：政治
PORN：色情
DRUGS：涉毒
CURSE：谩骂
TERRORISM：暴恐
OTHERS：其他

本服务利用微信团队提供的算法，可以准确识别图片中是否包含二维码。当图片中存在二维码时，分类为ADS，关键词输出为“二维码”。
                     * @return Type 图片中是否包含敏感文本内容。
包含：
NOTEXT：无文本
NORMAL：内容正常
ADS：广告推广
POLITICS：政治
PORN：色情
DRUGS：涉毒
CURSE：谩骂
TERRORISM：暴恐
OTHERS：其他

本服务利用微信团队提供的算法，可以准确识别图片中是否包含二维码。当图片中存在二维码时，分类为ADS，关键词输出为“二维码”。
                     */
                    std::string GetType() const;

                    /**
                     * 设置图片中是否包含敏感文本内容。
包含：
NOTEXT：无文本
NORMAL：内容正常
ADS：广告推广
POLITICS：政治
PORN：色情
DRUGS：涉毒
CURSE：谩骂
TERRORISM：暴恐
OTHERS：其他

本服务利用微信团队提供的算法，可以准确识别图片中是否包含二维码。当图片中存在二维码时，分类为ADS，关键词输出为“二维码”。
                     * @param Type 图片中是否包含敏感文本内容。
包含：
NOTEXT：无文本
NORMAL：内容正常
ADS：广告推广
POLITICS：政治
PORN：色情
DRUGS：涉毒
CURSE：谩骂
TERRORISM：暴恐
OTHERS：其他

本服务利用微信团队提供的算法，可以准确识别图片中是否包含二维码。当图片中存在二维码时，分类为ADS，关键词输出为“二维码”。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取预留字段，后期用于展示更多识别信息。
                     * @return AdvancedInfo 预留字段，后期用于展示更多识别信息。
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 设置预留字段，后期用于展示更多识别信息。
                     * @param AdvancedInfo 预留字段，后期用于展示更多识别信息。
                     */
                    void SetAdvancedInfo(const std::string& _advancedInfo);

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     */
                    bool AdvancedInfoHasBeenSet() const;

                private:

                    /**
                     * 该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误，
-1400表示图片解码失败，
-1401表示图片不符合规范。
-1402表示图片文件太大。
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 错误码描述信息。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规

Suggestion由Type决定：
Type为 NOTEXT/NORMAL 时，Suggestion为PASS；
Type为 POLITICS/PORN/TERRORISM/ADS 时，Suggestion为BLOCK；
其他情况下Suggestion为REVIEW。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 算法对于识别结果的置信度，0-100之间，值越高，表示对于结论越确定。
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 识别到的关键词数组
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 图片中是否包含敏感文本内容。
包含：
NOTEXT：无文本
NORMAL：内容正常
ADS：广告推广
POLITICS：政治
PORN：色情
DRUGS：涉毒
CURSE：谩骂
TERRORISM：暴恐
OTHERS：其他

本服务利用微信团队提供的算法，可以准确识别图片中是否包含二维码。当图片中存在二维码时，分类为ADS，关键词输出为“二维码”。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 预留字段，后期用于展示更多识别信息。
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_TEXTRESULT_H_
