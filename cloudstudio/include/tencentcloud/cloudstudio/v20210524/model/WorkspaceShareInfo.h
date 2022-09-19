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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACESHAREINFO_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACESHAREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudstudio/v20210524/model/UserInfoRsp.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * 用户空间共享信息
                */
                class WorkspaceShareInfo : public AbstractModel
                {
                public:
                    WorkspaceShareInfo();
                    ~WorkspaceShareInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取共享或不共享状态
                     * @return Status 共享或不共享状态
                     */
                    bool GetStatus() const;

                    /**
                     * 设置共享或不共享状态
                     * @param Status 共享或不共享状态
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否与我共享
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WithMe 是否与我共享
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetWithMe() const;

                    /**
                     * 设置是否与我共享
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WithMe 是否与我共享
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWithMe(const bool& _withMe);

                    /**
                     * 判断参数 WithMe 是否已赋值
                     * @return WithMe 是否已赋值
                     */
                    bool WithMeHasBeenSet() const;

                    /**
                     * 获取开始共享的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeginDate 开始共享的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置开始共享的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BeginDate 开始共享的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取停止共享的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndDate 停止共享的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置停止共享的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndDate 停止共享的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取停止共享的时间
                     * @return Users 停止共享的时间
                     */
                    std::vector<UserInfoRsp> GetUsers() const;

                    /**
                     * 设置停止共享的时间
                     * @param Users 停止共享的时间
                     */
                    void SetUsers(const std::vector<UserInfoRsp>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     */
                    bool UsersHasBeenSet() const;

                private:

                    /**
                     * 共享或不共享状态
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否与我共享
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_withMe;
                    bool m_withMeHasBeenSet;

                    /**
                     * 开始共享的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * 停止共享的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 停止共享的时间
                     */
                    std::vector<UserInfoRsp> m_users;
                    bool m_usersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACESHAREINFO_H_
