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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYPRESENTATIONREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYPRESENTATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * VerifyPresentation请求参数结构体
                */
                class VerifyPresentationRequest : public AbstractModel
                {
                public:
                    VerifyPresentationRequest();
                    ~VerifyPresentationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VP持有人的did标识
                     * @return Did VP持有人的did标识
                     * 
                     */
                    std::string GetDid() const;

                    /**
                     * 设置VP持有人的did标识
                     * @param _did VP持有人的did标识
                     * 
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     * 
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取可验证表达内容
                     * @return PresentationData 可验证表达内容
                     * 
                     */
                    std::string GetPresentationData() const;

                    /**
                     * 设置可验证表达内容
                     * @param _presentationData 可验证表达内容
                     * 
                     */
                    void SetPresentationData(const std::string& _presentationData);

                    /**
                     * 判断参数 PresentationData 是否已赋值
                     * @return PresentationData 是否已赋值
                     * 
                     */
                    bool PresentationDataHasBeenSet() const;

                    /**
                     * 获取DID应用id
                     * @return DAPId DID应用id
                     * 
                     */
                    uint64_t GetDAPId() const;

                    /**
                     * 设置DID应用id
                     * @param _dAPId DID应用id
                     * 
                     */
                    void SetDAPId(const uint64_t& _dAPId);

                    /**
                     * 判断参数 DAPId 是否已赋值
                     * @return DAPId 是否已赋值
                     * 
                     */
                    bool DAPIdHasBeenSet() const;

                    /**
                     * 获取随机验证码
                     * @return VerifyCode 随机验证码
                     * 
                     */
                    std::string GetVerifyCode() const;

                    /**
                     * 设置随机验证码
                     * @param _verifyCode 随机验证码
                     * 
                     */
                    void SetVerifyCode(const std::string& _verifyCode);

                    /**
                     * 判断参数 VerifyCode 是否已赋值
                     * @return VerifyCode 是否已赋值
                     * 
                     */
                    bool VerifyCodeHasBeenSet() const;

                private:

                    /**
                     * VP持有人的did标识
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * 可验证表达内容
                     */
                    std::string m_presentationData;
                    bool m_presentationDataHasBeenSet;

                    /**
                     * DID应用id
                     */
                    uint64_t m_dAPId;
                    bool m_dAPIdHasBeenSet;

                    /**
                     * 随机验证码
                     */
                    std::string m_verifyCode;
                    bool m_verifyCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYPRESENTATIONREQUEST_H_
