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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCEPLUGINLISTRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCEPLUGINLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/DescribeInstancePluginInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeInstancePluginList返回参数结构体
                */
                class DescribeInstancePluginListResponse : public AbstractModel
                {
                public:
                    DescribeInstancePluginListResponse();
                    ~DescribeInstancePluginListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的插件个数
                     * @return TotalCount 返回的插件个数
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
                     * 获取插件信息列表
                     * @return PluginList 插件信息列表
                     * 
                     */
                    std::vector<DescribeInstancePluginInfo> GetPluginList() const;

                    /**
                     * 判断参数 PluginList 是否已赋值
                     * @return PluginList 是否已赋值
                     * 
                     */
                    bool PluginListHasBeenSet() const;

                private:

                    /**
                     * 返回的插件个数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 插件信息列表
                     */
                    std::vector<DescribeInstancePluginInfo> m_pluginList;
                    bool m_pluginListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCEPLUGINLISTRESPONSE_H_
