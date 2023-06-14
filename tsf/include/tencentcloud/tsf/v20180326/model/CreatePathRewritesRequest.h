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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATEPATHREWRITESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATEPATHREWRITESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/PathRewriteCreateObject.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * CreatePathRewrites请求参数结构体
                */
                class CreatePathRewritesRequest : public AbstractModel
                {
                public:
                    CreatePathRewritesRequest();
                    ~CreatePathRewritesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路径重写列表
                     * @return PathRewrites 路径重写列表
                     * 
                     */
                    PathRewriteCreateObject GetPathRewrites() const;

                    /**
                     * 设置路径重写列表
                     * @param _pathRewrites 路径重写列表
                     * 
                     */
                    void SetPathRewrites(const PathRewriteCreateObject& _pathRewrites);

                    /**
                     * 判断参数 PathRewrites 是否已赋值
                     * @return PathRewrites 是否已赋值
                     * 
                     */
                    bool PathRewritesHasBeenSet() const;

                private:

                    /**
                     * 路径重写列表
                     */
                    PathRewriteCreateObject m_pathRewrites;
                    bool m_pathRewritesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEPATHREWRITESREQUEST_H_
