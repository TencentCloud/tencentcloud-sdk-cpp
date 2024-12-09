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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ASRTRANSLATECONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ASRTRANSLATECONFIGUREINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SubtitleFormatsOperation.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 语音翻译识别控制参数
                */
                class AsrTranslateConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    AsrTranslateConfigureInfoForUpdate();
                    ~AsrTranslateConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语音翻译识别任务开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li><font color=red>注意：</font>语音翻译识别任务本身会返回 ASR 全文识别结果，为避免重复收费，因此禁止同时开启语音翻译识别和 ASR 全文识别功能项。
                     * @return Switch 语音翻译识别任务开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li><font color=red>注意：</font>语音翻译识别任务本身会返回 ASR 全文识别结果，为避免重复收费，因此禁止同时开启语音翻译识别和 ASR 全文识别功能项。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置语音翻译识别任务开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li><font color=red>注意：</font>语音翻译识别任务本身会返回 ASR 全文识别结果，为避免重复收费，因此禁止同时开启语音翻译识别和 ASR 全文识别功能项。
                     * @param _switch 语音翻译识别任务开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li><font color=red>注意：</font>语音翻译识别任务本身会返回 ASR 全文识别结果，为避免重复收费，因此禁止同时开启语音翻译识别和 ASR 全文识别功能项。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取媒体源语言，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>vi：越南语；</li>
<li>ms：马来语；</li>
<li>th：泰语；</li>
<li>pt：葡萄牙语；</li>
<li>tr：土耳其语；</li>
<li>ar：阿拉伯语；</li>
<li>es：西班牙语；</li>
<li>hi：印地语；</li>
<li>fr：法语。</li>
                     * @return SrcLanguage 媒体源语言，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>vi：越南语；</li>
