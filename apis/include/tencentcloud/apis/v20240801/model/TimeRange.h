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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_TIMERANGE_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_TIMERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 时间区间配置
                */
                class TimeRange : public AbstractModel
                {
                public:
                    TimeRange();
                    ~TimeRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>起始时间</p><p>参数格式：格式：09:00:00</p>
                     * @return Start <p>起始时间</p><p>参数格式：格式：09:00:00</p>
                     * 
                     */
                    std::string GetStart() const;

                    /**
                     * 设置<p>起始时间</p><p>参数格式：格式：09:00:00</p>
                     * @param _start <p>起始时间</p><p>参数格式：格式：09:00:00</p>
                     * 
                     */
                    void SetStart(const std::string& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p><p>参数格式：格式：12:00:00</p>
                     * @return End <p>结束时间</p><p>参数格式：格式：12:00:00</p>
                     * 
                     */
                    std::string GetEnd() const;

                    /**
                     * 设置<p>结束时间</p><p>参数格式：格式：12:00:00</p>
                     * @param _end <p>结束时间</p><p>参数格式：格式：12:00:00</p>
                     * 
                     */
                    void SetEnd(const std::string& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * <p>起始时间</p><p>参数格式：格式：09:00:00</p>
                     */
                    std::string m_start;
                    bool m_startHasBeenSet;

                    /**
                     * <p>结束时间</p><p>参数格式：格式：12:00:00</p>
                     */
                    std::string m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_TIMERANGE_H_
