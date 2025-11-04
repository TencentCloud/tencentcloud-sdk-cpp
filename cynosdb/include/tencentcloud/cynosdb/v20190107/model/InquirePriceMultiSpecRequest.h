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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMULTISPECREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMULTISPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/GoodsSpec.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * InquirePriceMultiSpec请求参数结构体
                */
                class InquirePriceMultiSpecRequest : public AbstractModel
                {
                public:
                    InquirePriceMultiSpecRequest();
                    ~InquirePriceMultiSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区,每个地域提供最佳实践
                     * @return Zone 可用区,每个地域提供最佳实践
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区,每个地域提供最佳实践
                     * @param _zone 可用区,每个地域提供最佳实践
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS
                     * @return InstancePayMode 实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS
                     * 
                     */
                    std::string GetInstancePayMode() const;

                    /**
                     * 设置实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS
                     * @param _instancePayMode 实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS
                     * 
                     */
                    void SetInstancePayMode(const std::string& _instancePayMode);

                    /**
                     * 判断参数 InstancePayMode 是否已赋值
                     * @return InstancePayMode 是否已赋值
                     * 
                     */
                    bool InstancePayModeHasBeenSet() const;

                    /**
                     * 获取存储购买类型，可选值为：PREPAID, POSTPAID
                     * @return StoragePayMode 存储购买类型，可选值为：PREPAID, POSTPAID
                     * 
                     */
                    std::string GetStoragePayMode() const;

                    /**
                     * 设置存储购买类型，可选值为：PREPAID, POSTPAID
                     * @param _storagePayMode 存储购买类型，可选值为：PREPAID, POSTPAID
                     * 
                     */
                    void SetStoragePayMode(const std::string& _storagePayMode);

                    /**
                     * 判断参数 StoragePayMode 是否已赋值
                     * @return StoragePayMode 是否已赋值
                     * 
                     */
                    bool StoragePayModeHasBeenSet() const;

                    /**
                     * 获取商品规格
                     * @return GoodsSpecs 商品规格
                     * 
                     */
                    std::vector<GoodsSpec> GetGoodsSpecs() const;

                    /**
                     * 设置商品规格
                     * @param _goodsSpecs 商品规格
                     * 
                     */
                    void SetGoodsSpecs(const std::vector<GoodsSpec>& _goodsSpecs);

                    /**
                     * 判断参数 GoodsSpecs 是否已赋值
                     * @return GoodsSpecs 是否已赋值
                     * 
                     */
                    bool GoodsSpecsHasBeenSet() const;

                private:

                    /**
                     * 可用区,每个地域提供最佳实践
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS
                     */
                    std::string m_instancePayMode;
                    bool m_instancePayModeHasBeenSet;

                    /**
                     * 存储购买类型，可选值为：PREPAID, POSTPAID
                     */
                    std::string m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * 商品规格
                     */
                    std::vector<GoodsSpec> m_goodsSpecs;
                    bool m_goodsSpecsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMULTISPECREQUEST_H_
