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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHPRODUCTIONINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHPRODUCTIONINFO_H_

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
                * 获取返回列表的详情。
                */
                class BatchProductionInfo : public AbstractModel
                {
                public:
                    BatchProductionInfo();
                    ~BatchProductionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取量产ID
                     * @return BatchProductionId 量产ID
                     * 
                     */
                    std::string GetBatchProductionId() const;

                    /**
                     * 设置量产ID
                     * @param _batchProductionId 量产ID
                     * 
                     */
                    void SetBatchProductionId(const std::string& _batchProductionId);

                    /**
                     * 判断参数 BatchProductionId 是否已赋值
                     * @return BatchProductionId 是否已赋值
                     * 
                     */
                    bool BatchProductionIdHasBeenSet() const;

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
                     * 获取烧录方式
                     * @return BurnMethod 烧录方式
                     * 
                     */
                    int64_t GetBurnMethod() const;

                    /**
                     * 设置烧录方式
                     * @param _burnMethod 烧录方式
                     * 
                     */
                    void SetBurnMethod(const int64_t& _burnMethod);

                    /**
                     * 判断参数 BurnMethod 是否已赋值
                     * @return BurnMethod 是否已赋值
                     * 
                     */
                    bool BurnMethodHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

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

                private:

                    /**
                     * 量产ID
                     */
                    std::string m_batchProductionId;
                    bool m_batchProductionIdHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 烧录方式
                     */
                    int64_t m_burnMethod;
                    bool m_burnMethodHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHPRODUCTIONINFO_H_
