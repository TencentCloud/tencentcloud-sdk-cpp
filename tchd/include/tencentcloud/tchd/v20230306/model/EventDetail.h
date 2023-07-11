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

#ifndef TENCENTCLOUD_TCHD_V20230306_MODEL_EVENTDETAIL_H_
#define TENCENTCLOUD_TCHD_V20230306_MODEL_EVENTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tchd
    {
        namespace V20230306
        {
            namespace Model
            {
                /**
                * 事件详情信息，包含：产品名称、地域名称、事件开始时间、事件结束时间、事件当前状态；
                */
                class EventDetail : public AbstractModel
                {
                public:
                    EventDetail();
                    ~EventDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取地域ID，非区域性地域返回non-regional
                     * @return RegionId 地域ID，非区域性地域返回non-regional
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置地域ID，非区域性地域返回non-regional
                     * @param _regionId 地域ID，非区域性地域返回non-regional
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取地域名称
                     * @return RegionName 地域名称
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称
                     * @param _regionName 地域名称
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取事件开始时间
                     * @return StartTime 事件开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置事件开始时间
                     * @param _startTime 事件开始时间
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
                     * 获取事件结束时间，当事件正在发生还未结束时，结束时间返回空
                     * @return EndTime 事件结束时间，当事件正在发生还未结束时，结束时间返回空
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置事件结束时间，当事件正在发生还未结束时，结束时间返回空
                     * @param _endTime 事件结束时间，当事件正在发生还未结束时，结束时间返回空
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
                     * 获取事件当前状态：提示、异常、正常
                     * @return CurrentStatus 事件当前状态：提示、异常、正常
                     * 
                     */
                    std::string GetCurrentStatus() const;

                    /**
                     * 设置事件当前状态：提示、异常、正常
                     * @param _currentStatus 事件当前状态：提示、异常、正常
                     * 
                     */
                    void SetCurrentStatus(const std::string& _currentStatus);

                    /**
                     * 判断参数 CurrentStatus 是否已赋值
                     * @return CurrentStatus 是否已赋值
                     * 
                     */
                    bool CurrentStatusHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 地域ID，非区域性地域返回non-regional
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 事件开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 事件结束时间，当事件正在发生还未结束时，结束时间返回空
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 事件当前状态：提示、异常、正常
                     */
                    std::string m_currentStatus;
                    bool m_currentStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCHD_V20230306_MODEL_EVENTDETAIL_H_
