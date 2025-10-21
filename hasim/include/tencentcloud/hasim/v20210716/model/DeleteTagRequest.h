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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_DELETETAGREQUEST_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_DELETETAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * DeleteTag请求参数结构体
                */
                class DeleteTagRequest : public AbstractModel
                {
                public:
                    DeleteTagRequest();
                    ~DeleteTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标签ID
                     * @return TagID 标签ID
                     * 
                     */
                    int64_t GetTagID() const;

                    /**
                     * 设置标签ID
                     * @param _tagID 标签ID
                     * 
                     */
                    void SetTagID(const int64_t& _tagID);

                    /**
                     * 判断参数 TagID 是否已赋值
                     * @return TagID 是否已赋值
                     * 
                     */
                    bool TagIDHasBeenSet() const;

                private:

                    /**
                     * 标签ID
                     */
                    int64_t m_tagID;
                    bool m_tagIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_DELETETAGREQUEST_H_
