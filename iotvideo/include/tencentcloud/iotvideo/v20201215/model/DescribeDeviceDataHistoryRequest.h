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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEDEVICEDATAHISTORYREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEDEVICEDATAHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * DescribeDeviceDataHistory请求参数结构体
                */
                class DescribeDeviceDataHistoryRequest : public AbstractModel
                {
                public:
                    DescribeDeviceDataHistoryRequest();
                    ~DescribeDeviceDataHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取区间开始时间（Unix 时间戳，毫秒级）
                     * @return MinTime 区间开始时间（Unix 时间戳，毫秒级）
                     * 
                     */
                    uint64_t GetMinTime() const;

                    /**
                     * 设置区间开始时间（Unix 时间戳，毫秒级）
                     * @param _minTime 区间开始时间（Unix 时间戳，毫秒级）
                     * 
                     */
                    void SetMinTime(const uint64_t& _minTime);

                    /**
                     * 判断参数 MinTime 是否已赋值
                     * @return MinTime 是否已赋值
                     * 
                     */
                    bool MinTimeHasBeenSet() const;

                    /**
                     * 获取区间结束时间（Unix 时间戳，毫秒级）
                     * @return MaxTime 区间结束时间（Unix 时间戳，毫秒级）
                     * 
                     */
                    uint64_t GetMaxTime() const;

                    /**
                     * 设置区间结束时间（Unix 时间戳，毫秒级）
                     * @param _maxTime 区间结束时间（Unix 时间戳，毫秒级）
                     * 
                     */
                    void SetMaxTime(const uint64_t& _maxTime);

                    /**
                     * 判断参数 MaxTime 是否已赋值
                     * @return MaxTime 是否已赋值
                     * 
                     */
                    bool MaxTimeHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
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
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取属性字段名称，对应数据模板中功能属性的标识符
                     * @return FieldName 属性字段名称，对应数据模板中功能属性的标识符
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置属性字段名称，对应数据模板中功能属性的标识符
                     * @param _fieldName 属性字段名称，对应数据模板中功能属性的标识符
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取返回条数
                     * @return Limit 返回条数
                     * 
                     */
                    std::vector<uint64_t> GetLimit() const;

                    /**
                     * 设置返回条数
                     * @param _limit 返回条数
                     * 
                     */
                    void SetLimit(const std::vector<uint64_t>& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取检索上下文
                     * @return Context 检索上下文
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置检索上下文
                     * @param _context 检索上下文
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * 区间开始时间（Unix 时间戳，毫秒级）
                     */
                    uint64_t m_minTime;
                    bool m_minTimeHasBeenSet;

                    /**
                     * 区间结束时间（Unix 时间戳，毫秒级）
                     */
                    uint64_t m_maxTime;
                    bool m_maxTimeHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 属性字段名称，对应数据模板中功能属性的标识符
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * 返回条数
                     */
                    std::vector<uint64_t> m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 检索上下文
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEDEVICEDATAHISTORYREQUEST_H_
