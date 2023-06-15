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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_CREATECOSSECKEYINSTANCERESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_CREATECOSSECKEYINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * CreateCosSecKeyInstance返回参数结构体
                */
                class CreateCosSecKeyInstanceResponse : public AbstractModel
                {
                public:
                    CreateCosSecKeyInstanceResponse();
                    ~CreateCosSecKeyInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取COS密钥对应的AppId
                     * @return CosAppid COS密钥对应的AppId
                     * 
                     */
                    uint64_t GetCosAppid() const;

                    /**
                     * 判断参数 CosAppid 是否已赋值
                     * @return CosAppid 是否已赋值
                     * 
                     */
                    bool CosAppidHasBeenSet() const;

                    /**
                     * 获取COS密钥对应的存储桶名
                     * @return CosBucket COS密钥对应的存储桶名
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取存储桶对应的地域
                     * @return CosRegion 存储桶对应的地域
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取密钥过期时间
                     * @return ExpireTime 密钥过期时间
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取密钥ID信息
                     * @return CosId 密钥ID信息
                     * 
                     */
                    std::string GetCosId() const;

                    /**
                     * 判断参数 CosId 是否已赋值
                     * @return CosId 是否已赋值
                     * 
                     */
                    bool CosIdHasBeenSet() const;

                    /**
                     * 获取密钥KEY信息
                     * @return CosKey 密钥KEY信息
                     * 
                     */
                    std::string GetCosKey() const;

                    /**
                     * 判断参数 CosKey 是否已赋值
                     * @return CosKey 是否已赋值
                     * 
                     */
                    bool CosKeyHasBeenSet() const;

                    /**
                     * 获取密钥TOCKEN信息
                     * @return CosTocken 密钥TOCKEN信息
                     * @deprecated
                     */
                    std::string GetCosTocken() const;

                    /**
                     * 判断参数 CosTocken 是否已赋值
                     * @return CosTocken 是否已赋值
                     * @deprecated
                     */
                    bool CosTockenHasBeenSet() const;

                    /**
                     * 获取密钥可访问的文件前缀人。例如：CosPrefix=test/123/666，则该密钥只能操作test/123/666为前缀的文件，例如test/123/666/1.txt
                     * @return CosPrefix 密钥可访问的文件前缀人。例如：CosPrefix=test/123/666，则该密钥只能操作test/123/666为前缀的文件，例如test/123/666/1.txt
                     * 
                     */
                    std::string GetCosPrefix() const;

                    /**
                     * 判断参数 CosPrefix 是否已赋值
                     * @return CosPrefix 是否已赋值
                     * 
                     */
                    bool CosPrefixHasBeenSet() const;

                    /**
                     * 获取密钥TOCKEN信息
                     * @return CosToken 密钥TOCKEN信息
                     * 
                     */
                    std::string GetCosToken() const;

                    /**
                     * 判断参数 CosToken 是否已赋值
                     * @return CosToken 是否已赋值
                     * 
                     */
                    bool CosTokenHasBeenSet() const;

                private:

                    /**
                     * COS密钥对应的AppId
                     */
                    uint64_t m_cosAppid;
                    bool m_cosAppidHasBeenSet;

                    /**
                     * COS密钥对应的存储桶名
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * 存储桶对应的地域
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * 密钥过期时间
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 密钥ID信息
                     */
                    std::string m_cosId;
                    bool m_cosIdHasBeenSet;

                    /**
                     * 密钥KEY信息
                     */
                    std::string m_cosKey;
                    bool m_cosKeyHasBeenSet;

                    /**
                     * 密钥TOCKEN信息
                     */
                    std::string m_cosTocken;
                    bool m_cosTockenHasBeenSet;

                    /**
                     * 密钥可访问的文件前缀人。例如：CosPrefix=test/123/666，则该密钥只能操作test/123/666为前缀的文件，例如test/123/666/1.txt
                     */
                    std::string m_cosPrefix;
                    bool m_cosPrefixHasBeenSet;

                    /**
                     * 密钥TOCKEN信息
                     */
                    std::string m_cosToken;
                    bool m_cosTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_CREATECOSSECKEYINSTANCERESPONSE_H_
