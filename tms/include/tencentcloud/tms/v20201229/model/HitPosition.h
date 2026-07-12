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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_HITPOSITION_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_HITPOSITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 命中的位置坐标，是个左闭右开结构，比如原文是“一二三四五”，命中的文本是“二三”，则位置坐标是{1,3}
                */
                class HitPosition : public AbstractModel
                {
                public:
                    HitPosition();
                    ~HitPosition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>起始下标，含（按 rune/字符计算）,一段文本的起始下标是0</p>
                     * @return Start <p>起始下标，含（按 rune/字符计算）,一段文本的起始下标是0</p>
                     * 
                     */
                    int64_t GetStart() const;

                    /**
                     * 设置<p>起始下标，含（按 rune/字符计算）,一段文本的起始下标是0</p>
                     * @param _start <p>起始下标，含（按 rune/字符计算）,一段文本的起始下标是0</p>
                     * 
                     */
                    void SetStart(const int64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取<p>结束下标，不含（按 rune/字符），比如Start：1，End:3,表示第1，第2个字符，不包含第3个字符</p>
                     * @return End <p>结束下标，不含（按 rune/字符），比如Start：1，End:3,表示第1，第2个字符，不包含第3个字符</p>
                     * 
                     */
                    int64_t GetEnd() const;

                    /**
                     * 设置<p>结束下标，不含（按 rune/字符），比如Start：1，End:3,表示第1，第2个字符，不包含第3个字符</p>
                     * @param _end <p>结束下标，不含（按 rune/字符），比如Start：1，End:3,表示第1，第2个字符，不包含第3个字符</p>
                     * 
                     */
                    void SetEnd(const int64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * <p>起始下标，含（按 rune/字符计算）,一段文本的起始下标是0</p>
                     */
                    int64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * <p>结束下标，不含（按 rune/字符），比如Start：1，End:3,表示第1，第2个字符，不包含第3个字符</p>
                     */
                    int64_t m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_HITPOSITION_H_
