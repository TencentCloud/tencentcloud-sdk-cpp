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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILESBYGROUPRESPONSE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILESBYGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ConfigFile.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeConfigFilesByGroup返回参数结构体
                */
                class DescribeConfigFilesByGroupResponse : public AbstractModel
                {
                public:
                    DescribeConfigFilesByGroupResponse();
                    ~DescribeConfigFilesByGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录总数量
                     * @return TotalCount 记录总数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取配置文件列表
                     * @return ConfigFiles 配置文件列表
                     * 
                     */
                    std::vector<ConfigFile> GetConfigFiles() const;

                    /**
                     * 判断参数 ConfigFiles 是否已赋值
                     * @return ConfigFiles 是否已赋值
                     * 
                     */
                    bool ConfigFilesHasBeenSet() const;

                private:

                    /**
                     * 记录总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 配置文件列表
                     */
                    std::vector<ConfigFile> m_configFiles;
                    bool m_configFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILESBYGROUPRESPONSE_H_
