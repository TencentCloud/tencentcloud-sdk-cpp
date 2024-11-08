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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETACTIONSEQUENCEREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETACTIONSEQUENCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetActionSequence请求参数结构体
                */
                class GetActionSequenceRequest : public AbstractModel
                {
                public:
                    GetActionSequenceRequest();
                    ~GetActionSequenceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取默认不需要使用。
                     * @return ActionType 默认不需要使用。
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置默认不需要使用。
                     * @param _actionType 默认不需要使用。
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                private:

                    /**
                     * 默认不需要使用。
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETACTIONSEQUENCEREQUEST_H_
