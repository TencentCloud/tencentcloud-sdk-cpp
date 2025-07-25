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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_CREATESHIELDINSTANCERESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_CREATESHIELDINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * CreateShieldInstance返回参数结构体
                */
                class CreateShieldInstanceResponse : public AbstractModel
                {
                public:
                    CreateShieldInstanceResponse();
                    ~CreateShieldInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     * @return Progress 任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取任务唯一标识
                     * @return ItemId 任务唯一标识
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                private:

                    /**
                     * 任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 任务唯一标识
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_CREATESHIELDINSTANCERESPONSE_H_
