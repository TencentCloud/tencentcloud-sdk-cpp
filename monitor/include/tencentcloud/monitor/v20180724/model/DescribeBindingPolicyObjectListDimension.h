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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTDIMENSION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTDIMENSION_H_

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
                * DescribeBindingPolicyObjectList接口的Dimension
                */
                class DescribeBindingPolicyObjectListDimension : public AbstractModel
                {
                public:
                    DescribeBindingPolicyObjectListDimension();
                    ~DescribeBindingPolicyObjectListDimension() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>地域id</p>
                     * @return RegionId <p>地域id</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>地域id</p>
                     * @param _regionId <p>地域id</p>
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
                     * 获取<p>地域简称</p>
                     * @return Region <p>地域简称</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域简称</p>
                     * @param _region <p>地域简称</p>
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
                     * 获取<p>维度组合json字符串</p>
                     * @return Dimensions <p>维度组合json字符串</p>
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置<p>维度组合json字符串</p>
                     * @param _dimensions <p>维度组合json字符串</p>
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
                     * 获取<p>事件维度组合json字符串</p>
                     * @return EventDimensions <p>事件维度组合json字符串</p>
                     * 
                     */
                    std::string GetEventDimensions() const;

                    /**
                     * 设置<p>事件维度组合json字符串</p>
                     * @param _eventDimensions <p>事件维度组合json字符串</p>
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
                     * <p>地域id</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>地域简称</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>维度组合json字符串</p>
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * <p>事件维度组合json字符串</p>
                     */
                    std::string m_eventDimensions;
                    bool m_eventDimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTDIMENSION_H_
