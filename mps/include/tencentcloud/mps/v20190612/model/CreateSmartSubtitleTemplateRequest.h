/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
#include <tencentcloud/mps/v20190612/model/SelectingSubtitleAreasConfig.h>


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
                     * 获取<p>智能字幕模板名称<br>长度限制：64 个字符。</p>
                     * @return Name <p>智能字幕模板名称<br>长度限制：64 个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>智能字幕模板名称<br>长度限制：64 个字符。</p>
                     * @param _name <p>智能字幕模板名称<br>长度限制：64 个字符。</p>
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
                     * 获取<p>智能字幕视频源语言</p><p>ASR识别和纯字幕翻译取值参考文档：<a href="https://cloud.tencent.com/document/product/862/116243#ASRlanguages">ASR 识别支持语种</a></p><p>下面列举部分常用取值</p><p><code>auto</code>：自动识别，<code>zh</code>：简体中文，<code>en</code>：英语，<code>ja</code>：日语，<code>ko</code>：韩语，<code>zh-PY</code>：中英粤，<code>zh_medical</code>：中文医疗，<code>vi</code>：越南语，<code>ms</code>：马来语，<code>id</code>：印度尼西亚语，<code>fil</code>：菲律宾语，<code>th</code>：泰语，<code>pt</code>：葡萄牙语，<code>tr</code>：土耳其语，<code>ar</code>：阿拉伯语，<code>es</code>：西班牙语，<code>hi</code>：印地语，<code>fr</code>：法语，<code>de</code>：德语，<code>it</code>：意大利语，<code>zh_dialect</code>：中文方言，<code>zh_en</code>：中英，<code>yue</code>：粤语，<code>ru</code>：俄语，<code>prime_zh</code>：中英方言</p><p>OCR 识别仅支持以下取值：</p><p><code>zh_en</code>：中英<br><code>multi</code>：其他</p><p>不同取值支持的语种参考文档：<a href="https://cloud.tencent.com/document/product/862/116243#OCRlanguages">OCR 识别支持语种</a></p>
                     * @return VideoSrcLanguage <p>智能字幕视频源语言</p><p>ASR识别和纯字幕翻译取值参考文档：<a href="https://cloud.tencent.com/document/product/862/116243#ASRlanguages">ASR 识别支持语种</a></p><p>下面列举部分常用取值</p><p><code>auto</code>：自动识别，<code>zh</code>：简体中文，<code>en</code>：英语，<code>ja</code>：日语，<code>ko</code>：韩语，<code>zh-PY</code>：中英粤，<code>zh_medical</code>：中文医疗，<code>vi</code>：越南语，<code>ms</code>：马来语，<code>id</code>：印度尼西亚语，<code>fil</code>：菲律宾语，<code>th</code>：泰语，<code>pt</code>：葡萄牙语，<code>tr</code>：土耳其语，<code>ar</code>：阿拉伯语，<code>es</code>：西班牙语，<code>hi</code>：印地语，<code>fr</code>：法语，<code>de</code>：德语，<code>it</code>：意大利语，<code>zh_dialect</code>：中文方言，<code>zh_en</code>：中英，<code>yue</code>：粤语，<code>ru</code>：俄语，<code>prime_zh</code>：中英方言</p><p>OCR 识别仅支持以下取值：</p><p><code>zh_en</code>：中英<br><code>multi</code>：其他</p><p>不同取值支持的语种参考文档：<a href="https://cloud.tencent.com/document/product/862/116243#OCRlanguages">OCR 识别支持语种</a></p>
                     * 
                     */
                    std::string GetVideoSrcLanguage() const;

                    /**
                     * 设置<p>智能字幕视频源语言</p><p>ASR识别和纯字幕翻译取值参考文档：<a href="https://cloud.tencent.com/document/product/862/116243#ASRlanguages">ASR 识别支持语种</a></p><p>下面列举部分常用取值</p><p><code>auto</code>：自动识别，<code>zh</code>：简体中文，<code>en</code>：英语，<code>ja</code>：日语，<code>ko</code>：韩语，<code>zh-PY</code>：中英粤，<code>zh_medical</code>：中文医疗，<code>vi</code>：越南语，<code>ms</code>：马来语，<code>id</code>：印度尼西亚语，<code>fil</code>：菲律宾语，<code>th</code>：泰语，<code>pt</code>：葡萄牙语，<code>tr</code>：土耳其语，<code>ar</code>：阿拉伯语，<code>es</code>：西班牙语，<code>hi</code>：印地语，<code>fr</code>：法语，<code>de</code>：德语，<code>it</code>：意大利语，<code>zh_dialect</code>：中文方言，<code>zh_en</code>：中英，<code>yue</code>：粤语，<code>ru</code>：俄语，<code>prime_zh</code>：中英方言</p><p>OCR 识别仅支持以下取值：</p><p><code>zh_en</code>：中英<br><code>multi</code>：其他</p><p>不同取值支持的语种参考文档：<a href="https://cloud.tencent.com/document/product/862/116243#OCRlanguages">OCR 识别支持语种</a></p>
                     * @param _videoSrcLanguage <p>智能字幕视频源语言</p><p>ASR识别和纯字幕翻译取值参考文档：<a href="https://cloud.tencent.com/document/product/862/116243#ASRlanguages">ASR 识别支持语种</a></p><p>下面列举部分常用取值</p><p><code>auto</code>：自动识别，<code>zh</code>：简体中文，<code>en</code>：英语，<code>ja</code>：日语，<code>ko</code>：韩语，<code>zh-PY</code>：中英粤，<code>zh_medical</code>：中文医疗，<code>vi</code>：越南语，<code>ms</code>：马来语，<code>id</code>：印度尼西亚语，<code>fil</code>：菲律宾语，<code>th</code>：泰语，<code>pt</code>：葡萄牙语，<code>tr</code>：土耳其语，<code>ar</code>：阿拉伯语，<code>es</code>：西班牙语，<code>hi</code>：印地语，<code>fr</code>：法语，<code>de</code>：德语，<code>it</code>：意大利语，<code>zh_dialect</code>：中文方言，<code>zh_en</code>：中英，<code>yue</code>：粤语，<code>ru</code>：俄语，<code>prime_zh</code>：中英方言</p><p>OCR 识别仅支持以下取值：</p><p><code>zh_en</code>：中英<br><code>multi</code>：其他</p><p>不同取值支持的语种参考文档：<a href="https://cloud.tencent.com/document/product/862/116243#OCRlanguages">OCR 识别支持语种</a></p>
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
                     * 获取<p>智能字幕字幕语言类型<br>0: 源语言<br>1: 翻译语言<br>2: 源语言+翻译语言<br>当TranslateSwitch为OFF时仅支持取0<br>当TranslateSwitch为ON时仅支持取1或2</p>
                     * @return SubtitleType <p>智能字幕字幕语言类型<br>0: 源语言<br>1: 翻译语言<br>2: 源语言+翻译语言<br>当TranslateSwitch为OFF时仅支持取0<br>当TranslateSwitch为ON时仅支持取1或2</p>
                     * 
                     */
                    int64_t GetSubtitleType() const;

                    /**
                     * 设置<p>智能字幕字幕语言类型<br>0: 源语言<br>1: 翻译语言<br>2: 源语言+翻译语言<br>当TranslateSwitch为OFF时仅支持取0<br>当TranslateSwitch为ON时仅支持取1或2</p>
                     * @param _subtitleType <p>智能字幕字幕语言类型<br>0: 源语言<br>1: 翻译语言<br>2: 源语言+翻译语言<br>当TranslateSwitch为OFF时仅支持取0<br>当TranslateSwitch为ON时仅支持取1或2</p>
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
                     * 获取<p>智能字幕模板描述信息<br>长度限制：256 个字符。</p>
                     * @return Comment <p>智能字幕模板描述信息<br>长度限制：256 个字符。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>智能字幕模板描述信息<br>长度限制：256 个字符。</p>
                     * @param _comment <p>智能字幕模板描述信息<br>长度限制：256 个字符。</p>
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
                     * 获取<p>智能字幕文件格式:</p><ul><li>ASR识别翻译处理类型下：<ul><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li><li>不填或填空：不生成字幕文件</li></ul></li><li>纯字幕翻译处理类型下：<ul><li>original：与源文件一致</li><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li></ul></li><li>OCR识别翻译处理类型下：<ul><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li></ul></li></ul><p><strong>注意</strong>：</p><ul><li>ASR识别方式下，翻译大于等于2种语言时不允许传空或不传；</li><li>纯字幕翻译方式下，不允许传空或不传</li><li>OCR类型的任务，在开启压制时，允许不传或传空</li></ul>
                     * @return SubtitleFormat <p>智能字幕文件格式:</p><ul><li>ASR识别翻译处理类型下：<ul><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li><li>不填或填空：不生成字幕文件</li></ul></li><li>纯字幕翻译处理类型下：<ul><li>original：与源文件一致</li><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li></ul></li><li>OCR识别翻译处理类型下：<ul><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li></ul></li></ul><p><strong>注意</strong>：</p><ul><li>ASR识别方式下，翻译大于等于2种语言时不允许传空或不传；</li><li>纯字幕翻译方式下，不允许传空或不传</li><li>OCR类型的任务，在开启压制时，允许不传或传空</li></ul>
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置<p>智能字幕文件格式:</p><ul><li>ASR识别翻译处理类型下：<ul><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li><li>不填或填空：不生成字幕文件</li></ul></li><li>纯字幕翻译处理类型下：<ul><li>original：与源文件一致</li><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li></ul></li><li>OCR识别翻译处理类型下：<ul><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li></ul></li></ul><p><strong>注意</strong>：</p><ul><li>ASR识别方式下，翻译大于等于2种语言时不允许传空或不传；</li><li>纯字幕翻译方式下，不允许传空或不传</li><li>OCR类型的任务，在开启压制时，允许不传或传空</li></ul>
                     * @param _subtitleFormat <p>智能字幕文件格式:</p><ul><li>ASR识别翻译处理类型下：<ul><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li><li>不填或填空：不生成字幕文件</li></ul></li><li>纯字幕翻译处理类型下：<ul><li>original：与源文件一致</li><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li></ul></li><li>OCR识别翻译处理类型下：<ul><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li></ul></li></ul><p><strong>注意</strong>：</p><ul><li>ASR识别方式下，翻译大于等于2种语言时不允许传空或不传；</li><li>纯字幕翻译方式下，不允许传空或不传</li><li>OCR类型的任务，在开启压制时，允许不传或传空</li></ul>
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
                     * 获取<p>ASR热词库参数</p>
                     * @return AsrHotWordsConfigure <p>ASR热词库参数</p>
                     * 
                     */
                    AsrHotWordsConfigure GetAsrHotWordsConfigure() const;

                    /**
                     * 设置<p>ASR热词库参数</p>
                     * @param _asrHotWordsConfigure <p>ASR热词库参数</p>
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
                     * 获取<p>字幕翻译开关<br><code>ON</code>: 开启翻译<br><code>OFF</code>: 关闭翻译</p><p><strong>注意</strong>：纯字幕翻译方式下，不传默认是打开的，不允许传空或<code>OFF</code>；</p>
                     * @return TranslateSwitch <p>字幕翻译开关<br><code>ON</code>: 开启翻译<br><code>OFF</code>: 关闭翻译</p><p><strong>注意</strong>：纯字幕翻译方式下，不传默认是打开的，不允许传空或<code>OFF</code>；</p>
                     * 
                     */
                    std::string GetTranslateSwitch() const;

                    /**
                     * 设置<p>字幕翻译开关<br><code>ON</code>: 开启翻译<br><code>OFF</code>: 关闭翻译</p><p><strong>注意</strong>：纯字幕翻译方式下，不传默认是打开的，不允许传空或<code>OFF</code>；</p>
                     * @param _translateSwitch <p>字幕翻译开关<br><code>ON</code>: 开启翻译<br><code>OFF</code>: 关闭翻译</p><p><strong>注意</strong>：纯字幕翻译方式下，不传默认是打开的，不允许传空或<code>OFF</code>；</p>
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
                     * 获取<p>字幕翻译目标语言当TranslateSwitch为ON的时候生效，翻译语言列表：</p><p>ASR 提取翻译参考语种列表：<a href="https://cloud.tencent.com/document/product/862/116243#ASRlanguages">ASR 翻译支持语种</a><br>OCR 提取翻译参考语种列表：<a href="https://cloud.tencent.com/document/product/862/116243#OCRlanguages">OCR 翻译支持语种</a></p><p><strong>注意</strong>：多语言方式，则使用 <code>/</code> 分割，如：<code>en/ja</code>，表示英语和日语。</p><p>部分常用语种示例：</p><p><code>ar</code>：阿拉伯语<br><code>en</code>：英语<br><code>fr</code>：法语<br><code>it</code>：意大利语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>ru</code>：俄语<br><code>th</code>：泰语<br><code>tr</code>：土耳其语<br><code>vi</code>：越南语<br><code>yue</code>：粤语<br><code>zh</code>：简体中文<br><code>zh-TW</code>：繁体中文</p>
                     * @return TranslateDstLanguage <p>字幕翻译目标语言当TranslateSwitch为ON的时候生效，翻译语言列表：</p><p>ASR 提取翻译参考语种列表：<a href="https://cloud.tencent.com/document/product/862/116243#ASRlanguages">ASR 翻译支持语种</a><br>OCR 提取翻译参考语种列表：<a href="https://cloud.tencent.com/document/product/862/116243#OCRlanguages">OCR 翻译支持语种</a></p><p><strong>注意</strong>：多语言方式，则使用 <code>/</code> 分割，如：<code>en/ja</code>，表示英语和日语。</p><p>部分常用语种示例：</p><p><code>ar</code>：阿拉伯语<br><code>en</code>：英语<br><code>fr</code>：法语<br><code>it</code>：意大利语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>ru</code>：俄语<br><code>th</code>：泰语<br><code>tr</code>：土耳其语<br><code>vi</code>：越南语<br><code>yue</code>：粤语<br><code>zh</code>：简体中文<br><code>zh-TW</code>：繁体中文</p>
                     * 
                     */
                    std::string GetTranslateDstLanguage() const;

                    /**
                     * 设置<p>字幕翻译目标语言当TranslateSwitch为ON的时候生效，翻译语言列表：</p><p>ASR 提取翻译参考语种列表：<a href="https://cloud.tencent.com/document/product/862/116243#ASRlanguages">ASR 翻译支持语种</a><br>OCR 提取翻译参考语种列表：<a href="https://cloud.tencent.com/document/product/862/116243#OCRlanguages">OCR 翻译支持语种</a></p><p><strong>注意</strong>：多语言方式，则使用 <code>/</code> 分割，如：<code>en/ja</code>，表示英语和日语。</p><p>部分常用语种示例：</p><p><code>ar</code>：阿拉伯语<br><code>en</code>：英语<br><code>fr</code>：法语<br><code>it</code>：意大利语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>ru</code>：俄语<br><code>th</code>：泰语<br><code>tr</code>：土耳其语<br><code>vi</code>：越南语<br><code>yue</code>：粤语<br><code>zh</code>：简体中文<br><code>zh-TW</code>：繁体中文</p>
                     * @param _translateDstLanguage <p>字幕翻译目标语言当TranslateSwitch为ON的时候生效，翻译语言列表：</p><p>ASR 提取翻译参考语种列表：<a href="https://cloud.tencent.com/document/product/862/116243#ASRlanguages">ASR 翻译支持语种</a><br>OCR 提取翻译参考语种列表：<a href="https://cloud.tencent.com/document/product/862/116243#OCRlanguages">OCR 翻译支持语种</a></p><p><strong>注意</strong>：多语言方式，则使用 <code>/</code> 分割，如：<code>en/ja</code>，表示英语和日语。</p><p>部分常用语种示例：</p><p><code>ar</code>：阿拉伯语<br><code>en</code>：英语<br><code>fr</code>：法语<br><code>it</code>：意大利语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>ru</code>：俄语<br><code>th</code>：泰语<br><code>tr</code>：土耳其语<br><code>vi</code>：越南语<br><code>yue</code>：粤语<br><code>zh</code>：简体中文<br><code>zh-TW</code>：繁体中文</p>
                     * 
                     */
                    void SetTranslateDstLanguage(const std::string& _translateDstLanguage);

                    /**
                     * 判断参数 TranslateDstLanguage 是否已赋值
                     * @return TranslateDstLanguage 是否已赋值
                     * 
                     */
                    bool TranslateDstLanguageHasBeenSet() const;

                    /**
                     * 获取<p>字幕处理类型：</p><ul><li>0：ASR识别字幕</li><li>1：纯字幕翻译</li><li>2：OCR识别字幕</li></ul><p><strong>注意</strong>：不传的情况下默认类型为 ASR识别字幕</p>
                     * @return ProcessType <p>字幕处理类型：</p><ul><li>0：ASR识别字幕</li><li>1：纯字幕翻译</li><li>2：OCR识别字幕</li></ul><p><strong>注意</strong>：不传的情况下默认类型为 ASR识别字幕</p>
                     * 
                     */
                    uint64_t GetProcessType() const;

                    /**
                     * 设置<p>字幕处理类型：</p><ul><li>0：ASR识别字幕</li><li>1：纯字幕翻译</li><li>2：OCR识别字幕</li></ul><p><strong>注意</strong>：不传的情况下默认类型为 ASR识别字幕</p>
                     * @param _processType <p>字幕处理类型：</p><ul><li>0：ASR识别字幕</li><li>1：纯字幕翻译</li><li>2：OCR识别字幕</li></ul><p><strong>注意</strong>：不传的情况下默认类型为 ASR识别字幕</p>
                     * 
                     */
                    void SetProcessType(const uint64_t& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取<p>字幕OCR提取框选区域配置</p>
                     * @return SelectingSubtitleAreasConfig <p>字幕OCR提取框选区域配置</p>
                     * 
                     */
                    SelectingSubtitleAreasConfig GetSelectingSubtitleAreasConfig() const;

                    /**
                     * 设置<p>字幕OCR提取框选区域配置</p>
                     * @param _selectingSubtitleAreasConfig <p>字幕OCR提取框选区域配置</p>
                     * 
                     */
                    void SetSelectingSubtitleAreasConfig(const SelectingSubtitleAreasConfig& _selectingSubtitleAreasConfig);

                    /**
                     * 判断参数 SelectingSubtitleAreasConfig 是否已赋值
                     * @return SelectingSubtitleAreasConfig 是否已赋值
                     * 
                     */
                    bool SelectingSubtitleAreasConfigHasBeenSet() const;

                    /**
                     * 获取<p>压制模板id，只有ProcessType为0或2（任务类型为ASR或OCR）时才允许填写。开启多个翻译语言时，不允许填写。</p>
                     * @return SubtitleEmbedId <p>压制模板id，只有ProcessType为0或2（任务类型为ASR或OCR）时才允许填写。开启多个翻译语言时，不允许填写。</p>
                     * 
                     */
                    int64_t GetSubtitleEmbedId() const;

                    /**
                     * 设置<p>压制模板id，只有ProcessType为0或2（任务类型为ASR或OCR）时才允许填写。开启多个翻译语言时，不允许填写。</p>
                     * @param _subtitleEmbedId <p>压制模板id，只有ProcessType为0或2（任务类型为ASR或OCR）时才允许填写。开启多个翻译语言时，不允许填写。</p>
                     * 
                     */
                    void SetSubtitleEmbedId(const int64_t& _subtitleEmbedId);

                    /**
                     * 判断参数 SubtitleEmbedId 是否已赋值
                     * @return SubtitleEmbedId 是否已赋值
                     * 
                     */
                    bool SubtitleEmbedIdHasBeenSet() const;

                    /**
                     * 获取<p>说话人识别开关，可选值：<br>0：表示不开启说话人识别；<br>1：表示开启说话人识别；<br>默认不开启说话人识别。</p>
                     * @return SpeakerMode <p>说话人识别开关，可选值：<br>0：表示不开启说话人识别；<br>1：表示开启说话人识别；<br>默认不开启说话人识别。</p>
                     * 
                     */
                    int64_t GetSpeakerMode() const;

                    /**
                     * 设置<p>说话人识别开关，可选值：<br>0：表示不开启说话人识别；<br>1：表示开启说话人识别；<br>默认不开启说话人识别。</p>
                     * @param _speakerMode <p>说话人识别开关，可选值：<br>0：表示不开启说话人识别；<br>1：表示开启说话人识别；<br>默认不开启说话人识别。</p>
                     * 
                     */
                    void SetSpeakerMode(const int64_t& _speakerMode);

                    /**
                     * 判断参数 SpeakerMode 是否已赋值
                     * @return SpeakerMode 是否已赋值
                     * 
                     */
                    bool SpeakerModeHasBeenSet() const;

                    /**
                     * 获取<p>说话人识别输出到字幕文件，可选值：<br>0：表示不输出到字幕文件；<br>1：表示输出到vtt字幕文件<br>注意：使用此参数SpeakerMode的值不能为0；<br>默认不输出到字幕文件。</p>
                     * @return SpeakerLabel <p>说话人识别输出到字幕文件，可选值：<br>0：表示不输出到字幕文件；<br>1：表示输出到vtt字幕文件<br>注意：使用此参数SpeakerMode的值不能为0；<br>默认不输出到字幕文件。</p>
                     * 
                     */
                    int64_t GetSpeakerLabel() const;

                    /**
                     * 设置<p>说话人识别输出到字幕文件，可选值：<br>0：表示不输出到字幕文件；<br>1：表示输出到vtt字幕文件<br>注意：使用此参数SpeakerMode的值不能为0；<br>默认不输出到字幕文件。</p>
                     * @param _speakerLabel <p>说话人识别输出到字幕文件，可选值：<br>0：表示不输出到字幕文件；<br>1：表示输出到vtt字幕文件<br>注意：使用此参数SpeakerMode的值不能为0；<br>默认不输出到字幕文件。</p>
                     * 
                     */
                    void SetSpeakerLabel(const int64_t& _speakerLabel);

                    /**
                     * 判断参数 SpeakerLabel 是否已赋值
                     * @return SpeakerLabel 是否已赋值
                     * 
                     */
                    bool SpeakerLabelHasBeenSet() const;

                private:

                    /**
                     * <p>智能字幕模板名称<br>长度限制：64 个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>智能字幕视频源语言</p><p>ASR识别和纯字幕翻译取值参考文档：<a href="https://cloud.tencent.com/document/product/862/116243#ASRlanguages">ASR 识别支持语种</a></p><p>下面列举部分常用取值</p><p><code>auto</code>：自动识别，<code>zh</code>：简体中文，<code>en</code>：英语，<code>ja</code>：日语，<code>ko</code>：韩语，<code>zh-PY</code>：中英粤，<code>zh_medical</code>：中文医疗，<code>vi</code>：越南语，<code>ms</code>：马来语，<code>id</code>：印度尼西亚语，<code>fil</code>：菲律宾语，<code>th</code>：泰语，<code>pt</code>：葡萄牙语，<code>tr</code>：土耳其语，<code>ar</code>：阿拉伯语，<code>es</code>：西班牙语，<code>hi</code>：印地语，<code>fr</code>：法语，<code>de</code>：德语，<code>it</code>：意大利语，<code>zh_dialect</code>：中文方言，<code>zh_en</code>：中英，<code>yue</code>：粤语，<code>ru</code>：俄语，<code>prime_zh</code>：中英方言</p><p>OCR 识别仅支持以下取值：</p><p><code>zh_en</code>：中英<br><code>multi</code>：其他</p><p>不同取值支持的语种参考文档：<a href="https://cloud.tencent.com/document/product/862/116243#OCRlanguages">OCR 识别支持语种</a></p>
                     */
                    std::string m_videoSrcLanguage;
                    bool m_videoSrcLanguageHasBeenSet;

                    /**
                     * <p>智能字幕字幕语言类型<br>0: 源语言<br>1: 翻译语言<br>2: 源语言+翻译语言<br>当TranslateSwitch为OFF时仅支持取0<br>当TranslateSwitch为ON时仅支持取1或2</p>
                     */
                    int64_t m_subtitleType;
                    bool m_subtitleTypeHasBeenSet;

                    /**
                     * <p>智能字幕模板描述信息<br>长度限制：256 个字符。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>智能字幕文件格式:</p><ul><li>ASR识别翻译处理类型下：<ul><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li><li>不填或填空：不生成字幕文件</li></ul></li><li>纯字幕翻译处理类型下：<ul><li>original：与源文件一致</li><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li></ul></li><li>OCR识别翻译处理类型下：<ul><li>vtt: WebVTT 格式字幕</li><li>srt: SRT 格式字幕</li></ul></li></ul><p><strong>注意</strong>：</p><ul><li>ASR识别方式下，翻译大于等于2种语言时不允许传空或不传；</li><li>纯字幕翻译方式下，不允许传空或不传</li><li>OCR类型的任务，在开启压制时，允许不传或传空</li></ul>
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * <p>ASR热词库参数</p>
                     */
                    AsrHotWordsConfigure m_asrHotWordsConfigure;
                    bool m_asrHotWordsConfigureHasBeenSet;

                    /**
                     * <p>字幕翻译开关<br><code>ON</code>: 开启翻译<br><code>OFF</code>: 关闭翻译</p><p><strong>注意</strong>：纯字幕翻译方式下，不传默认是打开的，不允许传空或<code>OFF</code>；</p>
                     */
                    std::string m_translateSwitch;
                    bool m_translateSwitchHasBeenSet;

                    /**
                     * <p>字幕翻译目标语言当TranslateSwitch为ON的时候生效，翻译语言列表：</p><p>ASR 提取翻译参考语种列表：<a href="https://cloud.tencent.com/document/product/862/116243#ASRlanguages">ASR 翻译支持语种</a><br>OCR 提取翻译参考语种列表：<a href="https://cloud.tencent.com/document/product/862/116243#OCRlanguages">OCR 翻译支持语种</a></p><p><strong>注意</strong>：多语言方式，则使用 <code>/</code> 分割，如：<code>en/ja</code>，表示英语和日语。</p><p>部分常用语种示例：</p><p><code>ar</code>：阿拉伯语<br><code>en</code>：英语<br><code>fr</code>：法语<br><code>it</code>：意大利语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>ru</code>：俄语<br><code>th</code>：泰语<br><code>tr</code>：土耳其语<br><code>vi</code>：越南语<br><code>yue</code>：粤语<br><code>zh</code>：简体中文<br><code>zh-TW</code>：繁体中文</p>
                     */
                    std::string m_translateDstLanguage;
                    bool m_translateDstLanguageHasBeenSet;

                    /**
                     * <p>字幕处理类型：</p><ul><li>0：ASR识别字幕</li><li>1：纯字幕翻译</li><li>2：OCR识别字幕</li></ul><p><strong>注意</strong>：不传的情况下默认类型为 ASR识别字幕</p>
                     */
                    uint64_t m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * <p>字幕OCR提取框选区域配置</p>
                     */
                    SelectingSubtitleAreasConfig m_selectingSubtitleAreasConfig;
                    bool m_selectingSubtitleAreasConfigHasBeenSet;

                    /**
                     * <p>压制模板id，只有ProcessType为0或2（任务类型为ASR或OCR）时才允许填写。开启多个翻译语言时，不允许填写。</p>
                     */
                    int64_t m_subtitleEmbedId;
                    bool m_subtitleEmbedIdHasBeenSet;

                    /**
                     * <p>说话人识别开关，可选值：<br>0：表示不开启说话人识别；<br>1：表示开启说话人识别；<br>默认不开启说话人识别。</p>
                     */
                    int64_t m_speakerMode;
                    bool m_speakerModeHasBeenSet;

                    /**
                     * <p>说话人识别输出到字幕文件，可选值：<br>0：表示不输出到字幕文件；<br>1：表示输出到vtt字幕文件<br>注意：使用此参数SpeakerMode的值不能为0；<br>默认不输出到字幕文件。</p>
                     */
                    int64_t m_speakerLabel;
                    bool m_speakerLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESMARTSUBTITLETEMPLATEREQUEST_H_
