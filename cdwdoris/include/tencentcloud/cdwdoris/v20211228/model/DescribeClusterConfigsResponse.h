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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/ClusterConfigsInfoFromEMR.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeClusterConfigs返回参数结构体
                */
                class DescribeClusterConfigsResponse : public AbstractModel
                {
                public:
                    DescribeClusterConfigsResponse();
                    ~DescribeClusterConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回实例的配置文件相关的信息
                     * @return ClusterConfList 返回实例的配置文件相关的信息
                     * 
                     */
                    std::vector<ClusterConfigsInfoFromEMR> GetClusterConfList() const;

                    /**
                     * 判断参数 ClusterConfList 是否已赋值
                     * @return ClusterConfList 是否已赋值
                     * 
                     */
                    bool ClusterConfListHasBeenSet() const;

                    /**
                     * 获取返回当前内核版本 如果不存在则返回空字符串
                     * @return BuildVersion 返回当前内核版本 如果不存在则返回空字符串
                     * 
                     */
                    std::string GetBuildVersion() const;

                    /**
                     * 判断参数 BuildVersion 是否已赋值
                     * @return BuildVersion 是否已赋值
                     * 
                     */
                    bool BuildVersionHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrorMsg 错误信息
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取是否包含CN节点
                     * @return HasCN 是否包含CN节点
                     * 
                     */
                    bool GetHasCN() const;

                    /**
                     * 判断参数 HasCN 是否已赋值
                     * @return HasCN 是否已赋值
                     * 
                     */
                    bool HasCNHasBeenSet() const;

                private:

                    /**
                     * 返回实例的配置文件相关的信息
                     */
                    std::vector<ClusterConfigsInfoFromEMR> m_clusterConfList;
                    bool m_clusterConfListHasBeenSet;

                    /**
                     * 返回当前内核版本 如果不存在则返回空字符串
                     */
                    std::string m_buildVersion;
                    bool m_buildVersionHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 是否包含CN节点
                     */
                    bool m_hasCN;
                    bool m_hasCNHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSRESPONSE_H_
