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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPATHREWRITEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPATHREWRITEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribePathRewrite请求参数结构体
                */
                class DescribePathRewriteRequest : public AbstractModel
                {
                public:
                    DescribePathRewriteRequest();
                    ~DescribePathRewriteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路径重写规则ID
                     * @return PathRewriteId 路径重写规则ID
                     * 
                     */
                    std::string GetPathRewriteId() const;

                    /**
                     * 设置路径重写规则ID
                     * @param _pathRewriteId 路径重写规则ID
                     * 
                     */
                    void SetPathRewriteId(const std::string& _pathRewriteId);

                    /**
                     * 判断参数 PathRewriteId 是否已赋值
                     * @return PathRewriteId 是否已赋值
                     * 
                     */
                    bool PathRewriteIdHasBeenSet() const;

                private:

                    /**
                     * 路径重写规则ID
                     */
                    std::string m_pathRewriteId;
                    bool m_pathRewriteIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPATHREWRITEREQUEST_H_
