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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SAMPLELOG_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SAMPLELOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Attributes.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 采样日志
                */
                class SampleLog : public AbstractModel
                {
                public:
                    SampleLog();
                    ~SampleLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志毫秒时间戳
                     * @return Timestamp 日志毫秒时间戳
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置日志毫秒时间戳
                     * @param _timestamp 日志毫秒时间戳
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取采样日志属性
                     * @return Attributes 采样日志属性
                     * 
                     */
                    Attributes GetAttributes() const;

                    /**
                     * 设置采样日志属性
                     * @param _attributes 采样日志属性
                     * 
                     */
                    void SetAttributes(const Attributes& _attributes);

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     * 
                     */
                    bool AttributesHasBeenSet() const;

                    /**
                     * 获取har格式的采样请求
                     * @return Body har格式的采样请求
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置har格式的采样请求
                     * @param _body har格式的采样请求
                     * 
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                private:

                    /**
                     * 日志毫秒时间戳
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 采样日志属性
                     */
                    Attributes m_attributes;
                    bool m_attributesHasBeenSet;

                    /**
                     * har格式的采样请求
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SAMPLELOG_H_
