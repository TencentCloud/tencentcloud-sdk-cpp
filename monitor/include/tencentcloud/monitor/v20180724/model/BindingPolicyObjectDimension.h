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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYOBJECTDIMENSION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYOBJECTDIMENSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 策略绑定实例维度信息
                */
                class BindingPolicyObjectDimension : public AbstractModel
                {
                public:
                    BindingPolicyObjectDimension();
                    ~BindingPolicyObjectDimension() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域名
                     * @return Region 地域名
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域名
                     * @param _region 地域名
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取实例的维度信息，格式为
{"unInstanceId":"ins-00jvv9mo"}。不同云产品的维度信息不同，详见
[指标维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)
                     * @return Dimensions 实例的维度信息，格式为
{"unInstanceId":"ins-00jvv9mo"}。不同云产品的维度信息不同，详见
[指标维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置实例的维度信息，格式为
{"unInstanceId":"ins-00jvv9mo"}。不同云产品的维度信息不同，详见
[指标维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)
                     * @param _dimensions 实例的维度信息，格式为
{"unInstanceId":"ins-00jvv9mo"}。不同云产品的维度信息不同，详见
[指标维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)
                     * 
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取事件维度信息
                     * @return EventDimensions 事件维度信息
                     * 
                     */
                    std::string GetEventDimensions() const;

                    /**
                     * 设置事件维度信息
                     * @param _eventDimensions 事件维度信息
                     * 
                     */
                    void SetEventDimensions(const std::string& _eventDimensions);

                    /**
                     * 判断参数 EventDimensions 是否已赋值
                     * @return EventDimensions 是否已赋值
                     * 
                     */
                    bool EventDimensionsHasBeenSet() const;

                private:

                    /**
                     * 地域名
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 实例的维度信息，格式为
{"unInstanceId":"ins-00jvv9mo"}。不同云产品的维度信息不同，详见
[指标维度信息Dimensions列表](https://cloud.tencent.com/document/product/248/50397)
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 事件维度信息
                     */
                    std::string m_eventDimensions;
                    bool m_eventDimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYOBJECTDIMENSION_H_
