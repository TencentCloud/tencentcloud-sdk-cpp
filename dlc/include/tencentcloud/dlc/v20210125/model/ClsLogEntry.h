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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CLSLOGENTRY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CLSLOGENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 日志条目。
                */
                class ClsLogEntry : public AbstractModel
                {
                public:
                    ClsLogEntry();
                    ~ClsLogEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Unix 毫秒时间戳。</p>
                     * @return Time <p>Unix 毫秒时间戳。</p>
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置<p>Unix 毫秒时间戳。</p>
                     * @param _time <p>Unix 毫秒时间戳。</p>
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取<p>日志 JSON 字符串。</p>
                     * @return LogJson <p>日志 JSON 字符串。</p>
                     * 
                     */
                    std::string GetLogJson() const;

                    /**
                     * 设置<p>日志 JSON 字符串。</p>
                     * @param _logJson <p>日志 JSON 字符串。</p>
                     * 
                     */
                    void SetLogJson(const std::string& _logJson);

                    /**
                     * 判断参数 LogJson 是否已赋值
                     * @return LogJson 是否已赋值
                     * 
                     */
                    bool LogJsonHasBeenSet() const;

                private:

                    /**
                     * <p>Unix 毫秒时间戳。</p>
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>日志 JSON 字符串。</p>
                     */
                    std::string m_logJson;
                    bool m_logJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CLSLOGENTRY_H_
