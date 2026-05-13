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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAPPROVERSTEP_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAPPROVERSTEP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 审批步骤
                */
                class DspmApproverStep : public AbstractModel
                {
                public:
                    DspmApproverStep();
                    ~DspmApproverStep() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审批人列表
                     * @return ApproverUinSet 审批人列表
                     * 
                     */
                    std::vector<DspmUinUser> GetApproverUinSet() const;

                    /**
                     * 设置审批人列表
                     * @param _approverUinSet 审批人列表
                     * 
                     */
                    void SetApproverUinSet(const std::vector<DspmUinUser>& _approverUinSet);

                    /**
                     * 判断参数 ApproverUinSet 是否已赋值
                     * @return ApproverUinSet 是否已赋值
                     * 
                     */
                    bool ApproverUinSetHasBeenSet() const;

                    /**
                     * 获取审批人
                     * @return ApproverUin 审批人
                     * 
                     */
                    std::string GetApproverUin() const;

                    /**
                     * 设置审批人
                     * @param _approverUin 审批人
                     * 
                     */
                    void SetApproverUin(const std::string& _approverUin);

                    /**
                     * 判断参数 ApproverUin 是否已赋值
                     * @return ApproverUin 是否已赋值
                     * 
                     */
                    bool ApproverUinHasBeenSet() const;

                    /**
                     * 获取审批状态  0-未审批 1-通过 2-拒绝
                     * @return Status 审批状态  0-未审批 1-通过 2-拒绝
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置审批状态  0-未审批 1-通过 2-拒绝
                     * @param _status 审批状态  0-未审批 1-通过 2-拒绝
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
                     * 获取审批意见
                     * @return Comment 审批意见
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置审批意见
                     * @param _comment 审批意见
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取审批时间。
                     * @return ApproveTime 审批时间。
                     * 
                     */
                    std::string GetApproveTime() const;

                    /**
                     * 设置审批时间。
                     * @param _approveTime 审批时间。
                     * 
                     */
                    void SetApproveTime(const std::string& _approveTime);

                    /**
                     * 判断参数 ApproveTime 是否已赋值
                     * @return ApproveTime 是否已赋值
                     * 
                     */
                    bool ApproveTimeHasBeenSet() const;

                private:

                    /**
                     * 审批人列表
                     */
                    std::vector<DspmUinUser> m_approverUinSet;
                    bool m_approverUinSetHasBeenSet;

                    /**
                     * 审批人
                     */
                    std::string m_approverUin;
                    bool m_approverUinHasBeenSet;

                    /**
                     * 审批状态  0-未审批 1-通过 2-拒绝
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 审批意见
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 审批时间。
                     */
                    std::string m_approveTime;
                    bool m_approveTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAPPROVERSTEP_H_
