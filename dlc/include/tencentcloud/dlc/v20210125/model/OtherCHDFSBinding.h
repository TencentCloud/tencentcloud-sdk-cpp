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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_OTHERCHDFSBINDING_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_OTHERCHDFSBINDING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CHDFSProductVpcInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 非DLC产品CHDFS绑定
                */
                class OtherCHDFSBinding : public AbstractModel
                {
                public:
                    OtherCHDFSBinding();
                    ~OtherCHDFSBinding() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取用户名称（该字段已废弃）
                     * @return SuperUser 用户名称（该字段已废弃）
                     * 
                     */
                    std::vector<std::string> GetSuperUser() const;

                    /**
                     * 设置用户名称（该字段已废弃）
                     * @param _superUser 用户名称（该字段已废弃）
                     * 
                     */
                    void SetSuperUser(const std::vector<std::string>& _superUser);

                    /**
                     * 判断参数 SuperUser 是否已赋值
                     * @return SuperUser 是否已赋值
                     * 
                     */
                    bool SuperUserHasBeenSet() const;

                    /**
                     * 获取vpc配置信息
                     * @return VpcInfo vpc配置信息
                     * 
                     */
                    std::vector<CHDFSProductVpcInfo> GetVpcInfo() const;

                    /**
                     * 设置vpc配置信息
                     * @param _vpcInfo vpc配置信息
                     * 
                     */
                    void SetVpcInfo(const std::vector<CHDFSProductVpcInfo>& _vpcInfo);

                    /**
                     * 判断参数 VpcInfo 是否已赋值
                     * @return VpcInfo 是否已赋值
                     * 
                     */
                    bool VpcInfoHasBeenSet() const;

                    /**
                     * 获取是否与该桶绑定（该字段已废弃）
                     * @return IsBind 是否与该桶绑定（该字段已废弃）
                     * 
                     */
                    bool GetIsBind() const;

                    /**
                     * 设置是否与该桶绑定（该字段已废弃）
                     * @param _isBind 是否与该桶绑定（该字段已废弃）
                     * 
                     */
                    void SetIsBind(const bool& _isBind);

                    /**
                     * 判断参数 IsBind 是否已赋值
                     * @return IsBind 是否已赋值
                     * 
                     */
                    bool IsBindHasBeenSet() const;

                private:

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 用户名称（该字段已废弃）
                     */
                    std::vector<std::string> m_superUser;
                    bool m_superUserHasBeenSet;

                    /**
                     * vpc配置信息
                     */
                    std::vector<CHDFSProductVpcInfo> m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                    /**
                     * 是否与该桶绑定（该字段已废弃）
                     */
                    bool m_isBind;
                    bool m_isBindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_OTHERCHDFSBINDING_H_
