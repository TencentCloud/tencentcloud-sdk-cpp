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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_CREATETEXTSAMPLERESPONSE_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_CREATETEXTSAMPLERESPONSE_H_

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
                * CreateTextSample返回参数结构体
                */
                class CreateTextSampleResponse : public AbstractModel
                {
                public:
                    CreateTextSampleResponse();
                    ~CreateTextSampleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取操作样本失败时返回的错误信息示例：  "样本1":错误码，"样本2":错误码
                     * @return ErrMsg 操作样本失败时返回的错误信息示例：  "样本1":错误码，"样本2":错误码
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取任务状态
1：已完成
2：处理中
                     * @return Progress 任务状态
1：已完成
2：处理中
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * 操作样本失败时返回的错误信息示例：  "样本1":错误码，"样本2":错误码
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 任务状态
1：已完成
2：处理中
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_CREATETEXTSAMPLERESPONSE_H_
