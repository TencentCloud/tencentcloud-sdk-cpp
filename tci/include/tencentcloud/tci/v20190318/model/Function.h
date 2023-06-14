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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_FUNCTION_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_FUNCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 功能开关列表，表示是否需要打开相应的功能，返回相应的信息
                */
                class Function : public AbstractModel
                {
                public:
                    Function();
                    ~Function() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出全部文本标识，当该值设置为true时，会输出当前音频的全部文本
                     * @return EnableAllText 输出全部文本标识，当该值设置为true时，会输出当前音频的全部文本
                     * 
                     */
                    bool GetEnableAllText() const;

                    /**
                     * 设置输出全部文本标识，当该值设置为true时，会输出当前音频的全部文本
                     * @param _enableAllText 输出全部文本标识，当该值设置为true时，会输出当前音频的全部文本
                     * 
                     */
                    void SetEnableAllText(const bool& _enableAllText);

                    /**
                     * 判断参数 EnableAllText 是否已赋值
                     * @return EnableAllText 是否已赋值
                     * 
                     */
                    bool EnableAllTextHasBeenSet() const;

                    /**
                     * 获取输出关键词信息标识，当该值设置为true时，会输出当前音频的关键词信息。
                     * @return EnableKeyword 输出关键词信息标识，当该值设置为true时，会输出当前音频的关键词信息。
                     * 
                     */
                    bool GetEnableKeyword() const;

                    /**
                     * 设置输出关键词信息标识，当该值设置为true时，会输出当前音频的关键词信息。
                     * @param _enableKeyword 输出关键词信息标识，当该值设置为true时，会输出当前音频的关键词信息。
                     * 
                     */
                    void SetEnableKeyword(const bool& _enableKeyword);

                    /**
                     * 判断参数 EnableKeyword 是否已赋值
                     * @return EnableKeyword 是否已赋值
                     * 
                     */
                    bool EnableKeywordHasBeenSet() const;

                    /**
                     * 获取静音检测标识，当设置为 true 时，需要设置静音时间阈值字段mute_threshold，统计结果中会返回静音片段。
                     * @return EnableMuteDetect 静音检测标识，当设置为 true 时，需要设置静音时间阈值字段mute_threshold，统计结果中会返回静音片段。
                     * 
                     */
                    bool GetEnableMuteDetect() const;

                    /**
                     * 设置静音检测标识，当设置为 true 时，需要设置静音时间阈值字段mute_threshold，统计结果中会返回静音片段。
                     * @param _enableMuteDetect 静音检测标识，当设置为 true 时，需要设置静音时间阈值字段mute_threshold，统计结果中会返回静音片段。
                     * 
                     */
                    void SetEnableMuteDetect(const bool& _enableMuteDetect);

                    /**
                     * 判断参数 EnableMuteDetect 是否已赋值
                     * @return EnableMuteDetect 是否已赋值
                     * 
                     */
                    bool EnableMuteDetectHasBeenSet() const;

                    /**
                     * 获取输出音频统计信息标识，当设置为 true 时，任务查询结果会输出音频的统计信息（AsrStat）
                     * @return EnableVadInfo 输出音频统计信息标识，当设置为 true 时，任务查询结果会输出音频的统计信息（AsrStat）
                     * 
                     */
                    bool GetEnableVadInfo() const;

                    /**
                     * 设置输出音频统计信息标识，当设置为 true 时，任务查询结果会输出音频的统计信息（AsrStat）
                     * @param _enableVadInfo 输出音频统计信息标识，当设置为 true 时，任务查询结果会输出音频的统计信息（AsrStat）
                     * 
                     */
                    void SetEnableVadInfo(const bool& _enableVadInfo);

                    /**
                     * 判断参数 EnableVadInfo 是否已赋值
                     * @return EnableVadInfo 是否已赋值
                     * 
                     */
                    bool EnableVadInfoHasBeenSet() const;

                    /**
                     * 获取输出音频音量信息标识，当设置为 true 时，会输出当前音频音量信息。
                     * @return EnableVolume 输出音频音量信息标识，当设置为 true 时，会输出当前音频音量信息。
                     * 
                     */
                    bool GetEnableVolume() const;

                    /**
                     * 设置输出音频音量信息标识，当设置为 true 时，会输出当前音频音量信息。
                     * @param _enableVolume 输出音频音量信息标识，当设置为 true 时，会输出当前音频音量信息。
                     * 
                     */
                    void SetEnableVolume(const bool& _enableVolume);

                    /**
                     * 判断参数 EnableVolume 是否已赋值
                     * @return EnableVolume 是否已赋值
                     * 
                     */
                    bool EnableVolumeHasBeenSet() const;

                private:

                    /**
                     * 输出全部文本标识，当该值设置为true时，会输出当前音频的全部文本
                     */
                    bool m_enableAllText;
                    bool m_enableAllTextHasBeenSet;

                    /**
                     * 输出关键词信息标识，当该值设置为true时，会输出当前音频的关键词信息。
                     */
                    bool m_enableKeyword;
                    bool m_enableKeywordHasBeenSet;

                    /**
                     * 静音检测标识，当设置为 true 时，需要设置静音时间阈值字段mute_threshold，统计结果中会返回静音片段。
                     */
                    bool m_enableMuteDetect;
                    bool m_enableMuteDetectHasBeenSet;

                    /**
                     * 输出音频统计信息标识，当设置为 true 时，任务查询结果会输出音频的统计信息（AsrStat）
                     */
                    bool m_enableVadInfo;
                    bool m_enableVadInfoHasBeenSet;

                    /**
                     * 输出音频音量信息标识，当设置为 true 时，会输出当前音频音量信息。
                     */
                    bool m_enableVolume;
                    bool m_enableVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_FUNCTION_H_
