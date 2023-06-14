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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_SUBTITLERESULT_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_SUBTITLERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/SubtitleItem.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 语音字幕识别结果
                */
                class SubtitleResult : public AbstractModel
                {
                public:
                    SubtitleResult();
                    ~SubtitleResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语音字幕数组
                     * @return SubtitleItems 语音字幕数组
                     * 
                     */
                    std::vector<SubtitleItem> GetSubtitleItems() const;

                    /**
                     * 设置语音字幕数组
                     * @param _subtitleItems 语音字幕数组
                     * 
                     */
                    void SetSubtitleItems(const std::vector<SubtitleItem>& _subtitleItems);

                    /**
                     * 判断参数 SubtitleItems 是否已赋值
                     * @return SubtitleItems 是否已赋值
                     * 
                     */
                    bool SubtitleItemsHasBeenSet() const;

                private:

                    /**
                     * 语音字幕数组
                     */
                    std::vector<SubtitleItem> m_subtitleItems;
                    bool m_subtitleItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_SUBTITLERESULT_H_
