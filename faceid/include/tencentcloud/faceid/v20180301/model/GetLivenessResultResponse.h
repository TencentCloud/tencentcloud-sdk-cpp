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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETLIVENESSRESULTRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETLIVENESSRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/FileInfo.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetLivenessResult返回参数结构体
                */
                class GetLivenessResultResponse : public AbstractModel
                {
                public:
                    GetLivenessResultResponse();
                    ~GetLivenessResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取流程的最终结果
                     * @return Result 流程的最终结果
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取流程的最终结果描述
                     * @return Description 流程的最终结果描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取人像截图
                     * @return BestFrame 人像截图
                     */
                    FileInfo GetBestFrame() const;

                    /**
                     * 判断参数 BestFrame 是否已赋值
                     * @return BestFrame 是否已赋值
                     */
                    bool BestFrameHasBeenSet() const;

                    /**
                     * 获取检测过程视频
                     * @return Video 检测过程视频
                     */
                    FileInfo GetVideo() const;

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     */
                    bool VideoHasBeenSet() const;

                private:

                    /**
                     * 流程的最终结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 流程的最终结果描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 人像截图
                     */
                    FileInfo m_bestFrame;
                    bool m_bestFrameHasBeenSet;

                    /**
                     * 检测过程视频
                     */
                    FileInfo m_video;
                    bool m_videoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETLIVENESSRESULTRESPONSE_H_
