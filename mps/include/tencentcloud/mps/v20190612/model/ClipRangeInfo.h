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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CLIPRANGEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CLIPRANGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 垫片配置。
                */
                class ClipRangeInfo : public AbstractModel
                {
                public:
                    ClipRangeInfo();
                    ~ClipRangeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vod类型有效，内容有效起始时间，可选Entire和SpecifyTimeRange。
                     * @return Type vod类型有效，内容有效起始时间，可选Entire和SpecifyTimeRange。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置vod类型有效，内容有效起始时间，可选Entire和SpecifyTimeRange。
                     * @param _type vod类型有效，内容有效起始时间，可选Entire和SpecifyTimeRange。
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
                     * 获取偏移量,Type为SpecifyTimeRange时有效。
                     * @return Offset 偏移量,Type为SpecifyTimeRange时有效。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量,Type为SpecifyTimeRange时有效。
                     * @param _offset 偏移量,Type为SpecifyTimeRange时有效。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取开始偏移量,Type为SpecifyTimeRange时有效。
                     * @return StartOffset 开始偏移量,Type为SpecifyTimeRange时有效。
                     * 
                     */
                    uint64_t GetStartOffset() const;

                    /**
                     * 设置开始偏移量,Type为SpecifyTimeRange时有效。
                     * @param _startOffset 开始偏移量,Type为SpecifyTimeRange时有效。
                     * 
                     */
                    void SetStartOffset(const uint64_t& _startOffset);

                    /**
                     * 判断参数 StartOffset 是否已赋值
                     * @return StartOffset 是否已赋值
                     * 
                     */
                    bool StartOffsetHasBeenSet() const;

                    /**
                     * 获取结束偏移量,Type为SpecifyTimeRange时有效。
                     * @return EndOffset 结束偏移量,Type为SpecifyTimeRange时有效。
                     * 
                     */
                    uint64_t GetEndOffset() const;

                    /**
                     * 设置结束偏移量,Type为SpecifyTimeRange时有效。
                     * @param _endOffset 结束偏移量,Type为SpecifyTimeRange时有效。
                     * 
                     */
                    void SetEndOffset(const uint64_t& _endOffset);

                    /**
                     * 判断参数 EndOffset 是否已赋值
                     * @return EndOffset 是否已赋值
                     * 
                     */
                    bool EndOffsetHasBeenSet() const;

                private:

                    /**
                     * vod类型有效，内容有效起始时间，可选Entire和SpecifyTimeRange。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 偏移量,Type为SpecifyTimeRange时有效。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 开始偏移量,Type为SpecifyTimeRange时有效。
                     */
                    uint64_t m_startOffset;
                    bool m_startOffsetHasBeenSet;

                    /**
                     * 结束偏移量,Type为SpecifyTimeRange时有效。
                     */
                    uint64_t m_endOffset;
                    bool m_endOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CLIPRANGEINFO_H_
