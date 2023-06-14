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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEQUERYREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEQUERYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DistributeQuery请求参数结构体
                */
                class DistributeQueryRequest : public AbstractModel
                {
                public:
                    DistributeQueryRequest();
                    ~DistributeQueryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取使用门店OpenId
                     * @return OpenId 使用门店OpenId
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置使用门店OpenId
                     * @param _openId 使用门店OpenId
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取使用门店OpenKey
                     * @return OpenKey 使用门店OpenKey
                     * 
                     */
                    std::string GetOpenKey() const;

                    /**
                     * 设置使用门店OpenKey
                     * @param _openKey 使用门店OpenKey
                     * 
                     */
                    void SetOpenKey(const std::string& _openKey);

                    /**
                     * 判断参数 OpenKey 是否已赋值
                     * @return OpenKey 是否已赋值
                     * 
                     */
                    bool OpenKeyHasBeenSet() const;

                    /**
                     * 获取查询类型（1-全部，2-单笔）
                     * @return Type 查询类型（1-全部，2-单笔）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置查询类型（1-全部，2-单笔）
                     * @param _type 查询类型（1-全部，2-单笔）
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
                     * 获取商户分账单号，type为2时，和DistributeNo二者传其一
                     * @return OutDistributeNo 商户分账单号，type为2时，和DistributeNo二者传其一
                     * 
                     */
                    std::string GetOutDistributeNo() const;

                    /**
                     * 设置商户分账单号，type为2时，和DistributeNo二者传其一
                     * @param _outDistributeNo 商户分账单号，type为2时，和DistributeNo二者传其一
                     * 
                     */
                    void SetOutDistributeNo(const std::string& _outDistributeNo);

                    /**
                     * 判断参数 OutDistributeNo 是否已赋值
                     * @return OutDistributeNo 是否已赋值
                     * 
                     */
                    bool OutDistributeNoHasBeenSet() const;

                    /**
                     * 获取平台分账单号，type为2时，和OutDistributeNo二者传其一
                     * @return DistributeNo 平台分账单号，type为2时，和OutDistributeNo二者传其一
                     * 
                     */
                    std::string GetDistributeNo() const;

                    /**
                     * 设置平台分账单号，type为2时，和OutDistributeNo二者传其一
                     * @param _distributeNo 平台分账单号，type为2时，和OutDistributeNo二者传其一
                     * 
                     */
                    void SetDistributeNo(const std::string& _distributeNo);

                    /**
                     * 判断参数 DistributeNo 是否已赋值
                     * @return DistributeNo 是否已赋值
                     * 
                     */
                    bool DistributeNoHasBeenSet() const;

                    /**
                     * 获取平台交易订单号
                     * @return OrderNo 平台交易订单号
                     * 
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 设置平台交易订单号
                     * @param _orderNo 平台交易订单号
                     * 
                     */
                    void SetOrderNo(const std::string& _orderNo);

                    /**
                     * 判断参数 OrderNo 是否已赋值
                     * @return OrderNo 是否已赋值
                     * 
                     */
                    bool OrderNoHasBeenSet() const;

                    /**
                     * 获取沙箱环境填sandbox，正式环境不填
                     * @return Profile 沙箱环境填sandbox，正式环境不填
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置沙箱环境填sandbox，正式环境不填
                     * @param _profile 沙箱环境填sandbox，正式环境不填
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 使用门店OpenId
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 使用门店OpenKey
                     */
                    std::string m_openKey;
                    bool m_openKeyHasBeenSet;

                    /**
                     * 查询类型（1-全部，2-单笔）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 商户分账单号，type为2时，和DistributeNo二者传其一
                     */
                    std::string m_outDistributeNo;
                    bool m_outDistributeNoHasBeenSet;

                    /**
                     * 平台分账单号，type为2时，和OutDistributeNo二者传其一
                     */
                    std::string m_distributeNo;
                    bool m_distributeNoHasBeenSet;

                    /**
                     * 平台交易订单号
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                    /**
                     * 沙箱环境填sandbox，正式环境不填
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEQUERYREQUEST_H_
