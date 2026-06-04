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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_ROLLBACKRELEASEREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_ROLLBACKRELEASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * RollbackRelease请求参数结构体
                */
                class RollbackReleaseRequest : public AbstractModel
                {
                public:
                    RollbackReleaseRequest();
                    ~RollbackReleaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取app_id
                     * @return AppId app_id
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置app_id
                     * @param _appId app_id
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取release_id
                     * @return ReleaseId release_id
                     * 
                     */
                    std::string GetReleaseId() const;

                    /**
                     * 设置release_id
                     * @param _releaseId release_id
                     * 
                     */
                    void SetReleaseId(const std::string& _releaseId);

                    /**
                     * 判断参数 ReleaseId 是否已赋值
                     * @return ReleaseId 是否已赋值
                     * 
                     */
                    bool ReleaseIdHasBeenSet() const;

                private:

                    /**
                     * app_id
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * release_id
                     */
                    std::string m_releaseId;
                    bool m_releaseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_ROLLBACKRELEASEREQUEST_H_
