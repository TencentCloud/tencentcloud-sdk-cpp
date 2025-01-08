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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ACTIVITYRECORDITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ACTIVITYRECORDITEM_H_

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
                * 活动详情
                */
                class ActivityRecordItem : public AbstractModel
                {
                public:
                    ActivityRecordItem();
                    ~ActivityRecordItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户uin
                     * @return Uin 用户uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
                     * @param _uin 用户uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

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
                     * 获取自定义状态码
                     * @return Status 自定义状态码
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置自定义状态码
                     * @param _status 自定义状态码
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
                     * 获取自定义子状态码
                     * @return SubStatus 自定义子状态码
                     * 
                     */
                    std::string GetSubStatus() const;

                    /**
                     * 设置自定义子状态码
                     * @param _subStatus 自定义子状态码
                     * 
                     */
                    void SetSubStatus(const std::string& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取整型子状态码
                     * @return SubStatusInt 整型子状态码
                     * 
                     */
                    int64_t GetSubStatusInt() const;

                    /**
                     * 设置整型子状态码
                     * @param _subStatusInt 整型子状态码
                     * 
                     */
                    void SetSubStatusInt(const int64_t& _subStatusInt);

                    /**
                     * 判断参数 SubStatusInt 是否已赋值
                     * @return SubStatusInt 是否已赋值
                     * 
                     */
                    bool SubStatusIntHasBeenSet() const;

                    /**
                     * 获取是否软删除
                     * @return IsDeleted 是否软删除
                     * 
                     */
                    bool GetIsDeleted() const;

                    /**
                     * 设置是否软删除
                     * @param _isDeleted 是否软删除
                     * 
                     */
                    void SetIsDeleted(const bool& _isDeleted);

                    /**
                     * 判断参数 IsDeleted 是否已赋值
                     * @return IsDeleted 是否已赋值
                     * 
                     */
                    bool IsDeletedHasBeenSet() const;

                private:

                    /**
                     * 用户uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 活动id
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 自定义状态码
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 自定义子状态码
                     */
                    std::string m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * 整型子状态码
                     */
                    int64_t m_subStatusInt;
                    bool m_subStatusIntHasBeenSet;

                    /**
                     * 是否软删除
                     */
                    bool m_isDeleted;
                    bool m_isDeletedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ACTIVITYRECORDITEM_H_
