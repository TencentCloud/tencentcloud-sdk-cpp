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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COSSOURCEINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COSSOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 客户提供cos认证信息。
                */
                class CosSourceInfo : public AbstractModel
                {
                public:
                    CosSourceInfo();
                    ~CosSourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos认证中的Id
                     * @return SecretId cos认证中的Id
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置cos认证中的Id
                     * @param _secretId cos认证中的Id
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取cos认证中的key
                     * @return SecretKey cos认证中的key
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置cos认证中的key
                     * @param _secretKey cos认证中的key
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取cos认证中的路径
                     * @return CosPath cos认证中的路径
                     * 
                     */
                    std::string GetCosPath() const;

                    /**
                     * 设置cos认证中的路径
                     * @param _cosPath cos认证中的路径
                     * 
                     */
                    void SetCosPath(const std::string& _cosPath);

                    /**
                     * 判断参数 CosPath 是否已赋值
                     * @return CosPath 是否已赋值
                     * 
                     */
                    bool CosPathHasBeenSet() const;

                private:

                    /**
                     * cos认证中的Id
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * cos认证中的key
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * cos认证中的路径
                     */
                    std::string m_cosPath;
                    bool m_cosPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COSSOURCEINFO_H_
