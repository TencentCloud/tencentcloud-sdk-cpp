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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETETWESEETASKSBYCONDITIONREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETETWESEETASKSBYCONDITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeDeleteTaskCondition.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DeleteTWeSeeTasksByCondition请求参数结构体
                */
                class DeleteTWeSeeTasksByConditionRequest : public AbstractModel
                {
                public:
                    DeleteTWeSeeTasksByConditionRequest();
                    ~DeleteTWeSeeTasksByConditionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品 ID</p>
                     * @return ProductId <p>产品 ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品 ID</p>
                     * @param _productId <p>产品 ID</p>
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
                     * 获取<p>设备名称</p>
                     * @return DeviceName <p>设备名称</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名称</p>
                     * @param _deviceName <p>设备名称</p>
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
                     * 获取<p>算法类目。</p><p>枚举值：</p><ul><li>COMPREHENSION： 视觉理解</li><li>HIGHLIGHT： 视频浓缩</li><li>SUMMARIZATION： 每日/每周总结</li></ul>
                     * @return ServiceCategory <p>算法类目。</p><p>枚举值：</p><ul><li>COMPREHENSION： 视觉理解</li><li>HIGHLIGHT： 视频浓缩</li><li>SUMMARIZATION： 每日/每周总结</li></ul>
                     * 
                     */
                    std::string GetServiceCategory() const;

                    /**
                     * 设置<p>算法类目。</p><p>枚举值：</p><ul><li>COMPREHENSION： 视觉理解</li><li>HIGHLIGHT： 视频浓缩</li><li>SUMMARIZATION： 每日/每周总结</li></ul>
                     * @param _serviceCategory <p>算法类目。</p><p>枚举值：</p><ul><li>COMPREHENSION： 视觉理解</li><li>HIGHLIGHT： 视频浓缩</li><li>SUMMARIZATION： 每日/每周总结</li></ul>
                     * 
                     */
                    void SetServiceCategory(const std::string& _serviceCategory);

                    /**
                     * 判断参数 ServiceCategory 是否已赋值
                     * @return ServiceCategory 是否已赋值
                     * 
                     */
                    bool ServiceCategoryHasBeenSet() const;

                    /**
                     * 获取<p>任务删除条件，至少传入一个条件。不同条件之间为 AND 关系，同一条件的 Values 之间为 OR 关系。</p>
                     * @return Conditions <p>任务删除条件，至少传入一个条件。不同条件之间为 AND 关系，同一条件的 Values 之间为 OR 关系。</p>
                     * 
                     */
                    std::vector<SeeDeleteTaskCondition> GetConditions() const;

                    /**
                     * 设置<p>任务删除条件，至少传入一个条件。不同条件之间为 AND 关系，同一条件的 Values 之间为 OR 关系。</p>
                     * @param _conditions <p>任务删除条件，至少传入一个条件。不同条件之间为 AND 关系，同一条件的 Values 之间为 OR 关系。</p>
                     * 
                     */
                    void SetConditions(const std::vector<SeeDeleteTaskCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取<p>通道 ID</p><p>默认值：0</p>
                     * @return ChannelId <p>通道 ID</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置<p>通道 ID</p><p>默认值：0</p>
                     * @param _channelId <p>通道 ID</p><p>默认值：0</p>
                     * 
                     */
                    void SetChannelId(const uint64_t& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                private:

                    /**
                     * <p>产品 ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>算法类目。</p><p>枚举值：</p><ul><li>COMPREHENSION： 视觉理解</li><li>HIGHLIGHT： 视频浓缩</li><li>SUMMARIZATION： 每日/每周总结</li></ul>
                     */
                    std::string m_serviceCategory;
                    bool m_serviceCategoryHasBeenSet;

                    /**
                     * <p>任务删除条件，至少传入一个条件。不同条件之间为 AND 关系，同一条件的 Values 之间为 OR 关系。</p>
                     */
                    std::vector<SeeDeleteTaskCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * <p>通道 ID</p><p>默认值：0</p>
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETETWESEETASKSBYCONDITIONREQUEST_H_