<li>ms：马来语；</li>
<li>th：泰语；</li>
<li>pt：葡萄牙语；</li>
<li>tr：土耳其语；</li>
<li>ar：阿拉伯语；</li>
<li>es：西班牙语；</li>
<li>hi：印地语；</li>
<li>fr：法语。</li>
                     * 
                     */
                    std::string GetSrcLanguage() const;

                    /**
                     * 设置媒体源语言，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>vi：越南语；</li>
<li>ms：马来语；</li>
<li>th：泰语；</li>
<li>pt：葡萄牙语；</li>
<li>tr：土耳其语；</li>
<li>ar：阿拉伯语；</li>
<li>es：西班牙语；</li>
<li>hi：印地语；</li>
<li>fr：法语。</li>
                     * @param _srcLanguage 媒体源语言，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>vi：越南语；</li>
<li>ms：马来语；</li>
<li>th：泰语；</li>
<li>pt：葡萄牙语；</li>
<li>tr：土耳其语；</li>
<li>ar：阿拉伯语；</li>
<li>es：西班牙语；</li>
<li>hi：印地语；</li>
<li>fr：法语。</li>
                     * 
                     */
                    void SetSrcLanguage(const std::string& _srcLanguage);

                    /**
                     * 判断参数 SrcLanguage 是否已赋值
                     * @return SrcLanguage 是否已赋值
                     * 
                     */
                    bool SrcLanguageHasBeenSet() const;

                    /**
                     * 获取翻译目标语言。
若此参数填写空字符串，则表示只进行语音全文识别，不进行翻译（计费项与 AsrFullTextConfigure 语音全文识别一致）；
否则，此参数的取值范围分为如下几种情况：
当 SrcLanguage 为 zh（中文）时，取值范围：
<li>en：英文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语；</li>
<li>vi：越南语；</li>
<li>id：印尼语；</li>
<li>th：泰语；</li>
<li>ms：马来语。</li>
当 SrcLanguage 为 en（英文）时，取值范围：
<li>zh：中文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语；</li>
<li>vi：越南语；</li>
<li>id：印尼语；</li>
<li>th：泰语；</li>
<li>ms：马来语；</li>
<li>ar：阿拉伯语；</li>
<li>hi：印地语。</li>
当 SrcLanguage 为 ja（日文）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ko：韩文。</li>
当 SrcLanguage 为 ko（韩文）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ja：日文。</li>
当 SrcLanguage 为 vi（越南语）或 ms（马来语）或 th（泰语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文。</li>
当 SrcLanguage 为 pt（葡萄牙语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语。</li>
当 SrcLanguage 为 tr（土耳其语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
当 SrcLanguage 为 es（西班牙语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
当 SrcLanguage 为 ar（阿拉伯语）或 hi（印地语）时，取值范围：
<li>en：英文。</li>
当 SrcLanguage 为 fr（法语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
                     * @return DstLanguage 翻译目标语言。
若此参数填写空字符串，则表示只进行语音全文识别，不进行翻译（计费项与 AsrFullTextConfigure 语音全文识别一致）；
否则，此参数的取值范围分为如下几种情况：
当 SrcLanguage 为 zh（中文）时，取值范围：
<li>en：英文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语；</li>
<li>vi：越南语；</li>
<li>id：印尼语；</li>
<li>th：泰语；</li>
<li>ms：马来语。</li>
当 SrcLanguage 为 en（英文）时，取值范围：
<li>zh：中文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语；</li>
<li>vi：越南语；</li>
<li>id：印尼语；</li>
<li>th：泰语；</li>
<li>ms：马来语；</li>
<li>ar：阿拉伯语；</li>
<li>hi：印地语。</li>
当 SrcLanguage 为 ja（日文）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ko：韩文。</li>
当 SrcLanguage 为 ko（韩文）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ja：日文。</li>
当 SrcLanguage 为 vi（越南语）或 ms（马来语）或 th（泰语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文。</li>
当 SrcLanguage 为 pt（葡萄牙语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语。</li>
当 SrcLanguage 为 tr（土耳其语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
当 SrcLanguage 为 es（西班牙语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
当 SrcLanguage 为 ar（阿拉伯语）或 hi（印地语）时，取值范围：
<li>en：英文。</li>
当 SrcLanguage 为 fr（法语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
                     * 
                     */
                    std::string GetDstLanguage() const;

                    /**
                     * 设置翻译目标语言。
若此参数填写空字符串，则表示只进行语音全文识别，不进行翻译（计费项与 AsrFullTextConfigure 语音全文识别一致）；
否则，此参数的取值范围分为如下几种情况：
当 SrcLanguage 为 zh（中文）时，取值范围：
<li>en：英文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语；</li>
<li>vi：越南语；</li>
<li>id：印尼语；</li>
<li>th：泰语；</li>
<li>ms：马来语。</li>
当 SrcLanguage 为 en（英文）时，取值范围：
<li>zh：中文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语；</li>
<li>vi：越南语；</li>
<li>id：印尼语；</li>
<li>th：泰语；</li>
<li>ms：马来语；</li>
<li>ar：阿拉伯语；</li>
<li>hi：印地语。</li>
当 SrcLanguage 为 ja（日文）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ko：韩文。</li>
当 SrcLanguage 为 ko（韩文）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ja：日文。</li>
当 SrcLanguage 为 vi（越南语）或 ms（马来语）或 th（泰语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文。</li>
当 SrcLanguage 为 pt（葡萄牙语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语。</li>
当 SrcLanguage 为 tr（土耳其语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
当 SrcLanguage 为 es（西班牙语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
当 SrcLanguage 为 ar（阿拉伯语）或 hi（印地语）时，取值范围：
<li>en：英文。</li>
当 SrcLanguage 为 fr（法语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
                     * @param _dstLanguage 翻译目标语言。
若此参数填写空字符串，则表示只进行语音全文识别，不进行翻译（计费项与 AsrFullTextConfigure 语音全文识别一致）；
否则，此参数的取值范围分为如下几种情况：
当 SrcLanguage 为 zh（中文）时，取值范围：
<li>en：英文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语；</li>
<li>vi：越南语；</li>
<li>id：印尼语；</li>
<li>th：泰语；</li>
<li>ms：马来语。</li>
当 SrcLanguage 为 en（英文）时，取值范围：
<li>zh：中文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语；</li>
<li>vi：越南语；</li>
<li>id：印尼语；</li>
<li>th：泰语；</li>
<li>ms：马来语；</li>
<li>ar：阿拉伯语；</li>
<li>hi：印地语。</li>
当 SrcLanguage 为 ja（日文）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ko：韩文。</li>
当 SrcLanguage 为 ko（韩文）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ja：日文。</li>
当 SrcLanguage 为 vi（越南语）或 ms（马来语）或 th（泰语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文。</li>
当 SrcLanguage 为 pt（葡萄牙语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语。</li>
当 SrcLanguage 为 tr（土耳其语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
当 SrcLanguage 为 es（西班牙语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
当 SrcLanguage 为 ar（阿拉伯语）或 hi（印地语）时，取值范围：
<li>en：英文。</li>
当 SrcLanguage 为 fr（法语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
                     * 
                     */
                    void SetDstLanguage(const std::string& _dstLanguage);

                    /**
                     * 判断参数 DstLanguage 是否已赋值
                     * @return DstLanguage 是否已赋值
                     * 
                     */
                    bool DstLanguageHasBeenSet() const;

                    /**
                     * 获取字幕格式列表操作信息。
                     * @return SubtitleFormatsOperation 字幕格式列表操作信息。
                     * 
                     */
                    SubtitleFormatsOperation GetSubtitleFormatsOperation() const;

                    /**
                     * 设置字幕格式列表操作信息。
                     * @param _subtitleFormatsOperation 字幕格式列表操作信息。
                     * 
                     */
                    void SetSubtitleFormatsOperation(const SubtitleFormatsOperation& _subtitleFormatsOperation);

                    /**
                     * 判断参数 SubtitleFormatsOperation 是否已赋值
                     * @return SubtitleFormatsOperation 是否已赋值
                     * 
                     */
                    bool SubtitleFormatsOperationHasBeenSet() const;

                    /**
                     * 获取指定字幕名称，长度限制：64 个字符。该值将用于播放器展示。
                     * @return SubtitleName 指定字幕名称，长度限制：64 个字符。该值将用于播放器展示。
                     * 
                     */
                    std::string GetSubtitleName() const;

                    /**
                     * 设置指定字幕名称，长度限制：64 个字符。该值将用于播放器展示。
                     * @param _subtitleName 指定字幕名称，长度限制：64 个字符。该值将用于播放器展示。
                     * 
                     */
                    void SetSubtitleName(const std::string& _subtitleName);

                    /**
                     * 判断参数 SubtitleName 是否已赋值
                     * @return SubtitleName 是否已赋值
                     * 
                     */
                    bool SubtitleNameHasBeenSet() const;

                private:

                    /**
                     * 语音翻译识别任务开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li><font color=red>注意：</font>语音翻译识别任务本身会返回 ASR 全文识别结果，为避免重复收费，因此禁止同时开启语音翻译识别和 ASR 全文识别功能项。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 媒体源语言，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>vi：越南语；</li>
<li>ms：马来语；</li>
<li>th：泰语；</li>
<li>pt：葡萄牙语；</li>
<li>tr：土耳其语；</li>
<li>ar：阿拉伯语；</li>
<li>es：西班牙语；</li>
<li>hi：印地语；</li>
<li>fr：法语。</li>
                     */
                    std::string m_srcLanguage;
                    bool m_srcLanguageHasBeenSet;

                    /**
                     * 翻译目标语言。
若此参数填写空字符串，则表示只进行语音全文识别，不进行翻译（计费项与 AsrFullTextConfigure 语音全文识别一致）；
否则，此参数的取值范围分为如下几种情况：
当 SrcLanguage 为 zh（中文）时，取值范围：
<li>en：英文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语；</li>
<li>vi：越南语；</li>
<li>id：印尼语；</li>
<li>th：泰语；</li>
<li>ms：马来语。</li>
当 SrcLanguage 为 en（英文）时，取值范围：
<li>zh：中文；</li>
<li>ja：日文；</li>
<li>ko：韩文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语；</li>
<li>vi：越南语；</li>
<li>id：印尼语；</li>
<li>th：泰语；</li>
<li>ms：马来语；</li>
<li>ar：阿拉伯语；</li>
<li>hi：印地语。</li>
当 SrcLanguage 为 ja（日文）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ko：韩文。</li>
当 SrcLanguage 为 ko（韩文）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>ja：日文。</li>
当 SrcLanguage 为 vi（越南语）或 ms（马来语）或 th（泰语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文。</li>
当 SrcLanguage 为 pt（葡萄牙语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语。</li>
当 SrcLanguage 为 tr（土耳其语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
当 SrcLanguage 为 es（西班牙语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>fr：法语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
当 SrcLanguage 为 ar（阿拉伯语）或 hi（印地语）时，取值范围：
<li>en：英文。</li>
当 SrcLanguage 为 fr（法语）时，取值范围：
<li>zh：中文；</li>
<li>en：英文；</li>
<li>es：西班牙语；</li>
<li>it：意大利语；</li>
<li>de：德语；</li>
<li>tr：土耳其语；</li>
<li>ru：俄语；</li>
<li>pt：葡萄牙语。</li>
                     */
                    std::string m_dstLanguage;
                    bool m_dstLanguageHasBeenSet;

                    /**
                     * 字幕格式列表操作信息。
                     */
                    SubtitleFormatsOperation m_subtitleFormatsOperation;
                    bool m_subtitleFormatsOperationHasBeenSet;

                    /**
                     * 指定字幕名称，长度限制：64 个字符。该值将用于播放器展示。
                     */
                    std::string m_subtitleName;
                    bool m_subtitleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ASRTRANSLATECONFIGUREINFOFORUPDATE_H_
