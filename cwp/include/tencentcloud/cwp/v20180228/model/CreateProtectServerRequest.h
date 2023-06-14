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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEPROTECTSERVERREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEPROTECTSERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ProtectHostConfig.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateProtectServer请求参数结构体
                */
                class CreateProtectServerRequest : public AbstractModel
                {
                public:
                    CreateProtectServerRequest();
                    ~CreateProtectServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取防护目录地址
                     * @return ProtectDir 防护目录地址
                     * 
                     */
                    std::string GetProtectDir() const;

                    /**
                     * 设置防护目录地址
                     * @param _protectDir 防护目录地址
                     * 
                     */
                    void SetProtectDir(const std::string& _protectDir);

                    /**
                     * 判断参数 ProtectDir 是否已赋值
                     * @return ProtectDir 是否已赋值
                     * 
                     */
                    bool ProtectDirHasBeenSet() const;

                    /**
                     * 获取防护机器 信息
                     * @return ProtectHostConfig 防护机器 信息
                     * 
                     */
                    std::vector<ProtectHostConfig> GetProtectHostConfig() const;

                    /**
                     * 设置防护机器 信息
                     * @param _protectHostConfig 防护机器 信息
                     * 
                     */
                    void SetProtectHostConfig(const std::vector<ProtectHostConfig>& _protectHostConfig);

                    /**
                     * 判断参数 ProtectHostConfig 是否已赋值
                     * @return ProtectHostConfig 是否已赋值
                     * 
                     */
                    bool ProtectHostConfigHasBeenSet() const;

                private:

                    /**
                     * 防护目录地址
                     */
                    std::string m_protectDir;
                    bool m_protectDirHasBeenSet;

                    /**
                     * 防护机器 信息
                     */
                    std::vector<ProtectHostConfig> m_protectHostConfig;
                    bool m_protectHostConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEPROTECTSERVERREQUEST_H_
