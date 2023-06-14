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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CLOSEINTERCOMMUNICATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CLOSEINTERCOMMUNICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CloseInterCommunication请求参数结构体
                */
                class CloseInterCommunicationRequest : public AbstractModel
                {
                public:
                    CloseInterCommunicationRequest();
                    ~CloseInterCommunicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关闭互通的实例ID集合
                     * @return InstanceIdSet 关闭互通的实例ID集合
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置关闭互通的实例ID集合
                     * @param _instanceIdSet 关闭互通的实例ID集合
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                private:

                    /**
                     * 关闭互通的实例ID集合
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CLOSEINTERCOMMUNICATIONREQUEST_H_
