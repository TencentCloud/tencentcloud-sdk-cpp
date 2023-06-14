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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEMERCHANTRESULTDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEMERCHANTRESULTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 创建商户结果数据
                */
                class CreateMerchantResultData : public AbstractModel
                {
                public:
                    CreateMerchantResultData();
                    ~CreateMerchantResultData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取企业名称
                     * @return TaxpayerName 企业名称
                     * 
                     */
                    std::string GetTaxpayerName() const;

                    /**
                     * 设置企业名称
                     * @param _taxpayerName 企业名称
                     * 
                     */
                    void SetTaxpayerName(const std::string& _taxpayerName);

                    /**
                     * 判断参数 TaxpayerName 是否已赋值
                     * @return TaxpayerName 是否已赋值
                     * 
                     */
                    bool TaxpayerNameHasBeenSet() const;

                    /**
                     * 获取请求流水号
                     * @return SerialNo 请求流水号
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置请求流水号
                     * @param _serialNo 请求流水号
                     * 
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     * 
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取纳税号
                     * @return TaxpayerNum 纳税号
                     * 
                     */
                    std::string GetTaxpayerNum() const;

                    /**
                     * 设置纳税号
                     * @param _taxpayerNum 纳税号
                     * 
                     */
                    void SetTaxpayerNum(const std::string& _taxpayerNum);

                    /**
                     * 判断参数 TaxpayerNum 是否已赋值
                     * @return TaxpayerNum 是否已赋值
                     * 
                     */
                    bool TaxpayerNumHasBeenSet() const;

                private:

                    /**
                     * 企业名称
                     */
                    std::string m_taxpayerName;
                    bool m_taxpayerNameHasBeenSet;

                    /**
                     * 请求流水号
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * 纳税号
                     */
                    std::string m_taxpayerNum;
                    bool m_taxpayerNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEMERCHANTRESULTDATA_H_
