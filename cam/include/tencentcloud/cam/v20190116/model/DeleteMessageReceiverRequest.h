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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DELETEMESSAGERECEIVERREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DELETEMESSAGERECEIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DeleteMessageReceiver请求参数结构体
                */
                class DeleteMessageReceiverRequest : public AbstractModel
                {
                public:
                    DeleteMessageReceiverRequest();
                    ~DeleteMessageReceiverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取消息接受者的名称
                     * @return Name 消息接受者的名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置消息接受者的名称
                     * @param _name 消息接受者的名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 消息接受者的名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DELETEMESSAGERECEIVERREQUEST_H_
