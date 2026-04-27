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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETEMPLATEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 智能字幕模板详情
                */
                class SmartSubtitleTemplateItem : public AbstractModel
                {
                public:
                    SmartSubtitleTemplateItem();
                    ~SmartSubtitleTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>智能字幕模板唯一标识</p>
                     * @return Definition <p>智能字幕模板唯一标识</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>智能字幕模板唯一标识</p>
                     * @param _definition <p>智能字幕模板唯一标识</p>
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
                     * 获取<p>智能字幕模板名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>智能字幕模板名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>智能字幕模板名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>智能字幕模板名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>智能字幕模板描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment <p>智能字幕模板描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>智能字幕模板描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment <p>智能字幕模板描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>模板类型，取值范围：</p><ul><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>模板类型，取值范围：</p><ul><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>模板类型，取值范围：</p><ul><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>模板类型，取值范围：</p><ul><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>ASR热词库参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsrHotWordsConfigure <p>ASR热词库参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AsrHotWordsConfigure GetAsrHotWordsConfigure() const;

                    /**
                     * 设置<p>ASR热词库参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asrHotWordsConfigure <p>ASR热词库参数</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>模板关联热词库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsrHotWordsLibraryName <p>模板关联热词库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAsrHotWordsLibraryName() const;

                    /**
                     * 设置<p>模板关联热词库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asrHotWordsLibraryName <p>模板关联热词库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAsrHotWordsLibraryName(const std::string& _asrHotWordsLibraryName);

                    /**
                     * 判断参数 AsrHotWordsLibraryName 是否已赋值
                     * @return AsrHotWordsLibraryName 是否已赋值
                     * 
                     */
                    bool AsrHotWordsLibraryNameHasBeenSet() const;

                    /**
                     * 获取<p>智能字幕视频源语言列表：</p><p><code>zh</code>：简体中文<br><code>yue</code>：中文粵语<br><code>zh-PY</code>：中英粤<br><code>zh_medical</code>：中文医疗<br><code>zh_dialect</code>：中文方言<br><code>prime_zh</code>：中英方言<br><code>zh_en</code>：中英<br><code>en</code>：英语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>fr</code>：法语<br><code>es</code>：西班牙语<br><code>it</code>：意大利语<br><code>de</code>：德语<br><code>tr</code>：土耳其语<br><code>ru</code>：俄语<br><code>pt</code>：葡萄牙语（巴西）<br><code>pt-PT</code>：葡萄牙语（葡萄牙）<br><code>vi</code>：越南语<br><code>id</code>：印度尼西亚语<br><code>ms</code>：马来语<br><code>th</code>：泰语<br><code>ar</code>：阿拉伯语<br><code>hi</code>：印地语<br><code>fil</code>：菲律宾语<br><code>auto</code>：自动识别（仅在纯字幕翻译中支持）</p>
                     * @return VideoSrcLanguage <p>智能字幕视频源语言列表：</p><p><code>zh</code>：简体中文<br><code>yue</code>：中文粵语<br><code>zh-PY</code>：中英粤<br><code>zh_medical</code>：中文医疗<br><code>zh_dialect</code>：中文方言<br><code>prime_zh</code>：中英方言<br><code>zh_en</code>：中英<br><code>en</code>：英语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>fr</code>：法语<br><code>es</code>：西班牙语<br><code>it</code>：意大利语<br><code>de</code>：德语<br><code>tr</code>：土耳其语<br><code>ru</code>：俄语<br><code>pt</code>：葡萄牙语（巴西）<br><code>pt-PT</code>：葡萄牙语（葡萄牙）<br><code>vi</code>：越南语<br><code>id</code>：印度尼西亚语<br><code>ms</code>：马来语<br><code>th</code>：泰语<br><code>ar</code>：阿拉伯语<br><code>hi</code>：印地语<br><code>fil</code>：菲律宾语<br><code>auto</code>：自动识别（仅在纯字幕翻译中支持）</p>
                     * 
                     */
                    std::string GetVideoSrcLanguage() const;

                    /**
                     * 设置<p>智能字幕视频源语言列表：</p><p><code>zh</code>：简体中文<br><code>yue</code>：中文粵语<br><code>zh-PY</code>：中英粤<br><code>zh_medical</code>：中文医疗<br><code>zh_dialect</code>：中文方言<br><code>prime_zh</code>：中英方言<br><code>zh_en</code>：中英<br><code>en</code>：英语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>fr</code>：法语<br><code>es</code>：西班牙语<br><code>it</code>：意大利语<br><code>de</code>：德语<br><code>tr</code>：土耳其语<br><code>ru</code>：俄语<br><code>pt</code>：葡萄牙语（巴西）<br><code>pt-PT</code>：葡萄牙语（葡萄牙）<br><code>vi</code>：越南语<br><code>id</code>：印度尼西亚语<br><code>ms</code>：马来语<br><code>th</code>：泰语<br><code>ar</code>：阿拉伯语<br><code>hi</code>：印地语<br><code>fil</code>：菲律宾语<br><code>auto</code>：自动识别（仅在纯字幕翻译中支持）</p>
                     * @param _videoSrcLanguage <p>智能字幕视频源语言列表：</p><p><code>zh</code>：简体中文<br><code>yue</code>：中文粵语<br><code>zh-PY</code>：中英粤<br><code>zh_medical</code>：中文医疗<br><code>zh_dialect</code>：中文方言<br><code>prime_zh</code>：中英方言<br><code>zh_en</code>：中英<br><code>en</code>：英语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>fr</code>：法语<br><code>es</code>：西班牙语<br><code>it</code>：意大利语<br><code>de</code>：德语<br><code>tr</code>：土耳其语<br><code>ru</code>：俄语<br><code>pt</code>：葡萄牙语（巴西）<br><code>pt-PT</code>：葡萄牙语（葡萄牙）<br><code>vi</code>：越南语<br><code>id</code>：印度尼西亚语<br><code>ms</code>：马来语<br><code>th</code>：泰语<br><code>ar</code>：阿拉伯语<br><code>hi</code>：印地语<br><code>fil</code>：菲律宾语<br><code>auto</code>：自动识别（仅在纯字幕翻译中支持）</p>
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
                     * 获取<p>智能字幕文件格式</p><ul><li>vtt: WebVTT 格式</li><li>srt: SRT格式</li><li>original：与源字幕文件一致（用于纯字幕翻译模板）</li><li>不填或填空：不生成字幕文件</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubtitleFormat <p>智能字幕文件格式</p><ul><li>vtt: WebVTT 格式</li><li>srt: SRT格式</li><li>original：与源字幕文件一致（用于纯字幕翻译模板）</li><li>不填或填空：不生成字幕文件</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置<p>智能字幕文件格式</p><ul><li>vtt: WebVTT 格式</li><li>srt: SRT格式</li><li>original：与源字幕文件一致（用于纯字幕翻译模板）</li><li>不填或填空：不生成字幕文件</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subtitleFormat <p>智能字幕文件格式</p><ul><li>vtt: WebVTT 格式</li><li>srt: SRT格式</li><li>original：与源字幕文件一致（用于纯字幕翻译模板）</li><li>不填或填空：不生成字幕文件</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>字幕翻译开关<br>ON: 开启翻译<br>OFF: 关闭翻译</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranslateSwitch <p>字幕翻译开关<br>ON: 开启翻译<br>OFF: 关闭翻译</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranslateSwitch() const;

                    /**
                     * 设置<p>字幕翻译开关<br>ON: 开启翻译<br>OFF: 关闭翻译</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _translateSwitch <p>字幕翻译开关<br>ON: 开启翻译<br>OFF: 关闭翻译</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>字幕翻译目标语言<br>当TranslateSwitch为ON的时候生效<br><code>zh</code>：简体中文<br><code>zh-TW</code>：繁体中文<br><code>en</code>：英语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>fr</code>：法语<br><code>es</code>：西班牙语<br><code>it</code>：意大利语<br><code>de</code>：德语<br><code>tr</code>：土耳其语<br><code>ru</code>：俄语<br><code>pt</code>：葡萄牙语（巴西）<br><code>pt-PT</code>：葡萄牙语（葡萄牙）<br><code>vi</code>：越南语<br><code>id</code>：印度尼西亚语<br><code>ms</code>：马来语<br><code>th</code>：泰语<br><code>ar</code>：阿拉伯语<br><code>hi</code>：印地语<br><code>fil</code>：菲律宾语</p><p><strong>注意</strong>：多语言方式，则使用 <code>/</code> 分割，如：<code>en/ja</code>，表示英语和日语。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranslateDstLanguage <p>字幕翻译目标语言<br>当TranslateSwitch为ON的时候生效<br><code>zh</code>：简体中文<br><code>zh-TW</code>：繁体中文<br><code>en</code>：英语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>fr</code>：法语<br><code>es</code>：西班牙语<br><code>it</code>：意大利语<br><code>de</code>：德语<br><code>tr</code>：土耳其语<br><code>ru</code>：俄语<br><code>pt</code>：葡萄牙语（巴西）<br><code>pt-PT</code>：葡萄牙语（葡萄牙）<br><code>vi</code>：越南语<br><code>id</code>：印度尼西亚语<br><code>ms</code>：马来语<br><code>th</code>：泰语<br><code>ar</code>：阿拉伯语<br><code>hi</code>：印地语<br><code>fil</code>：菲律宾语</p><p><strong>注意</strong>：多语言方式，则使用 <code>/</code> 分割，如：<code>en/ja</code>，表示英语和日语。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranslateDstLanguage() const;

                    /**
                     * 设置<p>字幕翻译目标语言<br>当TranslateSwitch为ON的时候生效<br><code>zh</code>：简体中文<br><code>zh-TW</code>：繁体中文<br><code>en</code>：英语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>fr</code>：法语<br><code>es</code>：西班牙语<br><code>it</code>：意大利语<br><code>de</code>：德语<br><code>tr</code>：土耳其语<br><code>ru</code>：俄语<br><code>pt</code>：葡萄牙语（巴西）<br><code>pt-PT</code>：葡萄牙语（葡萄牙）<br><code>vi</code>：越南语<br><code>id</code>：印度尼西亚语<br><code>ms</code>：马来语<br><code>th</code>：泰语<br><code>ar</code>：阿拉伯语<br><code>hi</code>：印地语<br><code>fil</code>：菲律宾语</p><p><strong>注意</strong>：多语言方式，则使用 <code>/</code> 分割，如：<code>en/ja</code>，表示英语和日语。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _translateDstLanguage <p>字幕翻译目标语言<br>当TranslateSwitch为ON的时候生效<br><code>zh</code>：简体中文<br><code>zh-TW</code>：繁体中文<br><code>en</code>：英语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>fr</code>：法语<br><code>es</code>：西班牙语<br><code>it</code>：意大利语<br><code>de</code>：德语<br><code>tr</code>：土耳其语<br><code>ru</code>：俄语<br><code>pt</code>：葡萄牙语（巴西）<br><code>pt-PT</code>：葡萄牙语（葡萄牙）<br><code>vi</code>：越南语<br><code>id</code>：印度尼西亚语<br><code>ms</code>：马来语<br><code>th</code>：泰语<br><code>ar</code>：阿拉伯语<br><code>hi</code>：印地语<br><code>fil</code>：菲律宾语</p><p><strong>注意</strong>：多语言方式，则使用 <code>/</code> 分割，如：<code>en/ja</code>，表示英语和日语。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
                     * @return CreateTime <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
                     * @param _createTime <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
                     * @return UpdateTime <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
                     * @param _updateTime <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>智能字幕预设模板别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliasName <p>智能字幕预设模板别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置<p>智能字幕预设模板别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aliasName <p>智能字幕预设模板别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取<p>字幕处理类型：</p><ul><li>0：ASR识别字幕</li><li>1：纯字幕翻译</li><li>2:  OCR识别字幕</li></ul>
                     * @return ProcessType <p>字幕处理类型：</p><ul><li>0：ASR识别字幕</li><li>1：纯字幕翻译</li><li>2:  OCR识别字幕</li></ul>
                     * 
                     */
                    uint64_t GetProcessType() const;

                    /**
                     * 设置<p>字幕处理类型：</p><ul><li>0：ASR识别字幕</li><li>1：纯字幕翻译</li><li>2:  OCR识别字幕</li></ul>
                     * @param _processType <p>字幕处理类型：</p><ul><li>0：ASR识别字幕</li><li>1：纯字幕翻译</li><li>2:  OCR识别字幕</li></ul>
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
                     * 获取<p>字幕OCR提取框选区域配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelectingSubtitleAreasConfig <p>字幕OCR提取框选区域配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SelectingSubtitleAreasConfig GetSelectingSubtitleAreasConfig() const;

                    /**
                     * 设置<p>字幕OCR提取框选区域配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selectingSubtitleAreasConfig <p>字幕OCR提取框选区域配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>字幕压制模板id</p>
                     * @return SubtitleEmbedId <p>字幕压制模板id</p>
                     * 
                     */
                    int64_t GetSubtitleEmbedId() const;

                    /**
                     * 设置<p>字幕压制模板id</p>
                     * @param _subtitleEmbedId <p>字幕压制模板id</p>
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
                     * 获取<p>说话人识别模式，可选值：<br>0：表示不开启说话人识别；<br>1：表示开启说话人识别；<br>默认值：0</p>
                     * @return SpeakerMode <p>说话人识别模式，可选值：<br>0：表示不开启说话人识别；<br>1：表示开启说话人识别；<br>默认值：0</p>
                     * 
                     */
                    int64_t GetSpeakerMode() const;

                    /**
                     * 设置<p>说话人识别模式，可选值：<br>0：表示不开启说话人识别；<br>1：表示开启说话人识别；<br>默认值：0</p>
                     * @param _speakerMode <p>说话人识别模式，可选值：<br>0：表示不开启说话人识别；<br>1：表示开启说话人识别；<br>默认值：0</p>
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
                     * 获取<p>说话人识别输出到字幕文件，可选值：<br>0：表示不输出到字幕文件；<br>1：表示输出到vtt字幕文件<br>注意：使用此参数SpeakerMode的值不能为0；<br>默认值：0</p>
                     * @return SpeakerLabel <p>说话人识别输出到字幕文件，可选值：<br>0：表示不输出到字幕文件；<br>1：表示输出到vtt字幕文件<br>注意：使用此参数SpeakerMode的值不能为0；<br>默认值：0</p>
                     * 
                     */
                    int64_t GetSpeakerLabel() const;

                    /**
                     * 设置<p>说话人识别输出到字幕文件，可选值：<br>0：表示不输出到字幕文件；<br>1：表示输出到vtt字幕文件<br>注意：使用此参数SpeakerMode的值不能为0；<br>默认值：0</p>
                     * @param _speakerLabel <p>说话人识别输出到字幕文件，可选值：<br>0：表示不输出到字幕文件；<br>1：表示输出到vtt字幕文件<br>注意：使用此参数SpeakerMode的值不能为0；<br>默认值：0</p>
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
                     * <p>智能字幕模板唯一标识</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>智能字幕模板名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>智能字幕模板描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>模板类型，取值范围：</p><ul><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>ASR热词库参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AsrHotWordsConfigure m_asrHotWordsConfigure;
                    bool m_asrHotWordsConfigureHasBeenSet;

                    /**
                     * <p>模板关联热词库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_asrHotWordsLibraryName;
                    bool m_asrHotWordsLibraryNameHasBeenSet;

                    /**
                     * <p>智能字幕视频源语言列表：</p><p><code>zh</code>：简体中文<br><code>yue</code>：中文粵语<br><code>zh-PY</code>：中英粤<br><code>zh_medical</code>：中文医疗<br><code>zh_dialect</code>：中文方言<br><code>prime_zh</code>：中英方言<br><code>zh_en</code>：中英<br><code>en</code>：英语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>fr</code>：法语<br><code>es</code>：西班牙语<br><code>it</code>：意大利语<br><code>de</code>：德语<br><code>tr</code>：土耳其语<br><code>ru</code>：俄语<br><code>pt</code>：葡萄牙语（巴西）<br><code>pt-PT</code>：葡萄牙语（葡萄牙）<br><code>vi</code>：越南语<br><code>id</code>：印度尼西亚语<br><code>ms</code>：马来语<br><code>th</code>：泰语<br><code>ar</code>：阿拉伯语<br><code>hi</code>：印地语<br><code>fil</code>：菲律宾语<br><code>auto</code>：自动识别（仅在纯字幕翻译中支持）</p>
                     */
                    std::string m_videoSrcLanguage;
                    bool m_videoSrcLanguageHasBeenSet;

                    /**
                     * <p>智能字幕文件格式</p><ul><li>vtt: WebVTT 格式</li><li>srt: SRT格式</li><li>original：与源字幕文件一致（用于纯字幕翻译模板）</li><li>不填或填空：不生成字幕文件</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * <p>智能字幕字幕语言类型<br>0: 源语言<br>1: 翻译语言<br>2: 源语言+翻译语言<br>当TranslateSwitch为OFF时仅支持取0<br>当TranslateSwitch为ON时仅支持取1或2</p>
                     */
                    int64_t m_subtitleType;
                    bool m_subtitleTypeHasBeenSet;

                    /**
                     * <p>字幕翻译开关<br>ON: 开启翻译<br>OFF: 关闭翻译</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_translateSwitch;
                    bool m_translateSwitchHasBeenSet;

                    /**
                     * <p>字幕翻译目标语言<br>当TranslateSwitch为ON的时候生效<br><code>zh</code>：简体中文<br><code>zh-TW</code>：繁体中文<br><code>en</code>：英语<br><code>ja</code>：日语<br><code>ko</code>：韩语<br><code>fr</code>：法语<br><code>es</code>：西班牙语<br><code>it</code>：意大利语<br><code>de</code>：德语<br><code>tr</code>：土耳其语<br><code>ru</code>：俄语<br><code>pt</code>：葡萄牙语（巴西）<br><code>pt-PT</code>：葡萄牙语（葡萄牙）<br><code>vi</code>：越南语<br><code>id</code>：印度尼西亚语<br><code>ms</code>：马来语<br><code>th</code>：泰语<br><code>ar</code>：阿拉伯语<br><code>hi</code>：印地语<br><code>fil</code>：菲律宾语</p><p><strong>注意</strong>：多语言方式，则使用 <code>/</code> 分割，如：<code>en/ja</code>，表示英语和日语。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_translateDstLanguage;
                    bool m_translateDstLanguageHasBeenSet;

                    /**
                     * <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>智能字幕预设模板别名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * <p>字幕处理类型：</p><ul><li>0：ASR识别字幕</li><li>1：纯字幕翻译</li><li>2:  OCR识别字幕</li></ul>
                     */
                    uint64_t m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * <p>字幕OCR提取框选区域配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SelectingSubtitleAreasConfig m_selectingSubtitleAreasConfig;
                    bool m_selectingSubtitleAreasConfigHasBeenSet;

                    /**
                     * <p>字幕压制模板id</p>
                     */
                    int64_t m_subtitleEmbedId;
                    bool m_subtitleEmbedIdHasBeenSet;

                    /**
                     * <p>说话人识别模式，可选值：<br>0：表示不开启说话人识别；<br>1：表示开启说话人识别；<br>默认值：0</p>
                     */
                    int64_t m_speakerMode;
                    bool m_speakerModeHasBeenSet;

                    /**
                     * <p>说话人识别输出到字幕文件，可选值：<br>0：表示不输出到字幕文件；<br>1：表示输出到vtt字幕文件<br>注意：使用此参数SpeakerMode的值不能为0；<br>默认值：0</p>
                     */
                    int64_t m_speakerLabel;
                    bool m_speakerLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETEMPLATEITEM_H_
