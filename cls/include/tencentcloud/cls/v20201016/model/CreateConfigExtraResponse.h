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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONFIGEXTRARESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONFIGEXTRARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateConfigExtra返回参数结构体
                */
                class CreateConfigExtraResponse : public AbstractModel
                {
                public:
                    CreateConfigExtraResponse();
                    ~CreateConfigExtraResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取采集配置扩展信息ID
                     * @return ConfigExtraId 采集配置扩展信息ID
                     */
                    std::string GetConfigExtraId() const;

                    /**
                     * 判断参数 ConfigExtraId 是否已赋值
                     * @return ConfigExtraId 是否已赋值
                     */
                    bool ConfigExtraIdHasBeenSet() const;

                private:

                    /**
                     * 采集配置扩展信息ID
                     */
                    std::string m_configExtraId;
                    bool m_configExtraIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONFIGEXTRARESPONSE_H_
