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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBIZLICENSEENTERPRISE4REQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBIZLICENSEENTERPRISE4REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VerifyBizLicenseEnterprise4请求参数结构体
                */
                class VerifyBizLicenseEnterprise4Request : public AbstractModel
                {
                public:
                    VerifyBizLicenseEnterprise4Request();
                    ~VerifyBizLicenseEnterprise4Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>统一社会信用代码</p>
                     * @return CreditCode <p>统一社会信用代码</p>
                     * 
                     */
                    std::string GetCreditCode() const;

                    /**
                     * 设置<p>统一社会信用代码</p>
                     * @param _creditCode <p>统一社会信用代码</p>
                     * 
                     */
                    void SetCreditCode(const std::string& _creditCode);

                    /**
                     * 判断参数 CreditCode 是否已赋值
                     * @return CreditCode 是否已赋值
                     * 
                     */
                    bool CreditCodeHasBeenSet() const;

                    /**
                     * 获取<p>企业名称</p>
                     * @return EntName <p>企业名称</p>
                     * 
                     */
                    std::string GetEntName() const;

                    /**
                     * 设置<p>企业名称</p>
                     * @param _entName <p>企业名称</p>
                     * 
                     */
                    void SetEntName(const std::string& _entName);

                    /**
                     * 判断参数 EntName 是否已赋值
                     * @return EntName 是否已赋值
                     * 
                     */
                    bool EntNameHasBeenSet() const;

                    /**
                     * 获取<p>法人代表</p>
                     * @return LrName <p>法人代表</p>
                     * 
                     */
                    std::string GetLrName() const;

                    /**
                     * 设置<p>法人代表</p>
                     * @param _lrName <p>法人代表</p>
                     * 
                     */
                    void SetLrName(const std::string& _lrName);

                    /**
                     * 判断参数 LrName 是否已赋值
                     * @return LrName 是否已赋值
                     * 
                     */
                    bool LrNameHasBeenSet() const;

                    /**
                     * 获取<p>注册登记证件号码</p>
                     * @return IdNum <p>注册登记证件号码</p>
                     * 
                     */
                    std::string GetIdNum() const;

                    /**
                     * 设置<p>注册登记证件号码</p>
                     * @param _idNum <p>注册登记证件号码</p>
                     * 
                     */
                    void SetIdNum(const std::string& _idNum);

                    /**
                     * 判断参数 IdNum 是否已赋值
                     * @return IdNum 是否已赋值
                     * 
                     */
                    bool IdNumHasBeenSet() const;

                private:

                    /**
                     * <p>统一社会信用代码</p>
                     */
                    std::string m_creditCode;
                    bool m_creditCodeHasBeenSet;

                    /**
                     * <p>企业名称</p>
                     */
                    std::string m_entName;
                    bool m_entNameHasBeenSet;

                    /**
                     * <p>法人代表</p>
                     */
                    std::string m_lrName;
                    bool m_lrNameHasBeenSet;

                    /**
                     * <p>注册登记证件号码</p>
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBIZLICENSEENTERPRISE4REQUEST_H_
