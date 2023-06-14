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

#ifndef TENCENTCLOUD_BTOE_V20210303_MODEL_CREATEHASHDEPOSITNOCERTREQUEST_H_
#define TENCENTCLOUD_BTOE_V20210303_MODEL_CREATEHASHDEPOSITNOCERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Btoe
    {
        namespace V20210303
        {
            namespace Model
            {
                /**
                * CreateHashDepositNoCert请求参数结构体
                */
                class CreateHashDepositNoCertRequest : public AbstractModel
                {
                public:
                    CreateHashDepositNoCertRequest();
                    ~CreateHashDepositNoCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据hash
                     * @return EvidenceHash 数据hash
                     * 
                     */
                    std::string GetEvidenceHash() const;

                    /**
                     * 设置数据hash
                     * @param _evidenceHash 数据hash
                     * 
                     */
                    void SetEvidenceHash(const std::string& _evidenceHash);

                    /**
                     * 判断参数 EvidenceHash 是否已赋值
                     * @return EvidenceHash 是否已赋值
                     * 
                     */
                    bool EvidenceHashHasBeenSet() const;

                    /**
                     * 获取该字段为透传字段，方便调用方做业务处理， 长度最大不超过64
                     * @return BusinessId 该字段为透传字段，方便调用方做业务处理， 长度最大不超过64
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置该字段为透传字段，方便调用方做业务处理， 长度最大不超过64
                     * @param _businessId 该字段为透传字段，方便调用方做业务处理， 长度最大不超过64
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取算法类型 0 SM3, 1 SHA256, 2 SHA384 默认0
                     * @return HashType 算法类型 0 SM3, 1 SHA256, 2 SHA384 默认0
                     * 
                     */
                    uint64_t GetHashType() const;

                    /**
                     * 设置算法类型 0 SM3, 1 SHA256, 2 SHA384 默认0
                     * @param _hashType 算法类型 0 SM3, 1 SHA256, 2 SHA384 默认0
                     * 
                     */
                    void SetHashType(const uint64_t& _hashType);

                    /**
                     * 判断参数 HashType 是否已赋值
                     * @return HashType 是否已赋值
                     * 
                     */
                    bool HashTypeHasBeenSet() const;

                    /**
                     * 获取业务扩展信息
                     * @return EvidenceInfo 业务扩展信息
                     * 
                     */
                    std::string GetEvidenceInfo() const;

                    /**
                     * 设置业务扩展信息
                     * @param _evidenceInfo 业务扩展信息
                     * 
                     */
                    void SetEvidenceInfo(const std::string& _evidenceInfo);

                    /**
                     * 判断参数 EvidenceInfo 是否已赋值
                     * @return EvidenceInfo 是否已赋值
                     * 
                     */
                    bool EvidenceInfoHasBeenSet() const;

                private:

                    /**
                     * 数据hash
                     */
                    std::string m_evidenceHash;
                    bool m_evidenceHashHasBeenSet;

                    /**
                     * 该字段为透传字段，方便调用方做业务处理， 长度最大不超过64
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 算法类型 0 SM3, 1 SHA256, 2 SHA384 默认0
                     */
                    uint64_t m_hashType;
                    bool m_hashTypeHasBeenSet;

                    /**
                     * 业务扩展信息
                     */
                    std::string m_evidenceInfo;
                    bool m_evidenceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BTOE_V20210303_MODEL_CREATEHASHDEPOSITNOCERTREQUEST_H_
