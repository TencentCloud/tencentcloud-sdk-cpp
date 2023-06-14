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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEAESEDKPAIR_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEAESEDKPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 简单加密加解密密钥对。
                */
                class SimpleAesEdkPair : public AbstractModel
                {
                public:
                    SimpleAesEdkPair();
                    ~SimpleAesEdkPair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加密后的数据密钥。
                     * @return Edk 加密后的数据密钥。
                     * 
                     */
                    std::string GetEdk() const;

                    /**
                     * 设置加密后的数据密钥。
                     * @param _edk 加密后的数据密钥。
                     * 
                     */
                    void SetEdk(const std::string& _edk);

                    /**
                     * 判断参数 Edk 是否已赋值
                     * @return Edk 是否已赋值
                     * 
                     */
                    bool EdkHasBeenSet() const;

                    /**
                     * 获取数据密钥。返回的数据密钥 DK 为 Base64 编码字符串。
                     * @return Dk 数据密钥。返回的数据密钥 DK 为 Base64 编码字符串。
                     * 
                     */
                    std::string GetDk() const;

                    /**
                     * 设置数据密钥。返回的数据密钥 DK 为 Base64 编码字符串。
                     * @param _dk 数据密钥。返回的数据密钥 DK 为 Base64 编码字符串。
                     * 
                     */
                    void SetDk(const std::string& _dk);

                    /**
                     * 判断参数 Dk 是否已赋值
                     * @return Dk 是否已赋值
                     * 
                     */
                    bool DkHasBeenSet() const;

                private:

                    /**
                     * 加密后的数据密钥。
                     */
                    std::string m_edk;
                    bool m_edkHasBeenSet;

                    /**
                     * 数据密钥。返回的数据密钥 DK 为 Base64 编码字符串。
                     */
                    std::string m_dk;
                    bool m_dkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEAESEDKPAIR_H_
