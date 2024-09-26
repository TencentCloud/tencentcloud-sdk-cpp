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

#ifndef TENCENTCLOUD_CA_V20230228_MODEL_DESCRIBEVERIFYREPORTREQUEST_H_
#define TENCENTCLOUD_CA_V20230228_MODEL_DESCRIBEVERIFYREPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ca
    {
        namespace V20230228
        {
            namespace Model
            {
                /**
                * DescribeVerifyReport请求参数结构体
                */
                class DescribeVerifyReportRequest : public AbstractModel
                {
                public:
                    DescribeVerifyReportRequest();
                    ~DescribeVerifyReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取签名id
                     * @return SignatureId 签名id
                     * 
                     */
                    std::string GetSignatureId() const;

                    /**
                     * 设置签名id
                     * @param _signatureId 签名id
                     * 
                     */
                    void SetSignatureId(const std::string& _signatureId);

                    /**
                     * 判断参数 SignatureId 是否已赋值
                     * @return SignatureId 是否已赋值
                     * 
                     */
                    bool SignatureIdHasBeenSet() const;

                private:

                    /**
                     * 签名id
                     */
                    std::string m_signatureId;
                    bool m_signatureIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CA_V20230228_MODEL_DESCRIBEVERIFYREPORTREQUEST_H_
