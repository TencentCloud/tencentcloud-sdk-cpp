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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESESSIONSPACERESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESESSIONSPACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/SessionSpaceInfo.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeSessionSpace返回参数结构体
                */
                class DescribeSessionSpaceResponse : public AbstractModel
                {
                public:
                    DescribeSessionSpaceResponse();
                    ~DescribeSessionSpaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询到的会话空间信息。</p>
                     * @return SessionSpace <p>查询到的会话空间信息。</p>
                     * 
                     */
                    SessionSpaceInfo GetSessionSpace() const;

                    /**
                     * 判断参数 SessionSpace 是否已赋值
                     * @return SessionSpace 是否已赋值
                     * 
                     */
                    bool SessionSpaceHasBeenSet() const;

                private:

                    /**
                     * <p>查询到的会话空间信息。</p>
                     */
                    SessionSpaceInfo m_sessionSpace;
                    bool m_sessionSpaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESESSIONSPACERESPONSE_H_
