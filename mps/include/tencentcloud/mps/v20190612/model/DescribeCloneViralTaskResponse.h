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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBECLONEVIRALTASKRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBECLONEVIRALTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeCloneViralTask返回参数结构体
                */
                class DescribeCloneViralTaskResponse : public AbstractModel
                {
                public:
                    DescribeCloneViralTaskResponse();
                    ~DescribeCloneViralTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>WAIT： 等待中</li><li>RUN： 执行中</li><li>FAIL： 任务失败</li><li>DONE： 任务成功</li></ul>
                     * @return Status <p>任务状态</p><p>枚举值：</p><ul><li>WAIT： 等待中</li><li>RUN： 执行中</li><li>FAIL： 任务失败</li><li>DONE： 任务成功</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>失败时返回错误信息</p>
                     * @return Message <p>失败时返回错误信息</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>当任务状态为 DONE时，返回视频Url列表，视频存储24小时</p>
                     * @return VideoUrls <p>当任务状态为 DONE时，返回视频Url列表，视频存储24小时</p>
                     * 
                     */
                    std::vector<std::string> GetVideoUrls() const;

                    /**
                     * 判断参数 VideoUrls 是否已赋值
                     * @return VideoUrls 是否已赋值
                     * 
                     */
                    bool VideoUrlsHasBeenSet() const;

                private:

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>WAIT： 等待中</li><li>RUN： 执行中</li><li>FAIL： 任务失败</li><li>DONE： 任务成功</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>失败时返回错误信息</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>当任务状态为 DONE时，返回视频Url列表，视频存储24小时</p>
                     */
                    std::vector<std::string> m_videoUrls;
                    bool m_videoUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBECLONEVIRALTASKRESPONSE_H_
