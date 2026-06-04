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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_COPYAPPREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_COPYAPPREQUEST_H_

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
                * CopyApp请求参数结构体
                */
                class CopyAppRequest : public AbstractModel
                {
                public:
                    CopyAppRequest();
                    ~CopyAppRequest() = default;
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
                     * 获取target_space_id
                     * @return TargetSpaceId target_space_id
                     * 
                     */
                    std::string GetTargetSpaceId() const;

                    /**
                     * 设置target_space_id
                     * @param _targetSpaceId target_space_id
                     * 
                     */
                    void SetTargetSpaceId(const std::string& _targetSpaceId);

                    /**
                     * 判断参数 TargetSpaceId 是否已赋值
                     * @return TargetSpaceId 是否已赋值
                     * 
                     */
                    bool TargetSpaceIdHasBeenSet() const;

                private:

                    /**
                     * app_id
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * target_space_id
                     */
                    std::string m_targetSpaceId;
                    bool m_targetSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_COPYAPPREQUEST_H_
