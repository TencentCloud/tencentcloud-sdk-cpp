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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_TEXTAPPEARINFO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_TEXTAPPEARINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 关键词在文本中的定位信息

Position为关键词在文本中的偏移量，从0开始。例如，给定文本结果"欢迎收看新闻三十分”，以及关键词"新闻三十分"，那么StartPosition的值为4，EndPosition的值为9
                */
                class TextAppearInfo : public AbstractModel
                {
                public:
                    TextAppearInfo();
                    ~TextAppearInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本结果数组中的下标
                     * @return Index 文本结果数组中的下标
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置文本结果数组中的下标
                     * @param _index 文本结果数组中的下标
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取关键词在文本中出现的起始偏移量(包含)
                     * @return StartPosition 关键词在文本中出现的起始偏移量(包含)
                     * 
                     */
                    int64_t GetStartPosition() const;

                    /**
                     * 设置关键词在文本中出现的起始偏移量(包含)
                     * @param _startPosition 关键词在文本中出现的起始偏移量(包含)
                     * 
                     */
                    void SetStartPosition(const int64_t& _startPosition);

                    /**
                     * 判断参数 StartPosition 是否已赋值
                     * @return StartPosition 是否已赋值
                     * 
                     */
                    bool StartPositionHasBeenSet() const;

                    /**
                     * 获取关键词在文本中出现的结束偏移量(不包含)
                     * @return EndPosition 关键词在文本中出现的结束偏移量(不包含)
                     * 
                     */
                    int64_t GetEndPosition() const;

                    /**
                     * 设置关键词在文本中出现的结束偏移量(不包含)
                     * @param _endPosition 关键词在文本中出现的结束偏移量(不包含)
                     * 
                     */
                    void SetEndPosition(const int64_t& _endPosition);

                    /**
                     * 判断参数 EndPosition 是否已赋值
                     * @return EndPosition 是否已赋值
                     * 
                     */
                    bool EndPositionHasBeenSet() const;

                private:

                    /**
                     * 文本结果数组中的下标
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 关键词在文本中出现的起始偏移量(包含)
                     */
                    int64_t m_startPosition;
                    bool m_startPositionHasBeenSet;

                    /**
                     * 关键词在文本中出现的结束偏移量(不包含)
                     */
                    int64_t m_endPosition;
                    bool m_endPositionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_TEXTAPPEARINFO_H_
