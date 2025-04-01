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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CREATEVERIFYRECORDRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CREATEVERIFYRECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CreateVerifyRecord返回参数结构体
                */
                class CreateVerifyRecordResponse : public AbstractModel
                {
                public:
                    CreateVerifyRecordResponse();
                    ~CreateVerifyRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取子解析
                     * @return SubDomain 子解析
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取解析值
                     * @return Record 解析值
                     * 
                     */
                    std::string GetRecord() const;

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     * 
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取解析类型
                     * @return RecordType 解析类型
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取文件验证 URL 指引
                     * @return FileVerifyUrl 文件验证 URL 指引
                     * 
                     */
                    std::string GetFileVerifyUrl() const;

                    /**
                     * 判断参数 FileVerifyUrl 是否已赋值
                     * @return FileVerifyUrl 是否已赋值
                     * 
                     */
                    bool FileVerifyUrlHasBeenSet() const;

                    /**
                     * 获取文件校验域名列表
                     * @return FileVerifyDomains 文件校验域名列表
                     * 
                     */
                    std::vector<std::string> GetFileVerifyDomains() const;

                    /**
                     * 判断参数 FileVerifyDomains 是否已赋值
                     * @return FileVerifyDomains 是否已赋值
                     * 
                     */
                    bool FileVerifyDomainsHasBeenSet() const;

                    /**
                     * 获取文件校验文件名
                     * @return FileVerifyName 文件校验文件名
                     * 
                     */
                    std::string GetFileVerifyName() const;

                    /**
                     * 判断参数 FileVerifyName 是否已赋值
                     * @return FileVerifyName 是否已赋值
                     * 
                     */
                    bool FileVerifyNameHasBeenSet() const;

                private:

                    /**
                     * 子解析
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 解析值
                     */
                    std::string m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * 解析类型
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 文件验证 URL 指引
                     */
                    std::string m_fileVerifyUrl;
                    bool m_fileVerifyUrlHasBeenSet;

                    /**
                     * 文件校验域名列表
                     */
                    std::vector<std::string> m_fileVerifyDomains;
                    bool m_fileVerifyDomainsHasBeenSet;

                    /**
                     * 文件校验文件名
                     */
                    std::string m_fileVerifyName;
                    bool m_fileVerifyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CREATEVERIFYRECORDRESPONSE_H_
