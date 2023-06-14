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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBECONFIGDATALISTREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBECONFIGDATALISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DescribeConfigDataList请求参数结构体
                */
                class DescribeConfigDataListRequest : public AbstractModel
                {
                public:
                    DescribeConfigDataListRequest();
                    ~DescribeConfigDataListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境 ID
                     * @return EnvironmentId 环境 ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境 ID
                     * @param _environmentId 环境 ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取来源渠道
                     * @return SourceChannel 来源渠道
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置来源渠道
                     * @param _sourceChannel 来源渠道
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取查询游标
                     * @return ContinueToken 查询游标
                     * 
                     */
                    std::string GetContinueToken() const;

                    /**
                     * 设置查询游标
                     * @param _continueToken 查询游标
                     * 
                     */
                    void SetContinueToken(const std::string& _continueToken);

                    /**
                     * 判断参数 ContinueToken 是否已赋值
                     * @return ContinueToken 是否已赋值
                     * 
                     */
                    bool ContinueTokenHasBeenSet() const;

                    /**
                     * 获取分页 limit
                     * @return Limit 分页 limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页 limit
                     * @param _limit 分页 limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 环境 ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 来源渠道
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * 查询游标
                     */
                    std::string m_continueToken;
                    bool m_continueTokenHasBeenSet;

                    /**
                     * 分页 limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBECONFIGDATALISTREQUEST_H_
