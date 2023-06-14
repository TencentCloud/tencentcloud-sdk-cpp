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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_CREATEUNDERWRITETASKBYIDREQUEST_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_CREATEUNDERWRITETASKBYIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * CreateUnderwriteTaskById请求参数结构体
                */
                class CreateUnderwriteTaskByIdRequest : public AbstractModel
                {
                public:
                    CreateUnderwriteTaskByIdRequest();
                    ~CreateUnderwriteTaskByIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主任务ID数组，
                     * @return MainTaskIds 主任务ID数组，
                     * 
                     */
                    std::vector<std::string> GetMainTaskIds() const;

                    /**
                     * 设置主任务ID数组，
                     * @param _mainTaskIds 主任务ID数组，
                     * 
                     */
                    void SetMainTaskIds(const std::vector<std::string>& _mainTaskIds);

                    /**
                     * 判断参数 MainTaskIds 是否已赋值
                     * @return MainTaskIds 是否已赋值
                     * 
                     */
                    bool MainTaskIdsHasBeenSet() const;

                    /**
                     * 获取回调地址，可不传（提供轮询机制）。
                     * @return CallbackUrl 回调地址，可不传（提供轮询机制）。
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调地址，可不传（提供轮询机制）。
                     * @param _callbackUrl 回调地址，可不传（提供轮询机制）。
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                private:

                    /**
                     * 主任务ID数组，
                     */
                    std::vector<std::string> m_mainTaskIds;
                    bool m_mainTaskIdsHasBeenSet;

                    /**
                     * 回调地址，可不传（提供轮询机制）。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_CREATEUNDERWRITETASKBYIDREQUEST_H_
