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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCENEVIDEOTASKRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCENEVIDEOTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/SceneVideoOutputInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeSceneVideoTask返回参数结构体
                */
                class DescribeSceneVideoTaskResponse : public AbstractModel
                {
                public:
                    DescribeSceneVideoTaskResponse();
                    ~DescribeSceneVideoTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>一些特殊场景的返回信息。</p>
                     * @return InfoList <p>一些特殊场景的返回信息。</p>
                     * 
                     */
                    std::vector<SceneVideoOutputInfo> GetInfoList() const;

                    /**
                     * 判断参数 InfoList 是否已赋值
                     * @return InfoList 是否已赋值
                     * 
                     */
                    bool InfoListHasBeenSet() const;

                    /**
                     * 获取<p>任务状态。</p><p>枚举值：</p><ul><li>DONE： 任务结束。</li><li>RUN： 任务运行中。</li><li>WAIT： 任务准备中。</li><li>FAIL： 任务失败。</li></ul>
                     * @return Status <p>任务状态。</p><p>枚举值：</p><ul><li>DONE： 任务结束。</li><li>RUN： 任务运行中。</li><li>WAIT： 任务准备中。</li><li>FAIL： 任务失败。</li></ul>
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
                     * 获取<p>输出视频的分辨率。示例：720x1280。</p>
                     * @return Resolution <p>输出视频的分辨率。示例：720x1280。</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取<p>错误信息。</p>
                     * @return Message <p>错误信息。</p>
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
                     * 获取<p>输出的视频Url。默认过期时间:12小时，请尽快拉取并转存。也可以使用私有Cos桶长期存储。</p>
                     * @return VideoUrls <p>输出的视频Url。默认过期时间:12小时，请尽快拉取并转存。也可以使用私有Cos桶长期存储。</p>
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
                     * <p>一些特殊场景的返回信息。</p>
                     */
                    std::vector<SceneVideoOutputInfo> m_infoList;
                    bool m_infoListHasBeenSet;

                    /**
                     * <p>任务状态。</p><p>枚举值：</p><ul><li>DONE： 任务结束。</li><li>RUN： 任务运行中。</li><li>WAIT： 任务准备中。</li><li>FAIL： 任务失败。</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>输出视频的分辨率。示例：720x1280。</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>错误信息。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>输出的视频Url。默认过期时间:12小时，请尽快拉取并转存。也可以使用私有Cos桶长期存储。</p>
                     */
                    std::vector<std::string> m_videoUrls;
                    bool m_videoUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCENEVIDEOTASKRESPONSE_H_
