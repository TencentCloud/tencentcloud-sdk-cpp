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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_SELFOPERATION_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_SELFOPERATION_H_

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
                * 客户自行上门信息
                */
                class SelfOperation : public AbstractModel
                {
                public:
                    SelfOperation();
                    ~SelfOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取联系人员电话
                     * @return StuffContact 联系人员电话
                     * 
                     */
                    std::string GetStuffContact() const;

                    /**
                     * 设置联系人员电话
                     * @param _stuffContact 联系人员电话
                     * 
                     */
                    void SetStuffContact(const std::string& _stuffContact);

                    /**
                     * 判断参数 StuffContact 是否已赋值
                     * @return StuffContact 是否已赋值
                     * 
                     */
                    bool StuffContactHasBeenSet() const;

                    /**
                     * 获取证件号码
                     * @return StuffIDCard 证件号码
                     * 
                     */
                    std::string GetStuffIDCard() const;

                    /**
                     * 设置证件号码
                     * @param _stuffIDCard 证件号码
                     * 
                     */
                    void SetStuffIDCard(const std::string& _stuffIDCard);

                    /**
                     * 判断参数 StuffIDCard 是否已赋值
                     * @return StuffIDCard 是否已赋值
                     * 
                     */
                    bool StuffIDCardHasBeenSet() const;

                    /**
                     * 获取人员姓名
                     * @return StuffName 人员姓名
                     * 
                     */
                    std::string GetStuffName() const;

                    /**
                     * 设置人员姓名
                     * @param _stuffName 人员姓名
                     * 
                     */
                    void SetStuffName(const std::string& _stuffName);

                    /**
                     * 判断参数 StuffName 是否已赋值
                     * @return StuffName 是否已赋值
                     * 
                     */
                    bool StuffNameHasBeenSet() const;

                    /**
                     * 获取上门时间
                     * @return OperationTime 上门时间
                     * 
                     */
                    std::string GetOperationTime() const;

                    /**
                     * 设置上门时间
                     * @param _operationTime 上门时间
                     * 
                     */
                    void SetOperationTime(const std::string& _operationTime);

                    /**
                     * 判断参数 OperationTime 是否已赋值
                     * @return OperationTime 是否已赋值
                     * 
                     */
                    bool OperationTimeHasBeenSet() const;

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
                     * 联系人员电话
                     */
                    std::string m_stuffContact;
                    bool m_stuffContactHasBeenSet;

                    /**
                     * 证件号码
                     */
                    std::string m_stuffIDCard;
                    bool m_stuffIDCardHasBeenSet;

                    /**
                     * 人员姓名
                     */
                    std::string m_stuffName;
                    bool m_stuffNameHasBeenSet;

                    /**
                     * 上门时间
                     */
                    std::string m_operationTime;
                    bool m_operationTimeHasBeenSet;

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

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_SELFOPERATION_H_
