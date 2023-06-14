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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATELIVERECORDPLANREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATELIVERECORDPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * CreateLiveRecordPlan请求参数结构体
                */
                class CreateLiveRecordPlanRequest : public AbstractModel
                {
                public:
                    CreateLiveRecordPlanRequest();
                    ~CreateLiveRecordPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取录制计划名
                     * @return PlanName 录制计划名
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置录制计划名
                     * @param _planName 录制计划名
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
                     * 获取计划类型 1：固定直播 2：移动直播
                     * @return PlanType 计划类型 1：固定直播 2：移动直播
                     * 
                     */
                    int64_t GetPlanType() const;

                    /**
                     * 设置计划类型 1：固定直播 2：移动直播
                     * @param _planType 计划类型 1：固定直播 2：移动直播
                     * 
                     */
                    void SetPlanType(const int64_t& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                    /**
                     * 获取时间模板ID,固定直播时为必填
                     * @return TemplateId 时间模板ID,固定直播时为必填
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置时间模板ID,固定直播时为必填
                     * @param _templateId 时间模板ID,固定直播时为必填
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
                     * 获取录制文件存储时长，单位天，默认30天
                     * @return RecordStorageTime 录制文件存储时长，单位天，默认30天
                     * 
                     */
                    int64_t GetRecordStorageTime() const;

                    /**
                     * 设置录制文件存储时长，单位天，默认30天
                     * @param _recordStorageTime 录制文件存储时长，单位天，默认30天
                     * 
                     */
                    void SetRecordStorageTime(const int64_t& _recordStorageTime);

                    /**
                     * 判断参数 RecordStorageTime 是否已赋值
                     * @return RecordStorageTime 是否已赋值
                     * 
                     */
                    bool RecordStorageTimeHasBeenSet() const;

                    /**
                     * 获取绑定的直播频道ID列表
                     * @return LiveChannelIds 绑定的直播频道ID列表
                     * 
                     */
                    std::vector<std::string> GetLiveChannelIds() const;

                    /**
                     * 设置绑定的直播频道ID列表
                     * @param _liveChannelIds 绑定的直播频道ID列表
                     * 
                     */
                    void SetLiveChannelIds(const std::vector<std::string>& _liveChannelIds);

                    /**
                     * 判断参数 LiveChannelIds 是否已赋值
                     * @return LiveChannelIds 是否已赋值
                     * 
                     */
                    bool LiveChannelIdsHasBeenSet() const;

                private:

                    /**
                     * 录制计划名
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 计划类型 1：固定直播 2：移动直播
                     */
                    int64_t m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * 时间模板ID,固定直播时为必填
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 录制文件存储时长，单位天，默认30天
                     */
                    int64_t m_recordStorageTime;
                    bool m_recordStorageTimeHasBeenSet;

                    /**
                     * 绑定的直播频道ID列表
                     */
                    std::vector<std::string> m_liveChannelIds;
                    bool m_liveChannelIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATELIVERECORDPLANREQUEST_H_
