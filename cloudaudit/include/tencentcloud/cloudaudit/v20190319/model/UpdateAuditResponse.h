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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_UPDATEAUDITRESPONSE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_UPDATEAUDITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * UpdateAudit返回参数结构体
                */
                class UpdateAuditResponse : public AbstractModel
                {
                public:
                    UpdateAuditResponse();
                    ~UpdateAuditResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否更新成功
                     * @return IsSuccess 是否更新成功
                     * 
                     */
                    int64_t GetIsSuccess() const;

                    /**
                     * 判断参数 IsSuccess 是否已赋值
                     * @return IsSuccess 是否已赋值
                     * 
                     */
                    bool IsSuccessHasBeenSet() const;

                private:

                    /**
                     * 是否更新成功
                     */
                    int64_t m_isSuccess;
                    bool m_isSuccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_UPDATEAUDITRESPONSE_H_
