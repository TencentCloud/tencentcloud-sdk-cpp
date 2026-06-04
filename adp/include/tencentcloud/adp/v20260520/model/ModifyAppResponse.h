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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYAPPRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYAPPRESPONSE_H_

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
                * ModifyApp返回参数结构体
                */
                class ModifyAppResponse : public AbstractModel
                {
                public:
                    ModifyAppResponse();
                    ~ModifyAppResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取app_id
                     * @return AppId app_id
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取更新时间 (Unix时间戳,秒级)
                     * @return UpdateTime 更新时间 (Unix时间戳,秒级)
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * app_id
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 更新时间 (Unix时间戳,秒级)
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYAPPRESPONSE_H_
