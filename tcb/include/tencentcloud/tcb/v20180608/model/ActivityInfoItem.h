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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ACTIVITYINFOITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ACTIVITYINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 活动信息
                */
                class ActivityInfoItem : public AbstractModel
                {
                public:
                    ActivityInfoItem();
                    ~ActivityInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取活动id
                     * @return ActivityId 活动id
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置活动id
                     * @param _activityId 活动id
                     * 
                     */
                    void SetActivityId(const int64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取记录插入时间
                     * @return CreateTime 记录插入时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置记录插入时间
                     * @param _createTime 记录插入时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取记录最后一次变更时间
                     * @return UpdateTime 记录最后一次变更时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置记录最后一次变更时间
                     * @param _updateTime 记录最后一次变更时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取活动开始时间
                     * @return StartTime 活动开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置活动开始时间
                     * @param _startTime 活动开始时间
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
                     * 获取活动结束时间
                     * @return ExpireTime 活动结束时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置活动结束时间
                     * @param _expireTime 活动结束时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取自定义备注信息
                     * @return Tag 自定义备注信息
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置自定义备注信息
                     * @param _tag 自定义备注信息
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 活动id
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 记录插入时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 记录最后一次变更时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 活动开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 活动结束时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 自定义备注信息
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ACTIVITYINFOITEM_H_
