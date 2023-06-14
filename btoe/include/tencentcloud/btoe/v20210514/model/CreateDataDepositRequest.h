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

#ifndef TENCENTCLOUD_BTOE_V20210514_MODEL_CREATEDATADEPOSITREQUEST_H_
#define TENCENTCLOUD_BTOE_V20210514_MODEL_CREATEDATADEPOSITREQUEST_H_

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
                * CreateDataDeposit请求参数结构体
                */
                class CreateDataDepositRequest : public AbstractModel
                {
                public:
                    CreateDataDepositRequest();
                    ~CreateDataDepositRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务数据明文(json格式字符串)，最大256kb
                     * @return EvidenceInfo 业务数据明文(json格式字符串)，最大256kb
                     * 
                     */
                    std::string GetEvidenceInfo() const;

                    /**
                     * 设置业务数据明文(json格式字符串)，最大256kb
                     * @param _evidenceInfo 业务数据明文(json格式字符串)，最大256kb
                     * 
                     */
                    void SetEvidenceInfo(const std::string& _evidenceInfo);

                    /**
                     * 判断参数 EvidenceInfo 是否已赋值
                     * @return EvidenceInfo 是否已赋值
                     * 
                     */
                    bool EvidenceInfoHasBeenSet() const;

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
                     * 获取业务ID 透传 长度最大不超过64
                     * @return BusinessId 业务ID 透传 长度最大不超过64
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置业务ID 透传 长度最大不超过64
                     * @param _businessId 业务ID 透传 长度最大不超过64
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
                     * 业务数据明文(json格式字符串)，最大256kb
                     */
                    std::string m_evidenceInfo;
                    bool m_evidenceInfoHasBeenSet;

                    /**
                     * 存证名称(长度最大30)
                     */
                    std::string m_evidenceName;
                    bool m_evidenceNameHasBeenSet;

                    /**
                     * 业务ID 透传 长度最大不超过64
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 算法类型 0 SM3, 1 SHA256, 2 SHA384 默认0
                     */
                    uint64_t m_hashType;
                    bool m_hashTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_BTOE_V20210514_MODEL_CREATEDATADEPOSITREQUEST_H_
