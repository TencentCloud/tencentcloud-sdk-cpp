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

#ifndef TENCENTCLOUD_TICS_V20181115_MODEL_INTELLIGENCETYPE_H_
#define TENCENTCLOUD_TICS_V20181115_MODEL_INTELLIGENCETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tics
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * { "source": "inergj_ai_predict", "stamp": "msraminer", "time": 1531994023 }
                */
                class IntelligenceType : public AbstractModel
                {
                public:
                    IntelligenceType();
                    ~IntelligenceType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取来源
                     * @return Source 来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源
                     * @param _source 来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取标记
                     * @return Stamp 标记
                     * 
                     */
                    std::string GetStamp() const;

                    /**
                     * 设置标记
                     * @param _stamp 标记
                     * 
                     */
                    void SetStamp(const std::string& _stamp);

                    /**
                     * 判断参数 Stamp 是否已赋值
                     * @return Stamp 是否已赋值
                     * 
                     */
                    bool StampHasBeenSet() const;

                    /**
                     * 获取时间
                     * @return Time 时间
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置时间
                     * @param _time 时间
                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                private:

                    /**
                     * 来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 标记
                     */
                    std::string m_stamp;
                    bool m_stampHasBeenSet;

                    /**
                     * 时间
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICS_V20181115_MODEL_INTELLIGENCETYPE_H_
