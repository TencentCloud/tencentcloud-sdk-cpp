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

#ifndef TENCENTCLOUD_EIS_V20200715_MODEL_EISCONNECTORSUMMARY_H_
#define TENCENTCLOUD_EIS_V20200715_MODEL_EISCONNECTORSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20200715
        {
            namespace Model
            {
                /**
                * 连接器概要信息
                */
                class EisConnectorSummary : public AbstractModel
                {
                public:
                    EisConnectorSummary();
                    ~EisConnectorSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取连接器名称
                     * @return ConnectorName 连接器名称
                     * 
                     */
                    std::string GetConnectorName() const;

                    /**
                     * 设置连接器名称
                     * @param _connectorName 连接器名称
                     * 
                     */
                    void SetConnectorName(const std::string& _connectorName);

                    /**
                     * 判断参数 ConnectorName 是否已赋值
                     * @return ConnectorName 是否已赋值
                     * 
                     */
                    bool ConnectorNameHasBeenSet() const;

                    /**
                     * 获取连接器展示名称
                     * @return DisplayName 连接器展示名称
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置连接器展示名称
                     * @param _displayName 连接器展示名称
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取连接器对应企业
                     * @return Company 连接器对应企业
                     * 
                     */
                    std::string GetCompany() const;

                    /**
                     * 设置连接器对应企业
                     * @param _company 连接器对应企业
                     * 
                     */
                    void SetCompany(const std::string& _company);

                    /**
                     * 判断参数 Company 是否已赋值
                     * @return Company 是否已赋值
                     * 
                     */
                    bool CompanyHasBeenSet() const;

                    /**
                     * 获取连接器对应产品
                     * @return Product 连接器对应产品
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置连接器对应产品
                     * @param _product 连接器对应产品
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
                     * 获取连接器版本
                     * @return ConnectorVersion 连接器版本
                     * 
                     */
                    std::string GetConnectorVersion() const;

                    /**
                     * 设置连接器版本
                     * @param _connectorVersion 连接器版本
                     * 
                     */
                    void SetConnectorVersion(const std::string& _connectorVersion);

                    /**
                     * 判断参数 ConnectorVersion 是否已赋值
                     * @return ConnectorVersion 是否已赋值
                     * 
                     */
                    bool ConnectorVersionHasBeenSet() const;

                    /**
                     * 获取连接器创建时间
                     * @return CreateTime 连接器创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置连接器创建时间
                     * @param _createTime 连接器创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 连接器名称
                     */
                    std::string m_connectorName;
                    bool m_connectorNameHasBeenSet;

                    /**
                     * 连接器展示名称
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 连接器对应企业
                     */
                    std::string m_company;
                    bool m_companyHasBeenSet;

                    /**
                     * 连接器对应产品
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 连接器版本
                     */
                    std::string m_connectorVersion;
                    bool m_connectorVersionHasBeenSet;

                    /**
                     * 连接器创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20200715_MODEL_EISCONNECTORSUMMARY_H_
