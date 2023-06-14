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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEFIRMWARETASKSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEFIRMWARETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20201215/model/SearchKeyword.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * DescribeFirmwareTasks请求参数结构体
                */
                class DescribeFirmwareTasksRequest : public AbstractModel
                {
                public:
                    DescribeFirmwareTasksRequest();
                    ~DescribeFirmwareTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductID 产品ID
                     * 
                     */
                    std::string GetProductID() const;

                    /**
                     * 设置产品ID
                     * @param _productID 产品ID
                     * 
                     */
                    void SetProductID(const std::string& _productID);

                    /**
                     * 判断参数 ProductID 是否已赋值
                     * @return ProductID 是否已赋值
                     * 
                     */
                    bool ProductIDHasBeenSet() const;

                    /**
                     * 获取固件版本号
                     * @return FirmwareVersion 固件版本号
                     * 
                     */
                    std::string GetFirmwareVersion() const;

                    /**
                     * 设置固件版本号
                     * @param _firmwareVersion 固件版本号
                     * 
                     */
                    void SetFirmwareVersion(const std::string& _firmwareVersion);

                    /**
                     * 判断参数 FirmwareVersion 是否已赋值
                     * @return FirmwareVersion 是否已赋值
                     * 
                     */
                    bool FirmwareVersionHasBeenSet() const;

                    /**
                     * 获取查询偏移量
                     * @return Offset 查询偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询偏移量
                     * @param _offset 查询偏移量
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
                     * 获取返回查询结果条数
                     * @return Limit 返回查询结果条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回查询结果条数
                     * @param _limit 返回查询结果条数
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
                     * 获取搜索过滤条件
                     * @return Filters 搜索过滤条件
                     * 
                     */
                    std::vector<SearchKeyword> GetFilters() const;

                    /**
                     * 设置搜索过滤条件
                     * @param _filters 搜索过滤条件
                     * 
                     */
                    void SetFilters(const std::vector<SearchKeyword>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productID;
                    bool m_productIDHasBeenSet;

                    /**
                     * 固件版本号
                     */
                    std::string m_firmwareVersion;
                    bool m_firmwareVersionHasBeenSet;

                    /**
                     * 查询偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回查询结果条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索过滤条件
                     */
                    std::vector<SearchKeyword> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEFIRMWARETASKSREQUEST_H_
