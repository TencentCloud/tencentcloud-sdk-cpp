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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMASSETDATASCANTASKSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMASSETDATASCANTASKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmAssetDataScanTaskStatus请求参数结构体
                */
                class ModifyDspmAssetDataScanTaskStatusRequest : public AbstractModel
                {
                public:
                    ModifyDspmAssetDataScanTaskStatusRequest();
                    ~ModifyDspmAssetDataScanTaskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskIds <p>任务ID</p>
                     * 
                     */
                    std::vector<uint64_t> GetTaskIds() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskIds <p>任务ID</p>
                     * 
                     */
                    void SetTaskIds(const std::vector<uint64_t>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>1： 识别中</li><li>2： 识别终止</li><li>3： 识别成功</li><li>4： 识别失败</li><li>5： 暂停</li><li>0： 未识别</li></ul>
                     * @return Status <p>任务状态</p><p>枚举值：</p><ul><li>1： 识别中</li><li>2： 识别终止</li><li>3： 识别成功</li><li>4： 识别失败</li><li>5： 暂停</li><li>0： 未识别</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>任务状态</p><p>枚举值：</p><ul><li>1： 识别中</li><li>2： 识别终止</li><li>3： 识别成功</li><li>4： 识别失败</li><li>5： 暂停</li><li>0： 未识别</li></ul>
                     * @param _status <p>任务状态</p><p>枚举值：</p><ul><li>1： 识别中</li><li>2： 识别终止</li><li>3： 识别成功</li><li>4： 识别失败</li><li>5： 暂停</li><li>0： 未识别</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    std::vector<uint64_t> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>1： 识别中</li><li>2： 识别终止</li><li>3： 识别成功</li><li>4： 识别失败</li><li>5： 暂停</li><li>0： 未识别</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMASSETDATASCANTASKSTATUSREQUEST_H_
