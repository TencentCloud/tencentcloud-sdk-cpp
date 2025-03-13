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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_RECORDPLANBASEINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_RECORDPLANBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/LifeCycleData.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 实时上云计划基础信息
                */
                class RecordPlanBaseInfo : public AbstractModel
                {
                public:
                    RecordPlanBaseInfo();
                    ~RecordPlanBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上云计划ID
                     * @return PlanId 上云计划ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置上云计划ID
                     * @param _planId 上云计划ID
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取上云计划名称
                     * @return PlanName 上云计划名称
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置上云计划名称
                     * @param _planName 上云计划名称
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取上云模板ID
                     * @return TemplateId 上云模板ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置上云模板ID
                     * @param _templateId 上云模板ID
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取上云计划描述
                     * @return Describe 上云计划描述
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置上云计划描述
                     * @param _describe 上云计划描述
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取码流类型，default:设备默认码流类型，main:主码流，sub:子码流，其他根据设备能力集自定义
                     * @return StreamType 码流类型，default:设备默认码流类型，main:主码流，sub:子码流，其他根据设备能力集自定义
                     * 
                     */
                    std::string GetStreamType() const;

                    /**
                     * 设置码流类型，default:设备默认码流类型，main:主码流，sub:子码流，其他根据设备能力集自定义
                     * @param _streamType 码流类型，default:设备默认码流类型，main:主码流，sub:子码流，其他根据设备能力集自定义
                     * 
                     */
                    void SetStreamType(const std::string& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取云文件生命周期
                     * @return LifeCycle 云文件生命周期
                     * 
                     */
                    LifeCycleData GetLifeCycle() const;

                    /**
                     * 设置云文件生命周期
                     * @param _lifeCycle 云文件生命周期
                     * 
                     */
                    void SetLifeCycle(const LifeCycleData& _lifeCycle);

                    /**
                     * 判断参数 LifeCycle 是否已赋值
                     * @return LifeCycle 是否已赋值
                     * 
                     */
                    bool LifeCycleHasBeenSet() const;

                    /**
                     * 获取录像计划状态，1:正常使用中，0:删除中，无法使用
                     * @return Status 录像计划状态，1:正常使用中，0:删除中，无法使用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置录像计划状态，1:正常使用中，0:删除中，无法使用
                     * @param _status 录像计划状态，1:正常使用中，0:删除中，无法使用
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取通道总数
                     * @return ChannelCount 通道总数
                     * 
                     */
                    int64_t GetChannelCount() const;

                    /**
                     * 设置通道总数
                     * @param _channelCount 通道总数
                     * 
                     */
                    void SetChannelCount(const int64_t& _channelCount);

                    /**
                     * 判断参数 ChannelCount 是否已赋值
                     * @return ChannelCount 是否已赋值
                     * 
                     */
                    bool ChannelCountHasBeenSet() const;

                    /**
                     * 获取录像补录模式（0:不启用，1:启用）
                     * @return RepairMode 录像补录模式（0:不启用，1:启用）
                     * 
                     */
                    int64_t GetRepairMode() const;

                    /**
                     * 设置录像补录模式（0:不启用，1:启用）
                     * @param _repairMode 录像补录模式（0:不启用，1:启用）
                     * 
                     */
                    void SetRepairMode(const int64_t& _repairMode);

                    /**
                     * 判断参数 RepairMode 是否已赋值
                     * @return RepairMode 是否已赋值
                     * 
                     */
                    bool RepairModeHasBeenSet() const;

                private:

                    /**
                     * 上云计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 上云计划名称
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 上云模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 上云计划描述
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * 码流类型，default:设备默认码流类型，main:主码流，sub:子码流，其他根据设备能力集自定义
                     */
                    std::string m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * 云文件生命周期
                     */
                    LifeCycleData m_lifeCycle;
                    bool m_lifeCycleHasBeenSet;

                    /**
                     * 录像计划状态，1:正常使用中，0:删除中，无法使用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 通道总数
                     */
                    int64_t m_channelCount;
                    bool m_channelCountHasBeenSet;

                    /**
                     * 录像补录模式（0:不启用，1:启用）
                     */
                    int64_t m_repairMode;
                    bool m_repairModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_RECORDPLANBASEINFO_H_
