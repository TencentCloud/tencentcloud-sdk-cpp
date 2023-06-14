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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEREVERSESHELLWHITELISTSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEREVERSESHELLWHITELISTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DeleteReverseShellWhiteLists请求参数结构体
                */
                class DeleteReverseShellWhiteListsRequest : public AbstractModel
                {
                public:
                    DeleteReverseShellWhiteListsRequest();
                    ~DeleteReverseShellWhiteListsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取白名单ids
                     * @return WhiteListIdSet 白名单ids
                     * 
                     */
                    std::vector<std::string> GetWhiteListIdSet() const;

                    /**
                     * 设置白名单ids
                     * @param _whiteListIdSet 白名单ids
                     * 
                     */
                    void SetWhiteListIdSet(const std::vector<std::string>& _whiteListIdSet);

                    /**
                     * 判断参数 WhiteListIdSet 是否已赋值
                     * @return WhiteListIdSet 是否已赋值
                     * 
                     */
                    bool WhiteListIdSetHasBeenSet() const;

                private:

                    /**
                     * 白名单ids
                     */
                    std::vector<std::string> m_whiteListIdSet;
                    bool m_whiteListIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEREVERSESHELLWHITELISTSREQUEST_H_
