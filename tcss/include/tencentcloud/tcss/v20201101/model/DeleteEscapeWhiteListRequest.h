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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEESCAPEWHITELISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEESCAPEWHITELISTREQUEST_H_

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
                * DeleteEscapeWhiteList请求参数结构体
                */
                class DeleteEscapeWhiteListRequest : public AbstractModel
                {
                public:
                    DeleteEscapeWhiteListRequest();
                    ~DeleteEscapeWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取白名单记录ID数组
                     * @return IDSet 白名单记录ID数组
                     * 
                     */
                    std::vector<int64_t> GetIDSet() const;

                    /**
                     * 设置白名单记录ID数组
                     * @param _iDSet 白名单记录ID数组
                     * 
                     */
                    void SetIDSet(const std::vector<int64_t>& _iDSet);

                    /**
                     * 判断参数 IDSet 是否已赋值
                     * @return IDSet 是否已赋值
                     * 
                     */
                    bool IDSetHasBeenSet() const;

                private:

                    /**
                     * 白名单记录ID数组
                     */
                    std::vector<int64_t> m_iDSet;
                    bool m_iDSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEESCAPEWHITELISTREQUEST_H_
