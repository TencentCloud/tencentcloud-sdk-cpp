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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESTATUSRES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESTATUSRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/DeviceStatusInfo.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 设备状态获取接口结果
                */
                class DeviceStatusRes : public AbstractModel
                {
                public:
                    DeviceStatusRes();
                    ~DeviceStatusRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第几页
                     * @return PageNumber 第几页
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置第几页
                     * @param _pageNumber 第几页
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页条数
                     * @return PageSize 每页条数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页条数
                     * @param _pageSize 每页条数
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取总页数
                     * @return TotalPage 总页数
                     * 
                     */
                    int64_t GetTotalPage() const;

                    /**
                     * 设置总页数
                     * @param _totalPage 总页数
                     * 
                     */
                    void SetTotalPage(const int64_t& _totalPage);

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                    /**
                     * 获取总条数
                     * @return TotalRow 总条数
                     * 
                     */
                    int64_t GetTotalRow() const;

                    /**
                     * 设置总条数
                     * @param _totalRow 总条数
                     * 
                     */
                    void SetTotalRow(const int64_t& _totalRow);

                    /**
                     * 判断参数 TotalRow 是否已赋值
                     * @return TotalRow 是否已赋值
                     * 
                     */
                    bool TotalRowHasBeenSet() const;

                    /**
                     * 获取设备状态信息列表
                     * @return DeviceStatusSet 设备状态信息列表
                     * 
                     */
                    std::vector<DeviceStatusInfo> GetDeviceStatusSet() const;

                    /**
                     * 设置设备状态信息列表
                     * @param _deviceStatusSet 设备状态信息列表
                     * 
                     */
                    void SetDeviceStatusSet(const std::vector<DeviceStatusInfo>& _deviceStatusSet);

                    /**
                     * 判断参数 DeviceStatusSet 是否已赋值
                     * @return DeviceStatusSet 是否已赋值
                     * 
                     */
                    bool DeviceStatusSetHasBeenSet() const;

                private:

                    /**
                     * 第几页
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页条数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 总页数
                     */
                    int64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * 总条数
                     */
                    int64_t m_totalRow;
                    bool m_totalRowHasBeenSet;

                    /**
                     * 设备状态信息列表
                     */
                    std::vector<DeviceStatusInfo> m_deviceStatusSet;
                    bool m_deviceStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESTATUSRES_H_
