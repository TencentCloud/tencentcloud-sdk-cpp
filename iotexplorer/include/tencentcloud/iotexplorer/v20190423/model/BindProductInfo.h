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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BINDPRODUCTINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BINDPRODUCTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 绑定、未绑定产品详细信息
                */
                class BindProductInfo : public AbstractModel
                {
                public:
                    BindProductInfo();
                    ~BindProductInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品ID。
                     * @return ProductId 产品ID。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID。
                     * @param _productId 产品ID。
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
                     * 获取产品名称。
                     * @return ProductName 产品名称。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称。
                     * @param _productName 产品名称。
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
                     * 获取产品所属项目ID。
                     * @return ProjectId 产品所属项目ID。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置产品所属项目ID。
                     * @param _projectId 产品所属项目ID。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取物模型类型。
                     * @return DataProtocol 物模型类型。
                     * 
                     */
                    int64_t GetDataProtocol() const;

                    /**
                     * 设置物模型类型。
                     * @param _dataProtocol 物模型类型。
                     * 
                     */
                    void SetDataProtocol(const int64_t& _dataProtocol);

                    /**
                     * 判断参数 DataProtocol 是否已赋值
                     * @return DataProtocol 是否已赋值
                     * 
                     */
                    bool DataProtocolHasBeenSet() const;

                    /**
                     * 获取产品分组模板ID
                     * @return CategoryId 产品分组模板ID
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置产品分组模板ID
                     * @param _categoryId 产品分组模板ID
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取产品类型
                     * @return ProductType 产品类型
                     * 
                     */
                    int64_t GetProductType() const;

                    /**
                     * 设置产品类型
                     * @param _productType 产品类型
                     * 
                     */
                    void SetProductType(const int64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取连接类型
                     * @return NetType 连接类型
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置连接类型
                     * @param _netType 连接类型
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return DevStatus 状态
                     * 
                     */
                    std::string GetDevStatus() const;

                    /**
                     * 设置状态
                     * @param _devStatus 状态
                     * 
                     */
                    void SetDevStatus(const std::string& _devStatus);

                    /**
                     * 判断参数 DevStatus 是否已赋值
                     * @return DevStatus 是否已赋值
                     * 
                     */
                    bool DevStatusHasBeenSet() const;

                    /**
                     * 获取产品拥有者名称
                     * @return ProductOwnerName 产品拥有者名称
                     * 
                     */
                    std::string GetProductOwnerName() const;

                    /**
                     * 设置产品拥有者名称
                     * @param _productOwnerName 产品拥有者名称
                     * 
                     */
                    void SetProductOwnerName(const std::string& _productOwnerName);

                    /**
                     * 判断参数 ProductOwnerName 是否已赋值
                     * @return ProductOwnerName 是否已赋值
                     * 
                     */
                    bool ProductOwnerNameHasBeenSet() const;

                private:

                    /**
                     * 产品ID。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品名称。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品所属项目ID。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 物模型类型。
                     */
                    int64_t m_dataProtocol;
                    bool m_dataProtocolHasBeenSet;

                    /**
                     * 产品分组模板ID
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 产品类型
                     */
                    int64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * 连接类型
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_devStatus;
                    bool m_devStatusHasBeenSet;

                    /**
                     * 产品拥有者名称
                     */
                    std::string m_productOwnerName;
                    bool m_productOwnerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BINDPRODUCTINFO_H_
