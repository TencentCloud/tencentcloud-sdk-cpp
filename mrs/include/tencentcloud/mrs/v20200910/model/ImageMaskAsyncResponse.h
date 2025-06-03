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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEMASKASYNCRESPONSE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEMASKASYNCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * ImageMaskAsync返回参数结构体
                */
                class ImageMaskAsyncResponse : public AbstractModel
                {
                public:
                    ImageMaskAsyncResponse();
                    ~ImageMaskAsyncResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取加密任务ID
1.因此TaskID 仅 24 小时内有效，请于提交任务获取TaskID后24小时内调用ImageMaskAsyncGetResult接口获取结果.
2.建议在获取到TaskID 后，5-10分钟后再调用 ImageMaskAsyncGetResult 接口获取脱敏结果。
                     * @return TaskID 加密任务ID
1.因此TaskID 仅 24 小时内有效，请于提交任务获取TaskID后24小时内调用ImageMaskAsyncGetResult接口获取结果.
2.建议在获取到TaskID 后，5-10分钟后再调用 ImageMaskAsyncGetResult 接口获取脱敏结果。
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                private:

                    /**
                     * 加密任务ID
1.因此TaskID 仅 24 小时内有效，请于提交任务获取TaskID后24小时内调用ImageMaskAsyncGetResult接口获取结果.
2.建议在获取到TaskID 后，5-10分钟后再调用 ImageMaskAsyncGetResult 接口获取脱敏结果。
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEMASKASYNCRESPONSE_H_
