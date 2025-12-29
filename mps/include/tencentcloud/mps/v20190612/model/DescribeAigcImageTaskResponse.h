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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCIMAGETASKRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCIMAGETASKRESPONSE_H_

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
                * DescribeAigcImageTask返回参数结构体
                */
                class DescribeAigcImageTaskResponse : public AbstractModel
                {
                public:
                    DescribeAigcImageTaskResponse();
                    ~DescribeAigcImageTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务当前状态。 WAIT：等待中， RUN：执行中， FAIL：任务失败， DONE：任务成功。
                     * @return Status 任务当前状态。 WAIT：等待中， RUN：执行中， FAIL：任务失败， DONE：任务成功。
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
                     * 获取当任务状态为 DONE时，返回的图片Url列表，图片存储12小时，请尽快取走使用。
                     * @return ImageUrls 当任务状态为 DONE时，返回的图片Url列表，图片存储12小时，请尽快取走使用。
                     * 
                     */
                    std::vector<std::string> GetImageUrls() const;

                    /**
                     * 判断参数 ImageUrls 是否已赋值
                     * @return ImageUrls 是否已赋值
                     * 
                     */
                    bool ImageUrlsHasBeenSet() const;

                    /**
                     * 获取当任务状态为 FAIL时，返回失败信息。
                     * @return Message 当任务状态为 FAIL时，返回失败信息。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 任务当前状态。 WAIT：等待中， RUN：执行中， FAIL：任务失败， DONE：任务成功。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当任务状态为 DONE时，返回的图片Url列表，图片存储12小时，请尽快取走使用。
                     */
                    std::vector<std::string> m_imageUrls;
                    bool m_imageUrlsHasBeenSet;

                    /**
                     * 当任务状态为 FAIL时，返回失败信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCIMAGETASKRESPONSE_H_
