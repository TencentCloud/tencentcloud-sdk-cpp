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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GETLABSERVICEURLSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GETLABSERVICEURLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * GetLabServiceUrls请求参数结构体
                */
                class GetLabServiceUrlsRequest : public AbstractModel
                {
                public:
                    GetLabServiceUrlsRequest();
                    ~GetLabServiceUrlsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据实验室ID</p>
                     * @return Id <p>数据实验室ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>数据实验室ID</p>
                     * @param _id <p>数据实验室ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * <p>数据实验室ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GETLABSERVICEURLSREQUEST_H_
