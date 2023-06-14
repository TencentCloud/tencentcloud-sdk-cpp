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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_SUBTITLEREC_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_SUBTITLEREC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 语音字幕任务参数
                */
                class SubtitleRec : public AbstractModel
                {
                public:
                    SubtitleRec();
                    ~SubtitleRec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语音识别：
zh：中文
en：英文
                     * @return AsrDst 语音识别：
zh：中文
en：英文
                     * 
                     */
                    std::string GetAsrDst() const;

                    /**
                     * 设置语音识别：
zh：中文
en：英文
                     * @param _asrDst 语音识别：
zh：中文
en：英文
                     * 
                     */
                    void SetAsrDst(const std::string& _asrDst);

                    /**
                     * 判断参数 AsrDst 是否已赋值
                     * @return AsrDst 是否已赋值
                     * 
                     */
                    bool AsrDstHasBeenSet() const;

                    /**
                     * 获取翻译识别：
zh：中文
en：英文
                     * @return TransDst 翻译识别：
zh：中文
en：英文
                     * 
                     */
                    std::string GetTransDst() const;

                    /**
                     * 设置翻译识别：
zh：中文
en：英文
                     * @param _transDst 翻译识别：
zh：中文
en：英文
                     * 
                     */
                    void SetTransDst(const std::string& _transDst);

                    /**
                     * 判断参数 TransDst 是否已赋值
                     * @return TransDst 是否已赋值
                     * 
                     */
                    bool TransDstHasBeenSet() const;

                private:

                    /**
                     * 语音识别：
zh：中文
en：英文
                     */
                    std::string m_asrDst;
                    bool m_asrDstHasBeenSet;

                    /**
                     * 翻译识别：
zh：中文
en：英文
                     */
                    std::string m_transDst;
                    bool m_transDstHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_SUBTITLEREC_H_
