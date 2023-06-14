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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_GETDATAHISTORYREQUEST_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_GETDATAHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * GetDataHistory请求参数结构体
                */
                class GetDataHistoryRequest : public AbstractModel
                {
                public:
                    GetDataHistoryRequest();
                    ~GetDataHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品Id
                     * @return ProductId 产品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品Id
                     * @param _productId 产品Id
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
                     * 获取设备名称列表，允许最多一次100台
                     * @return DeviceNames 设备名称列表，允许最多一次100台
                     * 
                     */
                    std::vector<std::string> GetDeviceNames() const;

                    /**
                     * 设置设备名称列表，允许最多一次100台
                     * @param _deviceNames 设备名称列表，允许最多一次100台
                     * 
                     */
                    void SetDeviceNames(const std::vector<std::string>& _deviceNames);

                    /**
                     * 判断参数 DeviceNames 是否已赋值
                     * @return DeviceNames 是否已赋值
                     * 
                     */
                    bool DeviceNamesHasBeenSet() const;

                    /**
                     * 获取查询开始时间
                     * @return StartTime 查询开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间
                     * @param _startTime 查询开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间
                     * @return EndTime 查询结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间
                     * @param _endTime 查询结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取查询数据量
                     * @return Size 查询数据量
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置查询数据量
                     * @param _size 查询数据量
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取时间排序（desc/asc）
                     * @return Order 时间排序（desc/asc）
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置时间排序（desc/asc）
                     * @param _order 时间排序（desc/asc）
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取查询游标
                     * @return ScrollId 查询游标
                     * 
                     */
                    std::string GetScrollId() const;

                    /**
                     * 设置查询游标
                     * @param _scrollId 查询游标
                     * 
                     */
                    void SetScrollId(const std::string& _scrollId);

                    /**
                     * 判断参数 ScrollId 是否已赋值
                     * @return ScrollId 是否已赋值
                     * 
                     */
                    bool ScrollIdHasBeenSet() const;

                private:

                    /**
                     * 产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称列表，允许最多一次100台
                     */
                    std::vector<std::string> m_deviceNames;
                    bool m_deviceNamesHasBeenSet;

                    /**
                     * 查询开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询数据量
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 时间排序（desc/asc）
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 查询游标
                     */
                    std::string m_scrollId;
                    bool m_scrollIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_GETDATAHISTORYREQUEST_H_
