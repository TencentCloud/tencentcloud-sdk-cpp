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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATESMARTSUBTITLETEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATESMARTSUBTITLETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AsrHotWordsConfigure.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateSmartSubtitleTemplate请求参数结构体
                */
                class CreateSmartSubtitleTemplateRequest : public AbstractModel
                {
                public:
                    CreateSmartSubtitleTemplateRequest();
                    ~CreateSmartSubtitleTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取智能字幕模板名称
长度限制：64 个字符。
                     * @return Name 智能字幕模板名称
长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置智能字幕模板名称
长度限制：64 个字符。
                     * @param _name 智能字幕模板名称
长度限制：64 个字符。
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
                     * 获取智能字幕视频源语言
当前支持以下语言：
zh：简体中文
en：英语
ja：日语
ko：韩语
zh-PY：中英粤
zh-medical：中文医疗
yue：中文粤语
vi：越南语
ms：马来语
id：印度尼西亚语
fil：菲律宾语
th：泰语
pt：葡萄牙语
tr：土耳其语
ar：阿拉伯语
es：西班牙语
hi：印地语
fr：法语
de：德语
zh_dialect：中文方言
                     * @return VideoSrcLanguage 智能字幕视频源语言
当前支持以下语言：
zh：简体中文
en：英语
ja：日语
ko：韩语
zh-PY：中英粤
zh-medical：中文医疗
yue：中文粤语
vi：越南语
ms：马来语
id：印度尼西亚语
fil：菲律宾语
th：泰语
pt：葡萄牙语
tr：土耳其语
ar：阿拉伯语
es：西班牙语
hi：印地语
fr：法语
de：德语
zh_dialect：中文方言
                     * 
                     */
                    std::string GetVideoSrcLanguage() const;

                    /**
                     * 设置智能字幕视频源语言
当前支持以下语言：
zh：简体中文
en：英语
ja：日语
ko：韩语
zh-PY：中英粤
zh-medical：中文医疗
yue：中文粤语
vi：越南语
ms：马来语
id：印度尼西亚语
fil：菲律宾语
th：泰语
pt：葡萄牙语
tr：土耳其语
ar：阿拉伯语
es：西班牙语
hi：印地语
fr：法语
de：德语
zh_dialect：中文方言
                     * @param _videoSrcLanguage 智能字幕视频源语言
当前支持以下语言：
zh：简体中文
en：英语
ja：日语
ko：韩语
zh-PY：中英粤
zh-medical：中文医疗
yue：中文粤语
vi：越南语
ms：马来语
id：印度尼西亚语
fil：菲律宾语
th：泰语
pt：葡萄牙语
tr：土耳其语
ar：阿拉伯语
es：西班牙语
hi：印地语
fr：法语
de：德语
zh_dialect：中文方言
                     * 
                     */
                    void SetVideoSrcLanguage(const std::string& _videoSrcLanguage);

                    /**
                     * 判断参数 VideoSrcLanguage 是否已赋值
                     * @return VideoSrcLanguage 是否已赋值
                     * 
                     */
                    bool VideoSrcLanguageHasBeenSet() const;

                    /**
                     * 获取智能字幕字幕语言类型
0: 源语言
1: 翻译语言
2: 源语言+翻译语言
当TranslateSwitch为OFF时仅支持取0
当TranslateSwitch为ON时仅支持取1或2
                     * @return SubtitleType 智能字幕字幕语言类型
0: 源语言
1: 翻译语言
2: 源语言+翻译语言
当TranslateSwitch为OFF时仅支持取0
当TranslateSwitch为ON时仅支持取1或2
                     * 
                     */
                    int64_t GetSubtitleType() const;

                    /**
                     * 设置智能字幕字幕语言类型
0: 源语言
1: 翻译语言
2: 源语言+翻译语言
当TranslateSwitch为OFF时仅支持取0
当TranslateSwitch为ON时仅支持取1或2
                     * @param _subtitleType 智能字幕字幕语言类型
0: 源语言
1: 翻译语言
2: 源语言+翻译语言
当TranslateSwitch为OFF时仅支持取0
当TranslateSwitch为ON时仅支持取1或2
                     * 
                     */
                    void SetSubtitleType(const int64_t& _subtitleType);

                    /**
                     * 判断参数 SubtitleType 是否已赋值
                     * @return SubtitleType 是否已赋值
                     * 
                     */
                    bool SubtitleTypeHasBeenSet() const;

                    /**
                     * 获取智能字幕模板描述信息
长度限制：256 个字符。
                     * @return Comment 智能字幕模板描述信息
长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置智能字幕模板描述信息
长度限制：256 个字符。
                     * @param _comment 智能字幕模板描述信息
长度限制：256 个字符。
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
                     * 获取智能字幕文件格式
 vtt: WebVTT 格式
不填或填空：不生成字幕文件
                     * @return SubtitleFormat 智能字幕文件格式
 vtt: WebVTT 格式
不填或填空：不生成字幕文件
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置智能字幕文件格式
 vtt: WebVTT 格式
不填或填空：不生成字幕文件
                     * @param _subtitleFormat 智能字幕文件格式
 vtt: WebVTT 格式
不填或填空：不生成字幕文件
                     * 
                     */
                    void SetSubtitleFormat(const std::string& _subtitleFormat);

                    /**
                     * 判断参数 SubtitleFormat 是否已赋值
                     * @return SubtitleFormat 是否已赋值
                     * 
                     */
                    bool SubtitleFormatHasBeenSet() const;

                    /**
                     * 获取ASR热词库参数
                     * @return AsrHotWordsConfigure ASR热词库参数
                     * 
                     */
                    AsrHotWordsConfigure GetAsrHotWordsConfigure() const;

                    /**
                     * 设置ASR热词库参数
                     * @param _asrHotWordsConfigure ASR热词库参数
                     * 
                     */
                    void SetAsrHotWordsConfigure(const AsrHotWordsConfigure& _asrHotWordsConfigure);

                    /**
                     * 判断参数 AsrHotWordsConfigure 是否已赋值
                     * @return AsrHotWordsConfigure 是否已赋值
                     * 
                     */
                    bool AsrHotWordsConfigureHasBeenSet() const;

                    /**
                     * 获取字幕翻译开关
ON: 开启翻译
OFF: 关闭翻译
                     * @return TranslateSwitch 字幕翻译开关
ON: 开启翻译
OFF: 关闭翻译
                     * 
                     */
                    std::string GetTranslateSwitch() const;

                    /**
                     * 设置字幕翻译开关
ON: 开启翻译
OFF: 关闭翻译
                     * @param _translateSwitch 字幕翻译开关
ON: 开启翻译
OFF: 关闭翻译
                     * 
                     */
                    void SetTranslateSwitch(const std::string& _translateSwitch);

                    /**
                     * 判断参数 TranslateSwitch 是否已赋值
                     * @return TranslateSwitch 是否已赋值
                     * 
                     */
                    bool TranslateSwitchHasBeenSet() const;

                    /**
                     * 获取字幕翻译目标语言
当TranslateSwitch为ON的时候生效
当前支持以下语言：
zh：简体中文
en：英语
ja：日语
ko：韩语
fr：法语
es：西班牙语
it：意大利语
de：德语
tr：土耳其语
ru：俄语
pt：葡萄牙语
vi：越南语
id：印度尼西亚语
ms：马来语
th：泰语
ar：阿拉伯语
hi：印地语
                     * @return TranslateDstLanguage 字幕翻译目标语言
当TranslateSwitch为ON的时候生效
当前支持以下语言：
zh：简体中文
en：英语
ja：日语
ko：韩语
fr：法语
es：西班牙语
it：意大利语
de：德语
tr：土耳其语
ru：俄语
pt：葡萄牙语
vi：越南语
id：印度尼西亚语
ms：马来语
th：泰语
ar：阿拉伯语
hi：印地语
                     * 
                     */
                    std::string GetTranslateDstLanguage() const;

                    /**
                     * 设置字幕翻译目标语言
当TranslateSwitch为ON的时候生效
当前支持以下语言：
zh：简体中文
en：英语
ja：日语
ko：韩语
fr：法语
es：西班牙语
it：意大利语
de：德语
tr：土耳其语
ru：俄语
pt：葡萄牙语
vi：越南语
id：印度尼西亚语
ms：马来语
th：泰语
ar：阿拉伯语
hi：印地语
                     * @param _translateDstLanguage 字幕翻译目标语言
当TranslateSwitch为ON的时候生效
当前支持以下语言：
zh：简体中文
en：英语
ja：日语
ko：韩语
fr：法语
es：西班牙语
it：意大利语
de：德语
tr：土耳其语
ru：俄语
pt：葡萄牙语
vi：越南语
id：印度尼西亚语
ms：马来语
th：泰语
ar：阿拉伯语
hi：印地语
                     * 
                     */
                    void SetTranslateDstLanguage(const std::string& _translateDstLanguage);

                    /**
                     * 判断参数 TranslateDstLanguage 是否已赋值
                     * @return TranslateDstLanguage 是否已赋值
                     * 
                     */
                    bool TranslateDstLanguageHasBeenSet() const;

                private:

                    /**
                     * 智能字幕模板名称
长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 智能字幕视频源语言
当前支持以下语言：
zh：简体中文
en：英语
ja：日语
ko：韩语
zh-PY：中英粤
zh-medical：中文医疗
yue：中文粤语
vi：越南语
ms：马来语
id：印度尼西亚语
fil：菲律宾语
th：泰语
pt：葡萄牙语
tr：土耳其语
ar：阿拉伯语
es：西班牙语
hi：印地语
fr：法语
de：德语
zh_dialect：中文方言
                     */
                    std::string m_videoSrcLanguage;
                    bool m_videoSrcLanguageHasBeenSet;

                    /**
                     * 智能字幕字幕语言类型
0: 源语言
1: 翻译语言
2: 源语言+翻译语言
当TranslateSwitch为OFF时仅支持取0
当TranslateSwitch为ON时仅支持取1或2
                     */
                    int64_t m_subtitleType;
                    bool m_subtitleTypeHasBeenSet;

                    /**
                     * 智能字幕模板描述信息
长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 智能字幕文件格式
 vtt: WebVTT 格式
不填或填空：不生成字幕文件
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * ASR热词库参数
                     */
                    AsrHotWordsConfigure m_asrHotWordsConfigure;
                    bool m_asrHotWordsConfigureHasBeenSet;

                    /**
                     * 字幕翻译开关
ON: 开启翻译
OFF: 关闭翻译
                     */
                    std::string m_translateSwitch;
                    bool m_translateSwitchHasBeenSet;

                    /**
                     * 字幕翻译目标语言
当TranslateSwitch为ON的时候生效
当前支持以下语言：
zh：简体中文
en：英语
ja：日语
ko：韩语
fr：法语
es：西班牙语
it：意大利语
de：德语
tr：土耳其语
ru：俄语
pt：葡萄牙语
vi：越南语
id：印度尼西亚语
ms：马来语
th：泰语
ar：阿拉伯语
hi：印地语
                     */
                    std::string m_translateDstLanguage;
                    bool m_translateDstLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESMARTSUBTITLETEMPLATEREQUEST_H_
