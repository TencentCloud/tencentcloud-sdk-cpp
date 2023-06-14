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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEDEVICESREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * CreateDevices请求参数结构体
                */
                class CreateDevicesRequest : public AbstractModel
                {
                public:
                    CreateDevicesRequest();
                    ~CreateDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取创建设备的数量，数量范围1-100
                     * @return Number 创建设备的数量，数量范围1-100
                     * 
                     */
                    uint64_t GetNumber() const;

                    /**
                     * 设置创建设备的数量，数量范围1-100
                     * @param _number 创建设备的数量，数量范围1-100
                     * 
                     */
                    void SetNumber(const uint64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取设备名称前缀，支持英文、数字，不超过10字符
                     * @return NamePrefix 设备名称前缀，支持英文、数字，不超过10字符
                     * 
                     */
                    std::string GetNamePrefix() const;

                    /**
                     * 设置设备名称前缀，支持英文、数字，不超过10字符
                     * @param _namePrefix 设备名称前缀，支持英文、数字，不超过10字符
                     * 
                     */
                    void SetNamePrefix(const std::string& _namePrefix);

                    /**
                     * 判断参数 NamePrefix 是否已赋值
                     * @return NamePrefix 是否已赋值
                     * 
                     */
                    bool NamePrefixHasBeenSet() const;

                    /**
                     * 获取操作人
                     * @return Operator 操作人
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人
                     * @param _operator 操作人
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 创建设备的数量，数量范围1-100
                     */
                    uint64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 设备名称前缀，支持英文、数字，不超过10字符
                     */
                    std::string m_namePrefix;
                    bool m_namePrefixHasBeenSet;

                    /**
                     * 操作人
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEDEVICESREQUEST_H_
