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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_CREATEPRESIGNEDNOTEBOOKINSTANCEURLREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_CREATEPRESIGNEDNOTEBOOKINSTANCEURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * CreatePresignedNotebookInstanceUrl请求参数结构体
                */
                class CreatePresignedNotebookInstanceUrlRequest : public AbstractModel
                {
                public:
                    CreatePresignedNotebookInstanceUrlRequest();
                    ~CreatePresignedNotebookInstanceUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notebook实例名称
规则：“^\[a-zA-Z0-9\](-\*\[a-zA-Z0-9\])\*$”
                     * @return NotebookInstanceName Notebook实例名称
规则：“^\[a-zA-Z0-9\](-\*\[a-zA-Z0-9\])\*$”
                     * 
                     */
                    std::string GetNotebookInstanceName() const;

                    /**
                     * 设置Notebook实例名称
规则：“^\[a-zA-Z0-9\](-\*\[a-zA-Z0-9\])\*$”
                     * @param _notebookInstanceName Notebook实例名称
规则：“^\[a-zA-Z0-9\](-\*\[a-zA-Z0-9\])\*$”
                     * 
                     */
                    void SetNotebookInstanceName(const std::string& _notebookInstanceName);

                    /**
                     * 判断参数 NotebookInstanceName 是否已赋值
                     * @return NotebookInstanceName 是否已赋值
                     * 
                     */
                    bool NotebookInstanceNameHasBeenSet() const;

                    /**
                     * 获取session有效时间，秒，取值范围[1800, 43200]
                     * @return SessionExpirationDurationInSeconds session有效时间，秒，取值范围[1800, 43200]
                     * 
                     */
                    int64_t GetSessionExpirationDurationInSeconds() const;

                    /**
                     * 设置session有效时间，秒，取值范围[1800, 43200]
                     * @param _sessionExpirationDurationInSeconds session有效时间，秒，取值范围[1800, 43200]
                     * 
                     */
                    void SetSessionExpirationDurationInSeconds(const int64_t& _sessionExpirationDurationInSeconds);

                    /**
                     * 判断参数 SessionExpirationDurationInSeconds 是否已赋值
                     * @return SessionExpirationDurationInSeconds 是否已赋值
                     * 
                     */
                    bool SessionExpirationDurationInSecondsHasBeenSet() const;

                private:

                    /**
                     * Notebook实例名称
规则：“^\[a-zA-Z0-9\](-\*\[a-zA-Z0-9\])\*$”
                     */
                    std::string m_notebookInstanceName;
                    bool m_notebookInstanceNameHasBeenSet;

                    /**
                     * session有效时间，秒，取值范围[1800, 43200]
                     */
                    int64_t m_sessionExpirationDurationInSeconds;
                    bool m_sessionExpirationDurationInSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_CREATEPRESIGNEDNOTEBOOKINSTANCEURLREQUEST_H_
