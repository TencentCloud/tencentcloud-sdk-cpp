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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_FIELDWRITECONFIG_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_FIELDWRITECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 设置哪些字段是否存储或转发
                */
                class FieldWriteConfig : public AbstractModel
                {
                public:
                    FieldWriteConfig();
                    ~FieldWriteConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1:开启 0:不开启
                     * @return EnableHeaders 1:开启 0:不开启
                     * 
                     */
                    int64_t GetEnableHeaders() const;

                    /**
                     * 设置1:开启 0:不开启
                     * @param _enableHeaders 1:开启 0:不开启
                     * 
                     */
                    void SetEnableHeaders(const int64_t& _enableHeaders);

                    /**
                     * 判断参数 EnableHeaders 是否已赋值
                     * @return EnableHeaders 是否已赋值
                     * 
                     */
                    bool EnableHeadersHasBeenSet() const;

                    /**
                     * 获取1:开启 0:不开启
                     * @return EnableBody 1:开启 0:不开启
                     * 
                     */
                    int64_t GetEnableBody() const;

                    /**
                     * 设置1:开启 0:不开启
                     * @param _enableBody 1:开启 0:不开启
                     * 
                     */
                    void SetEnableBody(const int64_t& _enableBody);

                    /**
                     * 判断参数 EnableBody 是否已赋值
                     * @return EnableBody 是否已赋值
                     * 
                     */
                    bool EnableBodyHasBeenSet() const;

                    /**
                     * 获取1:开启 0:不开启
                     * @return EnableBot 1:开启 0:不开启
                     * 
                     */
                    int64_t GetEnableBot() const;

                    /**
                     * 设置1:开启 0:不开启
                     * @param _enableBot 1:开启 0:不开启
                     * 
                     */
                    void SetEnableBot(const int64_t& _enableBot);

                    /**
                     * 判断参数 EnableBot 是否已赋值
                     * @return EnableBot 是否已赋值
                     * 
                     */
                    bool EnableBotHasBeenSet() const;

                private:

                    /**
                     * 1:开启 0:不开启
                     */
                    int64_t m_enableHeaders;
                    bool m_enableHeadersHasBeenSet;

                    /**
                     * 1:开启 0:不开启
                     */
                    int64_t m_enableBody;
                    bool m_enableBodyHasBeenSet;

                    /**
                     * 1:开启 0:不开启
                     */
                    int64_t m_enableBot;
                    bool m_enableBotHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_FIELDWRITECONFIG_H_
