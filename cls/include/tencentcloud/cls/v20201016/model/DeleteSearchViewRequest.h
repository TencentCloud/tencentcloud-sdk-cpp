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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETESEARCHVIEWREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETESEARCHVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteSearchView请求参数结构体
                */
                class DeleteSearchViewRequest : public AbstractModel
                {
                public:
                    DeleteSearchViewRequest();
                    ~DeleteSearchViewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>视图ID</p>
                     * @return ViewId <p>视图ID</p>
                     * 
                     */
                    std::string GetViewId() const;

                    /**
                     * 设置<p>视图ID</p>
                     * @param _viewId <p>视图ID</p>
                     * 
                     */
                    void SetViewId(const std::string& _viewId);

                    /**
                     * 判断参数 ViewId 是否已赋值
                     * @return ViewId 是否已赋值
                     * 
                     */
                    bool ViewIdHasBeenSet() const;

                private:

                    /**
                     * <p>视图ID</p>
                     */
                    std::string m_viewId;
                    bool m_viewIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETESEARCHVIEWREQUEST_H_
