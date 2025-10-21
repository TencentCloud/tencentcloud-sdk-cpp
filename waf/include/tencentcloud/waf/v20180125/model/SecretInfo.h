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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SECRETINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SECRETINFO_H_

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
                * 用于JWT验签的密钥信息
                */
                class SecretInfo : public AbstractModel
                {
                public:
                    SecretInfo();
                    ~SecretInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取密钥上传方式，可选值：manual、upload
                     * @return SecretSource 密钥上传方式，可选值：manual、upload
                     * 
                     */
                    std::string GetSecretSource() const;

                    /**
                     * 设置密钥上传方式，可选值：manual、upload
                     * @param _secretSource 密钥上传方式，可选值：manual、upload
                     * 
                     */
                    void SetSecretSource(const std::string& _secretSource);

                    /**
                     * 判断参数 SecretSource 是否已赋值
                     * @return SecretSource 是否已赋值
                     * 
                     */
                    bool SecretSourceHasBeenSet() const;

                    /**
                     * 获取密钥内容（用户手动输入/前端从密钥文件提取出的密钥内容）
                     * @return SecretKey 密钥内容（用户手动输入/前端从密钥文件提取出的密钥内容）
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置密钥内容（用户手动输入/前端从密钥文件提取出的密钥内容）
                     * @param _secretKey 密钥内容（用户手动输入/前端从密钥文件提取出的密钥内容）
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
                     * 获取上传的密钥文件文件名
                     * @return FileName 上传的密钥文件文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置上传的密钥文件文件名
                     * @param _fileName 上传的密钥文件文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                private:

                    /**
                     * 密钥上传方式，可选值：manual、upload
                     */
                    std::string m_secretSource;
                    bool m_secretSourceHasBeenSet;

                    /**
                     * 密钥内容（用户手动输入/前端从密钥文件提取出的密钥内容）
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 上传的密钥文件文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SECRETINFO_H_
