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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEIOTDEVICESREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEIOTDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeIotDevices请求参数结构体
                */
                class DescribeIotDevicesRequest : public AbstractModel
                {
                public:
                    DescribeIotDevicesRequest();
                    ~DescribeIotDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页偏移
                     * @return Offset 页偏移
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页偏移
                     * @param _offset 页偏移
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页数量
                     * @return Limit 每页数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量
                     * @param _limit 每页数量
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取产品id
                     * @return ProductId 产品id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品id
                     * @param _productId 产品id
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
                     * 获取设备名称模糊查找
                     * @return NamePattern 设备名称模糊查找
                     * 
                     */
                    std::string GetNamePattern() const;

                    /**
                     * 设置设备名称模糊查找
                     * @param _namePattern 设备名称模糊查找
                     * 
                     */
                    void SetNamePattern(const std::string& _namePattern);

                    /**
                     * 判断参数 NamePattern 是否已赋值
                     * @return NamePattern 是否已赋值
                     * 
                     */
                    bool NamePatternHasBeenSet() const;

                    /**
                     * 获取版本列表
                     * @return Versions 版本列表
                     * 
                     */
                    std::vector<std::string> GetVersions() const;

                    /**
                     * 设置版本列表
                     * @param _versions 版本列表
                     * 
                     */
                    void SetVersions(const std::vector<std::string>& _versions);

                    /**
                     * 判断参数 Versions 是否已赋值
                     * @return Versions 是否已赋值
                     * 
                     */
                    bool VersionsHasBeenSet() const;

                    /**
                     * 获取ASC 或 DESC
                     * @return Order ASC 或 DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置ASC 或 DESC
                     * @param _order ASC 或 DESC
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 页偏移
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 产品id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称模糊查找
                     */
                    std::string m_namePattern;
                    bool m_namePatternHasBeenSet;

                    /**
                     * 版本列表
                     */
                    std::vector<std::string> m_versions;
                    bool m_versionsHasBeenSet;

                    /**
                     * ASC 或 DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEIOTDEVICESREQUEST_H_
