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

#ifndef TENCENTCLOUD_BTOE_V20210514_MODEL_CREATEHASHDEPOSITNOSEALREQUEST_H_
#define TENCENTCLOUD_BTOE_V20210514_MODEL_CREATEHASHDEPOSITNOSEALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Btoe
    {
        namespace V20210514
        {
            namespace Model
            {
                /**
                * CreateHashDepositNoSeal请求参数结构体
                */
                class CreateHashDepositNoSealRequest : public AbstractModel
                {
                public:
                    CreateHashDepositNoSealRequest();
                    ~CreateHashDepositNoSealRequest() = default;
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
                     * 业务扩展信息
                     */
                    std::string m_evidenceInfo;
                    bool m_evidenceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BTOE_V20210514_MODEL_CREATEHASHDEPOSITNOSEALREQUEST_H_
