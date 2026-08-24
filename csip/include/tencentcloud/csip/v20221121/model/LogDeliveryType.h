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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGDELIVERYTYPE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGDELIVERYTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 日志投递日志类型
                */
                class LogDeliveryType : public AbstractModel
                {
                public:
                    LogDeliveryType();
                    ~LogDeliveryType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志投递类型
                     * @return LogType 日志投递类型
                     * 
                     */
                    int64_t GetLogType() const;

                    /**
                     * 设置日志投递类型
                     * @param _logType 日志投递类型
                     * 
                     */
                    void SetLogType(const int64_t& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取投递日志类型的名称
                     * @return LogTypeName 投递日志类型的名称
                     * 
                     */
                    std::string GetLogTypeName() const;

                    /**
                     * 设置投递日志类型的名称
                     * @param _logTypeName 投递日志类型的名称
                     * 
                     */
                    void SetLogTypeName(const std::string& _logTypeName);

                    /**
                     * 判断参数 LogTypeName 是否已赋值
                     * @return LogTypeName 是否已赋值
                     * 
                     */
                    bool LogTypeNameHasBeenSet() const;

                    /**
                     * 获取投递日志类型的描述
                     * @return LogTypeDesc 投递日志类型的描述
                     * 
                     */
                    std::string GetLogTypeDesc() const;

                    /**
                     * 设置投递日志类型的描述
                     * @param _logTypeDesc 投递日志类型的描述
                     * 
                     */
                    void SetLogTypeDesc(const std::string& _logTypeDesc);

                    /**
                     * 判断参数 LogTypeDesc 是否已赋值
                     * @return LogTypeDesc 是否已赋值
                     * 
                     */
                    bool LogTypeDescHasBeenSet() const;

                private:

                    /**
                     * 日志投递类型
                     */
                    int64_t m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 投递日志类型的名称
                     */
                    std::string m_logTypeName;
                    bool m_logTypeNameHasBeenSet;

                    /**
                     * 投递日志类型的描述
                     */
                    std::string m_logTypeDesc;
                    bool m_logTypeDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGDELIVERYTYPE_H_
