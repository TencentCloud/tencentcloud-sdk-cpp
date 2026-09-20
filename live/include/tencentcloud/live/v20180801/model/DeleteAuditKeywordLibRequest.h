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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETEAUDITKEYWORDLIBREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETEAUDITKEYWORDLIBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DeleteAuditKeywordLib请求参数结构体
                */
                class DeleteAuditKeywordLibRequest : public AbstractModel
                {
                public:
                    DeleteAuditKeywordLibRequest();
                    ~DeleteAuditKeywordLibRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>词库 Id。</p>
                     * @return LibId <p>词库 Id。</p>
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置<p>词库 Id。</p>
                     * @param _libId <p>词库 Id。</p>
                     * 
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     * 
                     */
                    bool LibIdHasBeenSet() const;

                private:

                    /**
                     * <p>词库 Id。</p>
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETEAUDITKEYWORDLIBREQUEST_H_
