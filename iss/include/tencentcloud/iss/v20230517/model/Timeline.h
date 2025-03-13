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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_TIMELINE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_TIMELINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 时间片段结构体
                */
                class Timeline : public AbstractModel
                {
                public:
                    Timeline();
                    ~Timeline() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分片起始时间
                     * @return Begin 分片起始时间
                     * 
                     */
                    int64_t GetBegin() const;

                    /**
                     * 设置分片起始时间
                     * @param _begin 分片起始时间
                     * 
                     */
                    void SetBegin(const int64_t& _begin);

                    /**
                     * 判断参数 Begin 是否已赋值
                     * @return Begin 是否已赋值
                     * 
                     */
                    bool BeginHasBeenSet() const;

                    /**
                     * 获取分片结束时间
                     * @return End 分片结束时间
                     * 
                     */
                    int64_t GetEnd() const;

                    /**
                     * 设置分片结束时间
                     * @param _end 分片结束时间
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
                     * 分片起始时间
                     */
                    int64_t m_begin;
                    bool m_beginHasBeenSet;

                    /**
                     * 分片结束时间
                     */
                    int64_t m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_TIMELINE_H_
