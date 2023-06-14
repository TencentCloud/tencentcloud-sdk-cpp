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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_WATERPRINTKEY_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_WATERPRINTKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 水印Key
                */
                class WaterPrintKey : public AbstractModel
                {
                public:
                    WaterPrintKey();
                    ~WaterPrintKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印KeyID
                     * @return KeyId 水印KeyID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置水印KeyID
                     * @param _keyId 水印KeyID
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取水印Key值
                     * @return KeyContent 水印Key值
                     * 
                     */
                    std::string GetKeyContent() const;

                    /**
                     * 设置水印Key值
                     * @param _keyContent 水印Key值
                     * 
                     */
                    void SetKeyContent(const std::string& _keyContent);

                    /**
                     * 判断参数 KeyContent 是否已赋值
                     * @return KeyContent 是否已赋值
                     * 
                     */
                    bool KeyContentHasBeenSet() const;

                    /**
                     * 获取水印Key的版本号
                     * @return KeyVersion 水印Key的版本号
                     * 
                     */
                    std::string GetKeyVersion() const;

                    /**
                     * 设置水印Key的版本号
                     * @param _keyVersion 水印Key的版本号
                     * 
                     */
                    void SetKeyVersion(const std::string& _keyVersion);

                    /**
                     * 判断参数 KeyVersion 是否已赋值
                     * @return KeyVersion 是否已赋值
                     * 
                     */
                    bool KeyVersionHasBeenSet() const;

                    /**
                     * 获取是否开启，取值[0（没有开启），1（已开启）]
                     * @return OpenStatus 是否开启，取值[0（没有开启），1（已开启）]
                     * 
                     */
                    uint64_t GetOpenStatus() const;

                    /**
                     * 设置是否开启，取值[0（没有开启），1（已开启）]
                     * @param _openStatus 是否开启，取值[0（没有开启），1（已开启）]
                     * 
                     */
                    void SetOpenStatus(const uint64_t& _openStatus);

                    /**
                     * 判断参数 OpenStatus 是否已赋值
                     * @return OpenStatus 是否已赋值
                     * 
                     */
                    bool OpenStatusHasBeenSet() const;

                    /**
                     * 获取密钥生成时间
                     * @return CreateTime 密钥生成时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置密钥生成时间
                     * @param _createTime 密钥生成时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 水印KeyID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 水印Key值
                     */
                    std::string m_keyContent;
                    bool m_keyContentHasBeenSet;

                    /**
                     * 水印Key的版本号
                     */
                    std::string m_keyVersion;
                    bool m_keyVersionHasBeenSet;

                    /**
                     * 是否开启，取值[0（没有开启），1（已开启）]
                     */
                    uint64_t m_openStatus;
                    bool m_openStatusHasBeenSet;

                    /**
                     * 密钥生成时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_WATERPRINTKEY_H_
