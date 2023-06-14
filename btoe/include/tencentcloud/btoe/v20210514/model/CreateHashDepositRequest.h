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

#ifndef TENCENTCLOUD_BTOE_V20210514_MODEL_CREATEHASHDEPOSITREQUEST_H_
#define TENCENTCLOUD_BTOE_V20210514_MODEL_CREATEHASHDEPOSITREQUEST_H_

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
                * CreateHashDeposit请求参数结构体
                */
                class CreateHashDepositRequest : public AbstractModel
                {
                public:
                    CreateHashDepositRequest();
                    ~CreateHashDepositRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取存证名称(长度最大30)
                     * @return EvidenceName 存证名称(长度最大30)
                     * 
                     */
                    std::string GetEvidenceName() const;

                    /**
                     * 设置存证名称(长度最大30)
                     * @param _evidenceName 存证名称(长度最大30)
                     * 
                     */
                    void SetEvidenceName(const std::string& _evidenceName);

                    /**
                     * 判断参数 EvidenceName 是否已赋值
                     * @return EvidenceName 是否已赋值
                     * 
                     */
                    bool EvidenceNameHasBeenSet() const;

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
                     * 获取存证描述
                     * @return EvidenceDescription 存证描述
                     * 
                     */
                    std::string GetEvidenceDescription() const;

                    /**
                     * 设置存证描述
                     * @param _evidenceDescription 存证描述
                     * 
                     */
                    void SetEvidenceDescription(const std::string& _evidenceDescription);

                    /**
                     * 判断参数 EvidenceDescription 是否已赋值
                     * @return EvidenceDescription 是否已赋值
                     * 
                     */
                    bool EvidenceDescriptionHasBeenSet() const;

                private:

                    /**
                     * 存证名称(长度最大30)
                     */
                    std::string m_evidenceName;
                    bool m_evidenceNameHasBeenSet;

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
                     * 存证描述
                     */
                    std::string m_evidenceDescription;
                    bool m_evidenceDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BTOE_V20210514_MODEL_CREATEHASHDEPOSITREQUEST_H_
