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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLSPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLSPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Cls类型入参
                */
                class ClsParam : public AbstractModel
                {
                public:
                    ClsParam();
                    ~ClsParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生产的信息是否为json格式
                     * @return DecodeJson 生产的信息是否为json格式
                     * 
                     */
                    bool GetDecodeJson() const;

                    /**
                     * 设置生产的信息是否为json格式
                     * @param _decodeJson 生产的信息是否为json格式
                     * 
                     */
                    void SetDecodeJson(const bool& _decodeJson);

                    /**
                     * 判断参数 DecodeJson 是否已赋值
                     * @return DecodeJson 是否已赋值
                     * 
                     */
                    bool DecodeJsonHasBeenSet() const;

                    /**
                     * 获取cls日志主题id
                     * @return Resource cls日志主题id
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置cls日志主题id
                     * @param _resource cls日志主题id
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取cls日志集id
                     * @return LogSet cls日志集id
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置cls日志集id
                     * @param _logSet cls日志集id
                     * 
                     */
                    void SetLogSet(const std::string& _logSet);

                    /**
                     * 判断参数 LogSet 是否已赋值
                     * @return LogSet 是否已赋值
                     * 
                     */
                    bool LogSetHasBeenSet() const;

                    /**
                     * 获取当DecodeJson为false时必填
                     * @return ContentKey 当DecodeJson为false时必填
                     * 
                     */
                    std::string GetContentKey() const;

                    /**
                     * 设置当DecodeJson为false时必填
                     * @param _contentKey 当DecodeJson为false时必填
                     * 
                     */
                    void SetContentKey(const std::string& _contentKey);

                    /**
                     * 判断参数 ContentKey 是否已赋值
                     * @return ContentKey 是否已赋值
                     * 
                     */
                    bool ContentKeyHasBeenSet() const;

                    /**
                     * 获取指定消息中的某字段内容作为cls日志的时间。
字段内容格式需要是秒级时间戳
                     * @return TimeField 指定消息中的某字段内容作为cls日志的时间。
字段内容格式需要是秒级时间戳
                     * 
                     */
                    std::string GetTimeField() const;

                    /**
                     * 设置指定消息中的某字段内容作为cls日志的时间。
字段内容格式需要是秒级时间戳
                     * @param _timeField 指定消息中的某字段内容作为cls日志的时间。
字段内容格式需要是秒级时间戳
                     * 
                     */
                    void SetTimeField(const std::string& _timeField);

                    /**
                     * 判断参数 TimeField 是否已赋值
                     * @return TimeField 是否已赋值
                     * 
                     */
                    bool TimeFieldHasBeenSet() const;

                private:

                    /**
                     * 生产的信息是否为json格式
                     */
                    bool m_decodeJson;
                    bool m_decodeJsonHasBeenSet;

                    /**
                     * cls日志主题id
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * cls日志集id
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * 当DecodeJson为false时必填
                     */
                    std::string m_contentKey;
                    bool m_contentKeyHasBeenSet;

                    /**
                     * 指定消息中的某字段内容作为cls日志的时间。
字段内容格式需要是秒级时间戳
                     */
                    std::string m_timeField;
                    bool m_timeFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLSPARAM_H_
