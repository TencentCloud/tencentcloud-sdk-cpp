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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDPLANDETAIL_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDPLANDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ChannelItem.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 录制计划详情
                */
                class RecordPlanDetail : public AbstractModel
                {
                public:
                    RecordPlanDetail();
                    ~RecordPlanDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计划ID
                     * @return PlanId 计划ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置计划ID
                     * @param _planId 计划ID
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
                     * 获取计划名称
                     * @return Name 计划名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置计划名称
                     * @param _name 计划名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取时间模板ID
                     * @return TimeTemplateId 时间模板ID
                     * 
                     */
                    std::string GetTimeTemplateId() const;

                    /**
                     * 设置时间模板ID
                     * @param _timeTemplateId 时间模板ID
                     * 
                     */
                    void SetTimeTemplateId(const std::string& _timeTemplateId);

                    /**
                     * 判断参数 TimeTemplateId 是否已赋值
                     * @return TimeTemplateId 是否已赋值
                     * 
                     */
                    bool TimeTemplateIdHasBeenSet() const;

                    /**
                     * 获取时间模板名称
                     * @return TimeTemplateName 时间模板名称
                     * 
                     */
                    std::string GetTimeTemplateName() const;

                    /**
                     * 设置时间模板名称
                     * @param _timeTemplateName 时间模板名称
                     * 
                     */
                    void SetTimeTemplateName(const std::string& _timeTemplateName);

                    /**
                     * 判断参数 TimeTemplateName 是否已赋值
                     * @return TimeTemplateName 是否已赋值
                     * 
                     */
                    bool TimeTemplateNameHasBeenSet() const;

                    /**
                     * 获取绑定的通道列表
                     * @return Channels 绑定的通道列表
                     * 
                     */
                    std::vector<ChannelItem> GetChannels() const;

                    /**
                     * 设置绑定的通道列表
                     * @param _channels 绑定的通道列表
                     * 
                     */
                    void SetChannels(const std::vector<ChannelItem>& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                    /**
                     * 获取存储周期（天）
                     * @return RecordStorageTime 存储周期（天）
                     * 
                     */
                    int64_t GetRecordStorageTime() const;

                    /**
                     * 设置存储周期（天）
                     * @param _recordStorageTime 存储周期（天）
                     * 
                     */
                    void SetRecordStorageTime(const int64_t& _recordStorageTime);

                    /**
                     * 判断参数 RecordStorageTime 是否已赋值
                     * @return RecordStorageTime 是否已赋值
                     * 
                     */
                    bool RecordStorageTimeHasBeenSet() const;

                private:

                    /**
                     * 计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 计划名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 时间模板ID
                     */
                    std::string m_timeTemplateId;
                    bool m_timeTemplateIdHasBeenSet;

                    /**
                     * 时间模板名称
                     */
                    std::string m_timeTemplateName;
                    bool m_timeTemplateNameHasBeenSet;

                    /**
                     * 绑定的通道列表
                     */
                    std::vector<ChannelItem> m_channels;
                    bool m_channelsHasBeenSet;

                    /**
                     * 存储周期（天）
                     */
                    int64_t m_recordStorageTime;
                    bool m_recordStorageTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDPLANDETAIL_H_
