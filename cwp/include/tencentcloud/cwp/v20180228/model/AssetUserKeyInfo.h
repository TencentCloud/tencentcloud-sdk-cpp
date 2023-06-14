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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERKEYINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERKEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 资产管理账号key详情
                */
                class AssetUserKeyInfo : public AbstractModel
                {
                public:
                    AssetUserKeyInfo();
                    ~AssetUserKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公钥值
                     * @return Value 公钥值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置公钥值
                     * @param _value 公钥值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取公钥备注
                     * @return Comment 公钥备注
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置公钥备注
                     * @param _comment 公钥备注
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取加密方式
                     * @return EncryptType 加密方式
                     * 
                     */
                    std::string GetEncryptType() const;

                    /**
                     * 设置加密方式
                     * @param _encryptType 加密方式
                     * 
                     */
                    void SetEncryptType(const std::string& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                private:

                    /**
                     * 公钥值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 公钥备注
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 加密方式
                     */
                    std::string m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERKEYINFO_H_
