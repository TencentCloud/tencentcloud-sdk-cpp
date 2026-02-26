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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DELETENOTICECONTENTTMPLSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DELETENOTICECONTENTTMPLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DeleteNoticeContentTmpls请求参数结构体
                */
                class DeleteNoticeContentTmplsRequest : public AbstractModel
                {
                public:
                    DeleteNoticeContentTmplsRequest();
                    ~DeleteNoticeContentTmplsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的模板id
                     * @return TmplIDs 要删除的模板id
                     * 
                     */
                    std::vector<std::string> GetTmplIDs() const;

                    /**
                     * 设置要删除的模板id
                     * @param _tmplIDs 要删除的模板id
                     * 
                     */
                    void SetTmplIDs(const std::vector<std::string>& _tmplIDs);

                    /**
                     * 判断参数 TmplIDs 是否已赋值
                     * @return TmplIDs 是否已赋值
                     * 
                     */
                    bool TmplIDsHasBeenSet() const;

                private:

                    /**
                     * 要删除的模板id
                     */
                    std::vector<std::string> m_tmplIDs;
                    bool m_tmplIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DELETENOTICECONTENTTMPLSREQUEST_H_
