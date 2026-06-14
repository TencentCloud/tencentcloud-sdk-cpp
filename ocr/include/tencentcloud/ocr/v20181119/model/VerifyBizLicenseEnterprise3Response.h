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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBIZLICENSEENTERPRISE3RESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBIZLICENSEENTERPRISE3RESPONSE_H_

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
                * VerifyBizLicenseEnterprise3返回参数结构体
                */
                class VerifyBizLicenseEnterprise3Response : public AbstractModel
                {
                public:
                    VerifyBizLicenseEnterprise3Response();
                    ~VerifyBizLicenseEnterprise3Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>0 成功，计费<br>1 系统异常，不计费<br>2 查询无结果，不计费</p>
                     * @return StatusCode <p>0 成功，计费<br>1 系统异常，不计费<br>2 查询无结果，不计费</p>
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>验证结果<br>1：三要素完全匹配<br>0：三要素不完全匹配<br>仅StatusCode为0时返回</p>
                     * @return VerifyResult <p>验证结果<br>1：三要素完全匹配<br>0：三要素不完全匹配<br>仅StatusCode为0时返回</p>
                     * 
                     */
                    int64_t GetVerifyResult() const;

                    /**
                     * 判断参数 VerifyResult 是否已赋值
                     * @return VerifyResult 是否已赋值
                     * 
                     */
                    bool VerifyResultHasBeenSet() const;

                    /**
                     * 获取<p>企业状态</p><p>枚举值：</p><ul><li>1： 开业（在营）/ 在营</li><li>2： 迁出 / 非在营</li><li>3： 注销</li><li>4： 吊销</li><li>5： 撤销</li><li>6： 停业</li><li>7： 撤销登记</li><li>0： 其他</li><li>/： 无法查询</li></ul><p>企业状态  当VerifyType参数为ENT_2META时，可返回：  0-7,  /   当VerifyType参数为ENT_3META时，可返回  1，2</p>
                     * @return OperatingStatus <p>企业状态</p><p>枚举值：</p><ul><li>1： 开业（在营）/ 在营</li><li>2： 迁出 / 非在营</li><li>3： 注销</li><li>4： 吊销</li><li>5： 撤销</li><li>6： 停业</li><li>7： 撤销登记</li><li>0： 其他</li><li>/： 无法查询</li></ul><p>企业状态  当VerifyType参数为ENT_2META时，可返回：  0-7,  /   当VerifyType参数为ENT_3META时，可返回  1，2</p>
                     * 
                     */
                    std::string GetOperatingStatus() const;

                    /**
                     * 判断参数 OperatingStatus 是否已赋值
                     * @return OperatingStatus 是否已赋值
                     * 
                     */
                    bool OperatingStatusHasBeenSet() const;

                private:

                    /**
                     * <p>0 成功，计费<br>1 系统异常，不计费<br>2 查询无结果，不计费</p>
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * <p>验证结果<br>1：三要素完全匹配<br>0：三要素不完全匹配<br>仅StatusCode为0时返回</p>
                     */
                    int64_t m_verifyResult;
                    bool m_verifyResultHasBeenSet;

                    /**
                     * <p>企业状态</p><p>枚举值：</p><ul><li>1： 开业（在营）/ 在营</li><li>2： 迁出 / 非在营</li><li>3： 注销</li><li>4： 吊销</li><li>5： 撤销</li><li>6： 停业</li><li>7： 撤销登记</li><li>0： 其他</li><li>/： 无法查询</li></ul><p>企业状态  当VerifyType参数为ENT_2META时，可返回：  0-7,  /   当VerifyType参数为ENT_3META时，可返回  1，2</p>
                     */
                    std::string m_operatingStatus;
                    bool m_operatingStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBIZLICENSEENTERPRISE3RESPONSE_H_
