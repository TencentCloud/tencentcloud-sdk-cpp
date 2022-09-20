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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOGSETREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOGSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateLogSet请求参数结构体
                */
                class CreateLogSetRequest : public AbstractModel
                {
                public:
                    CreateLogSetRequest();
                    ~CreateLogSetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志集名称。
                     * @return LogSetName 日志集名称。
                     */
                    std::string GetLogSetName() const;

                    /**
                     * 设置日志集名称。
                     * @param LogSetName 日志集名称。
                     */
                    void SetLogSetName(const std::string& _logSetName);

                    /**
                     * 判断参数 LogSetName 是否已赋值
                     * @return LogSetName 是否已赋值
                     */
                    bool LogSetNameHasBeenSet() const;

                    /**
                     * 获取日志集归属的地域。
                     * @return LogSetRegion 日志集归属的地域。
                     */
                    std::string GetLogSetRegion() const;

                    /**
                     * 设置日志集归属的地域。
                     * @param LogSetRegion 日志集归属的地域。
                     */
                    void SetLogSetRegion(const std::string& _logSetRegion);

                    /**
                     * 判断参数 LogSetRegion 是否已赋值
                     * @return LogSetRegion 是否已赋值
                     */
                    bool LogSetRegionHasBeenSet() const;

                private:

                    /**
                     * 日志集名称。
                     */
                    std::string m_logSetName;
                    bool m_logSetNameHasBeenSet;

                    /**
                     * 日志集归属的地域。
                     */
                    std::string m_logSetRegion;
                    bool m_logSetRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOGSETREQUEST_H_
