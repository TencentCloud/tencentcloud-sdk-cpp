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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEVIRTUALDEVICESPAGERSP_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEVIRTUALDEVICESPAGERSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/Paging.h>
#include <tencentcloud/ioa/v20220601/model/DeviceDetail.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 返回的具体Data数据
                */
                class DescribeVirtualDevicesPageRsp : public AbstractModel
                {
                public:
                    DescribeVirtualDevicesPageRsp();
                    ~DescribeVirtualDevicesPageRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据分页信息
                     * @return Paging 数据分页信息
                     * 
                     */
                    Paging GetPaging() const;

                    /**
                     * 设置数据分页信息
                     * @param _paging 数据分页信息
                     * 
                     */
                    void SetPaging(const Paging& _paging);

                    /**
                     * 判断参数 Paging 是否已赋值
                     * @return Paging 是否已赋值
                     * 
                     */
                    bool PagingHasBeenSet() const;

                    /**
                     * 获取设备列表
                     * @return Items 设备列表
                     * 
                     */
                    std::vector<DeviceDetail> GetItems() const;

                    /**
                     * 设置设备列表
                     * @param _items 设备列表
                     * 
                     */
                    void SetItems(const std::vector<DeviceDetail>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 数据分页信息
                     */
                    Paging m_paging;
                    bool m_pagingHasBeenSet;

                    /**
                     * 设备列表
                     */
                    std::vector<DeviceDetail> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEVIRTUALDEVICESPAGERSP_H_
