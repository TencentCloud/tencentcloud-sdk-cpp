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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_COSCAPACITY_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_COSCAPACITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * CDC集群内cos的容量信息
                */
                class CosCapacity : public AbstractModel
                {
                public:
                    CosCapacity();
                    ~CosCapacity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取已购cos的总容量大小，单位GB
                     * @return TotalCapacity 已购cos的总容量大小，单位GB
                     * 
                     */
                    double GetTotalCapacity() const;

                    /**
                     * 设置已购cos的总容量大小，单位GB
                     * @param _totalCapacity 已购cos的总容量大小，单位GB
                     * 
                     */
                    void SetTotalCapacity(const double& _totalCapacity);

                    /**
                     * 判断参数 TotalCapacity 是否已赋值
                     * @return TotalCapacity 是否已赋值
                     * 
                     */
                    bool TotalCapacityHasBeenSet() const;

                    /**
                     * 获取剩余可用cos的容量大小，单位GB
                     * @return TotalFreeCapacity 剩余可用cos的容量大小，单位GB
                     * 
                     */
                    double GetTotalFreeCapacity() const;

                    /**
                     * 设置剩余可用cos的容量大小，单位GB
                     * @param _totalFreeCapacity 剩余可用cos的容量大小，单位GB
                     * 
                     */
                    void SetTotalFreeCapacity(const double& _totalFreeCapacity);

                    /**
                     * 判断参数 TotalFreeCapacity 是否已赋值
                     * @return TotalFreeCapacity 是否已赋值
                     * 
                     */
                    bool TotalFreeCapacityHasBeenSet() const;

                    /**
                     * 获取已用cos的容量大小，单位GB
                     * @return TotalUsedCapacity 已用cos的容量大小，单位GB
                     * 
                     */
                    double GetTotalUsedCapacity() const;

                    /**
                     * 设置已用cos的容量大小，单位GB
                     * @param _totalUsedCapacity 已用cos的容量大小，单位GB
                     * 
                     */
                    void SetTotalUsedCapacity(const double& _totalUsedCapacity);

                    /**
                     * 判断参数 TotalUsedCapacity 是否已赋值
                     * @return TotalUsedCapacity 是否已赋值
                     * 
                     */
                    bool TotalUsedCapacityHasBeenSet() const;

                private:

                    /**
                     * 已购cos的总容量大小，单位GB
                     */
                    double m_totalCapacity;
                    bool m_totalCapacityHasBeenSet;

                    /**
                     * 剩余可用cos的容量大小，单位GB
                     */
                    double m_totalFreeCapacity;
                    bool m_totalFreeCapacityHasBeenSet;

                    /**
                     * 已用cos的容量大小，单位GB
                     */
                    double m_totalUsedCapacity;
                    bool m_totalUsedCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_COSCAPACITY_H_
