/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PRIVATECABINDPRODUCTINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PRIVATECABINDPRODUCTINFO_H_

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
                * 子产品信息
                */
                class PrivateCABindProductInfo : public AbstractModel
                {
                public:
                    PrivateCABindProductInfo();
                    ~PrivateCABindProductInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>产品ID</p>
                     * @return ProductId <p>产品ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品ID</p>
                     * @param _productId <p>产品ID</p>
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
                     * 获取<p>产品名</p>
                     * @return ProductName <p>产品名</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>产品名</p>
                     * @param _productName <p>产品名</p>
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
                     * 获取<p>产品创建时间</p><p>单位：秒</p>
                     * @return CreateTime <p>产品创建时间</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>产品创建时间</p><p>单位：秒</p>
                     * @param _createTime <p>产品创建时间</p><p>单位：秒</p>
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
                     * <p>产品ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>产品名</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>产品创建时间</p><p>单位：秒</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PRIVATECABINDPRODUCTINFO_H_
