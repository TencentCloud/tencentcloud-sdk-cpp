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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBECUSTOMIMAGESREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBECUSTOMIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeCustomImages请求参数结构体
                */
                class DescribeCustomImagesRequest : public AbstractModel
                {
                public:
                    DescribeCustomImagesRequest();
                    ~DescribeCustomImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取数量限制
                     * @return Limit 数量限制
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置数量限制
                     * @param _limit 数量限制
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
                     * 获取排序字段，仅支持CreateTime
                     * @return OrderField 排序字段，仅支持CreateTime
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段，仅支持CreateTime
                     * @param _orderField 排序字段，仅支持CreateTime
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方式 0:递增(默认) 1:递减
                     * @return Order 排序方式 0:递增(默认) 1:递减
                     * 
                     */
                    uint64_t GetOrder() const;

                    /**
                     * 设置排序方式 0:递增(默认) 1:递减
                     * @param _order 排序方式 0:递增(默认) 1:递减
                     * 
                     */
                    void SetOrder(const uint64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取按ImageId查找指定镜像信息，ImageId字段存在时其他字段失效
                     * @return ImageId 按ImageId查找指定镜像信息，ImageId字段存在时其他字段失效
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置按ImageId查找指定镜像信息，ImageId字段存在时其他字段失效
                     * @param _imageId 按ImageId查找指定镜像信息，ImageId字段存在时其他字段失效
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取模糊查询过滤，可以查询镜像ID或镜像名
                     * @return SearchKey 模糊查询过滤，可以查询镜像ID或镜像名
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置模糊查询过滤，可以查询镜像ID或镜像名
                     * @param _searchKey 模糊查询过滤，可以查询镜像ID或镜像名
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取<ul>
镜像状态过滤列表，有效取值为：
<li>1：制作中</li>
<li>2：制作失败</li>
<li>3：正常</li>
<li>4：删除中</li>
</ul>
                     * @return ImageStatus <ul>
镜像状态过滤列表，有效取值为：
<li>1：制作中</li>
<li>2：制作失败</li>
<li>3：正常</li>
<li>4：删除中</li>
</ul>
                     * 
                     */
                    std::vector<uint64_t> GetImageStatus() const;

                    /**
                     * 设置<ul>
镜像状态过滤列表，有效取值为：
<li>1：制作中</li>
<li>2：制作失败</li>
<li>3：正常</li>
<li>4：删除中</li>
</ul>
                     * @param _imageStatus <ul>
镜像状态过滤列表，有效取值为：
<li>1：制作中</li>
<li>2：制作失败</li>
<li>3：正常</li>
<li>4：删除中</li>
</ul>
                     * 
                     */
                    void SetImageStatus(const std::vector<uint64_t>& _imageStatus);

                    /**
                     * 判断参数 ImageStatus 是否已赋值
                     * @return ImageStatus 是否已赋值
                     * 
                     */
                    bool ImageStatusHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数量限制
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段，仅支持CreateTime
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方式 0:递增(默认) 1:递减
                     */
                    uint64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 按ImageId查找指定镜像信息，ImageId字段存在时其他字段失效
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 模糊查询过滤，可以查询镜像ID或镜像名
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * <ul>
镜像状态过滤列表，有效取值为：
<li>1：制作中</li>
<li>2：制作失败</li>
<li>3：正常</li>
<li>4：删除中</li>
</ul>
                     */
                    std::vector<uint64_t> m_imageStatus;
                    bool m_imageStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBECUSTOMIMAGESREQUEST_H_
