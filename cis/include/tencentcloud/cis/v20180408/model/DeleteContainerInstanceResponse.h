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

#ifndef TENCENTCLOUD_CIS_V20180408_MODEL_DELETECONTAINERINSTANCERESPONSE_H_
#define TENCENTCLOUD_CIS_V20180408_MODEL_DELETECONTAINERINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cis
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DeleteContainerInstance返回参数结构体
                */
                class DeleteContainerInstanceResponse : public AbstractModel
                {
                public:
                    DeleteContainerInstanceResponse();
                    ~DeleteContainerInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取操作信息
                     * @return Msg 操作信息
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 操作信息
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIS_V20180408_MODEL_DELETECONTAINERINSTANCERESPONSE_H_
