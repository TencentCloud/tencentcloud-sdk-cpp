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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CUSTOMERRECEIPT_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CUSTOMERRECEIPT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 客户上门自提信息
                */
                class CustomerReceipt : public AbstractModel
                {
                public:
                    CustomerReceipt();
                    ~CustomerReceipt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自提人员姓名
                     * @return PickUpStuff 自提人员姓名
                     * 
                     */
                    std::string GetPickUpStuff() const;

                    /**
                     * 设置自提人员姓名
                     * @param _pickUpStuff 自提人员姓名
                     * 
                     */
                    void SetPickUpStuff(const std::string& _pickUpStuff);

                    /**
                     * 判断参数 PickUpStuff 是否已赋值
                     * @return PickUpStuff 是否已赋值
                     * 
                     */
                    bool PickUpStuffHasBeenSet() const;

                    /**
                     * 获取自提人电话
                     * @return PickUpStuffContact 自提人电话
                     * 
                     */
                    std::string GetPickUpStuffContact() const;

                    /**
                     * 设置自提人电话
                     * @param _pickUpStuffContact 自提人电话
                     * 
                     */
                    void SetPickUpStuffContact(const std::string& _pickUpStuffContact);

                    /**
                     * 判断参数 PickUpStuffContact 是否已赋值
                     * @return PickUpStuffContact 是否已赋值
                     * 
                     */
                    bool PickUpStuffContactHasBeenSet() const;

                    /**
                     * 获取自提人证件号码
                     * @return PickUpStuffIDCard 自提人证件号码
                     * 
                     */
                    std::string GetPickUpStuffIDCard() const;

                    /**
                     * 设置自提人证件号码
                     * @param _pickUpStuffIDCard 自提人证件号码
                     * 
                     */
                    void SetPickUpStuffIDCard(const std::string& _pickUpStuffIDCard);

                    /**
                     * 判断参数 PickUpStuffIDCard 是否已赋值
                     * @return PickUpStuffIDCard 是否已赋值
                     * 
                     */
                    bool PickUpStuffIDCardHasBeenSet() const;

                    /**
                     * 获取自提时间
                     * @return PickUpTime 自提时间
                     * 
                     */
                    std::string GetPickUpTime() const;

                    /**
                     * 设置自提时间
                     * @param _pickUpTime 自提时间
                     * 
                     */
                    void SetPickUpTime(const std::string& _pickUpTime);

                    /**
                     * 判断参数 PickUpTime 是否已赋值
                     * @return PickUpTime 是否已赋值
                     * 
                     */
                    bool PickUpTimeHasBeenSet() const;

                    /**
                     * 获取证件类型，非必传，默认为IDENTITY_CARD。
对应关系如下：IDENTITY_CARD: 身份证,
HONG_KONG_AND_MACAO_PASS: 港澳通行证',
PASSPORT: 护照,
DRIVING_LICENSE: 驾照,
OTHER: 其他
                     * @return IDCardType 证件类型，非必传，默认为IDENTITY_CARD。
对应关系如下：IDENTITY_CARD: 身份证,
HONG_KONG_AND_MACAO_PASS: 港澳通行证',
PASSPORT: 护照,
DRIVING_LICENSE: 驾照,
OTHER: 其他
                     * 
                     */
                    std::string GetIDCardType() const;

                    /**
                     * 设置证件类型，非必传，默认为IDENTITY_CARD。
对应关系如下：IDENTITY_CARD: 身份证,
HONG_KONG_AND_MACAO_PASS: 港澳通行证',
PASSPORT: 护照,
DRIVING_LICENSE: 驾照,
OTHER: 其他
                     * @param _iDCardType 证件类型，非必传，默认为IDENTITY_CARD。
对应关系如下：IDENTITY_CARD: 身份证,
HONG_KONG_AND_MACAO_PASS: 港澳通行证',
PASSPORT: 护照,
DRIVING_LICENSE: 驾照,
OTHER: 其他
                     * 
                     */
                    void SetIDCardType(const std::string& _iDCardType);

                    /**
                     * 判断参数 IDCardType 是否已赋值
                     * @return IDCardType 是否已赋值
                     * 
                     */
                    bool IDCardTypeHasBeenSet() const;

                private:

                    /**
                     * 自提人员姓名
                     */
                    std::string m_pickUpStuff;
                    bool m_pickUpStuffHasBeenSet;

                    /**
                     * 自提人电话
                     */
                    std::string m_pickUpStuffContact;
                    bool m_pickUpStuffContactHasBeenSet;

                    /**
                     * 自提人证件号码
                     */
                    std::string m_pickUpStuffIDCard;
                    bool m_pickUpStuffIDCardHasBeenSet;

                    /**
                     * 自提时间
                     */
                    std::string m_pickUpTime;
                    bool m_pickUpTimeHasBeenSet;

                    /**
                     * 证件类型，非必传，默认为IDENTITY_CARD。
对应关系如下：IDENTITY_CARD: 身份证,
HONG_KONG_AND_MACAO_PASS: 港澳通行证',
PASSPORT: 护照,
DRIVING_LICENSE: 驾照,
OTHER: 其他
                     */
                    std::string m_iDCardType;
                    bool m_iDCardTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CUSTOMERRECEIPT_H_
