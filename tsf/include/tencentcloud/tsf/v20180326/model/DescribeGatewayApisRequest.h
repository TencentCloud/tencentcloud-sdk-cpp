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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGATEWAYAPISREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGATEWAYAPISREQUEST_H_

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
                * DescribeGatewayApis请求参数结构体
                */
                class DescribeGatewayApisRequest : public AbstractModel
                {
                public:
                    DescribeGatewayApisRequest();
                    ~DescribeGatewayApisRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取翻页偏移量
                     * @return Offset 翻页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页偏移量
                     * @param _offset 翻页偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页的记录数
                     * @return Limit 每页的记录数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页的记录数
                     * @param _limit 每页的记录数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取搜索关键字，支持 API path
                     * @return SearchWord 搜索关键字，支持 API path
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键字，支持 API path
                     * @param _searchWord 搜索关键字，支持 API path
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取部署组ID
                     * @return GatewayDeployGroupId 部署组ID
                     * 
                     */
                    std::string GetGatewayDeployGroupId() const;

                    /**
                     * 设置部署组ID
                     * @param _gatewayDeployGroupId 部署组ID
                     * 
                     */
                    void SetGatewayDeployGroupId(const std::string& _gatewayDeployGroupId);

                    /**
                     * 判断参数 GatewayDeployGroupId 是否已赋值
                     * @return GatewayDeployGroupId 是否已赋值
                     * 
                     */
                    bool GatewayDeployGroupIdHasBeenSet() const;

                    /**
                     * 获取发布状态, drafted(未发布)/released(已发布)/releasing(发布中)/failed(发布失败)
                     * @return ReleaseStatus 发布状态, drafted(未发布)/released(已发布)/releasing(发布中)/failed(发布失败)
                     * 
                     */
                    std::string GetReleaseStatus() const;

                    /**
                     * 设置发布状态, drafted(未发布)/released(已发布)/releasing(发布中)/failed(发布失败)
                     * @param _releaseStatus 发布状态, drafted(未发布)/released(已发布)/releasing(发布中)/failed(发布失败)
                     * 
                     */
                    void SetReleaseStatus(const std::string& _releaseStatus);

                    /**
                     * 判断参数 ReleaseStatus 是否已赋值
                     * @return ReleaseStatus 是否已赋值
                     * 
                     */
                    bool ReleaseStatusHasBeenSet() const;

                private:

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 翻页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页的记录数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键字，支持 API path
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 部署组ID
                     */
                    std::string m_gatewayDeployGroupId;
                    bool m_gatewayDeployGroupIdHasBeenSet;

                    /**
                     * 发布状态, drafted(未发布)/released(已发布)/releasing(发布中)/failed(发布失败)
                     */
                    std::string m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGATEWAYAPISREQUEST_H_
