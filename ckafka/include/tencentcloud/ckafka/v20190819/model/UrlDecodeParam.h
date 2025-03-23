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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_URLDECODEPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_URLDECODEPARAM_H_

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
                * Url解析
                */
                class UrlDecodeParam : public AbstractModel
                {
                public:
                    UrlDecodeParam();
                    ~UrlDecodeParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取编码
                     * @return CharsetName 编码
                     * 
                     */
                    std::string GetCharsetName() const;

                    /**
                     * 设置编码
                     * @param _charsetName 编码
                     * 
                     */
                    void SetCharsetName(const std::string& _charsetName);

                    /**
                     * 判断参数 CharsetName 是否已赋值
                     * @return CharsetName 是否已赋值
                     * 
                     */
                    bool CharsetNameHasBeenSet() const;

                private:

                    /**
                     * 编码
                     */
                    std::string m_charsetName;
                    bool m_charsetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_URLDECODEPARAM_H_
