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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_VIDEOMODERATIONRESPONSE_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_VIDEOMODERATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * VideoModeration返回参数结构体
                */
                class VideoModerationResponse : public AbstractModel
                {
                public:
                    VideoModerationResponse();
                    ~VideoModerationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取业务返回码
60001：成功请求回调任务
                     * @return BusinessCode 业务返回码
60001：成功请求回调任务
                     */
                    int64_t GetBusinessCode() const;

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取识别返回结果
                     * @return Data 识别返回结果
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 业务返回码
60001：成功请求回调任务
                     */
                    int64_t m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * 识别返回结果
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_VIDEOMODERATIONRESPONSE_H_
