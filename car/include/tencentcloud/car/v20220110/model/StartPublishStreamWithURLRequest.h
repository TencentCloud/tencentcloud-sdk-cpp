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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_STARTPUBLISHSTREAMWITHURLREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_STARTPUBLISHSTREAMWITHURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * StartPublishStreamWithURL请求参数结构体
                */
                class StartPublishStreamWithURLRequest : public AbstractModel
                {
                public:
                    StartPublishStreamWithURLRequest();
                    ~StartPublishStreamWithURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取唯一用户身份标识，由业务方自定义，平台不予理解。
                     * @return UserId 唯一用户身份标识，由业务方自定义，平台不予理解。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置唯一用户身份标识，由业务方自定义，平台不予理解。
                     * @param _userId 唯一用户身份标识，由业务方自定义，平台不予理解。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取推流地址，仅支持rtmp协议。
                     * @return PublishStreamURL 推流地址，仅支持rtmp协议。
                     * 
                     */
                    std::string GetPublishStreamURL() const;

                    /**
                     * 设置推流地址，仅支持rtmp协议。
                     * @param _publishStreamURL 推流地址，仅支持rtmp协议。
                     * 
                     */
                    void SetPublishStreamURL(const std::string& _publishStreamURL);

                    /**
                     * 判断参数 PublishStreamURL 是否已赋值
                     * @return PublishStreamURL 是否已赋值
                     * 
                     */
                    bool PublishStreamURLHasBeenSet() const;

                private:

                    /**
                     * 唯一用户身份标识，由业务方自定义，平台不予理解。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 推流地址，仅支持rtmp协议。
                     */
                    std::string m_publishStreamURL;
                    bool m_publishStreamURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_STARTPUBLISHSTREAMWITHURLREQUEST_H_
