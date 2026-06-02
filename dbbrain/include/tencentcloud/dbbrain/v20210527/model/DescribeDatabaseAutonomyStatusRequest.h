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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDATABASEAUTONOMYSTATUSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDATABASEAUTONOMYSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDatabaseAutonomyStatus请求参数结构体
                */
                class DescribeDatabaseAutonomyStatusRequest : public AbstractModel
                {
                public:
                    DescribeDatabaseAutonomyStatusRequest();
                    ~DescribeDatabaseAutonomyStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID。</p>
                     * @return InstanceId <p>实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。</p>
                     * @param _instanceId <p>实例 ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>服务产品类型。取值：mongodb（云数据库 MongoDB）。</p>
                     * @return Product <p>服务产品类型。取值：mongodb（云数据库 MongoDB）。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型。取值：mongodb（云数据库 MongoDB）。</p>
                     * @param _product <p>服务产品类型。取值：mongodb（云数据库 MongoDB）。</p>
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
                     * 获取<p>自治功能类型。取值：AutoIndexAdvice（索引推荐）。</p>
                     * @return Type <p>自治功能类型。取值：AutoIndexAdvice（索引推荐）。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>自治功能类型。取值：AutoIndexAdvice（索引推荐）。</p>
                     * @param _type <p>自治功能类型。取值：AutoIndexAdvice（索引推荐）。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>服务产品类型。取值：mongodb（云数据库 MongoDB）。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>自治功能类型。取值：AutoIndexAdvice（索引推荐）。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDATABASEAUTONOMYSTATUSREQUEST_H_
