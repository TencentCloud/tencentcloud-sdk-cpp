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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEVOICECONVERSATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEVOICECONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeVoiceConversation请求参数结构体
                */
                class DescribeVoiceConversationRequest : public AbstractModel
                {
                public:
                    DescribeVoiceConversationRequest();
                    ~DescribeVoiceConversationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     * @return SdkAppId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     * @param _sdkAppId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>对话任务的唯一Id，在启动对话成功后会返回。</p>
                     * @return TaskId <p>对话任务的唯一Id，在启动对话成功后会返回。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>对话任务的唯一Id，在启动对话成功后会返回。</p>
                     * @param _taskId <p>对话任务的唯一Id，在启动对话成功后会返回。</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>查询任务状态</p><p>枚举值：</p><ul><li>0： 不查询对话上下文历史</li><li>1： 查询对话上下文历史</li></ul><p>默认值：0</p>
                     * @return DescribeType <p>查询任务状态</p><p>枚举值：</p><ul><li>0： 不查询对话上下文历史</li><li>1： 查询对话上下文历史</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetDescribeType() const;

                    /**
                     * 设置<p>查询任务状态</p><p>枚举值：</p><ul><li>0： 不查询对话上下文历史</li><li>1： 查询对话上下文历史</li></ul><p>默认值：0</p>
                     * @param _describeType <p>查询任务状态</p><p>枚举值：</p><ul><li>0： 不查询对话上下文历史</li><li>1： 查询对话上下文历史</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetDescribeType(const uint64_t& _describeType);

                    /**
                     * 判断参数 DescribeType 是否已赋值
                     * @return DescribeType 是否已赋值
                     * 
                     */
                    bool DescribeTypeHasBeenSet() const;

                private:

                    /**
                     * <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>对话任务的唯一Id，在启动对话成功后会返回。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>查询任务状态</p><p>枚举值：</p><ul><li>0： 不查询对话上下文历史</li><li>1： 查询对话上下文历史</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_describeType;
                    bool m_describeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEVOICECONVERSATIONREQUEST_H_
