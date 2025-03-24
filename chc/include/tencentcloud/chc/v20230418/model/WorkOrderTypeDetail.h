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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERTYPEDETAIL_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERTYPEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 工单类型详情
                */
                class WorkOrderTypeDetail : public AbstractModel
                {
                public:
                    WorkOrderTypeDetail();
                    ~WorkOrderTypeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工单类型所属的大类
                     * @return WorkOrderFamily 工单类型所属的大类
                     * 
                     */
                    std::string GetWorkOrderFamily() const;

                    /**
                     * 设置工单类型所属的大类
                     * @param _workOrderFamily 工单类型所属的大类
                     * 
                     */
                    void SetWorkOrderFamily(const std::string& _workOrderFamily);

                    /**
                     * 判断参数 WorkOrderFamily 是否已赋值
                     * @return WorkOrderFamily 是否已赋值
                     * 
                     */
                    bool WorkOrderFamilyHasBeenSet() const;

                    /**
                     * 获取工单类型名称
                     * @return WorkOrderName 工单类型名称
                     * 
                     */
                    std::string GetWorkOrderName() const;

                    /**
                     * 设置工单类型名称
                     * @param _workOrderName 工单类型名称
                     * 
                     */
                    void SetWorkOrderName(const std::string& _workOrderName);

                    /**
                     * 判断参数 WorkOrderName 是否已赋值
                     * @return WorkOrderName 是否已赋值
                     * 
                     */
                    bool WorkOrderNameHasBeenSet() const;

                    /**
                     * 获取工单类型的唯一英文标识
                     * @return WorkOrderType 工单类型的唯一英文标识
                     * 
                     */
                    std::string GetWorkOrderType() const;

                    /**
                     * 设置工单类型的唯一英文标识
                     * @param _workOrderType 工单类型的唯一英文标识
                     * 
                     */
                    void SetWorkOrderType(const std::string& _workOrderType);

                    /**
                     * 判断参数 WorkOrderType 是否已赋值
                     * @return WorkOrderType 是否已赋值
                     * 
                     */
                    bool WorkOrderTypeHasBeenSet() const;

                    /**
                     * 获取工单类型简述
                     * @return WorkOrderDescription 工单类型简述
                     * 
                     */
                    std::string GetWorkOrderDescription() const;

                    /**
                     * 设置工单类型简述
                     * @param _workOrderDescription 工单类型简述
                     * 
                     */
                    void SetWorkOrderDescription(const std::string& _workOrderDescription);

                    /**
                     * 判断参数 WorkOrderDescription 是否已赋值
                     * @return WorkOrderDescription 是否已赋值
                     * 
                     */
                    bool WorkOrderDescriptionHasBeenSet() const;

                    /**
                     * 获取是否被收藏
                     * @return CollectFlag 是否被收藏
                     * 
                     */
                    bool GetCollectFlag() const;

                    /**
                     * 设置是否被收藏
                     * @param _collectFlag 是否被收藏
                     * 
                     */
                    void SetCollectFlag(const bool& _collectFlag);

                    /**
                     * 判断参数 CollectFlag 是否已赋值
                     * @return CollectFlag 是否已赋值
                     * 
                     */
                    bool CollectFlagHasBeenSet() const;

                    /**
                     * 获取服务时效
                     * @return SlaMessage 服务时效
                     * 
                     */
                    std::string GetSlaMessage() const;

                    /**
                     * 设置服务时效
                     * @param _slaMessage 服务时效
                     * 
                     */
                    void SetSlaMessage(const std::string& _slaMessage);

                    /**
                     * 判断参数 SlaMessage 是否已赋值
                     * @return SlaMessage 是否已赋值
                     * 
                     */
                    bool SlaMessageHasBeenSet() const;

                private:

                    /**
                     * 工单类型所属的大类
                     */
                    std::string m_workOrderFamily;
                    bool m_workOrderFamilyHasBeenSet;

                    /**
                     * 工单类型名称
                     */
                    std::string m_workOrderName;
                    bool m_workOrderNameHasBeenSet;

                    /**
                     * 工单类型的唯一英文标识
                     */
                    std::string m_workOrderType;
                    bool m_workOrderTypeHasBeenSet;

                    /**
                     * 工单类型简述
                     */
                    std::string m_workOrderDescription;
                    bool m_workOrderDescriptionHasBeenSet;

                    /**
                     * 是否被收藏
                     */
                    bool m_collectFlag;
                    bool m_collectFlagHasBeenSet;

                    /**
                     * 服务时效
                     */
                    std::string m_slaMessage;
                    bool m_slaMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERTYPEDETAIL_H_
