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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_QUERYCALLBACKRESPONSE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_QUERYCALLBACKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * QueryCallback返回参数结构体
                */
                class QueryCallbackResponse : public AbstractModel
                {
                public:
                    QueryCallbackResponse();
                    ~QueryCallbackResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务分析完成后回调地址
                     * @return TaskFinishNotifyURL 任务分析完成后回调地址
                     * 
                     */
                    std::string GetTaskFinishNotifyURL() const;

                    /**
                     * 判断参数 TaskFinishNotifyURL 是否已赋值
                     * @return TaskFinishNotifyURL 是否已赋值
                     * 
                     */
                    bool TaskFinishNotifyURLHasBeenSet() const;

                    /**
                     * 获取媒体导入完成后回调地址
                     * @return MediaFinishNotifyURL 媒体导入完成后回调地址
                     * 
                     */
                    std::string GetMediaFinishNotifyURL() const;

                    /**
                     * 判断参数 MediaFinishNotifyURL 是否已赋值
                     * @return MediaFinishNotifyURL 是否已赋值
                     * 
                     */
                    bool MediaFinishNotifyURLHasBeenSet() const;

                private:

                    /**
                     * 任务分析完成后回调地址
                     */
                    std::string m_taskFinishNotifyURL;
                    bool m_taskFinishNotifyURLHasBeenSet;

                    /**
                     * 媒体导入完成后回调地址
                     */
                    std::string m_mediaFinishNotifyURL;
                    bool m_mediaFinishNotifyURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_QUERYCALLBACKRESPONSE_H_
