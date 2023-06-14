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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CHANGEAPIUSABLESTATUSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CHANGEAPIUSABLESTATUSREQUEST_H_

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
                * ChangeApiUsableStatus请求参数结构体
                */
                class ChangeApiUsableStatusRequest : public AbstractModel
                {
                public:
                    ChangeApiUsableStatusRequest();
                    ~ChangeApiUsableStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API ID
                     * @return ApiId API ID
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API ID
                     * @param _apiId API ID
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取切换状态，enabled/disabled
                     * @return UsableStatus 切换状态，enabled/disabled
                     * 
                     */
                    std::string GetUsableStatus() const;

                    /**
                     * 设置切换状态，enabled/disabled
                     * @param _usableStatus 切换状态，enabled/disabled
                     * 
                     */
                    void SetUsableStatus(const std::string& _usableStatus);

                    /**
                     * 判断参数 UsableStatus 是否已赋值
                     * @return UsableStatus 是否已赋值
                     * 
                     */
                    bool UsableStatusHasBeenSet() const;

                private:

                    /**
                     * API ID
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * 切换状态，enabled/disabled
                     */
                    std::string m_usableStatus;
                    bool m_usableStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CHANGEAPIUSABLESTATUSREQUEST_H_
