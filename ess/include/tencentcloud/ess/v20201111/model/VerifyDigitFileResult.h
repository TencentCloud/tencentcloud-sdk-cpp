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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_VERIFYDIGITFILERESULT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_VERIFYDIGITFILERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 数字加签文件验签结果
                */
                class VerifyDigitFileResult : public AbstractModel
                {
                public:
                    VerifyDigitFileResult();
                    ~VerifyDigitFileResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书起始时间的Unix时间戳，单位毫秒
                     * @return CertNotBefore 证书起始时间的Unix时间戳，单位毫秒
                     * 
                     */
                    int64_t GetCertNotBefore() const;

                    /**
                     * 设置证书起始时间的Unix时间戳，单位毫秒
                     * @param _certNotBefore 证书起始时间的Unix时间戳，单位毫秒
                     * 
                     */
                    void SetCertNotBefore(const int64_t& _certNotBefore);

                    /**
                     * 判断参数 CertNotBefore 是否已赋值
                     * @return CertNotBefore 是否已赋值
                     * 
                     */
                    bool CertNotBeforeHasBeenSet() const;

                    /**
                     * 获取证书过期时间的时间戳，单位毫秒
                     * @return CertNotAfter 证书过期时间的时间戳，单位毫秒
                     * 
                     */
                    int64_t GetCertNotAfter() const;

                    /**
                     * 设置证书过期时间的时间戳，单位毫秒
                     * @param _certNotAfter 证书过期时间的时间戳，单位毫秒
                     * 
                     */
                    void SetCertNotAfter(const int64_t& _certNotAfter);

                    /**
                     * 判断参数 CertNotAfter 是否已赋值
                     * @return CertNotAfter 是否已赋值
                     * 
                     */
                    bool CertNotAfterHasBeenSet() const;

                    /**
                     * 获取证书序列号，在数字证书申请过程中，系统会自动生成一个独一无二的序号。	
                     * @return CertSn 证书序列号，在数字证书申请过程中，系统会自动生成一个独一无二的序号。	
                     * 
                     */
                    std::string GetCertSn() const;

                    /**
                     * 设置证书序列号，在数字证书申请过程中，系统会自动生成一个独一无二的序号。	
                     * @param _certSn 证书序列号，在数字证书申请过程中，系统会自动生成一个独一无二的序号。	
                     * 
                     */
                    void SetCertSn(const std::string& _certSn);

                    /**
                     * 判断参数 CertSn 是否已赋值
                     * @return CertSn 是否已赋值
                     * 
                     */
                    bool CertSnHasBeenSet() const;

                    /**
                     * 获取证书签名算法, 如SHA1withRSA等算法
                     * @return SignAlgorithm 证书签名算法, 如SHA1withRSA等算法
                     * 
                     */
                    std::string GetSignAlgorithm() const;

                    /**
                     * 设置证书签名算法, 如SHA1withRSA等算法
                     * @param _signAlgorithm 证书签名算法, 如SHA1withRSA等算法
                     * 
                     */
                    void SetSignAlgorithm(const std::string& _signAlgorithm);

                    /**
                     * 判断参数 SignAlgorithm 是否已赋值
                     * @return SignAlgorithm 是否已赋值
                     * 
                     */
                    bool SignAlgorithmHasBeenSet() const;

                    /**
                     * 获取签署时间的Unix时间戳，单位毫秒
                     * @return SignTime 签署时间的Unix时间戳，单位毫秒
                     * 
                     */
                    int64_t GetSignTime() const;

                    /**
                     * 设置签署时间的Unix时间戳，单位毫秒
                     * @param _signTime 签署时间的Unix时间戳，单位毫秒
                     * 
                     */
                    void SetSignTime(const int64_t& _signTime);

                    /**
                     * 判断参数 SignTime 是否已赋值
                     * @return SignTime 是否已赋值
                     * 
                     */
                    bool SignTimeHasBeenSet() const;

                    /**
                     * 获取签名类型。0表示带签章的数字签名，1表示仅数字签名
                     * @return SignType 签名类型。0表示带签章的数字签名，1表示仅数字签名
                     * 
                     */
                    int64_t GetSignType() const;

                    /**
                     * 设置签名类型。0表示带签章的数字签名，1表示仅数字签名
                     * @param _signType 签名类型。0表示带签章的数字签名，1表示仅数字签名
                     * 
                     */
                    void SetSignType(const int64_t& _signType);

                    /**
                     * 判断参数 SignType 是否已赋值
                     * @return SignType 是否已赋值
                     * 
                     */
                    bool SignTypeHasBeenSet() const;

                    /**
                     * 获取申请证书的主体的名字

如果是在腾讯电子签平台签署, 则对应的主体的名字个数如下
**企业**:  ESS@企业名称@编码
**个人**: ESS@个人姓名@证件号@808854

如果在其他平台签署的, 主体的名字参考其他平台的说明
                     * @return SignerName 申请证书的主体的名字

如果是在腾讯电子签平台签署, 则对应的主体的名字个数如下
**企业**:  ESS@企业名称@编码
**个人**: ESS@个人姓名@证件号@808854

如果在其他平台签署的, 主体的名字参考其他平台的说明
                     * 
                     */
                    std::string GetSignerName() const;

                    /**
                     * 设置申请证书的主体的名字

如果是在腾讯电子签平台签署, 则对应的主体的名字个数如下
**企业**:  ESS@企业名称@编码
**个人**: ESS@个人姓名@证件号@808854

如果在其他平台签署的, 主体的名字参考其他平台的说明
                     * @param _signerName 申请证书的主体的名字

如果是在腾讯电子签平台签署, 则对应的主体的名字个数如下
**企业**:  ESS@企业名称@编码
**个人**: ESS@个人姓名@证件号@808854

如果在其他平台签署的, 主体的名字参考其他平台的说明
                     * 
                     */
                    void SetSignerName(const std::string& _signerName);

                    /**
                     * 判断参数 SignerName 是否已赋值
                     * @return SignerName 是否已赋值
                     * 
                     */
                    bool SignerNameHasBeenSet() const;

                private:

                    /**
                     * 证书起始时间的Unix时间戳，单位毫秒
                     */
                    int64_t m_certNotBefore;
                    bool m_certNotBeforeHasBeenSet;

                    /**
                     * 证书过期时间的时间戳，单位毫秒
                     */
                    int64_t m_certNotAfter;
                    bool m_certNotAfterHasBeenSet;

                    /**
                     * 证书序列号，在数字证书申请过程中，系统会自动生成一个独一无二的序号。	
                     */
                    std::string m_certSn;
                    bool m_certSnHasBeenSet;

                    /**
                     * 证书签名算法, 如SHA1withRSA等算法
                     */
                    std::string m_signAlgorithm;
                    bool m_signAlgorithmHasBeenSet;

                    /**
                     * 签署时间的Unix时间戳，单位毫秒
                     */
                    int64_t m_signTime;
                    bool m_signTimeHasBeenSet;

                    /**
                     * 签名类型。0表示带签章的数字签名，1表示仅数字签名
                     */
                    int64_t m_signType;
                    bool m_signTypeHasBeenSet;

                    /**
                     * 申请证书的主体的名字

如果是在腾讯电子签平台签署, 则对应的主体的名字个数如下
**企业**:  ESS@企业名称@编码
**个人**: ESS@个人姓名@证件号@808854

如果在其他平台签署的, 主体的名字参考其他平台的说明
                     */
                    std::string m_signerName;
                    bool m_signerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_VERIFYDIGITFILERESULT_H_
