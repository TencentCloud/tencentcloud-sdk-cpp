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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DELETELISTENERSRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DELETELISTENERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DeleteListeners返回参数结构体
                */
                class DeleteListenersResponse : public AbstractModel
                {
                public:
                    DeleteListenersResponse();
                    ~DeleteListenersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取删除操作失败的监听器ID列表
                     * @return OperationFailedListenerSet 删除操作失败的监听器ID列表
                     * 
                     */
                    std::vector<std::string> GetOperationFailedListenerSet() const;

                    /**
                     * 判断参数 OperationFailedListenerSet 是否已赋值
                     * @return OperationFailedListenerSet 是否已赋值
                     * 
                     */
                    bool OperationFailedListenerSetHasBeenSet() const;

                    /**
                     * 获取删除操作成功的监听器ID列表
                     * @return OperationSucceedListenerSet 删除操作成功的监听器ID列表
                     * 
                     */
                    std::vector<std::string> GetOperationSucceedListenerSet() const;

                    /**
                     * 判断参数 OperationSucceedListenerSet 是否已赋值
                     * @return OperationSucceedListenerSet 是否已赋值
                     * 
                     */
                    bool OperationSucceedListenerSetHasBeenSet() const;

                    /**
                     * 获取无效的监听器ID列表，如：监听器不存在，监听器对应实例不匹配
                     * @return InvalidStatusListenerSet 无效的监听器ID列表，如：监听器不存在，监听器对应实例不匹配
                     * 
                     */
                    std::vector<std::string> GetInvalidStatusListenerSet() const;

                    /**
                     * 判断参数 InvalidStatusListenerSet 是否已赋值
                     * @return InvalidStatusListenerSet 是否已赋值
                     * 
                     */
                    bool InvalidStatusListenerSetHasBeenSet() const;

                private:

                    /**
                     * 删除操作失败的监听器ID列表
                     */
                    std::vector<std::string> m_operationFailedListenerSet;
                    bool m_operationFailedListenerSetHasBeenSet;

                    /**
                     * 删除操作成功的监听器ID列表
                     */
                    std::vector<std::string> m_operationSucceedListenerSet;
                    bool m_operationSucceedListenerSetHasBeenSet;

                    /**
                     * 无效的监听器ID列表，如：监听器不存在，监听器对应实例不匹配
                     */
                    std::vector<std::string> m_invalidStatusListenerSet;
                    bool m_invalidStatusListenerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DELETELISTENERSRESPONSE_H_
