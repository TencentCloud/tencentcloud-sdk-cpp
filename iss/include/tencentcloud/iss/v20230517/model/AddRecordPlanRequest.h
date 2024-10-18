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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDPLANREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/LifeCycleData.h>
#include <tencentcloud/iss/v20230517/model/ChannelInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AddRecordPlan请求参数结构体
                */
                class AddRecordPlanRequest : public AbstractModel
                {
                public:
                    AddRecordPlanRequest();
                    ~AddRecordPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实时上云计划名称，仅支持中文、英文、数字、_、-，长度不超过32个字符，计划名称全局唯一，不能为空，不能重复
                     * @return PlanName 实时上云计划名称，仅支持中文、英文、数字、_、-，长度不超过32个字符，计划名称全局唯一，不能为空，不能重复
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置实时上云计划名称，仅支持中文、英文、数字、_、-，长度不超过32个字符，计划名称全局唯一，不能为空，不能重复
                     * @param _planName 实时上云计划名称，仅支持中文、英文、数字、_、-，长度不超过32个字符，计划名称全局唯一，不能为空，不能重复
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
                     * 获取实时上云模板ID
                     * @return TemplateId 实时上云模板ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置实时上云模板ID
                     * @param _templateId 实时上云模板ID
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
                     * 获取生命周期
                     * @return LifeCycle 生命周期
                     * 
                     */
                    LifeCycleData GetLifeCycle() const;

                    /**
                     * 设置生命周期
                     * @param _lifeCycle 生命周期
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
                     * 获取上云计划描述，仅支持中文、英文、数字、_、-，长度不超过128个字符 
                     * @return Describe 上云计划描述，仅支持中文、英文、数字、_、-，长度不超过128个字符 
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置上云计划描述，仅支持中文、英文、数字、_、-，长度不超过128个字符 
                     * @param _describe 上云计划描述，仅支持中文、英文、数字、_、-，长度不超过128个字符 
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
                     * 获取码流类型，default:不指定码流类型，以设备默认推送类型为主， main:主码流，sub:子码流，其他根据设备能力集自定义，不填按默认类型处理，长度不能超过32个字节
                     * @return StreamType 码流类型，default:不指定码流类型，以设备默认推送类型为主， main:主码流，sub:子码流，其他根据设备能力集自定义，不填按默认类型处理，长度不能超过32个字节
                     * 
                     */
                    std::string GetStreamType() const;

                    /**
                     * 设置码流类型，default:不指定码流类型，以设备默认推送类型为主， main:主码流，sub:子码流，其他根据设备能力集自定义，不填按默认类型处理，长度不能超过32个字节
                     * @param _streamType 码流类型，default:不指定码流类型，以设备默认推送类型为主， main:主码流，sub:子码流，其他根据设备能力集自定义，不填按默认类型处理，长度不能超过32个字节
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
                     * 获取添加录像的设备的通道信息，一次添加通道总数不超过5000个，包括组织目录下的通道数量
                     * @return Channels 添加录像的设备的通道信息，一次添加通道总数不超过5000个，包括组织目录下的通道数量
                     * 
                     */
                    std::vector<ChannelInfo> GetChannels() const;

                    /**
                     * 设置添加录像的设备的通道信息，一次添加通道总数不超过5000个，包括组织目录下的通道数量
                     * @param _channels 添加录像的设备的通道信息，一次添加通道总数不超过5000个，包括组织目录下的通道数量
                     * 
                     */
                    void SetChannels(const std::vector<ChannelInfo>& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                    /**
                     * 获取添加组织目录下所有设备通道，Json数组，可以为空，通道总数量不超过5000个（包括Channel字段的数量）
                     * @return OrganizationId 添加组织目录下所有设备通道，Json数组，可以为空，通道总数量不超过5000个（包括Channel字段的数量）
                     * 
                     */
                    std::vector<std::string> GetOrganizationId() const;

                    /**
                     * 设置添加组织目录下所有设备通道，Json数组，可以为空，通道总数量不超过5000个（包括Channel字段的数量）
                     * @param _organizationId 添加组织目录下所有设备通道，Json数组，可以为空，通道总数量不超过5000个（包括Channel字段的数量）
                     * 
                     */
                    void SetOrganizationId(const std::vector<std::string>& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取录像补录模式（0:不启用，1:启用），无该字段，默认不启用
                     * @return RepairMode 录像补录模式（0:不启用，1:启用），无该字段，默认不启用
                     * 
                     */
                    int64_t GetRepairMode() const;

                    /**
                     * 设置录像补录模式（0:不启用，1:启用），无该字段，默认不启用
                     * @param _repairMode 录像补录模式（0:不启用，1:启用），无该字段，默认不启用
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
                     * 实时上云计划名称，仅支持中文、英文、数字、_、-，长度不超过32个字符，计划名称全局唯一，不能为空，不能重复
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 实时上云模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 生命周期
                     */
                    LifeCycleData m_lifeCycle;
                    bool m_lifeCycleHasBeenSet;

                    /**
                     * 上云计划描述，仅支持中文、英文、数字、_、-，长度不超过128个字符 
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * 码流类型，default:不指定码流类型，以设备默认推送类型为主， main:主码流，sub:子码流，其他根据设备能力集自定义，不填按默认类型处理，长度不能超过32个字节
                     */
                    std::string m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * 添加录像的设备的通道信息，一次添加通道总数不超过5000个，包括组织目录下的通道数量
                     */
                    std::vector<ChannelInfo> m_channels;
                    bool m_channelsHasBeenSet;

                    /**
                     * 添加组织目录下所有设备通道，Json数组，可以为空，通道总数量不超过5000个（包括Channel字段的数量）
                     */
                    std::vector<std::string> m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 录像补录模式（0:不启用，1:启用），无该字段，默认不启用
                     */
                    int64_t m_repairMode;
                    bool m_repairModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDPLANREQUEST_H_
