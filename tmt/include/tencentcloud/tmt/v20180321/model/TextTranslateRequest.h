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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATEREQUEST_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * TextTranslate请求参数结构体
                */
                class TextTranslateRequest : public AbstractModel
                {
                public:
                    TextTranslateRequest();
                    ~TextTranslateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待翻译的文本，文本统一使用utf-8格式编码，非utf-8格式编码字符会翻译失败，请传入有效文本，html标记等非常规翻译文本会翻译失败。单次请求的文本长度需要低于2000。
                     * @return SourceText 待翻译的文本，文本统一使用utf-8格式编码，非utf-8格式编码字符会翻译失败，请传入有效文本，html标记等非常规翻译文本会翻译失败。单次请求的文本长度需要低于2000。
                     */
                    std::string GetSourceText() const;

                    /**
                     * 设置待翻译的文本，文本统一使用utf-8格式编码，非utf-8格式编码字符会翻译失败，请传入有效文本，html标记等非常规翻译文本会翻译失败。单次请求的文本长度需要低于2000。
                     * @param SourceText 待翻译的文本，文本统一使用utf-8格式编码，非utf-8格式编码字符会翻译失败，请传入有效文本，html标记等非常规翻译文本会翻译失败。单次请求的文本长度需要低于2000。
                     */
                    void SetSourceText(const std::string& _sourceText);

                    /**
                     * 判断参数 SourceText 是否已赋值
                     * @return SourceText 是否已赋值
                     */
                    bool SourceTextHasBeenSet() const;

                    /**
                     * 获取源语言，参照Target支持语言列表
                     * @return Source 源语言，参照Target支持语言列表
                     */
                    std::string GetSource() const;

                    /**
                     * 设置源语言，参照Target支持语言列表
                     * @param Source 源语言，参照Target支持语言列表
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取目标语言，参照支持语言列表
<li> zh : 中文 </li> <li> en : 英文 </li><li> jp : 日语 </li> <li> kr : 韩语 </li><li> de : 德语 </li><li> fr : 法语 </li><li> es : 西班牙文 </li> <li> it : 意大利文 </li><li> tr : 土耳其文 </li><li> ru : 俄文 </li><li> pt : 葡萄牙文 </li><li> vi : 越南文 </li><li> id : 印度尼西亚文 </li><li> ms : 马来西亚文 </li><li> th : 泰文 </li><li> auto : 自动识别源语言，只能用于source字段 </li>
                     * @return Target 目标语言，参照支持语言列表
<li> zh : 中文 </li> <li> en : 英文 </li><li> jp : 日语 </li> <li> kr : 韩语 </li><li> de : 德语 </li><li> fr : 法语 </li><li> es : 西班牙文 </li> <li> it : 意大利文 </li><li> tr : 土耳其文 </li><li> ru : 俄文 </li><li> pt : 葡萄牙文 </li><li> vi : 越南文 </li><li> id : 印度尼西亚文 </li><li> ms : 马来西亚文 </li><li> th : 泰文 </li><li> auto : 自动识别源语言，只能用于source字段 </li>
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置目标语言，参照支持语言列表
<li> zh : 中文 </li> <li> en : 英文 </li><li> jp : 日语 </li> <li> kr : 韩语 </li><li> de : 德语 </li><li> fr : 法语 </li><li> es : 西班牙文 </li> <li> it : 意大利文 </li><li> tr : 土耳其文 </li><li> ru : 俄文 </li><li> pt : 葡萄牙文 </li><li> vi : 越南文 </li><li> id : 印度尼西亚文 </li><li> ms : 马来西亚文 </li><li> th : 泰文 </li><li> auto : 自动识别源语言，只能用于source字段 </li>
                     * @param Target 目标语言，参照支持语言列表
<li> zh : 中文 </li> <li> en : 英文 </li><li> jp : 日语 </li> <li> kr : 韩语 </li><li> de : 德语 </li><li> fr : 法语 </li><li> es : 西班牙文 </li> <li> it : 意大利文 </li><li> tr : 土耳其文 </li><li> ru : 俄文 </li><li> pt : 葡萄牙文 </li><li> vi : 越南文 </li><li> id : 印度尼西亚文 </li><li> ms : 马来西亚文 </li><li> th : 泰文 </li><li> auto : 自动识别源语言，只能用于source字段 </li>
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     * @return ProjectId 项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     * @param ProjectId 项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 待翻译的文本，文本统一使用utf-8格式编码，非utf-8格式编码字符会翻译失败，请传入有效文本，html标记等非常规翻译文本会翻译失败。单次请求的文本长度需要低于2000。
                     */
                    std::string m_sourceText;
                    bool m_sourceTextHasBeenSet;

                    /**
                     * 源语言，参照Target支持语言列表
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 目标语言，参照支持语言列表
<li> zh : 中文 </li> <li> en : 英文 </li><li> jp : 日语 </li> <li> kr : 韩语 </li><li> de : 德语 </li><li> fr : 法语 </li><li> es : 西班牙文 </li> <li> it : 意大利文 </li><li> tr : 土耳其文 </li><li> ru : 俄文 </li><li> pt : 葡萄牙文 </li><li> vi : 越南文 </li><li> id : 印度尼西亚文 </li><li> ms : 马来西亚文 </li><li> th : 泰文 </li><li> auto : 自动识别源语言，只能用于source字段 </li>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATEREQUEST_H_
