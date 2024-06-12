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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKRESPONSE_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/Task.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * CreateRecTask返回参数结构体
                */
                class CreateRecTaskResponse : public AbstractModel
                {
                public:
                    CreateRecTaskResponse();
                    ~CreateRecTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取录音文件识别的请求返回结果，包含结果查询需要的TaskId。
**注意：TaskId有效期为24小时，不同日期可能出现重复TaskId，请不要依赖TaskId作为您业务系统里的唯一ID。**

                     * @return Data 录音文件识别的请求返回结果，包含结果查询需要的TaskId。
**注意：TaskId有效期为24小时，不同日期可能出现重复TaskId，请不要依赖TaskId作为您业务系统里的唯一ID。**

                     * 
                     */
                    Task GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 录音文件识别的请求返回结果，包含结果查询需要的TaskId。
**注意：TaskId有效期为24小时，不同日期可能出现重复TaskId，请不要依赖TaskId作为您业务系统里的唯一ID。**

                     */
                    Task m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKRESPONSE_H_
