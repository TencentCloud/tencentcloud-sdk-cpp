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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICEPOSITIONLISTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICEPOSITIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDevicePositionList请求参数结构体
                */
                class DescribeDevicePositionListRequest : public AbstractModel
                {
                public:
                    DescribeDevicePositionListRequest();
                    ~DescribeDevicePositionListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品标识列表
                     * @return ProductIdList 产品标识列表
                     * 
                     */
                    std::vector<std::string> GetProductIdList() const;

                    /**
                     * 设置产品标识列表
                     * @param _productIdList 产品标识列表
                     * 
                     */
                    void SetProductIdList(const std::vector<std::string>& _productIdList);

                    /**
                     * 判断参数 ProductIdList 是否已赋值
                     * @return ProductIdList 是否已赋值
                     * 
                     */
                    bool ProductIdListHasBeenSet() const;

                    /**
                     * 获取坐标类型
                     * @return CoordinateType 坐标类型
                     * 
                     */
                    int64_t GetCoordinateType() const;

                    /**
                     * 设置坐标类型
                     * @param _coordinateType 坐标类型
                     * 
                     */
                    void SetCoordinateType(const int64_t& _coordinateType);

                    /**
                     * 判断参数 CoordinateType 是否已赋值
                     * @return CoordinateType 是否已赋值
                     * 
                     */
                    bool CoordinateTypeHasBeenSet() const;

                    /**
                     * 获取分页偏移
                     * @return Offset 分页偏移
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移
                     * @param _offset 分页偏移
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
                     * 获取分页的大小
                     * @return Limit 分页的大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页的大小
                     * @param _limit 分页的大小
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 产品标识列表
                     */
                    std::vector<std::string> m_productIdList;
                    bool m_productIdListHasBeenSet;

                    /**
                     * 坐标类型
                     */
                    int64_t m_coordinateType;
                    bool m_coordinateTypeHasBeenSet;

                    /**
                     * 分页偏移
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页的大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICEPOSITIONLISTREQUEST_H_
