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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEPRODUCTSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEPRODUCTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * DescribeProducts请求参数结构体
                */
                class DescribeProductsRequest : public AbstractModel
                {
                public:
                    DescribeProductsRequest();
                    ~DescribeProductsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页大小，当前页面中显示的最大数量，值范围 1-100
                     * @return Limit 分页大小，当前页面中显示的最大数量，值范围 1-100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小，当前页面中显示的最大数量，值范围 1-100
                     * @param _limit 分页大小，当前页面中显示的最大数量，值范围 1-100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移，Offset从0开始
                     * @return Offset 分页偏移，Offset从0开始
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移，Offset从0开始
                     * @param _offset 分页偏移，Offset从0开始
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取产器型号(APP产品,为APP包名)
                     * @return ProductModel 产器型号(APP产品,为APP包名)
                     * 
                     */
                    std::string GetProductModel() const;

                    /**
                     * 设置产器型号(APP产品,为APP包名)
                     * @param _productModel 产器型号(APP产品,为APP包名)
                     * 
                     */
                    void SetProductModel(const std::string& _productModel);

                    /**
                     * 判断参数 ProductModel 是否已赋值
                     * @return ProductModel 是否已赋值
                     * 
                     */
                    bool ProductModelHasBeenSet() const;

                    /**
                     * 获取开始时间 ，UNIX 时间戳，单位秒
                     * @return StartTime 开始时间 ，UNIX 时间戳，单位秒
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间 ，UNIX 时间戳，单位秒
                     * @param _startTime 开始时间 ，UNIX 时间戳，单位秒
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间 ，UNIX 时间戳，单位秒
                     * @return EndTime 结束时间 ，UNIX 时间戳，单位秒
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间 ，UNIX 时间戳，单位秒
                     * @param _endTime 结束时间 ，UNIX 时间戳，单位秒
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 分页大小，当前页面中显示的最大数量，值范围 1-100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移，Offset从0开始
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 产器型号(APP产品,为APP包名)
                     */
                    std::string m_productModel;
                    bool m_productModelHasBeenSet;

                    /**
                     * 开始时间 ，UNIX 时间戳，单位秒
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间 ，UNIX 时间戳，单位秒
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEPRODUCTSREQUEST_H_
