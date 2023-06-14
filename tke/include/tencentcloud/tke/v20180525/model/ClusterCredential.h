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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCREDENTIAL_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCREDENTIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 接入k8s 的认证信息
                */
                class ClusterCredential : public AbstractModel
                {
                public:
                    ClusterCredential();
                    ~ClusterCredential() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CA 根证书
                     * @return CACert CA 根证书
                     * 
                     */
                    std::string GetCACert() const;

                    /**
                     * 设置CA 根证书
                     * @param _cACert CA 根证书
                     * 
                     */
                    void SetCACert(const std::string& _cACert);

                    /**
                     * 判断参数 CACert 是否已赋值
                     * @return CACert 是否已赋值
                     * 
                     */
                    bool CACertHasBeenSet() const;

                    /**
                     * 获取认证用的Token
                     * @return Token 认证用的Token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置认证用的Token
                     * @param _token 认证用的Token
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * CA 根证书
                     */
                    std::string m_cACert;
                    bool m_cACertHasBeenSet;

                    /**
                     * 认证用的Token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCREDENTIAL_H_
