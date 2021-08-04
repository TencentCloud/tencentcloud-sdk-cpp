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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BIZLICENSEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BIZLICENSEOCRRESPONSE_H_

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
                * BizLicenseOCR返回参数结构体
                */
                class BizLicenseOCRResponse : public AbstractModel
                {
                public:
                    BizLicenseOCRResponse();
                    ~BizLicenseOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取统一社会信用代码（三合一之前为注册号）
                     * @return RegNum 统一社会信用代码（三合一之前为注册号）
                     */
                    std::string GetRegNum() const;

                    /**
                     * 判断参数 RegNum 是否已赋值
                     * @return RegNum 是否已赋值
                     */
                    bool RegNumHasBeenSet() const;

                    /**
                     * 获取公司名称
                     * @return Name 公司名称
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取注册资本
                     * @return Capital 注册资本
                     */
                    std::string GetCapital() const;

                    /**
                     * 判断参数 Capital 是否已赋值
                     * @return Capital 是否已赋值
                     */
                    bool CapitalHasBeenSet() const;

                    /**
                     * 获取法定代表人
                     * @return Person 法定代表人
                     */
                    std::string GetPerson() const;

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取地址
                     * @return Address 地址
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取经营范围
                     * @return Business 经营范围
                     */
                    std::string GetBusiness() const;

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取主体类型
                     * @return Type 主体类型
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取营业期限
                     * @return Period 营业期限
                     */
                    std::string GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取组成形式
                     * @return ComposingForm 组成形式
                     */
                    std::string GetComposingForm() const;

                    /**
                     * 判断参数 ComposingForm 是否已赋值
                     * @return ComposingForm 是否已赋值
                     */
                    bool ComposingFormHasBeenSet() const;

                    /**
                     * 获取成立日期
                     * @return SetDate 成立日期
                     */
                    std::string GetSetDate() const;

                    /**
                     * 判断参数 SetDate 是否已赋值
                     * @return SetDate 是否已赋值
                     */
                    bool SetDateHasBeenSet() const;

                    /**
                     * 获取Code 告警码列表和释义：
-20001 非营业执照
注：告警码可以同时存在多个
                     * @return RecognizeWarnCode Code 告警码列表和释义：
-20001 非营业执照
注：告警码可以同时存在多个
                     */
                    std::vector<int64_t> GetRecognizeWarnCode() const;

                    /**
                     * 判断参数 RecognizeWarnCode 是否已赋值
                     * @return RecognizeWarnCode 是否已赋值
                     */
                    bool RecognizeWarnCodeHasBeenSet() const;

                    /**
                     * 获取告警码说明：
OCR_WARNING_TPYE_NOT_MATCH 非营业执照
注：告警信息可以同时存在多个
                     * @return RecognizeWarnMsg 告警码说明：
OCR_WARNING_TPYE_NOT_MATCH 非营业执照
注：告警信息可以同时存在多个
                     */
                    std::vector<std::string> GetRecognizeWarnMsg() const;

                    /**
                     * 判断参数 RecognizeWarnMsg 是否已赋值
                     * @return RecognizeWarnMsg 是否已赋值
                     */
                    bool RecognizeWarnMsgHasBeenSet() const;

                private:

                    /**
                     * 统一社会信用代码（三合一之前为注册号）
                     */
                    std::string m_regNum;
                    bool m_regNumHasBeenSet;

                    /**
                     * 公司名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 注册资本
                     */
                    std::string m_capital;
                    bool m_capitalHasBeenSet;

                    /**
                     * 法定代表人
                     */
                    std::string m_person;
                    bool m_personHasBeenSet;

                    /**
                     * 地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 经营范围
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 主体类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 营业期限
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 组成形式
                     */
                    std::string m_composingForm;
                    bool m_composingFormHasBeenSet;

                    /**
                     * 成立日期
                     */
                    std::string m_setDate;
                    bool m_setDateHasBeenSet;

                    /**
                     * Code 告警码列表和释义：
-20001 非营业执照
注：告警码可以同时存在多个
                     */
                    std::vector<int64_t> m_recognizeWarnCode;
                    bool m_recognizeWarnCodeHasBeenSet;

                    /**
                     * 告警码说明：
OCR_WARNING_TPYE_NOT_MATCH 非营业执照
注：告警信息可以同时存在多个
                     */
                    std::vector<std::string> m_recognizeWarnMsg;
                    bool m_recognizeWarnMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BIZLICENSEOCRRESPONSE_H_
