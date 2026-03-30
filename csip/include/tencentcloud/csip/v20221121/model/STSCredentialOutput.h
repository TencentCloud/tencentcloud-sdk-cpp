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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_STSCREDENTIALOUTPUT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_STSCREDENTIALOUTPUT_H_

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
                * STS临时密钥凭据（出参专用），用于查询详情接口的响应。SecretID和SecretKey字段返回打码后的值，System返回原文
                */
                class STSCredentialOutput : public AbstractModel
                {
                public:
                    STSCredentialOutput();
                    ~STSCredentialOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取凭据提供商标识（原文），如tencentCam、aws、aliyun等
                     * @return System 凭据提供商标识（原文），如tencentCam、aws、aliyun等
                     * 
                     */
                    std::string GetSystem() const;

                    /**
                     * 设置凭据提供商标识（原文），如tencentCam、aws、aliyun等
                     * @param _system 凭据提供商标识（原文），如tencentCam、aws、aliyun等
                     * 
                     */
                    void SetSystem(const std::string& _system);

                    /**
                     * 判断参数 System 是否已赋值
                     * @return System 是否已赋值
                     * 
                     */
                    bool SystemHasBeenSet() const;

                    /**
                     * 获取SecretID（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
                     * @return SecretID SecretID（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
                     * 
                     */
                    std::string GetSecretID() const;

                    /**
                     * 设置SecretID（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
                     * @param _secretID SecretID（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
                     * 
                     */
                    void SetSecretID(const std::string& _secretID);

                    /**
                     * 判断参数 SecretID 是否已赋值
                     * @return SecretID 是否已赋值
                     * 
                     */
                    bool SecretIDHasBeenSet() const;

                    /**
                     * 获取SecretKey（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
                     * @return SecretKey SecretKey（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置SecretKey（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
                     * @param _secretKey SecretKey（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                private:

                    /**
                     * 凭据提供商标识（原文），如tencentCam、aws、aliyun等
                     */
                    std::string m_system;
                    bool m_systemHasBeenSet;

                    /**
                     * SecretID（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
                     */
                    std::string m_secretID;
                    bool m_secretIDHasBeenSet;

                    /**
                     * SecretKey（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_STSCREDENTIALOUTPUT_H_
