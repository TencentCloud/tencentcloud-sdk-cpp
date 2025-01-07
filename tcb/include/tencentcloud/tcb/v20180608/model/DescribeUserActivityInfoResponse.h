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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEUSERACTIVITYINFORESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEUSERACTIVITYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeUserActivityInfo返回参数结构体
                */
                class DescribeUserActivityInfoResponse : public AbstractModel
                {
                public:
                    DescribeUserActivityInfoResponse();
                    ~DescribeUserActivityInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义标记，1元钱裂变需求中即代指`团id`
                     * @return Tag 自定义标记，1元钱裂变需求中即代指`团id`
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取自定义备注，1元钱裂变需求中返回`团列表`，uin列表通过","拼接
                     * @return Notes 自定义备注，1元钱裂变需求中返回`团列表`，uin列表通过","拼接
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     * 
                     */
                    bool NotesHasBeenSet() const;

                    /**
                     * 获取活动剩余时间，单位为s.1元钱裂变需求中即为 time(活动过期时间)-Now()), 过期后为0，即返回必为自然数
                     * @return ActivityTimeLeft 活动剩余时间，单位为s.1元钱裂变需求中即为 time(活动过期时间)-Now()), 过期后为0，即返回必为自然数
                     * 
                     */
                    int64_t GetActivityTimeLeft() const;

                    /**
                     * 判断参数 ActivityTimeLeft 是否已赋值
                     * @return ActivityTimeLeft 是否已赋值
                     * 
                     */
                    bool ActivityTimeLeftHasBeenSet() const;

                    /**
                     * 获取拼团剩余时间，单位为s.1元钱裂变需求中即为time(成团时间)+24H-Now()，过期后为0，即返回必为自然数
                     * @return GroupTimeLeft 拼团剩余时间，单位为s.1元钱裂变需求中即为time(成团时间)+24H-Now()，过期后为0，即返回必为自然数
                     * 
                     */
                    int64_t GetGroupTimeLeft() const;

                    /**
                     * 判断参数 GroupTimeLeft 是否已赋值
                     * @return GroupTimeLeft 是否已赋值
                     * 
                     */
                    bool GroupTimeLeftHasBeenSet() const;

                    /**
                     * 获取昵称列表,通过","拼接， 1元钱裂变活动中与Notes中uin一一对应
                     * @return NickNameList 昵称列表,通过","拼接， 1元钱裂变活动中与Notes中uin一一对应
                     * 
                     */
                    std::string GetNickNameList() const;

                    /**
                     * 判断参数 NickNameList 是否已赋值
                     * @return NickNameList 是否已赋值
                     * 
                     */
                    bool NickNameListHasBeenSet() const;

                private:

                    /**
                     * 自定义标记，1元钱裂变需求中即代指`团id`
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 自定义备注，1元钱裂变需求中返回`团列表`，uin列表通过","拼接
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * 活动剩余时间，单位为s.1元钱裂变需求中即为 time(活动过期时间)-Now()), 过期后为0，即返回必为自然数
                     */
                    int64_t m_activityTimeLeft;
                    bool m_activityTimeLeftHasBeenSet;

                    /**
                     * 拼团剩余时间，单位为s.1元钱裂变需求中即为time(成团时间)+24H-Now()，过期后为0，即返回必为自然数
                     */
                    int64_t m_groupTimeLeft;
                    bool m_groupTimeLeftHasBeenSet;

                    /**
                     * 昵称列表,通过","拼接， 1元钱裂变活动中与Notes中uin一一对应
                     */
                    std::string m_nickNameList;
                    bool m_nickNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEUSERACTIVITYINFORESPONSE_H_
