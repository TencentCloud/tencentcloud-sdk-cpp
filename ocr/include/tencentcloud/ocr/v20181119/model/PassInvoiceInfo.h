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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_PASSINVOICEINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_PASSINVOICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 通行费发票信息
                */
                class PassInvoiceInfo : public AbstractModel
                {
                public:
                    PassInvoiceInfo();
                    ~PassInvoiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通行费车牌号
                     * @return NumberPlate 通行费车牌号
                     * 
                     */
                    std::string GetNumberPlate() const;

                    /**
                     * 设置通行费车牌号
                     * @param _numberPlate 通行费车牌号
                     * 
                     */
                    void SetNumberPlate(const std::string& _numberPlate);

                    /**
                     * 判断参数 NumberPlate 是否已赋值
                     * @return NumberPlate 是否已赋值
                     * 
                     */
                    bool NumberPlateHasBeenSet() const;

                    /**
                     * 获取通行费类型
                     * @return Type 通行费类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置通行费类型
                     * @param _type 通行费类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取通行日期起
                     * @return PassDateBegin 通行日期起
                     * 
                     */
                    std::string GetPassDateBegin() const;

                    /**
                     * 设置通行日期起
                     * @param _passDateBegin 通行日期起
                     * 
                     */
                    void SetPassDateBegin(const std::string& _passDateBegin);

                    /**
                     * 判断参数 PassDateBegin 是否已赋值
                     * @return PassDateBegin 是否已赋值
                     * 
                     */
                    bool PassDateBeginHasBeenSet() const;

                    /**
                     * 获取通行日期止
                     * @return PassDateEnd 通行日期止
                     * 
                     */
                    std::string GetPassDateEnd() const;

                    /**
                     * 设置通行日期止
                     * @param _passDateEnd 通行日期止
                     * 
                     */
                    void SetPassDateEnd(const std::string& _passDateEnd);

                    /**
                     * 判断参数 PassDateEnd 是否已赋值
                     * @return PassDateEnd 是否已赋值
                     * 
                     */
                    bool PassDateEndHasBeenSet() const;

                    /**
                     * 获取税收分类编码
                     * @return TaxClassifyCode 税收分类编码
                     * 
                     */
                    std::string GetTaxClassifyCode() const;

                    /**
                     * 设置税收分类编码
                     * @param _taxClassifyCode 税收分类编码
                     * 
                     */
                    void SetTaxClassifyCode(const std::string& _taxClassifyCode);

                    /**
                     * 判断参数 TaxClassifyCode 是否已赋值
                     * @return TaxClassifyCode 是否已赋值
                     * 
                     */
                    bool TaxClassifyCodeHasBeenSet() const;

                private:

                    /**
                     * 通行费车牌号
                     */
                    std::string m_numberPlate;
                    bool m_numberPlateHasBeenSet;

                    /**
                     * 通行费类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 通行日期起
                     */
                    std::string m_passDateBegin;
                    bool m_passDateBeginHasBeenSet;

                    /**
                     * 通行日期止
                     */
                    std::string m_passDateEnd;
                    bool m_passDateEndHasBeenSet;

                    /**
                     * 税收分类编码
                     */
                    std::string m_taxClassifyCode;
                    bool m_taxClassifyCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PASSINVOICEINFO_H_
