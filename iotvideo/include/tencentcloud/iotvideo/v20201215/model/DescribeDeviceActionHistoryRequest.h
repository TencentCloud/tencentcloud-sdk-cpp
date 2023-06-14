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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEDEVICEACTIONHISTORYREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEDEVICEACTIONHISTORYREQUEST_H_

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
                * DescribeDeviceActionHistory请求参数结构体
                */
                class DescribeDeviceActionHistoryRequest : public AbstractModel
                {
                public:
                    DescribeDeviceActionHistoryRequest();
                    ~DescribeDeviceActionHistoryRequest() = default;
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
                     * 获取开始范围的 unix 毫秒时间戳
                     * @return MinTime 开始范围的 unix 毫秒时间戳
                     * 
                     */
                    uint64_t GetMinTime() const;

                    /**
                     * 设置开始范围的 unix 毫秒时间戳
                     * @param _minTime 开始范围的 unix 毫秒时间戳
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
                     * 获取结束范围的 unix 毫秒时间戳
                     * @return MaxTime 结束范围的 unix 毫秒时间戳
                     * 
                     */
                    uint64_t GetMaxTime() const;

                    /**
                     * 设置结束范围的 unix 毫秒时间戳
                     * @param _maxTime 结束范围的 unix 毫秒时间戳
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
                     * 获取动作Id
                     * @return ActionId 动作Id
                     * 
                     */
                    std::string GetActionId() const;

                    /**
                     * 设置动作Id
                     * @param _actionId 动作Id
                     * 
                     */
                    void SetActionId(const std::string& _actionId);

                    /**
                     * 判断参数 ActionId 是否已赋值
                     * @return ActionId 是否已赋值
                     * 
                     */
                    bool ActionIdHasBeenSet() const;

                    /**
                     * 获取查询条数 默认为0 最大不超过500
                     * @return Limit 查询条数 默认为0 最大不超过500
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询条数 默认为0 最大不超过500
                     * @param _limit 查询条数 默认为0 最大不超过500
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
                     * 获取游标，标识查询位置。
                     * @return Context 游标，标识查询位置。
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置游标，标识查询位置。
                     * @param _context 游标，标识查询位置。
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
                     * 产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 开始范围的 unix 毫秒时间戳
                     */
                    uint64_t m_minTime;
                    bool m_minTimeHasBeenSet;

                    /**
                     * 结束范围的 unix 毫秒时间戳
                     */
                    uint64_t m_maxTime;
                    bool m_maxTimeHasBeenSet;

                    /**
                     * 动作Id
                     */
                    std::string m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * 查询条数 默认为0 最大不超过500
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 游标，标识查询位置。
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEDEVICEACTIONHISTORYREQUEST_H_
