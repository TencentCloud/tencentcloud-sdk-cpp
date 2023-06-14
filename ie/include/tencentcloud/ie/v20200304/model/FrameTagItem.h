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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_FRAMETAGITEM_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_FRAMETAGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/TagItem.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 帧标签
                */
                class FrameTagItem : public AbstractModel
                {
                public:
                    FrameTagItem();
                    ~FrameTagItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签起始时间戳PTS(ms)
                     * @return StartPts 标签起始时间戳PTS(ms)
                     * 
                     */
                    uint64_t GetStartPts() const;

                    /**
                     * 设置标签起始时间戳PTS(ms)
                     * @param _startPts 标签起始时间戳PTS(ms)
                     * 
                     */
                    void SetStartPts(const uint64_t& _startPts);

                    /**
                     * 判断参数 StartPts 是否已赋值
                     * @return StartPts 是否已赋值
                     * 
                     */
                    bool StartPtsHasBeenSet() const;

                    /**
                     * 获取语句结束时间戳PTS(ms)
                     * @return EndPts 语句结束时间戳PTS(ms)
                     * 
                     */
                    uint64_t GetEndPts() const;

                    /**
                     * 设置语句结束时间戳PTS(ms)
                     * @param _endPts 语句结束时间戳PTS(ms)
                     * 
                     */
                    void SetEndPts(const uint64_t& _endPts);

                    /**
                     * 判断参数 EndPts 是否已赋值
                     * @return EndPts 是否已赋值
                     * 
                     */
                    bool EndPtsHasBeenSet() const;

                    /**
                     * 获取字符串形式的起始结束时间
                     * @return Period 字符串形式的起始结束时间
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置字符串形式的起始结束时间
                     * @param _period 字符串形式的起始结束时间
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取标签数组
                     * @return TagItems 标签数组
                     * 
                     */
                    std::vector<TagItem> GetTagItems() const;

                    /**
                     * 设置标签数组
                     * @param _tagItems 标签数组
                     * 
                     */
                    void SetTagItems(const std::vector<TagItem>& _tagItems);

                    /**
                     * 判断参数 TagItems 是否已赋值
                     * @return TagItems 是否已赋值
                     * 
                     */
                    bool TagItemsHasBeenSet() const;

                private:

                    /**
                     * 标签起始时间戳PTS(ms)
                     */
                    uint64_t m_startPts;
                    bool m_startPtsHasBeenSet;

                    /**
                     * 语句结束时间戳PTS(ms)
                     */
                    uint64_t m_endPts;
                    bool m_endPtsHasBeenSet;

                    /**
                     * 字符串形式的起始结束时间
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 标签数组
                     */
                    std::vector<TagItem> m_tagItems;
                    bool m_tagItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_FRAMETAGITEM_H_
