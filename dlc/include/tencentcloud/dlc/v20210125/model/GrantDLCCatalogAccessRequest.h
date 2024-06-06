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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GRANTDLCCATALOGACCESSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GRANTDLCCATALOGACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * GrantDLCCatalogAccess请求参数结构体
                */
                class GrantDLCCatalogAccessRequest : public AbstractModel
                {
                public:
                    GrantDLCCatalogAccessRequest();
                    ~GrantDLCCatalogAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取授权VpcId
                     * @return VpcId 授权VpcId
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置授权VpcId
                     * @param _vpcId 授权VpcId
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取产品(EMR|DLC|Doris|Inlong|Wedata)
                     * @return Product 产品(EMR|DLC|Doris|Inlong|Wedata)
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置产品(EMR|DLC|Doris|Inlong|Wedata)
                     * @param _product 产品(EMR|DLC|Doris|Inlong|Wedata)
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取VPC所属账号UIN
                     * @return VpcUin VPC所属账号UIN
                     * 
                     */
                    std::string GetVpcUin() const;

                    /**
                     * 设置VPC所属账号UIN
                     * @param _vpcUin VPC所属账号UIN
                     * 
                     */
                    void SetVpcUin(const std::string& _vpcUin);

                    /**
                     * 判断参数 VpcUin 是否已赋值
                     * @return VpcUin 是否已赋值
                     * 
                     */
                    bool VpcUinHasBeenSet() const;

                    /**
                     * 获取VPC所属账号AppId
                     * @return VpcAppId VPC所属账号AppId
                     * 
                     */
                    uint64_t GetVpcAppId() const;

                    /**
                     * 设置VPC所属账号AppId
                     * @param _vpcAppId VPC所属账号AppId
                     * 
                     */
                    void SetVpcAppId(const uint64_t& _vpcAppId);

                    /**
                     * 判断参数 VpcAppId 是否已赋值
                     * @return VpcAppId 是否已赋值
                     * 
                     */
                    bool VpcAppIdHasBeenSet() const;

                private:

                    /**
                     * 授权VpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 产品(EMR|DLC|Doris|Inlong|Wedata)
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * VPC所属账号UIN
                     */
                    std::string m_vpcUin;
                    bool m_vpcUinHasBeenSet;

                    /**
                     * VPC所属账号AppId
                     */
                    uint64_t m_vpcAppId;
                    bool m_vpcAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GRANTDLCCATALOGACCESSREQUEST_H_
