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
                     * 获取<p>分组ID</p>
                     * @return GroupId <p>分组ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>分组ID</p>
                     * @param _groupId <p>分组ID</p>
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
                     * 获取<p>翻页偏移量</p>
                     * @return Offset <p>翻页偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>翻页偏移量</p>
                     * @param _offset <p>翻页偏移量</p>
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
                     * 获取<p>每页的记录数</p>
                     * @return Limit <p>每页的记录数</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页的记录数</p>
                     * @param _limit <p>每页的记录数</p>
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
                     * 获取<p>搜索关键字，支持 API path</p>
                     * @return SearchWord <p>搜索关键字，支持 API path</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>搜索关键字，支持 API path</p>
                     * @param _searchWord <p>搜索关键字，支持 API path</p>
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
                     * 获取<p>部署组ID</p>
                     * @return GatewayDeployGroupId <p>部署组ID</p>
                     * 
                     */
                    std::string GetGatewayDeployGroupId() const;

                    /**
                     * 设置<p>部署组ID</p>
                     * @param _gatewayDeployGroupId <p>部署组ID</p>
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
                     * 获取<p>发布状态, drafted(未发布)/released(已发布)/releasing(发布中)/failed(发布失败)</p>
                     * @return ReleaseStatus <p>发布状态, drafted(未发布)/released(已发布)/releasing(发布中)/failed(发布失败)</p>
                     * 
                     */
                    std::string GetReleaseStatus() const;

                    /**
                     * 设置<p>发布状态, drafted(未发布)/released(已发布)/releasing(发布中)/failed(发布失败)</p>
                     * @param _releaseStatus <p>发布状态, drafted(未发布)/released(已发布)/releasing(发布中)/failed(发布失败)</p>
                     * 
                     */
                    void SetReleaseStatus(const std::string& _releaseStatus);

                    /**
                     * 判断参数 ReleaseStatus 是否已赋值
                     * @return ReleaseStatus 是否已赋值
                     * 
                     */
                    bool ReleaseStatusHasBeenSet() const;

                    /**
                     * 获取<p>返回扩展出参字段名</p>
                     * @return ExtendFieldList <p>返回扩展出参字段名</p>
                     * 
                     */
                    std::vector<std::string> GetExtendFieldList() const;

                    /**
                     * 设置<p>返回扩展出参字段名</p>
                     * @param _extendFieldList <p>返回扩展出参字段名</p>
                     * 
                     */
                    void SetExtendFieldList(const std::vector<std::string>& _extendFieldList);

                    /**
                     * 判断参数 ExtendFieldList 是否已赋值
                     * @return ExtendFieldList 是否已赋值
                     * 
                     */
                    bool ExtendFieldListHasBeenSet() const;

                    /**
                     * 获取<p>服务接口状态</p><p>枚举值：</p><ul><li>ONLINE： 在线状态</li><li>OFFLINE： 离线状态</li><li>UNKNOWN： 未知</li><li>DELETED： 查询MS API不存在</li></ul>
                     * @return ApiOnlineStatus <p>服务接口状态</p><p>枚举值：</p><ul><li>ONLINE： 在线状态</li><li>OFFLINE： 离线状态</li><li>UNKNOWN： 未知</li><li>DELETED： 查询MS API不存在</li></ul>
                     * 
                     */
                    std::string GetApiOnlineStatus() const;

                    /**
                     * 设置<p>服务接口状态</p><p>枚举值：</p><ul><li>ONLINE： 在线状态</li><li>OFFLINE： 离线状态</li><li>UNKNOWN： 未知</li><li>DELETED： 查询MS API不存在</li></ul>
                     * @param _apiOnlineStatus <p>服务接口状态</p><p>枚举值：</p><ul><li>ONLINE： 在线状态</li><li>OFFLINE： 离线状态</li><li>UNKNOWN： 未知</li><li>DELETED： 查询MS API不存在</li></ul>
                     * 
                     */
                    void SetApiOnlineStatus(const std::string& _apiOnlineStatus);

                    /**
                     * 判断参数 ApiOnlineStatus 是否已赋值
                     * @return ApiOnlineStatus 是否已赋值
                     * 
                     */
                    bool ApiOnlineStatusHasBeenSet() const;

                private:

                    /**
                     * <p>分组ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>翻页偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页的记录数</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>搜索关键字，支持 API path</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>部署组ID</p>
                     */
                    std::string m_gatewayDeployGroupId;
                    bool m_gatewayDeployGroupIdHasBeenSet;

                    /**
                     * <p>发布状态, drafted(未发布)/released(已发布)/releasing(发布中)/failed(发布失败)</p>
                     */
                    std::string m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                    /**
                     * <p>返回扩展出参字段名</p>
                     */
                    std::vector<std::string> m_extendFieldList;
                    bool m_extendFieldListHasBeenSet;

                    /**
                     * <p>服务接口状态</p><p>枚举值：</p><ul><li>ONLINE： 在线状态</li><li>OFFLINE： 离线状态</li><li>UNKNOWN： 未知</li><li>DELETED： 查询MS API不存在</li></ul>
                     */
                    std::string m_apiOnlineStatus;
                    bool m_apiOnlineStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGATEWAYAPISREQUEST_H_
