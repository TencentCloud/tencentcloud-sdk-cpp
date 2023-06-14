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

#ifndef TENCENTCLOUD_BTOE_V20210514_MODEL_CREATEVIDEODEPOSITREQUEST_H_
#define TENCENTCLOUD_BTOE_V20210514_MODEL_CREATEVIDEODEPOSITREQUEST_H_

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
                * CreateVideoDeposit请求参数结构体
                */
                class CreateVideoDepositRequest : public AbstractModel
                {
                public:
                    CreateVideoDepositRequest();
                    ~CreateVideoDepositRequest() = default;
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
                     * 获取数据Base64编码，大小不超过5M
                     * @return FileContent 数据Base64编码，大小不超过5M
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置数据Base64编码，大小不超过5M
                     * @param _fileContent 数据Base64编码，大小不超过5M
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取带后缀的文件名称，如music.mkv
                     * @return FileName 带后缀的文件名称，如music.mkv
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置带后缀的文件名称，如music.mkv
                     * @param _fileName 带后缀的文件名称，如music.mkv
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件hash
                     * @return EvidenceHash 文件hash
                     * 
                     */
                    std::string GetEvidenceHash() const;

                    /**
                     * 设置文件hash
                     * @param _evidenceHash 文件hash
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
                     * 存证名称(长度最大30)
                     */
                    std::string m_evidenceName;
                    bool m_evidenceNameHasBeenSet;

                    /**
                     * 数据Base64编码，大小不超过5M
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 带后缀的文件名称，如music.mkv
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件hash
                     */
                    std::string m_evidenceHash;
                    bool m_evidenceHashHasBeenSet;

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

#endif // !TENCENTCLOUD_BTOE_V20210514_MODEL_CREATEVIDEODEPOSITREQUEST_H_
