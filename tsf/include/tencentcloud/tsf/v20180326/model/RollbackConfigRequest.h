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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_ROLLBACKCONFIGREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_ROLLBACKCONFIGREQUEST_H_

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
                * RollbackConfig请求参数结构体
                */
                class RollbackConfigRequest : public AbstractModel
                {
                public:
                    RollbackConfigRequest();
                    ~RollbackConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置项发布历史ID
                     * @return ConfigReleaseLogId 配置项发布历史ID
                     * 
                     */
                    std::string GetConfigReleaseLogId() const;

                    /**
                     * 设置配置项发布历史ID
                     * @param _configReleaseLogId 配置项发布历史ID
                     * 
                     */
                    void SetConfigReleaseLogId(const std::string& _configReleaseLogId);

                    /**
                     * 判断参数 ConfigReleaseLogId 是否已赋值
                     * @return ConfigReleaseLogId 是否已赋值
                     * 
                     */
                    bool ConfigReleaseLogIdHasBeenSet() const;

                    /**
                     * 获取回滚描述
                     * @return ReleaseDesc 回滚描述
                     * 
                     */
                    std::string GetReleaseDesc() const;

                    /**
                     * 设置回滚描述
                     * @param _releaseDesc 回滚描述
                     * 
                     */
                    void SetReleaseDesc(const std::string& _releaseDesc);

                    /**
                     * 判断参数 ReleaseDesc 是否已赋值
                     * @return ReleaseDesc 是否已赋值
                     * 
                     */
                    bool ReleaseDescHasBeenSet() const;

                private:

                    /**
                     * 配置项发布历史ID
                     */
                    std::string m_configReleaseLogId;
                    bool m_configReleaseLogIdHasBeenSet;

                    /**
                     * 回滚描述
                     */
                    std::string m_releaseDesc;
                    bool m_releaseDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_ROLLBACKCONFIGREQUEST_H_
