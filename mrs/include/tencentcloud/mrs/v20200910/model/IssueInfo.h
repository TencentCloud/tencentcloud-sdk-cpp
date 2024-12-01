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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_ISSUEINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_ISSUEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 签发信息
                */
                class IssueInfo : public AbstractModel
                {
                public:
                    IssueInfo();
                    ~IssueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取编号
                     * @return CertNumber 编号
                     * 
                     */
                    std::string GetCertNumber() const;

                    /**
                     * 设置编号
                     * @param _certNumber 编号
                     * 
                     */
                    void SetCertNumber(const std::string& _certNumber);

                    /**
                     * 判断参数 CertNumber 是否已赋值
                     * @return CertNumber 是否已赋值
                     * 
                     */
                    bool CertNumberHasBeenSet() const;

                    /**
                     * 获取签发机构
                     * @return IssuedAuthority 签发机构
                     * 
                     */
                    std::string GetIssuedAuthority() const;

                    /**
                     * 设置签发机构
                     * @param _issuedAuthority 签发机构
                     * 
                     */
                    void SetIssuedAuthority(const std::string& _issuedAuthority);

                    /**
                     * 判断参数 IssuedAuthority 是否已赋值
                     * @return IssuedAuthority 是否已赋值
                     * 
                     */
                    bool IssuedAuthorityHasBeenSet() const;

                    /**
                     * 获取签发日期
                     * @return IssuedDate 签发日期
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 设置签发日期
                     * @param _issuedDate 签发日期
                     * 
                     */
                    void SetIssuedDate(const std::string& _issuedDate);

                    /**
                     * 判断参数 IssuedDate 是否已赋值
                     * @return IssuedDate 是否已赋值
                     * 
                     */
                    bool IssuedDateHasBeenSet() const;

                private:

                    /**
                     * 编号
                     */
                    std::string m_certNumber;
                    bool m_certNumberHasBeenSet;

                    /**
                     * 签发机构
                     */
                    std::string m_issuedAuthority;
                    bool m_issuedAuthorityHasBeenSet;

                    /**
                     * 签发日期
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_ISSUEINFO_H_
